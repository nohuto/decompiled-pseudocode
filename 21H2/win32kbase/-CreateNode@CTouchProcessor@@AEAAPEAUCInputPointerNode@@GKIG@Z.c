/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01C381C
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8E38 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C01C91D8 (-GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C01C9294 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C01C92F4 (-GetNextRootPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01D50CC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5)
{
  unsigned int v6; // r14d
  __int16 v7; // r12
  PDEVICE_OBJECT v9; // rcx
  char v10; // bl
  PVOID v11; // rsi
  __int64 v12; // rax
  __int64 Pool2; // rdi
  unsigned __int16 NextRootPointerId; // ax
  PDEVICE_OBJECT v15; // rcx
  __int16 v16; // ax
  struct _KTHREAD **v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  int v23; // r8d
  __int64 *v24; // rax
  struct _KTHREAD *v25; // rcx
  struct _KTHREAD ***v26; // rax
  struct _KTHREAD *v27; // rcx
  PVOID BackTrace[20]; // [rsp+50h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = WPP_GLOBAL_Control;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      231,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
  if ( v6 < 2 || v6 > 3 && v6 != 5 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        232,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
        v6);
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( !(_BYTE)a2 && !v10 )
      return 0LL;
    v16 = 233;
    goto LABEL_101;
  }
  v11 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70697355) != 0x70697355
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_20:
    Pool2 = ExAllocatePool2(260LL, 304LL);
    goto LABEL_21;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1885958997 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_20;
  }
  Pool2 = ExAllocatePool2(260LL, 320LL);
  if ( !Pool2 )
    goto LABEL_22;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v11,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_36;
    Pool2 += 16LL;
LABEL_21:
    if ( Pool2 )
      goto LABEL_32;
    goto LABEL_22;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v11,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_36:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_22:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        234,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( !(_BYTE)a2 && !v10 )
      return 0LL;
    v16 = 235;
LABEL_101:
    LOBYTE(a3) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v15->AttachedDevice,
      a2,
      a3,
      v15->DeviceExtension,
      5,
      7,
      v16,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    return 0LL;
  }
LABEL_32:
  if ( isRootPartition() )
  {
    NextRootPointerId = CTouchProcessor::GetNextRootPointerId((CTouchProcessor *)this);
  }
  else if ( isChildPartition() )
  {
    NextRootPointerId = CTouchProcessor::GetNextChildPointerId((CTouchProcessor *)this, a5);
  }
  else
  {
    NextRootPointerId = CTouchProcessor::GetNextPointerId((CTouchProcessor *)this);
  }
  *(_WORD *)(Pool2 + 32) = NextRootPointerId;
  v17 = (struct _KTHREAD **)(Pool2 + 16);
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)(Pool2 + 264) = Pool2 + 256;
  *(_QWORD *)(Pool2 + 256) = Pool2 + 256;
  *(_QWORD *)Pool2 = Pool2;
  *(_QWORD *)(Pool2 + 248) = Pool2 + 240;
  *(_QWORD *)(Pool2 + 240) = Pool2 + 240;
  *(_QWORD *)(Pool2 + 288) = Pool2 + 280;
  *(_QWORD *)(Pool2 + 280) = Pool2 + 280;
  v18 = *(_DWORD *)(Pool2 + 300) & 0xFFFFF4BF;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
  *(_DWORD *)(Pool2 + 300) = v18 | 0x480;
  *(_WORD *)(Pool2 + 34) = v7;
  *(_DWORD *)(Pool2 + 60) = v6;
  *(_WORD *)(Pool2 + 272) = 0;
  *(_DWORD *)(Pool2 + 56) = 0;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState((CTouchProcessor *)this, a4, (struct CInputPointerNode *)Pool2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v23,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        236,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( !(_BYTE)a2 && !v10 )
      return 0LL;
    v16 = 237;
    goto LABEL_101;
  }
  if ( *(_DWORD *)(Pool2 + 56) == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
  v24 = (__int64 *)(this + 8);
  v25 = this[8];
  if ( *((struct _KTHREAD ***)v25 + 1) != this + 8
    || (*(_QWORD *)(Pool2 + 8) = v24,
        *(_QWORD *)Pool2 = v25,
        *((_QWORD *)v25 + 1) = Pool2,
        *v24 = Pool2,
        v26 = (struct _KTHREAD ***)(this + 10),
        v27 = this[10],
        *((struct _KTHREAD ***)v27 + 1) != this + 10) )
  {
    __fastfail(3u);
  }
  *v17 = v27;
  *(_QWORD *)(Pool2 + 24) = v26;
  *((_QWORD *)v27 + 1) = v17;
  *v26 = v17;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v19 || v10 )
  {
    LOBYTE(v21) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v21,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      238,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  return (struct CInputPointerNode *)Pool2;
}
