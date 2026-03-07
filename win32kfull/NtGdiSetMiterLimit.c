__int64 __fastcall NtGdiSetMiterLimit(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v5; // edx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF
  float v8; // [rsp+58h] [rbp+20h] BYREF

  v7[0] = 0;
  v8 = 0.0;
  v5 = bConvertDwordToFloat(a2, &v8);
  if ( v5 )
    v5 = GreSetMiterLimit(a1, v8, v7);
  if ( v5 && a3 )
  {
    if ( a3 + 4 > MmUserProbeAddress || a3 + 4 <= a3 || (a3 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_DWORD *)a3 = v7[0];
  }
  return v5;
}
