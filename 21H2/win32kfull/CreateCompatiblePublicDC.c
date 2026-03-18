/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C00BA240
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C00B9C04 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C022C7DC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C022CBE4 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GreGetTextAlign @ 0x1C00BCFE4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00BD1B8 (GreSetTextAlign.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     NtGdiGetDCObject @ 0x1C00E1C20 (NtGdiGetDCObject.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v9; // rdi
  HBRUSH DCObject; // rax
  __int64 CompatibleBitmapInternal; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17[8]; // [rsp+60h] [rbp-38h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1, v4, v5, v6);
  v9 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (HBRUSH)NtGdiGetDCObject(a1), !(unsigned int)GreExtGetObjectW(DCObject, 32LL, (char *)v17)) )
  {
    GreDeleteDC(v9);
    return 0LL;
  }
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v17[1], v17[2], 0, 0LL, 0LL);
  v12 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v9);
    if ( v12 )
      GreDeleteObject(v12);
    return 0LL;
  }
  GreSelectBitmap(v9, v12);
  GetDPIServerInfo(v14, v13, v15, v16);
  GreSelectFontInternal(a1);
  GreSelectFontInternal(a1);
  GreSelectFontInternal(v9);
  GreGetTextAlign(a1);
  GreSetTextAlign(v9);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v9, v17[1] - 1, 1LL);
  NtGdiBitBltInternal(v9, 0, 0, v17[1], v17[2], a1, 0, 0, 13369376, 0, 0);
  result = v9;
  *a2 = v12;
  return result;
}
