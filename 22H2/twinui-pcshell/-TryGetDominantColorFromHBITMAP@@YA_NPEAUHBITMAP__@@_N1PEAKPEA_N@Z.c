/*
 * XREFs of ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x1804F6F44
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1804DD2F8 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x180091337 (CoTaskMemFree_0.c)
 *     ?GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z @ 0x1804F6D40 (-GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z.c)
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1804F6FBC (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 */

bool __fastcall TryGetDominantColorFromHBITMAP(HBITMAP a1, char a2, char a3, unsigned int *a4, bool *a5)
{
  bool NthMostDominantColorFromBits; // bl
  unsigned int v8; // [rsp+20h] [rbp-38h]
  bool v9; // [rsp+28h] [rbp-30h]
  bool v10; // [rsp+30h] [rbp-28h]
  LPVOID pv; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v13) = a3;
  LOBYTE(v12) = a2;
  NthMostDominantColorFromBits = 0;
  if ( (int)GetInfoFor32BitHBITMAP(a1, (int *)&a5, &v12, (struct tagRGBQUAD **)&pv, &v13) >= 0 )
  {
    NthMostDominantColorFromBits = _GetNthMostDominantColorFromBits(
                                     (struct tagRGBQUAD *)pv,
                                     (int)a5,
                                     v12,
                                     v13,
                                     v8,
                                     v9,
                                     v10,
                                     a4);
    CoTaskMemFree_0(pv);
  }
  return NthMostDominantColorFromBits;
}
