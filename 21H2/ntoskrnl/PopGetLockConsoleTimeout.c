/*
 * XREFs of PopGetLockConsoleTimeout @ 0x14067208C
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x140672010 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x140773084 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405D8EC8 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( BYTE6(xmmword_140C205B0) && (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
