__int64 __fastcall CDS_JOURNAL::_PreVerify(const struct D3DKMT_AUGMENT_CDSJ *a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*(_DWORD *)a1 & 2) != 0 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 4);
  if ( (*(_DWORD *)(v4 + 72) & 0x80u) == 0
    || (v7 = 0, result = CDS_JOURNAL::_GetRotationFromDevMode<_devicemodeW>(v4, &v7), v1 = result, (int)result >= 0) )
  {
    v5 = *((_QWORD *)a1 + 4);
    if ( (*(_DWORD *)(v5 + 72) & 0x20000000) != 0 )
    {
      if ( !(unsigned int)ConvertGdiScalingToDMMScaling(*(_DWORD *)(v5 + 88), &v7) )
        return 3221225485LL;
      v1 = 0;
    }
    v6 = *((_QWORD *)a1 + 4);
    if ( (*(_DWORD *)(v6 + 72) & 0x40000) == 0 )
      return v1;
    v7 = 0;
    result = CDS_JOURNAL::_GetPixelFormatFromDevMode<_devicemodeW>(v6, &v7);
    v1 = result;
    if ( (int)result >= 0 )
      return v1;
  }
  return result;
}
