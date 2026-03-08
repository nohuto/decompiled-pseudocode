/*
 * XREFs of RIMUnregisterForInput @ 0x1C00326C0
 * Callers:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00315C4 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00356F0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0039554 (RIMUnregisterCurrentProcessForInput.c)
 *     NtRIMUnregisterForInput @ 0x1C01A2BB0 (NtRIMUnregisterForInput.c)
 * Callees:
 *     RIMCloseDev @ 0x1C00308E4 (RIMCloseDev.c)
 *     RIMSignalAllDispositionWaiters @ 0x1C0032B90 (RIMSignalAllDispositionWaiters.c)
 *     RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C0032BB8 (RIMDeleteAllAsyncPnpWorkNotificationItems.c)
 *     rimFreeAllUserMem @ 0x1C0032BE8 (rimFreeAllUserMem.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0037614 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimRemoveFromObTrackList @ 0x1C0038270 (rimRemoveFromObTrackList.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0039A94 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMFreeSpecificDev @ 0x1C00BBF88 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00D0020 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(__int64 a1)
{
  char v2; // dl
  int v3; // edx
  int v4; // r8d
  int v5; // r13d
  char *v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // r14d
  void **v9; // r15
  _DWORD *v10; // r12
  __int64 **v11; // r14
  __int64 *v12; // rax
  HANDLE *v13; // r14
  _OWORD *v14; // rdx
  void *v15; // rdx
  void *v16; // rdx
  void *v17; // rcx
  char *v18; // rcx
  char *v19; // rcx
  __int64 v21; // r12
  _DWORD *v22; // r15
  int v23; // eax
  void *v24; // rcx
  _QWORD *v25; // rax
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // r15
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  char *v30; // [rsp+58h] [rbp-50h]
  char *v31; // [rsp+60h] [rbp-48h]
  __int128 v32; // [rsp+68h] [rbp-40h]
  __int64 *v33; // [rsp+C0h] [rbp+18h]

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      105,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v5 >= 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v3) = 0;
    }
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = (char *)Object;
    }
    else
    {
      v6 = (char *)Object;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        (_DWORD)gRimLog,
        4,
        1,
        106,
        (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
        (char)Object);
    }
    v31 = v6 + 104;
    RIMLockExclusive(v6 + 104);
    v30 = v6 + 760;
    RIMLockExclusive(v6 + 760);
    v6[80] = 1;
    v7 = *((_QWORD *)v6 + 53);
    *((_QWORD *)v6 + 53) = 0LL;
    while ( v7 )
    {
      v21 = v7;
      v22 = (_DWORD *)(v7 + 184);
      v23 = *(_DWORD *)(v7 + 184);
      if ( (v23 & 0x10) != 0 )
      {
        if ( (v23 & 0x20) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3098LL);
        *v22 &= ~0x10u;
        v26 = *(struct _KTHREAD **)(v7 + 312);
        if ( !v26 || (v6 = (char *)Object, v26 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3102LL);
        KeSetEvent(*(PRKEVENT *)(v7 + 352), 1, 0);
      }
      v24 = *(void **)(v7 + 248);
      if ( (*v22 & 0x20) != 0 )
      {
        if ( v24 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3124LL);
      }
      else if ( v24 )
      {
        IoUnregisterPlugPlayNotification(v24);
        *(_QWORD *)(v7 + 248) = 0LL;
        ObfDereferenceObject(*(PVOID *)(v7 + 32));
      }
      RIMCloseDev(v7);
      v25 = (_QWORD *)(v7 + 40);
      v7 = *(_QWORD *)(v7 + 40);
      *v25 = 0LL;
      if ( (*v22 & 0x2000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v21);
        RIMFreeSpecificDev(v6, v21);
      }
    }
    v8 = 0;
    v9 = (void **)(v6 + 312);
    v10 = v6 + 296;
    do
    {
      v5 = RIMUnRegisterForInputDeviceTypeClassNotifications(v6, v8);
      if ( !*v10 && *v9 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v9);
        *v9 = 0LL;
      }
      ++v8;
      ++v10;
      ++v9;
    }
    while ( v8 <= 2 );
    v11 = (__int64 **)(v6 + 744);
    while ( 1 )
    {
      v12 = *v11;
      if ( *v11 == (__int64 *)v11 )
        break;
      v27 = *v12;
      if ( (__int64 **)v12[1] != v11 || *(__int64 **)(v27 + 8) != v12 )
        __fastfail(3u);
      *v11 = (__int64 *)v27;
      *(_QWORD *)(v27 + 8) = v11;
      v33 = v12 - 1;
      v28 = (_QWORD *)v12[4];
      if ( !v28[33] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1239LL);
      --v28[33];
      ObfDereferenceObject(v28);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v33);
    }
    rimFreeAllUserMem(v6);
    if ( v6[776] )
    {
      v13 = (HANDLE *)(v6 + 840);
      if ( *((_QWORD *)v6 + 105) )
      {
        v32 = 0xC0000128uLL;
        if ( *((_DWORD *)v6 + 212) )
        {
          v14 = (_OWORD *)*((_QWORD *)v6 + 109);
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (_OWORD *)MmUserProbeAddress;
          *v14 = v32;
        }
        else
        {
          *(_OWORD *)*((_QWORD *)v6 + 109) = v32;
        }
        ZwSetEvent(*v13, 0LL);
        ZwClose(*v13);
      }
    }
    v15 = (void *)*((_QWORD *)v6 + 52);
    if ( v15 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
      *((_QWORD *)v6 + 52) = 0LL;
    }
    v16 = (void *)*((_QWORD *)v6 + 12);
    if ( v16 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
      *((_QWORD *)v6 + 12) = 0LL;
      *((_DWORD *)v6 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v6 + 42), 0LL);
    ZwClose(*((HANDLE *)v6 + 42));
    *((_QWORD *)v6 + 42) = -1LL;
    ZwClose(*((HANDLE *)v6 + 43));
    *((_QWORD *)v6 + 43) = -1LL;
    v6[81] = 1;
    RIMLockExclusive(v6 + 352);
    v6[10] = 1;
    v17 = (void *)*((_QWORD *)v6 + 46);
    if ( v17 != (void *)-1LL )
    {
      ZwClose(v17);
      *((_QWORD *)v6 + 46) = -1LL;
    }
    RIMDeleteAllAsyncPnpWorkNotificationItems(v6);
    *((_QWORD *)v6 + 45) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 352, 0LL);
    KeLeaveCriticalRegion();
    rimRemoveFromObTrackList(v6);
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v6);
    RIMSignalAllDispositionWaiters(v6);
    v18 = v30;
    *((_QWORD *)v30 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
    v19 = v31;
    *((_QWORD *)v31 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v3) = 0;
  }
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      107,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
