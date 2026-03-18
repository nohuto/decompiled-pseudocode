/*
 * XREFs of ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x1C01F7AE8
 * Callers:
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C01F7F88 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall DelayZoneTelemetry::AddInputPanelRectToList(DelayZoneTelemetry *this, struct tagRECT *a2)
{
  char *v2; // rdi
  char *v3; // rax
  __int64 v5; // rcx
  PVOID v6; // rsi
  __int64 v7; // rax
  __int64 Pool2; // rbx
  __int64 v9; // rax
  struct tagRECT v10; // [rsp+20h] [rbp-B8h]
  PVOID BackTrace[20]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = (char *)this + 12288;
  v3 = (char *)*((_QWORD *)this + 1536);
  v10 = *a2;
  while ( v3 != v2 )
  {
    v5 = *((_QWORD *)v3 + 2) - *(_QWORD *)&v10.left;
    if ( !v5 )
      v5 = *((_QWORD *)v3 + 3) - *(_QWORD *)&v10.right;
    if ( !v5 )
      return;
    v3 = *(char **)v3;
  }
  v6 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A647355) != 0x7A647355
    || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_11:
    Pool2 = ExAllocatePool2(260LL, 32LL);
    goto LABEL_12;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 2053403477 )
  {
    if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_11;
  }
  Pool2 = ExAllocatePool2(260LL, 48LL);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
              (__int64)v6,
              Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_18:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return;
      }
      goto LABEL_13;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v6,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_18;
    Pool2 += 16LL;
LABEL_12:
    if ( !Pool2 )
      return;
LABEL_13:
    *(struct tagRECT *)(Pool2 + 16) = *a2;
    v9 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = v9;
    *(_QWORD *)(Pool2 + 8) = v2;
    *(_QWORD *)(v9 + 8) = Pool2;
    *(_QWORD *)v2 = Pool2;
  }
}
