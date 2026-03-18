/*
 * XREFs of ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0083200
 * Callers:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0083180 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Initialize@DelayZoneTelemetry@@QEAAXKK@Z @ 0x1C0083310 (-Initialize@DelayZoneTelemetry@@QEAAXKK@Z.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0086ABC (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0086B34 (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall DelayZonePalmRejection::Initialize(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection *v1; // rdi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  char v5; // bp
  DelayZoneTelemetry *v6; // rcx
  PVOID v7; // rsi
  __int64 Pool2; // rbx
  int v9; // r8d
  __int64 v10; // rax
  int v11; // edx
  _OWORD v12[5]; // [rsp+40h] [rbp-F8h] BYREF
  PVOID BackTrace[20]; // [rsp+90h] [rbp-A8h] BYREF

  v1 = DelayZonePalmRejection::s_instance;
  DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection::s_instance);
  memset(v12, 0, 0x48uLL);
  v2 = v12[1];
  *(_OWORD *)v1 = v12[0];
  v3 = v12[2];
  *((_OWORD *)v1 + 1) = v2;
  v4 = v12[3];
  *((_OWORD *)v1 + 2) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v12[4];
  *((_OWORD *)v1 + 3) = v4;
  *((_QWORD *)v1 + 8) = v3;
  *((_QWORD *)v1 + 3) = 0LL;
  CInpLockGuard::Initialize((DelayZonePalmRejection *)((char *)v1 + 112));
  *((_DWORD *)v1 + 23) = 0;
  *((_QWORD *)v1 + 10) = (char *)v1 + 72;
  v5 = 1;
  *((_QWORD *)v1 + 9) = (char *)v1 + 72;
  v6 = (DelayZoneTelemetry *)*((_QWORD *)v1 + 16);
  *((_DWORD *)v1 + 22) = 1;
  if ( v6 )
  {
    DelayZoneTelemetry::Initialize(v6, *((_DWORD *)v1 + 26), *((_DWORD *)v1 + 25));
    return;
  }
  v7 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A647355) != 0x7A647355
    || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_3:
    Pool2 = ExAllocatePool2(260LL, 12304LL);
LABEL_4:
    if ( !Pool2 )
      goto LABEL_15;
LABEL_5:
    DelayZoneTelemetry::Initialize((DelayZoneTelemetry *)Pool2, *((_DWORD *)v1 + 26), *((_DWORD *)v1 + 25));
    *((_QWORD *)v1 + 16) = Pool2;
    return;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 2053403477 )
  {
    if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_3;
  }
  Pool2 = ExAllocatePool2(260LL, 12320LL);
  if ( !Pool2 )
    goto LABEL_15;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v7,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
    goto LABEL_4;
  }
  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          v7,
                          Pool2,
                          BackTrace) )
    goto LABEL_5;
LABEL_14:
  ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_15:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 23;
    LOBYTE(v11) = v5;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      23,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
  }
}
