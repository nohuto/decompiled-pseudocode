/*
 * XREFs of RIMUnregisterForInput @ 0x1C0054610
 * Callers:
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0047D84 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00893D0 (RIMRegisterForInputWithCallbacks.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00A2B2C (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     NtRIMUnregisterForInput @ 0x1C0154190 (NtRIMUnregisterForInput.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C0006104 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0008378 (rimResetPnpRemovePendingStateBits.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     rimRemoveFromObTrackList @ 0x1C0052CC0 (rimRemoveFromObTrackList.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0054260 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00551A0 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C005541C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimFreeAllUserMem @ 0x1C00568AC (rimFreeAllUserMem.c)
 *     RIMCloseDev @ 0x1C00AC34C (RIMCloseDev.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7F70 (rimFreeAutoRepeatCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(__int64 a1)
{
  int v2; // edx
  int v3; // r12d
  char *v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 *v7; // rsi
  _DWORD *v8; // r13
  __int64 **v9; // rsi
  __int64 *v10; // rcx
  int v11; // r15d
  _OWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  _QWORD *v17; // r13
  unsigned int *v18; // r15
  unsigned int v19; // eax
  void *v20; // rcx
  _QWORD *v21; // rax
  struct _KTHREAD *v22; // rcx
  __int64 v23; // rax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  __int128 v25; // [rsp+38h] [rbp-40h]

  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 96, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = (char *)Object;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v2,
        1,
        97,
        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
        (char)Object);
    }
    RIMLockExclusive((__int64)(v4 + 104));
    RIMLockExclusive((__int64)(v4 + 568));
    v4[80] = 1;
    v5 = *((_QWORD *)v4 + 53);
    *((_QWORD *)v4 + 53) = 0LL;
    while ( v5 )
    {
      v17 = (_QWORD *)v5;
      rimFreeAutoRepeatCompleteFrame(v5);
      v18 = (unsigned int *)(v5 + 184);
      v19 = *(_DWORD *)(v5 + 184);
      if ( (v19 & 0x10) != 0 )
      {
        if ( (v19 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2961LL);
          v19 = *v18;
        }
        *v18 = v19 & 0xFFFFFFEF;
        v22 = *(struct _KTHREAD **)(v5 + 312);
        if ( !v22 || (v4 = (char *)Object, v22 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2965LL);
        KeSetEvent(*(PRKEVENT *)(v5 + 352), 1, 0);
      }
      v20 = *(void **)(v5 + 248);
      if ( (*v18 & 0x20) != 0 )
      {
        if ( v20 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2987LL);
      }
      else if ( v20 )
      {
        IoUnregisterPlugPlayNotification(v20);
        *(_QWORD *)(v5 + 248) = 0LL;
        ObfDereferenceObject(*(PVOID *)(v5 + 32));
      }
      RIMCloseDev(v5);
      v21 = (_QWORD *)(v5 + 40);
      v5 = *(_QWORD *)(v5 + 40);
      *v21 = 0LL;
      if ( (*v18 & 0x2000) == 0 )
      {
        rimResetPnpRemovePendingStateBits((__int64)v17);
        RIMFreeSpecificDev((__int64)v4, v17);
      }
    }
    v6 = 0;
    v7 = (__int64 *)(v4 + 312);
    v8 = v4 + 296;
    do
    {
      v3 = RIMUnRegisterForInputDeviceTypeClassNotifications(v4, v6);
      if ( !*v8 && *v7 )
      {
        Win32FreePool(*v7);
        *v7 = 0LL;
      }
      ++v6;
      ++v8;
      ++v7;
    }
    while ( v6 <= 2 );
    v9 = (__int64 **)(v4 + 552);
    do
    {
      v10 = *v9;
      if ( *v9 == (__int64 *)v9 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        v23 = *v10;
        if ( (__int64 **)v10[1] != v9 || *(__int64 **)(v23 + 8) != v10 )
          __fastfail(3u);
        *v9 = (__int64 *)v23;
        *(_QWORD *)(v23 + 8) = v9;
        Win32FreePool((__int64)(v10 - 1));
      }
    }
    while ( v11 );
    rimFreeAllUserMem(v4);
    if ( v4[584] && *((_QWORD *)v4 + 81) )
    {
      v25 = 0xC0000128uLL;
      if ( *((_DWORD *)v4 + 164) )
      {
        v12 = (_OWORD *)*((_QWORD *)v4 + 85);
        if ( (unsigned __int64)v12 >= MmUserProbeAddress )
          v12 = (_OWORD *)MmUserProbeAddress;
        *v12 = v25;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v4 + 85) = v25;
      }
      ZwSetEvent(*((HANDLE *)v4 + 81), 0LL);
      ZwClose(*((HANDLE *)v4 + 81));
    }
    v13 = *((_QWORD *)v4 + 52);
    if ( v13 )
    {
      Win32FreePool(v13);
      *((_QWORD *)v4 + 52) = 0LL;
    }
    v14 = *((_QWORD *)v4 + 12);
    if ( v14 )
    {
      Win32FreePool(v14);
      *((_QWORD *)v4 + 12) = 0LL;
      *((_DWORD *)v4 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v4 + 42), 0LL);
    ZwClose(*((HANDLE *)v4 + 42));
    *((_QWORD *)v4 + 42) = -1LL;
    v15 = (void *)*((_QWORD *)v4 + 43);
    if ( v15 != (void *)-1LL )
    {
      ZwCancelTimer(v15, 0LL);
      ZwClose(*((HANDLE *)v4 + 43));
      *((_QWORD *)v4 + 43) = -1LL;
    }
    ZwClose(*((HANDLE *)v4 + 48));
    *((_QWORD *)v4 + 48) = -1LL;
    v4[81] = 1;
    v4[10] = 1;
    rimRemoveFromObTrackList((__int64)v4);
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v4);
    *((_QWORD *)v4 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v4 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v2, 1, 98, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v3);
  }
  return (unsigned int)v3;
}
