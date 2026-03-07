__int64 __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  signed __int32 v4; // r10d
  BOOL v8; // esi
  unsigned int v9; // eax
  char v10; // r8
  int v11; // ecx
  int v12; // edx
  int v13; // r11d
  unsigned __int64 v14; // rdx
  bool v15; // zf
  __int64 result; // rax

  v4 = *a1;
  v8 = a2 == 5;
  do
  {
    a4[1] = 0;
    v9 = v4 | 1;
    v10 = v4;
    if ( (((v4 | 1u) >> 22) & 1) != v8 )
    {
      if ( ((v9 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v9 >> 15) & 0x7F;
        v11 = 5;
        if ( a2 != 1 )
          v11 = 1;
        v9 = v4 & 0xFFC07FFE | 1;
        a4[2] = v11;
      }
      v12 = 0;
      if ( a2 == 5 )
        v12 = 0x400000;
      v9 = v9 & 0xFFBFFFFF | v12;
    }
    v13 = (v9 >> 15) & 0x7F;
    v14 = (unsigned int)(v13 + a3);
    if ( v14 > 0x7F || v14 < ((v9 >> 15) & 0x7F) )
    {
      LODWORD(v14) = a3;
      a4[2] = a2;
      a4[1] = v13;
    }
    result = (unsigned int)_InterlockedCompareExchange(a1, v9 ^ (v9 ^ ((_DWORD)v14 << 15)) & 0x3F8000, v4);
    v15 = v4 == (_DWORD)result;
    v4 = result;
  }
  while ( !v15 );
  a4[4] = 0;
  *a4 = (v10 & 1) == 0;
  return result;
}
