__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  signed __int32 v4; // r10d
  BOOL v7; // esi
  unsigned int v8; // eax
  char v9; // r8
  int v10; // edx
  int v11; // r11d
  unsigned __int64 v12; // rdx
  bool v13; // zf
  __int64 result; // rax

  v4 = *a1;
  v7 = a2 == 4;
  do
  {
    a4[1] = 0;
    v8 = v4 | 1;
    v9 = v4;
    if ( (((v4 | 1u) >> 14) & 1) != v7 )
    {
      if ( ((v8 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v8 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v8 = v4 & 0xFFFFC01E | 1;
      }
      v10 = 0;
      if ( a2 == 4 )
        v10 = 0x4000;
      v8 = v8 & 0xFFFFBFFF | v10;
    }
    v11 = (v8 >> 5) & 0x1FF;
    v12 = (unsigned int)(v11 + a3);
    if ( v12 > 0x1FF || v12 < (((unsigned __int64)v8 >> 5) & 0x1FF) )
    {
      LOWORD(v12) = a3;
      a4[2] = a2;
      a4[1] = v11;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(32 * v12)) & 0x3FE0,
                             v4);
    v13 = v4 == (_DWORD)result;
    v4 = result;
  }
  while ( !v13 );
  a4[4] = 0;
  *a4 = (v9 & 1) == 0;
  return result;
}
