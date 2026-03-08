/*
 * XREFs of WmipDeregisterRegEntry @ 0x1403CEEF0
 * Callers:
 *     WmipRegisterDevice @ 0x140869828 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x14087DDC8 (WmipDeregisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     WmipUnreferenceRegEntry @ 0x140208DE4 (WmipUnreferenceRegEntry.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     WmipRemoveDS @ 0x14087DE68 (WmipRemoveDS.c)
 */

void __fastcall WmipDeregisterRegEntry(char *Entry)
{
  unsigned __int64 v2; // rsi
  signed __int32 v3; // ebp
  KIRQL v4; // al
  PVOID *v5; // rdx
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rax
  void *v8; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  _DWORD *v17; // r8
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393217;
  v19[1] = v19;
  v19[0] = v19;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  *((_QWORD *)Entry + 5) = Object;
  _m_prefetchw(Entry + 48);
  v3 = _InterlockedOr((volatile signed __int32 *)Entry + 12, 0xA0000000);
  KxReleaseSpinLock((volatile signed __int64 *)&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceRegEntry((__int64)Entry);
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  --WmipInUseRegEntryCount;
  v5 = (PVOID *)*((_QWORD *)Entry + 1);
  v6 = v4;
  v7 = *(_QWORD **)Entry;
  if ( *(char **)(*(_QWORD *)Entry + 8LL) != Entry || *v5 != Entry )
    __fastfail(3u);
  *v5 = v7;
  v7[1] = v5;
  KxReleaseSpinLock((volatile signed __int64 *)&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v17 = v15->SchedulerAssist;
      v13 = (v16 & v17[5]) == 0;
      v17[5] &= v16;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  __writecr8(v6);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObjectWithTag(*((PVOID *)Entry + 2), 0x746C6644u);
  v8 = (void *)*((_QWORD *)Entry + 3);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  WmipRemoveDS(Entry);
  ExFreeToNPagedLookasideList(&WmipRegLookaside, Entry);
}
