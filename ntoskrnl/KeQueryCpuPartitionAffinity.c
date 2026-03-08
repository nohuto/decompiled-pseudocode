/*
 * XREFs of KeQueryCpuPartitionAffinity @ 0x1403A8718
 * Callers:
 *     KeQuerySystemCpuPartitionAffinity @ 0x1403A86F0 (KeQuerySystemCpuPartitionAffinity.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405725AC (KeAssignCpuPartitionsToProcess.c)
 *     NtQueryInformationCpuPartition @ 0x1409AD630 (NtQueryInformationCpuPartition.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiComputeGroupMask @ 0x1402967CC (KiComputeGroupMask.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryCpuPartitionAffinity(__int64 a1, void *a2, unsigned __int16 a3, unsigned __int16 *a4)
{
  __int64 v4; // r15
  unsigned __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // cx
  unsigned __int16 i; // dx
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  _DWORD v23[68]; // [rsp+20h] [rbp-158h] BYREF

  v4 = a3;
  v23[0] = 2097153;
  memset(&v23[1], 0, 0x104uLL);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
  KiCopyAffinityEx((__int64)v23, 0x20u, (unsigned __int16 *)a1);
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 264));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  v9 = KiComputeGroupMask((unsigned __int16 *)v23);
  v10 = v9 - (((unsigned __int64)v9 >> 1) & 0x5555555555555555LL);
  v11 = (0x101010101010101LL
       * (((v10 & 0x3333333333333333LL)
         + ((v10 >> 2) & 0x3333333333333333LL)
         + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( (unsigned __int16)v4 >= (unsigned __int16)v11 )
  {
    memset(a2, 0, 16 * v4);
    v13 = v23[0];
    v14 = 0;
    for ( i = 0; v14 < v13; ++v14 )
    {
      if ( i >= (unsigned __int16)v11 )
        break;
      if ( v14 < v13 )
      {
        v16 = *(_QWORD *)&v23[2 * v14 + 2];
        if ( v16 )
        {
          v17 = 2LL * i++;
          *((_WORD *)a2 + 4 * v17 + 4) = v14;
          *((_QWORD *)a2 + v17) = v16;
        }
      }
    }
    *a4 = i;
    return 0LL;
  }
  else
  {
    *a4 = v11;
    return 3221225507LL;
  }
}
