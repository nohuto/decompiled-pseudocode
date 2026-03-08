/*
 * XREFs of IPostQuitMessage @ 0x1C00786E8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C0077D9C (-TerminateDesktopThreads@@YAXXZ.c)
 *     NtUserPostQuitMessage @ 0x1C00786A0 (NtUserPostQuitMessage.c)
 *     _PostQuitMessage @ 0x1C012D7C8 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  EtwTraceWakePump(a1, 0LL, 18LL, a4);
  *(_DWORD *)(a1 + 488) |= 0x40000000u;
  *(_DWORD *)(a1 + 584) = a2;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}
