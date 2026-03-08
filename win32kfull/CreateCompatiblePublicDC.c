/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C02421AC
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C0214CF4 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0215674 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0215A80 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0215E88 (xxxClientPSMTextOut.c)
 * Callees:
 *     NtGdiGetDCObject @ 0x1C004CC30 (NtGdiGetDCObject.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     GetDPIServerInfo @ 0x1C010C460 (GetDPIServerInfo.c)
 *     GreGetLayout @ 0x1C0111738 (GreGetLayout.c)
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 *     GreGetTextAlign @ 0x1C02D9A84 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C02D9B10 (GreSetTextAlign.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  HBRUSH DCObject; // rax
  __int64 CompatibleBitmapInternal; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v12; // rbx
  int v13[8]; // [rsp+60h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (HBRUSH)NtGdiGetDCObject((__int64)a1, 327680), !(unsigned int)GreExtGetObjectW(DCObject, 32LL, v13)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal((__int64)a1, v13[1], v13[2], 0, 0LL, 0LL);
  v9 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v9 )
      GreDeleteObject(v9);
    return 0LL;
  }
  GreSelectBitmap(v6, v9);
  DPIServerInfo = GetDPIServerInfo(v10);
  v12 = GreSelectFontInternal((__int64)a1, *(_QWORD *)(DPIServerInfo + 24), 1);
  GreSelectFontInternal((__int64)a1, v12, 1);
  GreSelectFontInternal((__int64)v6, v12, 1);
  GreGetTextAlign(a1);
  GreSetTextAlign(v6);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v13[1] - 1), 1LL);
  NtGdiBitBltInternal(v6, 0, 0, v13[1], v13[2], (__int64)a1, 0, 0, 13369376, 0, 0);
  result = v6;
  *a2 = v9;
  return result;
}
