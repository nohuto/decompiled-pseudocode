/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x14079450C
 * Callers:
 *     ExpWnfDeleteScopeById @ 0x140704810 (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x14071A508 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A047F8 (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x140778FA4 (ExpWnfDeleteNameInstanceCallback.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x140A048DC (ExpWnfDestroyPermanentDataStore.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *P, char a2)
{
  _QWORD *Count; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  void *Ptr; // rcx
  void *v9; // rcx

  if ( a2 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    Count = (_QWORD *)P[7].Count;
    if ( Count )
    {
      while ( 1 )
      {
        v4 = (_QWORD *)*Count;
        if ( *Count )
          break;
        v5 = Count + 1;
        v4 = (_QWORD *)Count[1];
        if ( v4 )
        {
LABEL_5:
          *v5 = 0LL;
          Count = v4;
        }
        else
        {
          v6 = Count[2];
          ExpWnfDeleteNameInstanceCallback((__int64)Count, (__int64)P);
          v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 )
            goto LABEL_9;
          Count = (_QWORD *)v7;
        }
      }
      v5 = Count;
      goto LABEL_5;
    }
LABEL_9:
    P[7].Count = 0LL;
  }
  Ptr = P[8].Ptr;
  if ( Ptr )
    ExpWnfDestroyPermanentDataStore(Ptr);
  v9 = P[9].Ptr;
  if ( v9 )
    ExpWnfDestroyPermanentDataStore(v9);
  ExFreePoolWithTag(P, 0x20666E57u);
}
