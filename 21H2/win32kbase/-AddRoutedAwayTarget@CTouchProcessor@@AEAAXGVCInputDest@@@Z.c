/*
 * XREFs of ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01BD784
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01C8094 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall CTouchProcessor::AddRoutedAwayTarget(CTouchProcessor *a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rbp
  PVOID v5; // rdi
  __int64 v6; // rcx
  __int64 Pool2; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_17;
  v5 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6E616D55) != 0x6E616D55
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, 136LL);
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1851878741 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  Pool2 = ExAllocatePool2(260LL, 152LL);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
              (__int64)v5,
              Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_13:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_17;
      }
LABEL_8:
      CInputDest::operator=(Pool2 + 16, (__int64)a3);
      v8 = (__int64 *)((char *)NodeById + 280);
      v9 = *((_QWORD *)NodeById + 35);
      if ( *(struct CInputPointerNode **)(v9 + 8) != (struct CInputPointerNode *)((char *)NodeById + 280) )
        __fastfail(3u);
      *(_QWORD *)Pool2 = v9;
      *(_QWORD *)(Pool2 + 8) = v8;
      *(_QWORD *)(v9 + 8) = Pool2;
      *v8 = Pool2;
      goto LABEL_17;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v5,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_13;
    Pool2 += 16LL;
LABEL_7:
    if ( !Pool2 )
      goto LABEL_17;
    goto LABEL_8;
  }
LABEL_17:
  CInputDest::SetEmpty(a3);
}
