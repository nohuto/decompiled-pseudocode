/*
 * XREFs of ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C0227610
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C021FD04 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C02272BC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C021D670 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerial.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C021DB1C (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSeri.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0227290 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C0233064 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C02332E8 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0233454 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpCreated(
        IVRootDeliver::PnP *this,
        struct RawInputManagerDeviceObject *a2,
        const struct CONTAINER_ID *a3,
        __int64 a4)
{
  struct RawInputManagerDeviceObject *v4; // r15
  unsigned __int64 v5; // rsi
  char v7; // bl
  char *v8; // rcx
  PVOID v9; // r14
  int v10; // edx
  int v11; // edi
  int v12; // r8d
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // ax
  const struct CONTAINER_ID *v15; // r9
  void *v16; // rdx
  struct _UNICODE_STRING v17; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp+7h] BYREF
  _DWORD *v19; // [rsp+70h] [rbp+17h]
  char *v20; // [rsp+C0h] [rbp+67h] BYREF

  v4 = a2;
  v17 = 0LL;
  v5 = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
  if ( *(_BYTE *)(v5 + 0x30) > 2u )
    return 0LL;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      45,
      (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
      *(_QWORD *)((((unsigned __int64)this + 72) & -(__int64)(this != 0LL)) + 0xD8));
  v8 = *(char **)(v5 + 1328);
  v9 = 0LL;
  v20 = 0LL;
  if ( !v8 )
  {
LABEL_30:
    CIVSerializer::CIVSerializer(v18, 0LL, a3, a4);
    v18[0] = &CIVGenericSerializer::`vftable';
    if ( v19 )
    {
      v11 = IVMeasureRimDevForIVPnpCreatePacket((struct RIMDEV *)v5, &v17, (struct CIVPnPCreateSerializer *)v18);
      if ( v11 < 0 )
      {
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v7 = 0;
        }
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_71;
        v14 = 50;
      }
      else
      {
        v11 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v18);
        if ( v11 >= 0 )
        {
          v11 = IVSerializeRimDevForIVPnpCreatePacket((struct RIMDEV *)v5, &v17, (struct CIVPnPCreateSerializer *)v18);
          if ( v11 >= 0 )
          {
            *v19 = 1;
            v11 = IVRootDeliver::PnP::Detail::SendPnP(
                    (IVRootDeliver::PnP::Detail *)v18,
                    (const struct CIVSerializer *)*(unsigned __int8 *)(v5 + 48),
                    (__int64)v4,
                    v15);
            if ( v11 >= 0 )
              goto LABEL_71;
            v13 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              v7 = 0;
            }
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_71;
            v14 = 52;
          }
          else
          {
            v13 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              v7 = 0;
            }
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_71;
            v14 = 49;
          }
        }
        else
        {
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v7 = 0;
          }
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_71;
          v14 = 48;
        }
      }
    }
    else
    {
      v11 = -1073741801;
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_71;
      v14 = 51;
    }
    v16 = &WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids;
    LOBYTE(v16) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      v13->AttachedDevice,
      (_DWORD)v16,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      12,
      v14,
      (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
      v11);
LABEL_71:
    if ( v9 )
      ObfDereferenceObject(v9);
    v18[0] = &CIVGenericSerializer::`vftable';
    CIVSerializer::~CIVSerializer((CIVSerializer *)v18);
    return (unsigned int)v11;
  }
  v11 = RawInputManagerDeviceObjectResolveHandle(v8, 3u, 1, (PVOID *)&v20);
  if ( v11 >= 0 )
  {
    v9 = v20;
    v17 = *(struct _UNICODE_STRING *)(v20 + 280);
    goto LABEL_30;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      12,
      46,
      (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
      v11);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)v10 || v7 )
  {
    LOBYTE(a3) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      47,
      (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
  }
  return (unsigned int)v11;
}
