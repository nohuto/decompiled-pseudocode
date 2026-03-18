/*
 * XREFs of ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1C01F3934
 * Callers:
 *     NtMITConfigureVirtualTouchpad @ 0x1C0154140 (NtMITConfigureVirtualTouchpad.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CFD24 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct VirtualTouchpadProcessor *__fastcall VirtualTouchpadProcessor::GetInstance(char a1)
{
  __int64 Pool2; // rbx
  PVOID v2; // rdi
  __int64 v3; // rax
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  Pool2 = (__int64)VirtualTouchpadProcessor::s_instance;
  if ( !VirtualTouchpadProcessor::s_instance && a1 )
  {
    v2 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70747655) == 0x70747655
      && (v3 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v3) != 1886680661 )
      {
        if ( ++v3 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_7;
      }
      Pool2 = ExAllocatePool2(260LL, 104LL);
      if ( !Pool2 )
        goto LABEL_14;
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v2,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_13:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_14;
        }
LABEL_9:
        *(_DWORD *)(Pool2 + 16) = 0;
        *(_DWORD *)(Pool2 + 84) = 1000;
        *(_QWORD *)(Pool2 + 8) = Pool2;
        *(_QWORD *)Pool2 = Pool2;
        *(_BYTE *)(Pool2 + 20) = 1;
LABEL_15:
        VirtualTouchpadProcessor::s_instance = (PVOID)Pool2;
        return (struct VirtualTouchpadProcessor *)Pool2;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v2,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_13;
      Pool2 += 16LL;
    }
    else
    {
LABEL_7:
      Pool2 = ExAllocatePool2(260LL, 88LL);
    }
    if ( !Pool2 )
    {
LABEL_14:
      Pool2 = 0LL;
      goto LABEL_15;
    }
    goto LABEL_9;
  }
  return (struct VirtualTouchpadProcessor *)Pool2;
}
