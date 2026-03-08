/*
 * XREFs of MiDecrementLargeSubsections @ 0x14063A2E8
 * Callers:
 *     MiReferenceDataSubsections @ 0x14020FEC8 (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiIncrementLargeSubsections @ 0x14063B558 (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x140668B28 (MiDereferenceDataSubsections.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x140A309C4 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x140A461CC (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140332B34 (MiBuildWakeList.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChargeLargeProtoSubsection @ 0x140A30984 (MiChargeLargeProtoSubsection.c)
 */

void __fastcall MiDecrementLargeSubsections(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rdi
  volatile LONG *v3; // r13
  unsigned __int64 v4; // rsi
  int v5; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v9; // zf
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  __int64 *v12; // r12
  __int64 v13; // rbx
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // edx
  unsigned __int8 v18; // cl
  _DWORD *v19; // r9
  __int64 v20; // rdx
  __int64 *v21; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 *v27; // [rsp+80h] [rbp+8h]
  char v29; // [rsp+90h] [rbp+18h]
  volatile LONG *v30; // [rsp+98h] [rbp+20h]

  v27 = a1;
  v2 = a1;
  v26 = *a1;
  v3 = (volatile LONG *)(*a1 + 72);
  v30 = v3;
  v4 = ExAcquireSpinLockExclusive(v3);
  v29 = v4 + 1;
  while ( 1 )
  {
    v5 = *((_DWORD *)v2 + 27) - 1;
    *((_DWORD *)v2 + 27) = v5;
    if ( v5 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
          SchedulerAssist[5] &= 0xFFFF0007;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(2uLL);
      v10 = *((_DWORD *)v2 + 11);
      v11 = 0;
      v12 = (__int64 *)v2[1];
      if ( v10 )
      {
        do
        {
          v13 = MiLockLeafPage(v12, 0);
          MiDecrementShareCount(v13);
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v11 & 0xF) == 0 && v11 != v10 && KeShouldYieldProcessor() )
          {
            if ( KiIrqlFlags )
            {
              v14 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v14 >= 2u )
              {
                v15 = KeGetCurrentPrcb();
                v16 = v15->SchedulerAssist;
                v17 = ~(unsigned __int16)(-1LL << v29);
                v9 = (v17 & v16[5]) == 0;
                v16[5] &= v17;
                if ( v9 )
                  KiRemoveSystemWorkPriorityKick((__int64)v15);
              }
            }
            __writecr8(v4);
            v18 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
            {
              v19 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v18 == 2 )
                LODWORD(v20) = 4;
              else
                v20 = (-1LL << (v18 + 1)) & 4;
              v19[5] |= v20;
            }
          }
          ++v12;
        }
        while ( v11 < v10 );
        v2 = v27;
        v3 = v30;
      }
      MiChargeLargeProtoSubsection(v2, 0LL);
      ExAcquireSpinLockExclusive(v3);
      --*((_DWORD *)v2 + 27);
      v21 = MiBuildWakeList(v26, 512);
      MiReleaseControlAreaWaiters(v21);
    }
    if ( v2 == a2 )
      break;
    v2 = (__int64 *)v2[2];
    v27 = v2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << v29);
      v9 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
  }
  __writecr8(v4);
}
