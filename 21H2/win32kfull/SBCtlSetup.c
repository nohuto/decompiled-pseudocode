/*
 * XREFs of SBCtlSetup @ 0x1C024155C
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C02402EC (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff2 @ 0x1C0065364 (CalcSBStuff2.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 */

__int64 __fastcall SBCtlSetup(__int64 a1)
{
  __int64 v2; // rcx
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)a1;
  *(_OWORD *)v4 = 0LL;
  GetRect(v2, (__int64)v4, 17);
  return CalcSBStuff2((int *)(a1 + 16), v4, (int *)(a1 + 16), *(_DWORD *)(a1 + 8));
}
