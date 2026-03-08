/*
 * XREFs of PnprAllocateMappingReserves @ 0x140962974
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PnprFreeMappingReserve @ 0x140962E7C (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x140963304 (PnprInitializeMappingReserve.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAllocateMappingReserves(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rbx
  _QWORD *Pool2; // rsi
  int v7; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx

  v5 = 24 * a3;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v5, 1366322768LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v8 = (_QWORD *)ExAllocatePool2(64LL, v5, 1366322768LL);
  if ( v8 )
  {
    v9 = 0LL;
    if ( a3 )
    {
      while ( 1 )
      {
        v7 = PnprInitializeMappingReserve(2LL, &Pool2[3 * v9]);
        if ( v7 < 0 )
          break;
        v7 = PnprInitializeMappingReserve(2050LL, &v8[3 * v9]);
        if ( v7 < 0 )
        {
          PnprFreeMappingReserve(&Pool2[3 * v9]);
          break;
        }
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= a3 )
          goto LABEL_11;
      }
      if ( !*Pool2 || !*v8 )
        goto LABEL_5;
      v11 = PnprContext;
      v12 = *(unsigned int *)(PnprContext + 180);
      if ( !Pool2[3 * v12] )
      {
        *(_OWORD *)&Pool2[3 * v12] = *(_OWORD *)Pool2;
        Pool2[3 * v12 + 2] = Pool2[2];
        v13 = 3LL * *(unsigned int *)(v11 + 180);
        *(_OWORD *)&v8[v13] = *(_OWORD *)v8;
        v8[v13 + 2] = v8[2];
        *(_OWORD *)Pool2 = 0LL;
        Pool2[2] = 0LL;
        *(_OWORD *)v8 = 0LL;
        v8[2] = 0LL;
      }
    }
LABEL_11:
    v7 = 0;
    *a1 = Pool2;
    *a2 = v8;
    return (unsigned int)v7;
  }
  v7 = -1073741670;
LABEL_5:
  ExFreePoolWithTag(Pool2, 0x51706E50u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x51706E50u);
  return (unsigned int)v7;
}
