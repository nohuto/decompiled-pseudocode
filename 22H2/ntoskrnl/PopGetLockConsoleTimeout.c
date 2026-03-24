/*
 * XREFs of PopGetLockConsoleTimeout @ 0x140725A24
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x140725018 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x140772B84 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405D8EC8 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( BYTE6(xmmword_140C20570) && (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
