/*
 * XREFs of IPostQuitMessage @ 0x1C003C308
 * Callers:
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C003B28C (-TerminateDesktopThreads@@YAXXZ.c)
 *     NtUserPostQuitMessage @ 0x1C003C2C0 (NtUserPostQuitMessage.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     _PostQuitMessage @ 0x1C013A284 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  EtwTraceWakePump(a1, 0LL, 18LL, a4);
  *(_DWORD *)(a1 + 488) |= 0x40000000u;
  *(_DWORD *)(a1 + 584) = a2;
  SetWakeBit(a1, 264LL);
  return 1LL;
}
