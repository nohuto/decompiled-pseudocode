__int64 __fastcall CcRemoveExternalCache(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r8
  _QWORD *v4; // rdx
  int v5; // eax
  __int64 v6; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = a1[4];
  v4 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v3 + 8) != a1 + 4 || (_QWORD *)*v4 != a1 + 4 )
    __fastfail(3u);
  v5 = CcNumberOfExternalCaches;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x1E4FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v5 - 1;
  if ( CcEnablePerVolumeLazyWriter )
  {
    v6 = a1[7];
    CcDereferencePartition(a1[6]);
    if ( v6 )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8)) <= -1 )
        __fastfail(0xEu);
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&CcExternalCacheListLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
