/*
 * XREFs of RIMInitializeDeadzone @ 0x1C01940B0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimDestroyDeadzone @ 0x1C018F0F4 (rimDestroyDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C01A23E4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 RIMInitializeDeadzone()
{
  int v0; // esi
  PVOID v1; // rdi
  __int64 v2; // rax
  __int64 Pool2; // rbx
  RIMDeadzone *v4; // rdi
  PDEVICE_OBJECT *v5; // rdx
  PDEVICE_OBJECT *v6; // rdx
  _UNKNOWN **v7; // r8
  _UNKNOWN **v8; // r8
  PVOID BackTrace[20]; // [rsp+40h] [rbp-A8h] BYREF

  v0 = 0;
  RIMLockExclusive((__int64)&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    ++*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1);
    goto LABEL_37;
  }
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A645052) != 0x7A645052
    || (v2 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, 64LL);
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v2) != 2053394514 )
  {
    if ( ++v2 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  Pool2 = ExAllocatePool2(260LL, 80LL);
  if ( !Pool2 )
    goto LABEL_13;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v1,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_24;
    Pool2 += 16LL;
LABEL_7:
    v4 = (RIMDeadzone *)Pool2;
    if ( !Pool2 )
      goto LABEL_8;
LABEL_17:
    memset((void *)Pool2, 0, 0x40uLL);
    v0 = RIMDeadzone::Initialize((RIMDeadzone *)Pool2);
    if ( v0 < 0 )
    {
      v6 = &WPP_GLOBAL_Control;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v8 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v6,
          (_DWORD)v8,
          (_DWORD)gRimLog,
          3,
          1,
          13,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
      }
      RIMDeadzone::Release((RIMDeadzone *)Pool2);
      rimDestroyDeadzone();
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
      v4 = 0LL;
    }
    goto LABEL_35;
  }
  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
         (__int64)v1,
         Pool2,
         (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
    v4 = (RIMDeadzone *)Pool2;
    goto LABEL_17;
  }
LABEL_24:
  ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_13:
  v4 = 0LL;
LABEL_8:
  v5 = &WPP_GLOBAL_Control;
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v5,
      (_DWORD)v7,
      (_DWORD)gRimLog,
      3,
      1,
      12,
      (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
  }
  v0 = -1073741801;
LABEL_35:
  RIMDeadzone::s_pRimDeadzoneInstance = v4;
LABEL_37:
  qword_1C029A168 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v0;
}
