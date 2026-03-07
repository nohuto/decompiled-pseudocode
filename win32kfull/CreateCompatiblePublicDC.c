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
