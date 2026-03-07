__int64 __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  signed __int32 v4; // r8d
  BOOL v7; // edi
  unsigned int v8; // eax
  char v9; // r10
  int v10; // ecx
  int v11; // edx
  int v12; // r11d
  unsigned __int64 v13; // rdx
  bool v14; // zf
  __int64 result; // rax

  v4 = *a1;
  v7 = a2 == 5;
  do
  {
    a4[1] = 0;
    v8 = v4 | 1;
    v9 = v4;
    if ( (((v4 | 1u) >> 22) & 1) != v7 )
    {
      if ( ((v8 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v8 >> 15) & 0x7F;
        v10 = 5;
        if ( a2 != 1 )
          v10 = 1;
        v8 = v4 & 0xFFC07FFE | 1;
        a4[2] = v10;
      }
      v11 = 0;
      if ( a2 == 5 )
        v11 = 0x400000;
      v8 = v8 & 0xFFBFFFFF | v11;
    }
    v12 = (v8 >> 15) & 0x7F;
    v13 = (unsigned int)(v12 + 1);
    if ( v13 > 0x7F || v13 < ((v8 >> 15) & 0x7F) )
    {
      LODWORD(v13) = 1;
      a4[2] = a2;
      a4[1] = v12;
    }
    result = (unsigned int)_InterlockedCompareExchange(a1, v8 ^ (v8 ^ ((_DWORD)v13 << 15)) & 0x3F8000, v4);
    v14 = v4 == (_DWORD)result;
    v4 = result;
  }
  while ( !v14 );
  a4[4] = 0;
  *a4 = (v9 & 1) == 0;
  return result;
}
