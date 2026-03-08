/*
 * XREFs of CcAllocateVacbLevels @ 0x14029C894
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402180C0 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x14029E348 (CcExtendVacbArray.c)
 *     CcReferenceFileOffset @ 0x140535C90 (CcReferenceFileOffset.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     CcFreeUnusedVacbLevels @ 0x14029E2EC (CcFreeUnusedVacbLevels.c)
 */

char __fastcall CcAllocateVacbLevels(unsigned int a1, char a2, __int64 a3)
{
  char v3; // di
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  PVOID v10; // rax

  v3 = 0;
  if ( a1 > *(_DWORD *)(a3 + 24) )
  {
    do
    {
      v7 = ExAllocateFromNPagedLookasideList(&CcVacbLevelLookasideList);
      if ( !v7 )
        goto LABEL_10;
      v8 = *(_QWORD **)(a3 + 8);
      if ( *v8 != a3 )
        __fastfail(3u);
      *v7 = a3;
      v7[1] = v8;
      *v8 = v7;
      *(_QWORD *)(a3 + 8) = v7;
    }
    while ( a1 > ++*(_DWORD *)(a3 + 24) );
  }
  if ( a2 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
    {
      v10 = ExAllocateFromNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList);
      *(_QWORD *)(a3 + 16) = v10;
      if ( !v10 )
      {
LABEL_10:
        CcFreeUnusedVacbLevels(a3);
        return v3;
      }
    }
  }
  return 1;
}
