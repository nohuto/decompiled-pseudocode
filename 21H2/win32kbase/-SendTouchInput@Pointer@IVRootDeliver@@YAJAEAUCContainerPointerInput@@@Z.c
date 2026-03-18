/*
 * XREFs of ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01F5B34
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BFDA0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x1C01EC990 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x1C01ECD3C (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F0028 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C01F4350 (-SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C01FCDFC (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FCFCC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01FD138 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendTouchInput(
        IVRootDeliver::Pointer *this,
        struct CContainerPointerInput *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r15
  PVOID v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  char *v9; // rcx
  struct _UNICODE_STRING v10; // xmm6
  int v11; // r13d
  char v12; // bl
  int v13; // edx
  int v14; // r14d
  int v15; // edx
  int v16; // r8d
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  LARGE_INTEGER PerformanceCounter; // rax
  struct _UNICODE_STRING v20; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v21[8]; // [rsp+68h] [rbp-9h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+67h] BYREF

  v2 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  Object = 0LL;
  if ( !CIVChannel::ContainerConnected(*((_DWORD *)gpHidInput + 318)) )
    return 0LL;
  v9 = *(char **)(v2 + 32);
  v10 = 0LL;
  v11 = v6;
  v12 = 1;
  if ( v9 )
  {
    v14 = RawInputManagerDeviceObjectResolveHandle(v9, 3u, *(_DWORD *)(v2 + 192) == 0, &Object);
    if ( v14 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v6,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          17,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v14);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v13 || v12 )
      {
        LOBYTE(v6) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v6,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          12,
          18,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
      }
      return (unsigned int)v14;
    }
    v5 = Object;
    v10 = *(struct _UNICODE_STRING *)((char *)Object + 296);
  }
  else
  {
    v11 = 1;
  }
  CIVSerializer::CIVSerializer(v21, 3LL, v6, v7);
  v21[0] = &CIVGenericSerializer::`vftable';
  if ( v21[2] )
  {
    v20 = v10;
    v14 = IVMeasureRimCompleteFrame(
            (struct RIMCOMPLETEFRAME *)v2,
            (const struct CPointerRawData **)v4,
            &v20,
            (struct CIVTouchSerializer *)v21);
    if ( v14 < 0 )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v12 = 0;
      }
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v18 = 21;
    }
    else
    {
      v14 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v21);
      if ( v14 >= 0 )
      {
        *(union _LARGE_INTEGER *)(v2 + 184) = gliQpcFreq;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v20 = v10;
        *(LARGE_INTEGER *)(v2 + 112) = PerformanceCounter;
        v14 = IVSerializeRimCompleteFrameForTouchInputPacket(
                (struct RIMCOMPLETEFRAME *)v2,
                (struct CPointerInputFrame *)v4,
                &v20,
                v11,
                (struct CIVTouchSerializer *)v21);
        if ( v14 >= 0 )
        {
          InputTraceLogging::Pointer::SendFrameToContainer(
            *(struct RIMDEV *const *)(*(_QWORD *)(v4 + 256) + 16LL),
            (const struct CPointerInputFrame *)v4);
          v14 = ivrIVSend((const struct CIVSerializer *)v21, 2u, (IVRootDeliver::Pointer *)((char *)this + 16));
          if ( v14 >= 0 )
            goto LABEL_65;
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v12 = 0;
          }
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v18 = 23;
        }
        else
        {
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v12 = 0;
          }
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v18 = 20;
        }
      }
      else
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v12 = 0;
        }
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_65;
        v18 = 19;
      }
    }
  }
  else
  {
    v14 = -1073741801;
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v12 = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v18 = 22;
  }
  LOBYTE(v15) = v12;
  WPP_RECORDER_AND_TRACE_SF_D(
    v17->AttachedDevice,
    v15,
    v16,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    12,
    v18,
    (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
    v14);
LABEL_65:
  if ( v5 )
    ObfDereferenceObject(v5);
  v21[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v21);
  return (unsigned int)v14;
}
