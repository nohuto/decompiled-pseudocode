/*
 * XREFs of PpmInfoWriteData @ 0x14066E760
 * Callers:
 *     PpmInfoAdjustSetting @ 0x14066E6A4 (PpmInfoAdjustSetting.c)
 * Callees:
 *     PpmInfoApplyMinMaxConstraint @ 0x14026F9EC (PpmInfoApplyMinMaxConstraint.c)
 */

bool __fastcall PpmInfoWriteData(unsigned int *a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r11d
  char v6; // di
  __int64 v9; // r10
  int v10; // eax
  int v11; // r11d
  _BYTE *v12; // r10
  _DWORD *v14; // r10
  int v15; // edx
  _BYTE *v16; // rsi
  __int64 v17; // r15
  char *v18; // r14
  _BYTE *v19; // rcx
  __int64 v20; // r8

  v5 = *(_DWORD *)(a4 + 32);
  v6 = 0;
  v9 = a5 + *(_QWORD *)(a4 + 24) + a3 * v5;
  if ( (*(_BYTE *)(a4 + 37) & 8) != 0 )
  {
    v15 = 0;
    if ( a2 >= v5 )
      a2 = *(_DWORD *)(a4 + 32);
    if ( a2 )
    {
      v16 = (_BYTE *)(a5 + *(_QWORD *)(a4 + 24) + (unsigned int)(a3 * *(_DWORD *)(a4 + 32)));
      v17 = a2;
      v18 = (char *)a1 - v9;
      do
      {
        v15 = PpmInfoApplyMinMaxConstraint((unsigned __int8)v16[(_QWORD)v18], a4);
        if ( (unsigned __int8)*v16 != v15 )
        {
          v6 = 1;
          *v16 = v15;
        }
        ++v16;
        --v17;
      }
      while ( v17 );
    }
    if ( a2 < v5 )
    {
      v19 = (_BYTE *)(v9 + a2);
      v20 = v5 - a2;
      do
      {
        if ( (unsigned __int8)*v19 != v15 )
        {
          v6 = 1;
          *v19 = v15;
        }
        ++v19;
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    if ( v5 == 1 )
    {
      v10 = PpmInfoApplyMinMaxConstraint(*(unsigned __int8 *)a1, a4);
      *v12 = v10;
    }
    else
    {
      v10 = PpmInfoApplyMinMaxConstraint(*a1, a4);
      *v14 = v10;
    }
    return v11 != v10;
  }
  return v6;
}
