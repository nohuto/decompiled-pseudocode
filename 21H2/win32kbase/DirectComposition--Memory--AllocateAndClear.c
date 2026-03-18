/*
 * XREFs of DirectComposition::Memory::AllocateAndClear @ 0x1C005FAB0
 * Callers:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C02137E8 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C02138B0 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C0213984 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C0213A5C (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C021FF00 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0220030 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::Memory::AllocateAndClear(unsigned __int64 a1, int a2, char a3)
{
  PVOID v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax
  char v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 Pool2; // rdi
  __int64 v14; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = gpLeakTrackingAllocator;
  v4 = 0LL;
  v5 = a2 & *((_DWORD *)gpLeakTrackingAllocator + 10);
  if ( a3 )
  {
    if ( v5 == a2 )
    {
      v9 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != a2 )
        {
          if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_3;
        }
        v10 = 0;
        if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
        {
          v10 = 1;
          a1 += 16LL;
        }
        v11 = a1;
        v12 = 261LL;
        goto LABEL_16;
      }
    }
LABEL_3:
    v6 = a1;
    v7 = 261LL;
    return ExAllocatePool2(v7, v6);
  }
  if ( v5 != a2 || (v14 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_25:
    v6 = a1;
    v7 = 260LL;
    return ExAllocatePool2(v7, v6);
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != a2 )
  {
    if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_25;
  }
  v10 = 0;
  if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
  {
    v10 = 1;
    a1 += 16LL;
  }
  v11 = a1;
  v12 = 260LL;
LABEL_16:
  Pool2 = ExAllocatePool2(v12, v11);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v3,
                              Pool2,
                              BackTrace) )
        return Pool2 + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v3,
                                 Pool2,
                                 BackTrace) )
    {
      return Pool2;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v4;
}
