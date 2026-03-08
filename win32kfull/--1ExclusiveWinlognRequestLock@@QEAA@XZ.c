/*
 * XREFs of ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C013006C
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C00BD1C4 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::~PUSHLOCKEX(this);
}
