/*
 * XREFs of ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C01EEEF8
 * Callers:
 *     ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EF320 (-ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0034D74 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RimInputTypeToDeviceInputType @ 0x1C00B5F24 (RimInputTypeToDeviceInputType.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F51D4 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01F5528 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F59AC (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivInitialSendPnpForChildPartition(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v4; // r8d
  char v5; // di
  bool v6; // cl
  int v7; // edx
  int v8; // eax
  int v9; // edx
  const struct CONTAINER_ID *v10; // r8
  struct DEVICEINFO *i; // rbx
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  const struct CONTAINER_ID *v15; // r9
  int v16; // eax
  int v17; // eax
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = a2;
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  v3 = RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
  v5 = 1;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (__int16)v20;
    LOBYTE(v7) = v6;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v4,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      19,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
      v3,
      v20,
      SBYTE2(v20));
  }
  v8 = IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v3, &v20);
  if ( v8 < 0 )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        (_DWORD)v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        20,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
        v8);
    }
  }
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((unsigned __int8 *)i + 48) == v3
      && *(void **)i != TouchExtensibility::hDeviceUser
      && (*((_DWORD *)i + 50) & 4) == 0 )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          (_DWORD)v10,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          12,
          21,
          (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
          *((_QWORD *)i + 2));
      v12 = IVRootDeliver::PnP::SendRootPnpCreated(
              *((IVRootDeliver::PnP **)i + 4),
              (struct RawInputManagerDeviceObject *)&v20,
              v10);
      if ( v12 < 0 )
      {
        LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            22,
            (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
            v12);
        }
      }
      v16 = IVRootDeliver::PnP::SendRootPnp(i, (struct DEVICEINFO *)2, (unsigned int)&v20, v15);
      if ( v16 < 0 )
      {
        LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            (_DWORD)v10,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            23,
            (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
            v16);
        }
      }
    }
  }
  v17 = IVRootDeliver::PnP::SendRootPnpSyncState(2LL, v3, &v20);
  if ( v17 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 24;
      LOBYTE(v19) = v5;
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v18,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        24,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
        v17);
    }
  }
  qword_1C029A1C8 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
