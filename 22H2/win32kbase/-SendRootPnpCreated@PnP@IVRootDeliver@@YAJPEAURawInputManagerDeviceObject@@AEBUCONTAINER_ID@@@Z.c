/*
 * XREFs of ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01F3410
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD3D0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C01EE2D0 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F32F0 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C01ED178 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerial.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x1C01ED624 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSeri.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F32C4 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C01FCE34 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01FD240 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpCreated(
        IVRootDeliver::PnP *this,
        struct RawInputManagerDeviceObject *a2,
        const struct CONTAINER_ID *a3,
        __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int64 result; // rax
  char *v7; // rcx
  PVOID v8; // rdi
  int v9; // ebx
  const struct CONTAINER_ID *v10; // r9
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD *v13; // [rsp+40h] [rbp-20h]
  char *v14; // [rsp+80h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
  if ( *(_BYTE *)(v5 + 0x30) > 2u )
    return 0LL;
  v7 = *(char **)((((unsigned __int64)this + 72) & -(__int64)(this != 0LL)) + 0x530);
  v8 = 0LL;
  v14 = 0LL;
  if ( v7 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(v7, 3u, 1, (PVOID *)&v14);
    if ( (int)result < 0 )
      return result;
    v8 = v14;
    v11 = *(struct _UNICODE_STRING *)(v14 + 280);
  }
  CIVSerializer::CIVSerializer(v12, 0LL, a3, a4, *(_QWORD *)&v11.Length, v11.Buffer);
  v12[0] = &CIVGenericSerializer::`vftable';
  if ( v13 )
  {
    v9 = IVMeasureRimDevForIVPnpCreatePacket((struct RIMDEV *)v5, &v11, (struct CIVPnPCreateSerializer *)v12);
    if ( v9 >= 0 )
    {
      v9 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v12);
      if ( v9 >= 0 )
      {
        v9 = IVSerializeRimDevForIVPnpCreatePacket((struct RIMDEV *)v5, &v11, (struct CIVPnPCreateSerializer *)v12);
        if ( v9 >= 0 )
        {
          *v13 = 1;
          v9 = IVRootDeliver::PnP::Detail::SendPnP(
                 (IVRootDeliver::PnP::Detail *)v12,
                 (const struct CIVSerializer *)*(unsigned __int8 *)(v5 + 48),
                 (__int64)a2,
                 v10);
        }
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  v12[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12);
  return (unsigned int)v9;
}
