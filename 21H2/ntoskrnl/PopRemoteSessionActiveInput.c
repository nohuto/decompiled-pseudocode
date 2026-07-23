/*
 * XREFs of PopRemoteSessionActiveInput @ 0x140773048
 * Callers:
 *     PopSessionInputChange @ 0x140671C64 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x140772FD4 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x14078DB90 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x140671770 (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x140773084 (PopGetDisplayTimeout.c)
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
