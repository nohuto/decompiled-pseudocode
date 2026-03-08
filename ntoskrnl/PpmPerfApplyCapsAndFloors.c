/*
 * XREFs of PpmPerfApplyCapsAndFloors @ 0x1402E5DE0
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1402E56F8 (PpmPerfApplyDomainState.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfApplyCapsAndFloors(unsigned int *a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  unsigned int v4; // eax
  char v5; // bl
  char v7; // bp
  __int64 v8; // rsi
  unsigned int v9; // r11d
  unsigned int *v10; // r9
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx

  v4 = *(_DWORD *)(a4 + 296);
  v5 = 0;
  if ( v4 )
  {
    v7 = *(_BYTE *)(a4 + 482);
    v8 = v4;
    v9 = *a3;
    v10 = (unsigned int *)(*(_QWORD *)(a4 + 312) + 24LL);
    v11 = *a2;
    do
    {
      v12 = v10[1];
      if ( v12 >= v10[6] )
        v12 = v10[6];
      if ( v7 && v12 >= *v10 )
        v12 = *v10;
      if ( v12 < 0x64 && *a1 > v12 )
      {
        v5 = 1;
        *a1 = v12;
      }
      v13 = *v10;
      if ( v12 < *v10 )
        v13 = v12;
      if ( v9 > v13 )
      {
        *a3 = v13;
        v9 = v13;
      }
      v14 = v10[7];
      if ( v11 < v14 )
      {
        *a2 = v14;
        v11 = v14;
      }
      v10 += 36;
      --v8;
    }
    while ( v8 );
  }
  return v5;
}
