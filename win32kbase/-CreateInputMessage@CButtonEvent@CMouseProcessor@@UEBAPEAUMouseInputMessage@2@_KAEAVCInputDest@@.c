/*
 * XREFs of ?CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C022BA50
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022A798 (--0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDelive.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::CButtonEvent::CreateInputMessage(
        CMouseProcessor::CButtonEvent *this,
        unsigned __int64 a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  __int64 v6; // rsi
  int v7; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  unsigned int v13; // r10d
  __int64 v14; // r11
  unsigned int v16; // [rsp+38h] [rbp-99h] BYREF
  unsigned __int64 v17[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v18; // [rsp+58h] [rbp-79h] BYREF
  __int64 v19; // [rsp+60h] [rbp-71h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-69h] BYREF

  v4 = gpLeakTrackingAllocator;
  v6 = 0LL;
  v16 = 1886539088;
  v18 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v19 = 392LL;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
        return (struct CMouseProcessor::MouseInputMessage *)v6;
      v17[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886539088, v17) )
      {
        v17[0] = (unsigned __int64)&v18;
        v17[1] = (unsigned __int64)&v16;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v4,
                                                                                           (__int64)v17,
                                                                                           &v19);
        goto LABEL_16;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v14, 408LL, v13);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return (struct CMouseProcessor::MouseInputMessage *)v6;
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v4,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v17[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          return CMouseProcessor::ButtonInputMessage::ButtonInputMessage(
                   (CMouseProcessor::ButtonInputMessage *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                   this,
                   a2,
                   a3,
                   a4);
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v4,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v17[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_16;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return (struct CMouseProcessor::MouseInputMessage *)v6;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70724D50u) )
      return (struct CMouseProcessor::MouseInputMessage *)v6;
    Pool2 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 408LL, v16);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
          *Pool2 = 1886539088LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v4 + 1),
        0x70724D50uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       392LL,
                                                                                       1886539088LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
  }
LABEL_16:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return CMouseProcessor::ButtonInputMessage::ButtonInputMessage(
             (CMouseProcessor::ButtonInputMessage *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
             this,
             a2,
             a3,
             a4);
  return (struct CMouseProcessor::MouseInputMessage *)v6;
}
