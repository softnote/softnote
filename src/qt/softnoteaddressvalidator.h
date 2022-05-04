// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SOFTNOTE_QT_SOFTNOTEADDRESSVALIDATOR_H
#define SOFTNOTE_QT_SOFTNOTEADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SoftnoteAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SoftnoteAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Softnote address widget validator, checks for a valid softnote address.
 */
class SoftnoteAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SoftnoteAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // SOFTNOTE_QT_SOFTNOTEADDRESSVALIDATOR_H
