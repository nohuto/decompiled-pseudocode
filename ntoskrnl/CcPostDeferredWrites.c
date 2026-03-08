/*
 * XREFs of CcPostDeferredWrites @ 0x1403BBEB8
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcFlushCachePostProcess @ 0x14021AF2C (CcFlushCachePostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14021B410 (CcFlushCachePostProcessOneRange.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402A42CC (CcNotifyOfMappedWriteComplete.c)
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     CcUnpinRepinnedBcb @ 0x140390990 (CcUnpinRepinnedBcb.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403BBD24 (CcReapPrivateVolumeCachemap.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1403C9DE0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcLazyWriteScan @ 0x140533B4C (CcLazyWriteScan.c)
 *     CcDeferWrite @ 0x140535060 (CcDeferWrite.c)
 *     CcPostDeferredWritesOnVolumeHelper @ 0x1405366E0 (CcPostDeferredWritesOnVolumeHelper.c)
 *     CcExitPartition @ 0x140536FC8 (CcExitPartition.c)
 * Callees:
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcPostDeferredWrites(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD **v3; // r15
  KSPIN_LOCK *v6; // r13
  _QWORD *v7; // rsi
  KIRQL v8; // al
  _QWORD *v9; // rdi
  unsigned __int64 v10; // r12
  unsigned int v11; // r9d
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf
  struct _KEVENT *v18; // rcx
  unsigned int v19; // [rsp+70h] [rbp+8h]

  v2 = 0;
  v3 = (_QWORD **)(a2 + 1104);
  v19 = 0;
  if ( !CcEnablePerVolumeLazyWriter )
    v3 = (_QWORD **)(a1 + 1168);
  v6 = (KSPIN_LOCK *)(a1 + 1216);
  while ( 1 )
  {
    v7 = 0LL;
    v8 = KeAcquireSpinLockRaiseToDpc(v6);
    v9 = *v3;
    v10 = v8;
    while ( v9 != v3 )
    {
      v7 = v9 - 3;
      if ( *(_BYTE *)(a1 + 1294) > 1u )
      {
        v12 = *v9;
        v13 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v13 != v9 )
          __fastfail(3u);
        goto LABEL_13;
      }
      v11 = *((_DWORD *)v7 + 4);
      v2 += v11;
      if ( CcCanIWriteStreamEx(a1, a2, v7[1], v11, v19, 2, 0LL)
        && (!*((_BYTE *)v7 + 88)
         || MEMORY[0xFFFFF78000000320] >= (__int64)((unsigned int)(10000 * CcSoftThrottleDelay)
                                                  / (unsigned __int64)(unsigned int)KeMaximumIncrement
                                                  + v7[12])) )
      {
        v12 = *v9;
        v13 = (_QWORD *)v9[1];
        v19 = v2;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v13 != v9 )
          __fastfail(3u);
LABEL_13:
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        break;
      }
      v9 = (_QWORD *)*v9;
      v7 = 0LL;
      v2 = v19;
    }
    result = KxReleaseSpinLock((volatile signed __int64 *)v6);
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v10 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
    if ( !v7 )
      return result;
    v18 = (struct _KEVENT *)v7[5];
    if ( v18 )
    {
      KeSetEvent(v18, 0, 0);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD))v7[6])(v7[7], v7[8]);
      ExFreePoolWithTag(v7, 0x77446343u);
      CcDereferencePartition(a1);
      if ( a2 )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) <= -1 )
          __fastfail(0xEu);
      }
    }
  }
}
