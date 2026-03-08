/*
 * XREFs of ExpAllocateAsid @ 0x14060B064
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14060B7D4 (ExpShareAddressSpaceWithDevice.c)
 *     IommuPasidDeviceCreate @ 0x140932800 (IommuPasidDeviceCreate.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAllocateAsid(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int8 v4; // al
  struct _KPRCB *v5; // r10
  _DWORD *v6; // r9
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // edi
  __int64 result; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  unsigned int v18; // ebx
  __int64 *v19; // rax
  unsigned int i; // edi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C2CFD8, &LockHandle);
  while ( 1 )
  {
    v18 = dword_140C2CFC4;
    if ( (_DWORD)dword_140C2CFC4 != dword_140C2CFC8 )
    {
      v19 = (__int64 *)qword_140C2CFD0;
      for ( i = 0; i < (unsigned int)dword_140C2CFC4; ++i )
      {
        if ( !*v19 )
          break;
        v19 += 2;
      }
      v19[1] = 1LL;
      if ( !a2 )
        a2 = -2LL;
      *v19 = a2;
      ++dword_140C2CFC8;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v8 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      result = i + 1;
      goto LABEL_43;
    }
    if ( (_DWORD)dword_140C2CFC4 == ExpSvmAgents )
      break;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v3 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v4 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v4 <= 0xFu && LockHandle.OldIrql <= 0xFu && v4 >= 2u )
      {
        v5 = KeGetCurrentPrcb();
        v6 = v5->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = (v7 & v6[5]) == 0;
        v6[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)v5);
      }
    }
    __writecr8(v3);
    v9 = v18 + 64;
    if ( v18 + 64 >= v18 )
    {
      if ( v9 > ExpSvmAgents )
        v9 = ExpSvmAgents;
    }
    else
    {
      v9 = ExpSvmAgents;
    }
    result = ExAllocatePool2(64LL, 16LL * v9, 1933670469LL);
    v11 = (_QWORD *)result;
    if ( !result )
      return result;
    KeAcquireInStackQueuedSpinLock(&qword_140C2CFD8, &LockHandle);
    if ( v18 == (_DWORD)dword_140C2CFC4 )
    {
      v12 = qword_140C2CFD0;
      if ( qword_140C2CFD0 )
        memmove(v11, qword_140C2CFD0, 16LL * v18);
      memset(&v11[2 * v18], 0, 16LL * (v9 - v18));
      if ( !qword_140C2CFD0 )
      {
        *v11 = -1LL;
        v11[1] = 1LL;
        ++dword_140C2CFC8;
      }
      qword_140C2CFD0 = v11;
      v11 = v12;
      LODWORD(dword_140C2CFC4) = v9;
      if ( !v12 )
        continue;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v13 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    __writecr8(v13);
    ExFreePoolWithTag(v11, 0);
    KeAcquireInStackQueuedSpinLock(&qword_140C2CFD8, &LockHandle);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v8 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)v27);
    }
  }
  result = 0LL;
LABEL_43:
  __writecr8(OldIrql);
  return result;
}
