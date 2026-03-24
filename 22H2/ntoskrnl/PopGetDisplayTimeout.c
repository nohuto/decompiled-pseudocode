/*
 * XREFs of PopGetDisplayTimeout @ 0x140772B84
 * Callers:
 *     PopSessionInputChange @ 0x140725094 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x140772B48 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1408F5014 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x140725A24 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopGetDisplayTimeout(int a1)
{
  __int64 result; // rax

  if ( (_DWORD)PopConsoleContext != a1 || a1 == -1 )
    return 0LL;
  result = PopGetLockConsoleTimeout(a1);
  if ( !(_DWORD)result )
    return (unsigned int)PopDisplayTimeout;
  return result;
}
