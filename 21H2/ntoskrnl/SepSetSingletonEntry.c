/*
 * XREFs of SepSetSingletonEntry @ 0x140597AEC
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x1405977B0 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402F5D74 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSetSingletonEntry(unsigned int a1, int *a2, __int64 a3)
{
  unsigned int v5; // esi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _DWORD *PoolWithTag; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf

  v5 = 0;
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v7 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return v5;
  v8 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
  v9 = *((_QWORD *)v7 + 2);
  v10 = v8;
  if ( !v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
    *((_QWORD *)v7 + 2) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741801;
      goto LABEL_7;
    }
    *PoolWithTag = 0;
    *(_DWORD *)(*((_QWORD *)v7 + 2) + 24LL) = 0;
    v12 = (_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
    v12[1] = v12;
    *v12 = v12;
    v13 = (_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
    v13[1] = v13;
    *v13 = v13;
    v9 = *((_QWORD *)v7 + 2);
  }
  v5 = AuthzBasepSetSecurityAttributesToken(v9, a2, a3);
  *((_DWORD *)SepSingletonGlobal + 4) |= 1u;
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return v5;
}
