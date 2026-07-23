/*
 * XREFs of PopGetDisplayTimeout @ 0x140773084
 * Callers:
 *     PopSessionInputChange @ 0x140671C64 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x140773048 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1408F5124 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x14067208C (PopGetLockConsoleTimeout.c)
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
