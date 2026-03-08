/*
 * XREFs of KiGetComparisonRanks @ 0x1402FDA84
 * Callers:
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403426B0 (KiEvaluateGroupSchedulingPreemption.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetComparisonRanks(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v5; // r10
  unsigned int v6; // ecx
  __int64 result; // rax
  unsigned __int8 v8; // bl
  char v9; // r9
  unsigned __int8 v10; // r11
  __int64 v11; // rax
  __int64 i; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax

  v5 = a1;
  if ( a1 == a2 )
  {
    v6 = *(_DWORD *)(a1 + 116);
    result = v6;
    goto LABEL_3;
  }
  v8 = *(_BYTE *)(a1 + 113);
  v9 = 0;
  v10 = *(_BYTE *)(a2 + 113);
  v6 = 0;
  if ( v8 > v10 )
  {
    v9 = 1;
    do
    {
      v13 = *(_DWORD *)(v5 + 116);
      v5 = *(_QWORD *)(v5 + 408);
      if ( v13 <= v6 )
        v13 = v6;
      v6 = v13;
    }
    while ( *(_BYTE *)(v5 + 113) > v10 );
  }
  else if ( v8 < v10 )
  {
    v9 = -1;
    do
    {
      v14 = *(_DWORD *)(a2 + 116);
      a2 = *(_QWORD *)(a2 + 408);
      if ( v14 <= v6 )
        v14 = v6;
      v6 = v14;
    }
    while ( v8 < *(_BYTE *)(a2 + 113) );
  }
  result = v6;
  if ( v5 != a2 )
  {
    v11 = *(_QWORD *)(v5 + 408);
    for ( i = *(_QWORD *)(a2 + 408); v11 != i; i = *(_QWORD *)(i + 408) )
    {
      v5 = v11;
      a2 = i;
      v11 = *(_QWORD *)(v11 + 408);
    }
    goto LABEL_9;
  }
  if ( !v9 )
  {
LABEL_9:
    v6 = *(_DWORD *)(a2 + 116);
    result = *(unsigned int *)(v5 + 116);
    goto LABEL_3;
  }
  if ( v9 <= 0 )
    result = 0LL;
  else
    v6 = 0;
LABEL_3:
  *a3 = result;
  *a4 = v6;
  return result;
}
