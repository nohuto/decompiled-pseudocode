/*
 * XREFs of ArbAddOrdering @ 0x14081EBA4
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x14081E6C8 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbAddOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  void *Pool2; // rax
  void *v9; // rbp
  const void *v10; // rdx

  if ( a3 < a2 )
    return 3221225485LL;
  v6 = *a1;
  if ( (_WORD)v6 != a1[1] )
  {
LABEL_3:
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * *a1) = a2;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (*a1)++ + 8) = a3;
    return 0LL;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, 16 * (v6 + 8), 1281520193LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    v10 = (const void *)*((_QWORD *)a1 + 1);
    if ( v10 )
    {
      memmove(Pool2, v10, 16LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    a1[1] += 8;
    *((_QWORD *)a1 + 1) = v9;
    goto LABEL_3;
  }
  return 3221225626LL;
}
