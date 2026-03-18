/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C0199C38
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C018DB94 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C01B5628 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00438D8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0043DEC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIsLegacyDevice @ 0x1C0199FB4 (RIMIsLegacyDevice.c)
 *     RIMSearchHidTLCInfo @ 0x1C019A000 (RIMSearchHidTLCInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAllocateAndLinkHidTLCInfo(unsigned __int16 a1, unsigned __int16 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  PVOID v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  __int64 Pool2; // rbx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rax
  PVOID BackTrace[20]; // [rsp+40h] [rbp-B8h] BYREF
  char v20; // [rsp+110h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v20,
    (struct _KTHREAD **)&gTLCInfoLock);
  v7 = 0LL;
  if ( (unsigned int)RIMIsLegacyDevice(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( RIMSearchHidTLCInfo(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) != 0x70707352
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_9:
    Pool2 = ExAllocatePool2(260LL, 48LL);
    goto LABEL_10;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1886417746 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_9;
  }
  Pool2 = ExAllocatePool2(260LL, 64LL);
  if ( !Pool2 )
    goto LABEL_11;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v11,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_25;
    Pool2 += 16LL;
LABEL_10:
    if ( Pool2 )
      goto LABEL_21;
LABEL_11:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v15,
        (_DWORD)gRimLog,
        3,
        1,
        10,
        (__int64)&WPP_7d761a7d56943d27f6e74f7be67cf203_Traceguids);
    }
    goto LABEL_33;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v11,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_25:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_11;
  }
LABEL_21:
  *(_WORD *)(Pool2 + 16) = a1;
  *(_WORD *)(Pool2 + 18) = a2;
  v16 = RawInputManagerObject::gHidRequestTable;
  if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 8) = &RawInputManagerObject::gHidRequestTable;
  *(_QWORD *)Pool2 = v16;
  *(_QWORD *)(v16 + 8) = Pool2;
  v17 = qword_1C029A1A0;
  RawInputManagerObject::gHidRequestTable = Pool2;
  while ( (__int64 *)v17 != &qword_1C029A1A0 )
  {
    if ( *(_WORD *)(v17 + 16) == a1 )
    {
      *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(v17 + 20);
      break;
    }
    v17 = *(_QWORD *)v17;
  }
  v7 = Pool2;
LABEL_33:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v20);
  return v7;
}
