/*
 * XREFs of RIMUnregisterForInput @ 0x1C0047ED0
 * Callers:
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0043984 (RIMUnregisterCurrentProcessForInput.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C004A8F4 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 *     NtRIMUnregisterForInput @ 0x1C01810E0 (NtRIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     rimRemoveFromObTrackList @ 0x1C00442DC (rimRemoveFromObTrackList.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0044CE0 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMSignalAllDispositionWaiters @ 0x1C0048900 (RIMSignalAllDispositionWaiters.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0049018 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C00490B4 (RIMDeleteAllAsyncPnpWorkNotificationItems.c)
 *     rimFreeAllUserMem @ 0x1C00490E4 (rimFreeAllUserMem.c)
 *     RIMCloseDev @ 0x1C004E108 (RIMCloseDev.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMFreeSpecificDev @ 0x1C00A0F40 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00C2EBC (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(char *a1)
{
  char v2; // dl
  int v3; // edx
  int v4; // r8d
  int v5; // r13d
  char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned int v11; // ebx
  void **v12; // r15
  _DWORD *v13; // r12
  void *v14; // rdx
  __int64 v15; // r8
  __int64 **v16; // rbx
  __int64 *v17; // rax
  void *v18; // rdx
  void *v19; // rdx
  void *v20; // rcx
  _OWORD *v22; // rdx
  __int64 v23; // r12
  unsigned int *v24; // r15
  unsigned int v25; // eax
  void *v26; // rcx
  _QWORD *v27; // rax
  struct _KTHREAD *v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // r12
  _QWORD *v31; // r15
  __int64 v32; // rax
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

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
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
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
        (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
        (char)Object);
    }
    RIMLockExclusive((__int64)(v6 + 104));
    RIMLockExclusive((__int64)(v6 + 792));
    v6[80] = 1;
    v10 = *((_QWORD *)v6 + 53);
    *((_QWORD *)v6 + 53) = 0LL;
    while ( v10 )
    {
      v23 = v10;
      v24 = (unsigned int *)(v10 + 184);
      v25 = *(_DWORD *)(v10 + 184);
      if ( (v25 & 0x10) != 0 )
      {
        if ( (v25 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
          v25 = *v24;
        }
        *v24 = v25 & 0xFFFFFFEF;
        v28 = *(struct _KTHREAD **)(v10 + 312);
        if ( !v28 || (v6 = (char *)Object, v28 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v7, v9);
        KeSetEvent(*(PRKEVENT *)(v10 + 352), 1, 0);
      }
      v26 = *(void **)(v10 + 248);
      if ( (*v24 & 0x20) != 0 )
      {
        if ( v26 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v7, v9);
      }
      else if ( v26 )
      {
        IoUnregisterPlugPlayNotification(v26);
        *(_QWORD *)(v10 + 248) = 0LL;
        ObfDereferenceObject(*(PVOID *)(v10 + 32));
      }
      RIMCloseDev(v10);
      v27 = (_QWORD *)(v10 + 40);
      v10 = *(_QWORD *)(v10 + 40);
      *v27 = 0LL;
      if ( (*v24 & 0x2000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v23);
        RIMFreeSpecificDev(v6, v23);
      }
    }
    v11 = 0;
    v12 = (void **)(v6 + 312);
    v13 = v6 + 296;
    do
    {
      v5 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v6, v11);
      if ( !*v13 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v14);
          *v12 = 0LL;
        }
      }
      ++v11;
      ++v13;
      ++v12;
    }
    while ( v11 <= 2 );
    v16 = (__int64 **)(v6 + 776);
    while ( 1 )
    {
      v17 = *v16;
      if ( *v16 == (__int64 *)v16 )
        break;
      v29 = *v17;
      if ( (__int64 **)v17[1] != v16 || *(__int64 **)(v29 + 8) != v17 )
        __fastfail(3u);
      *v16 = (__int64 *)v29;
      *(_QWORD *)(v29 + 8) = v16;
      v30 = v17 - 1;
      v31 = (_QWORD *)v17[4];
      v32 = v31[35];
      if ( !v32 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v14, v15);
        v32 = v31[35];
      }
      v31[35] = v32 - 1;
      ObfDereferenceObject(v31);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v30);
    }
    rimFreeAllUserMem(v6);
    if ( v6[808] && *((_QWORD *)v6 + 109) )
    {
      if ( *((_DWORD *)v6 + 220) )
      {
        v22 = (_OWORD *)*((_QWORD *)v6 + 113);
        if ( (unsigned __int64)v22 >= MmUserProbeAddress )
          v22 = (_OWORD *)MmUserProbeAddress;
        *v22 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v6 + 113) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v6 + 109), 0LL);
      ZwClose(*((HANDLE *)v6 + 109));
    }
    v18 = (void *)*((_QWORD *)v6 + 52);
    if ( v18 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v18);
      *((_QWORD *)v6 + 52) = 0LL;
    }
    v19 = (void *)*((_QWORD *)v6 + 12);
    if ( v19 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v19);
      *((_QWORD *)v6 + 12) = 0LL;
      *((_DWORD *)v6 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v6 + 42), 0LL);
    ZwClose(*((HANDLE *)v6 + 42));
    *((_QWORD *)v6 + 42) = -1LL;
    ZwClose(*((HANDLE *)v6 + 43));
    *((_QWORD *)v6 + 43) = -1LL;
    v20 = (void *)*((_QWORD *)v6 + 46);
    if ( v20 != (void *)-1LL )
    {
      ZwClose(v20);
      *((_QWORD *)v6 + 46) = -1LL;
    }
    v6[81] = 1;
    RIMLockExclusive((__int64)(v6 + 352));
    v6[10] = 1;
    RIMDeleteAllAsyncPnpWorkNotificationItems(v6);
    *((_QWORD *)v6 + 45) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 352, 0LL);
    KeLeaveCriticalRegion();
    rimRemoveFromObTrackList((__int64)v6);
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v6);
    RIMSignalAllDispositionWaiters(v6);
    *((_QWORD *)v6 + 100) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 792, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v6 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
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
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      107,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
