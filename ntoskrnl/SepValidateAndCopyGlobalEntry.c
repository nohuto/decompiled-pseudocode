/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x1405B710C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402976E0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402988C8 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1402EF4D0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateAndCopyGlobalEntry(__int64 a1, _QWORD *a2)
{
  int ProcUniqueLuidAndIndexFromAttributeInfo; // esi
  _DWORD *Pool2; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  __int64 SingletonEntryFromIndexNumber; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // cl
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  unsigned int v22; // [rsp+48h] [rbp+10h] BYREF
  __int64 v23; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v22 = 0;
  v23 = 0LL;
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(a1, &v22, &v23);
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 48LL, 1950442835LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      Pool2[6] = 0;
      v6 = Pool2 + 2;
      v7 = v22;
      v6[1] = v6;
      *v6 = v6;
      v5[5] = v5 + 4;
      v5[4] = v5 + 4;
      SingletonEntryFromIndexNumber = SepGetSingletonEntryFromIndexNumber(v7);
      v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
      if ( *(_QWORD *)(SingletonEntryFromIndexNumber + 8) == v23 )
      {
        v15 = *(_QWORD *)(SingletonEntryFromIndexNumber + 16);
        if ( v15 )
        {
          v16 = AuthzBasepDuplicateSecurityAttributes(v15, v5, 0);
          *a2 = v5;
          ProcUniqueLuidAndIndexFromAttributeInfo = v16;
          v5 = 0LL;
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
        if ( KiIrqlFlags )
        {
          v10 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v10 >= 2u )
          {
            v11 = KeGetCurrentPrcb();
            v12 = v11->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v13 & v12[5]) == 0;
            v12[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v11);
          }
        }
        ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
      }
      __writecr8(v9);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74416553u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
}
