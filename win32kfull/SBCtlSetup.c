/*
 * XREFs of SBCtlSetup @ 0x1C022CC24
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C022B9E0 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C022CC6C (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     CalcSBStuff2 @ 0x1C00DA144 (CalcSBStuff2.c)
 */

INT __fastcall SBCtlSetup(__int64 a1)
{
  __int64 v2; // rcx
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)a1;
  *(_OWORD *)v4 = 0LL;
  GetRect(v2, (__int64)v4, 17);
  return CalcSBStuff2((int *)(a1 + 16), v4, (int *)(a1 + 16), *(_DWORD *)(a1 + 8));
}
