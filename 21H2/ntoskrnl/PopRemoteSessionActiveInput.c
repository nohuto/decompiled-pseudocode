/*
 * XREFs of PopRemoteSessionActiveInput @ 0x140772E88
 * Callers:
 *     PopSessionInputChange @ 0x14067DE74 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x140772E14 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x14078D9D0 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x14067D980 (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x140772EC4 (PopGetDisplayTimeout.c)
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
