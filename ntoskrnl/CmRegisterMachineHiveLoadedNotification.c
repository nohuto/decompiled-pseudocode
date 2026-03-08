/*
 * XREFs of CmRegisterMachineHiveLoadedNotification @ 0x1408185D0
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpWorkItemQueueWork @ 0x14038897C (CmpWorkItemQueueWork.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140818924 (CmpFindMachineHiveByMountPoint.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmRegisterMachineHiveLoadedNotification(
        __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        __int64 *a4)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  wchar_t ***v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  unsigned __int64 v20; // rtt
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  unsigned __int64 v23; // rtt

  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  result = CmpFindMachineHiveByMountPoint(a3);
  if ( (int)result >= 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 112LL, 842616131LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 80) = a1;
      v10 = Pool2 + 16;
      *(_DWORD *)(Pool2 + 104) = 0;
      *(_QWORD *)(Pool2 + 88) = a2;
      *(_WORD *)(Pool2 + 108) = 0;
      *(_BYTE *)(Pool2 + 110) = 0;
      *(_QWORD *)(Pool2 + 96) = 0LL;
      memset((void *)(Pool2 + 16), 0, 0x40uLL);
      *(_QWORD *)(v10 + 24) = v10;
      *(_QWORD *)(v10 + 16) = CmpWorkItemWrapper;
      *(_QWORD *)v10 = 0LL;
      *(_DWORD *)(v10 + 40) = 0;
      v11 = (unsigned __int64 *)&CmpMachineHiveList[17];
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_DWORD *)(v10 + 44) = 1;
      *(_QWORD *)(v10 + 48) = CmpMachineHiveLoadedWorkItem;
      *(_QWORD *)(v10 + 56) = v9;
      v12 = KeAbPreAcquire((__int64)&CmpMachineHiveList[17], 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpMachineHiveList[17], 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
      if ( v13 )
        *(_BYTE *)(v13 + 18) = 1;
      if ( HIDWORD(CmpMachineHiveList[14]) == 1 )
      {
        CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)v10);
      }
      else
      {
        v14 = (unsigned __int64 *)&CmpMachineHiveList[18];
        v15 = KeAbPreAcquire((__int64)&CmpMachineHiveList[18], 0LL);
        v16 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpMachineHiveList[18], 0LL) )
          ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
        if ( v16 )
          *(_BYTE *)(v16 + 18) = 1;
        v17 = (wchar_t ***)CmpMachineHiveList[20];
        if ( *v17 != &CmpMachineHiveList[19] )
          __fastfail(3u);
        *(_QWORD *)v9 = &CmpMachineHiveList[19];
        *(_QWORD *)(v9 + 8) = v17;
        *v17 = (wchar_t **)v9;
        CmpMachineHiveList[20] = (wchar_t *)v9;
        *(_BYTE *)(v9 + 109) = 1;
        _m_prefetchw(v14);
        v18 = *v14;
        v19 = *v14 - 16;
        if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v19 = 0LL;
        if ( (v18 & 2) != 0
          || (v20 = *v14, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v19, v18)) )
        {
          ExfReleasePushLock(v14);
        }
        KeAbPostRelease((ULONG_PTR)v14);
      }
      _m_prefetchw(v11);
      v21 = *v11;
      v22 = *v11 - 16;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v22 = 0LL;
      if ( (v21 & 2) != 0
        || (v23 = *v11, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v22, v21)) )
      {
        ExfReleasePushLock(v11);
      }
      KeAbPostRelease((ULONG_PTR)v11);
      result = 0LL;
      *a4 = v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
