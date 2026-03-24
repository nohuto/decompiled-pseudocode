/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x140725018
 * Callers:
 *     PopSessionInputChange @ 0x140725094 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x140725430 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1407255E4 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x140725A24 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0x10000000000LL;
  v9 = 0LL;
  BYTE4(qword_140C20580) = 0;
  PopGetLockConsoleTimeout();
  DWORD2(xmmword_140C20570) = a2;
  PopSetSessionUserStatus(a1, 2LL);
  v6 = HIDWORD(PopConsoleContext);
  *a3 = 0;
  LODWORD(v9) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, &v9, &v8);
}
