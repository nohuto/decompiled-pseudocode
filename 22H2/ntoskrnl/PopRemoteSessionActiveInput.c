/*
 * XREFs of PopRemoteSessionActiveInput @ 0x140772B48
 * Callers:
 *     PopSessionInputChange @ 0x140725094 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x140772AD4 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x14078D8D0 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x1407255E4 (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x140772B84 (PopGetDisplayTimeout.c)
 */

__int64 __fastcall PopRemoteSessionActiveInput(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  PopSetSessionUserStatus(a1, 0);
  a3[1] = PopGetDisplayTimeout(a1);
  result = (unsigned int)PopInputTimeout;
  *a3 = PopInputTimeout;
  return result;
}
