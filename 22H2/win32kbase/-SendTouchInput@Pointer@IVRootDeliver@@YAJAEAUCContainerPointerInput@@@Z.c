/*
 * XREFs of ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01F35C4
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BC6B8 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x1C01ED0F8 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x1C01ED4C0 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE8A4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C01F2BD4 (-SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F38C4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C01FCE34 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01FD240 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendTouchInput(
        IVRootDeliver::Pointer *this,
        struct CContainerPointerInput *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  PVOID v5; // rdi
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  char *v12; // rcx
  int v13; // r12d
  struct _UNICODE_STRING v14; // xmm6
  int v15; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  struct _UNICODE_STRING v17; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[6]; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF

  v4 = *(_QWORD *)this;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 1);
  Object = 0LL;
  v8 = SGDGetUserSessionState(this, a2, a3, a4);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v8 + 16840) + 1296LL)) )
    return 0LL;
  v12 = *(char **)(v4 + 32);
  v13 = 0;
  v14 = 0LL;
  if ( v12 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(v12, 3u, *(_DWORD *)(v4 + 192) == 0, &Object);
    if ( (int)result < 0 )
      return result;
    v5 = Object;
    v14 = *(struct _UNICODE_STRING *)((char *)Object + 280);
  }
  else
  {
    v13 = 1;
  }
  CIVSerializer::CIVSerializer(v18, 3LL, v9, v10);
  v18[0] = &CIVGenericSerializer::`vftable';
  if ( v18[2] )
  {
    v17 = v14;
    v15 = IVMeasureRimCompleteFrame(
            (struct RIMCOMPLETEFRAME *)v4,
            (const struct CPointerRawData **)v6,
            &v17,
            (struct CIVTouchSerializer *)v18);
    if ( v15 >= 0 )
    {
      v15 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v18);
      if ( v15 >= 0 )
      {
        *(union _LARGE_INTEGER *)(v4 + 184) = gliQpcFreq;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v17 = v14;
        *(LARGE_INTEGER *)(v4 + 112) = PerformanceCounter;
        v15 = IVSerializeRimCompleteFrameForTouchInputPacket(
                (struct RIMCOMPLETEFRAME *)v4,
                (struct CPointerInputFrame *)v6,
                &v17,
                v13,
                (struct CIVTouchSerializer *)v18);
        if ( v15 >= 0 )
        {
          InputTraceLogging::Pointer::SendFrameToContainer(
            *(struct RIMDEV *const *)(*(_QWORD *)(v6 + 256) + 16LL),
            (const struct CPointerInputFrame *)v6);
          v15 = ivrIVSend((const struct CIVSerializer *)v18, 2u, (IVRootDeliver::Pointer *)((char *)this + 16));
        }
      }
    }
  }
  else
  {
    v15 = -1073741801;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  v18[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v18);
  return (unsigned int)v15;
}
