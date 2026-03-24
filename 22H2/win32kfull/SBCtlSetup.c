/*
 * XREFs of SBCtlSetup @ 0x1C024503C
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0243DD4 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C024510C (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff2 @ 0x1C0063AB4 (CalcSBStuff2.c)
 *     GetRect @ 0x1C0063E88 (GetRect.c)
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
