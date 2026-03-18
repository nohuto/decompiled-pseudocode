/*
 * XREFs of ?CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C01F9CC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0WheelInputMessage@CMouseProcessor@@QEAA@AEBVCWheelEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F9020 (--0WheelInputMessage@CMouseProcessor@@QEAA@AEBVCWheelEvent@1@_KAEAVCInputDest@@AEBUInputDelivery.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::CWheelEvent::CreateInputMessage(
        CMouseProcessor::CWheelEvent *this,
        __int64 a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  PVOID v4; // rsi
  __int64 v6; // rdi
  __int64 v10; // rax
  __int64 Pool2; // rbx
  PVOID BackTrace[20]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = gpLeakTrackingAllocator;
  v6 = 0LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70724D50) == 0x70724D50
    && (v10 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1886539088 )
    {
      if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 392LL);
    if ( !Pool2 )
      return (struct CMouseProcessor::MouseInputMessage *)v6;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
              (__int64)v4,
              Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_12:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (struct CMouseProcessor::MouseInputMessage *)v6;
      }
      return CMouseProcessor::WheelInputMessage::WheelInputMessage(
               (CMouseProcessor::WheelInputMessage *)Pool2,
               this,
               a2,
               a3,
               a4);
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v4,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_12;
    Pool2 += 16LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 376LL);
  }
  if ( Pool2 )
    return CMouseProcessor::WheelInputMessage::WheelInputMessage(
             (CMouseProcessor::WheelInputMessage *)Pool2,
             this,
             a2,
             a3,
             a4);
  return (struct CMouseProcessor::MouseInputMessage *)v6;
}
