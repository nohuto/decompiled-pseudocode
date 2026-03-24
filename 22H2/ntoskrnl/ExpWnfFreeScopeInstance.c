/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x1406A22D0
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeById @ 0x140613A18 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095CC4C (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x1406A4828 (ExpWnfDeleteNameInstanceCallback.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *P, char a2)
{
  _QWORD *Count; // rcx
  _QWORD *v4; // rax
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
        while ( 1 )
        {
          while ( *Count )
          {
            v4 = Count;
            Count = (_QWORD *)*Count;
            *v4 = 0LL;
          }
          if ( !Count[1] )
            break;
          v5 = Count;
          Count = (_QWORD *)Count[1];
          v5[1] = 0LL;
        }
        v6 = Count[2];
        ExpWnfDeleteNameInstanceCallback(Count, P);
        v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 )
          break;
        Count = (_QWORD *)v7;
      }
    }
    P[7].Count = 0LL;
  }
  Ptr = P[8].Ptr;
  if ( Ptr )
    ZwClose(Ptr);
  v9 = P[9].Ptr;
  if ( v9 )
    ZwClose(v9);
  ExFreePoolWithTag(P, 0x20666E57u);
}
