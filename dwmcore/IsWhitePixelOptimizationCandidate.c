char __fastcall IsWhitePixelOptimizationCandidate(__int64 *a1, int a2)
{
  __int64 v4; // rcx
  char v5; // bl
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( !CCommonRegistryData::EnableCommonSuperSets )
    return 0;
  v4 = *a1;
  if ( !v4 )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
    return 0;
  v5 = 1;
  if ( a2 != 1 )
  {
    if ( *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(a1, v7) + 8) )
      return 0;
  }
  return v5;
}
