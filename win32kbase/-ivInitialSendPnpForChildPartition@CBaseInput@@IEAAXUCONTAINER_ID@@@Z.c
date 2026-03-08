/*
 * XREFs of ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C021FD04
 * Callers:
 *     ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x1C0220130 (-ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C002F180 (RimInputTypeToDeviceInputType.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C007E6B0 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C02272BC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C0227610 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C0227A94 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivInitialSendPnpForChildPartition(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ebp
  int v5; // r8d
  char v6; // si
  bool v7; // cl
  int v8; // edx
  int v9; // eax
  int v10; // edx
  const struct CONTAINER_ID *v11; // r8
  __int64 i; // rdi
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  const struct CONTAINER_ID *v16; // r9
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  unsigned int v21; // [rsp+98h] [rbp+10h] BYREF

  v21 = a2;
  v2 = *(_QWORD *)(a1 + 1320);
  RIMLockExclusive(v2);
  v4 = RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
  v6 = 1;
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (__int16)v21;
    LOBYTE(v8) = v7;
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      19,
      (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
      v4,
      v21,
      SBYTE2(v21));
  }
  v9 = IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v4, &v21);
  if ( v9 < 0 )
  {
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        20,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
        v9);
    }
  }
  for ( i = **(_QWORD **)(a1 + 1328); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(unsigned __int8 *)(i + 48) == v4
      && *(void **)i != TouchExtensibility::hDeviceUser
      && (*(_DWORD *)(i + 200) & 4) == 0 )
    {
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          (_DWORD)v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          12,
          21,
          (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
          *(_QWORD *)(i + 16));
      v13 = IVRootDeliver::PnP::SendRootPnpCreated(
              *(IVRootDeliver::PnP **)(i + 32),
              (struct RawInputManagerDeviceObject *)&v21,
              v11);
      if ( v13 < 0 )
      {
        LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v15,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            22,
            (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
            v13);
        }
      }
      v17 = IVRootDeliver::PnP::SendRootPnp((IVRootDeliver::PnP *)i, (struct DEVICEINFO *)2, (unsigned int)&v21, v16);
      if ( v17 < 0 )
      {
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            (_DWORD)v11,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            23,
            (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
            v17);
        }
      }
    }
  }
  v18 = IVRootDeliver::PnP::SendRootPnpSyncState(2LL, v4, &v21);
  if ( v18 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = v6;
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        24,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
        v18);
    }
  }
  *(_QWORD *)(v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
