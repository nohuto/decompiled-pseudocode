__int64 __fastcall RtlpFcValidateFeatureConfigurationBuffer(unsigned int *a1, ULONGLONG a2)
{
  unsigned int v3; // r10d
  unsigned int *v4; // r11
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  _DWORD *i; // rdx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  if ( a1 )
  {
    if ( a2 >= 4
      && ((unsigned __int8)a1 & 3) == 0
      && RtlULongLongMult(*a1, 0x10uLL, &pullResult) >= 0
      && pullResult + 4 >= pullResult
      && pullResult + 4 <= a2 )
    {
      v5 = *v4;
      v6 = v3;
      if ( !*v4 )
        return v3;
      for ( i = v4 + 1;
            (!v6 || (int)RtlFcpCompareFeatureToFeature(&v4[4 * v6 - 3], i) < 0)
         && ((i[1] & 0x30) == 0 || (((i[1] & 0x30) - 16) & 0xFFFFFFEF) == 0);
            i += 4 )
      {
        if ( ++v6 >= v5 )
          return v3;
      }
    }
    return (unsigned int)-1073741811;
  }
  return a2 != 0 ? 0xC000000D : 0;
}
