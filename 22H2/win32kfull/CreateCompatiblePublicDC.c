/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C0159590
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C0158F28 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159250 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C02329DC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232E44 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     GreGetLayout @ 0x1C0045F14 (GreGetLayout.c)
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     NtGdiGetDCObject @ 0x1C00AA130 (NtGdiGetDCObject.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     GetDPIServerInfo @ 0x1C00E0AC8 (GetDPIServerInfo.c)
 *     GreSetTextAlign @ 0x1C01241C0 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0125448 (GreGetTextAlign.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  HSURF DCObject; // rax
  __int64 CompatibleBitmapInternal; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  int TextAlign; // eax
  int v12[8]; // [rsp+60h] [rbp-28h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (HSURF)NtGdiGetDCObject(a1, 327680), !(unsigned int)GreExtGetObjectW(DCObject, 32LL, (char *)v12)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v12[1], v12[2], 0, 0LL, 0LL);
  v9 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v9 )
      GreDeleteObject(v9);
    return 0LL;
  }
  GreSelectBitmap(v6, v9);
  GetDPIServerInfo(v10);
  GreSelectFont(a1);
  GreSelectFont(a1);
  GreSelectFont(v6);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v6, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v12[1] - 1), 1LL);
  NtGdiBitBltInternal(v6, 0, 0, v12[1], v12[2], a1, 0, 0, 13369376, 0, 0);
  result = v6;
  *a2 = v9;
  return result;
}
