/*
 * XREFs of ExpGetLookasideInformation @ 0x140602EC8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetLookasideInformation(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  unsigned int v4; // r14d
  int v5; // r13d
  _DWORD *v6; // rsi
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  KSPIN_LOCK *v10; // r15
  KIRQL v11; // al
  __int64 *v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  KIRQL v19; // al
  __int64 *v20; // rdx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  __int64 result; // rax
  PMDL MemoryDescriptorList[2]; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v27; // [rsp+90h] [rbp+50h]
  __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  v27 = a3;
  MemoryDescriptorList[0] = 0LL;
  v28 = 0LL;
  v3 = 0;
  v4 = (unsigned int)a2 >> 5;
  v5 = 0;
  v6 = a3;
  if ( (unsigned int)a2 >> 5 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    v5 = ExLockUserBuffer(a1, a2, a3, 1LL, &v28, MemoryDescriptorList);
    if ( v5 >= 0 )
    {
      v7 = (__int64 *)ExPoolLookasideListHead;
      v8 = v28;
      v5 = 0;
      while ( v7 != &ExPoolLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v7 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v7 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v7 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v7 - 11) - *((_DWORD *)v7 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v7 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v7 - 9) - *((_DWORD *)v7 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v7 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v7 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v7 - 5);
        if ( v3 == v4 )
          goto LABEL_35;
        v7 = (__int64 *)*v7;
        v8 += 32LL;
        v28 = v8;
      }
      v9 = (__int64 *)ExSystemLookasideListHead;
      while ( v9 != &ExSystemLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v9 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v9 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v9 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v9 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v9 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v9 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v9 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v9 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v9 - 5);
        if ( v3 == v4 )
          goto LABEL_35;
        v9 = (__int64 *)*v9;
        v8 += 32LL;
        v28 = v8;
      }
      v10 = &ExNPagedLookasideLock;
      v11 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
      v12 = (__int64 *)ExNPagedLookasideListHead;
      v13 = v11;
      while ( v12 != &ExNPagedLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v12 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v12 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v12 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v12 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v12 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v12 - 8);
        *(_DWORD *)(v8 + 20) = 0;
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v12 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v12 - 5);
        if ( v3 == v4 )
          goto LABEL_27;
        v12 = (__int64 *)*v12;
        v8 += 32LL;
        v28 = v8;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&ExNPagedLookasideLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v8 = v28;
        }
      }
      __writecr8(v13);
      v10 = &ExPagedLookasideLock;
      v19 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
      v20 = (__int64 *)ExPagedLookasideListHead;
      LOBYTE(v13) = v19;
      if ( (__int64 *)ExPagedLookasideListHead != &ExPagedLookasideListHead )
      {
        do
        {
          ++v3;
          *(_WORD *)v8 = *((_WORD *)v20 - 32);
          *(_WORD *)(v8 + 2) = *((_WORD *)v20 - 24);
          *(_DWORD *)(v8 + 4) = *((_DWORD *)v20 - 11);
          *(_DWORD *)(v8 + 8) = *((_DWORD *)v20 - 10);
          *(_DWORD *)(v8 + 12) = *((_DWORD *)v20 - 9);
          *(_DWORD *)(v8 + 16) = *((_DWORD *)v20 - 8);
          *(_DWORD *)(v8 + 20) = 1;
          *(_DWORD *)(v8 + 24) = *((_DWORD *)v20 - 6);
          *(_DWORD *)(v8 + 28) = *((_DWORD *)v20 - 5);
          if ( v3 == v4 )
            break;
          v20 = (__int64 *)*v20;
          v8 += 32LL;
        }
        while ( v20 != &ExPagedLookasideListHead );
        v28 = v8;
      }
LABEL_27:
      KxReleaseSpinLock((volatile signed __int64 *)v10);
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
      }
      __writecr8((unsigned __int8)v13);
      v6 = v27;
LABEL_35:
      MmUnlockPages(MemoryDescriptorList[0]);
      ExFreePoolWithTag(MemoryDescriptorList[0], 0);
    }
  }
  result = (unsigned int)v5;
  *v6 = 32 * v3;
  return result;
}
