/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x1402E1660
 * Callers:
 *     <none>
 * Callees:
 *     CcSetAdditionalCacheAttributes @ 0x1402E1770 (CcSetAdditionalCacheAttributes.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcSetAdditionalCacheAttributesEx(PFILE_OBJECT FileObject, int a2)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rsi
  unsigned int *v5; // rdi
  BOOLEAN v6; // dl
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = SharedCacheMap + 38;
  v6 = (a2 & 2) != 0;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(FileObject, v6, (a2 & 4) != 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 67) + 768LL), &LockHandle);
  v7 = *v5;
  if ( (a2 & 1) != 0 )
    v8 = v7 | 0x800000;
  else
    v8 = v7 & 0xFF7FFFFF;
  if ( (a2 & 8) != 0 )
  {
    v9 = v8 | 0x4000000;
  }
  else
  {
    if ( (v8 & 0x4000000) != 0 )
      v8 |= 0x20000u;
    v9 = v8 & 0xFBFFFFFF;
  }
  if ( (a2 & 0x10) != 0 )
    v10 = v9 | 0x10000000;
  else
    v10 = v9 & 0xEFFFFFFF;
  if ( (a2 & 0x20) != 0 )
    v11 = v10 | 0x8000000;
  else
    v11 = v10 & 0xF7FFFFFF;
  if ( (a2 & 0x10000000) != 0 )
    v12 = v11 | 0x1000;
  else
    v12 = v11 & 0xFFFFEFFF;
  *v5 = v12;
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v17 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
