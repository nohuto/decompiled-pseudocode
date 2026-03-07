__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // ecx
  char v8; // r9
  int v9; // r8d
  int v10; // r11d
  unsigned __int64 v11; // r8
  int v12; // ett

  LODWORD(result) = *a1;
  do
  {
    a4[1] = 0;
    v7 = result | 1;
    v8 = result;
    if ( ((((unsigned int)result | 1) >> 14) & 1) != (a2 == 4) )
    {
      if ( ((v7 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v7 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v7 = result & 0xFFFFC01E | 1;
      }
      v9 = 0;
      if ( a2 == 4 )
        v9 = 0x4000;
      v7 = v7 & 0xFFFFBFFF | v9;
    }
    v10 = (v7 >> 5) & 0x1FF;
    v11 = (unsigned int)(v10 + 1);
    if ( v11 > 0x1FF || v11 < (((unsigned __int64)v7 >> 5) & 0x1FF) )
    {
      LOWORD(v11) = 1;
      a4[2] = a2;
      a4[1] = v10;
    }
    v12 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             ((unsigned __int16)v7 ^ (unsigned __int16)(32 * v11)) & 0x3FE0 ^ v7,
                             result);
  }
  while ( v12 != (_DWORD)result );
  a4[4] = 0;
  *a4 = (v8 & 1) == 0;
  return result;
}
