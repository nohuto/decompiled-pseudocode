/*
 * XREFs of PopGetLockConsoleTimeout @ 0x14067E1DC
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x14067E160 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x140772EC4 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405D8EC8 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( BYTE6(xmmword_140C20590) && (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
