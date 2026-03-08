/*
 * XREFs of ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C0226E60
 * Callers:
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C020F0C8 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C0218FEC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0220FC4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C0228560 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C02332E8 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0233454 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C02340D0 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendPTPInertiaInput(
        IVRootDeliver::Pointer *this,
        void *a2,
        __int64 a3,
        const struct CONTAINER_ID *a4)
{
  void *v4; // r12
  int v6; // edi
  __int64 v9; // rax
  struct _UNICODE_STRING v11; // xmm6
  int v12; // edx
  int v13; // r8d
  int v14; // r14d
  int v15; // r8d
  int v16; // edx
  char v17; // bl
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  char v20; // bl
  struct _UNICODE_STRING *v21; // rdi
  struct _UNICODE_STRING v22; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v23[2]; // [rsp+68h] [rbp-9h] BYREF
  struct _UNICODE_STRING *v24; // [rsp+78h] [rbp+7h]

  v4 = 0LL;
  *(_QWORD *)&v22.Length = 0LL;
  v6 = a3;
  v9 = SGDGetUserSessionState(this, a2, a3, a4);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v9 + 16840) + 1360LL)) )
    return 0LL;
  v11 = 0LL;
  if ( this )
  {
    v14 = RawInputManagerDeviceObjectResolveHandle((char *)this, 3u, v6 == 0, (PVOID *)&v22);
    if ( v14 < 0 )
    {
      v20 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          24,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v14);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v20 = 0;
      if ( (_BYTE)v12 || v20 )
      {
        LOBYTE(v13) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          12,
          25,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
      }
      return (unsigned int)v14;
    }
    v4 = *(void **)&v22.Length;
    v11 = *(struct _UNICODE_STRING *)(*(_QWORD *)&v22.Length + 280LL);
  }
  CIVGenericSerializer::CIVGenericSerializer(v23);
  v16 = (int)v24;
  if ( v24 )
  {
    v22 = v11;
    v17 = 1;
    v14 = CIVSerializer::Serialize((CIVSerializer *)v23, v24, &v22, 1);
    if ( v14 < 0 )
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v17 = 0;
      }
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_64;
      v19 = 28;
    }
    else
    {
      v14 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v23);
      if ( v14 >= 0 )
      {
        v21 = v24;
        v22 = v11;
        v14 = CIVSerializer::Serialize((CIVSerializer *)v23, v24, &v22, 0);
        if ( v14 < 0 )
        {
          v18 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v17 = 0;
          }
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v19 = 27;
        }
        else
        {
          *(_QWORD *)&v21[1].Length = a2;
          v14 = ivrIVSend((const struct CIVSerializer *)v23, 2u, a4);
          if ( v14 >= 0 )
            goto LABEL_64;
          v18 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v17 = 0;
          }
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_64;
          v19 = 30;
        }
      }
      else
      {
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v17 = 0;
        }
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_64;
        v19 = 26;
      }
    }
  }
  else
  {
    v14 = -1073741801;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v17 = 0;
    }
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_64;
    v19 = 29;
  }
  LOBYTE(v16) = v17;
  WPP_RECORDER_AND_TRACE_SF_d(
    v18->AttachedDevice,
    v16,
    v15,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    12,
    v19,
    (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
    v14);
LABEL_64:
  if ( v4 )
    ObfDereferenceObject(v4);
  v23[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v23);
  return (unsigned int)v14;
}
