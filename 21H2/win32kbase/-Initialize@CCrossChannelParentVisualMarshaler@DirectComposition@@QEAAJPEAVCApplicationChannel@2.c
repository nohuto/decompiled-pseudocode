/*
 * XREFs of ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C00029E8
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0002720 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0013E10 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C009B100 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  int v8; // r14d
  _DWORD *v9; // rbp
  __int64 Pool2; // rdi
  __int64 v12; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)a1);
  if ( v8 >= 0 )
  {
    *(_DWORD *)(a1 + 16) |= 0x2000002u;
    v9 = gpLeakTrackingAllocator;
    *(_DWORD *)(a1 + 112) = 1065353216;
    v8 = 0;
    *(_DWORD *)(a1 + 116) = 1065353216;
    if ( (v9[10] & 0x76634344) == 0x76634344 && (v12 = 0LL, v9[11]) )
    {
      while ( v9[v12] != 1986216772 )
      {
        if ( ++v12 >= (unsigned __int64)(unsigned int)v9[11] )
          goto LABEL_3;
      }
      Pool2 = ExAllocatePool2(261LL, 32LL);
      if ( !Pool2 )
        goto LABEL_9;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v9,
                                 Pool2,
                                 BackTrace) )
        {
LABEL_18:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_9;
        }
LABEL_5:
        *(_DWORD *)(Pool2 + 8) = 0;
        goto LABEL_6;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v9,
                               Pool2,
                               BackTrace) )
        goto LABEL_18;
      Pool2 += 16LL;
    }
    else
    {
LABEL_3:
      Pool2 = ExAllocatePool2(261LL, 16LL);
    }
    if ( !Pool2 )
    {
LABEL_9:
      Pool2 = 0LL;
LABEL_6:
      *(_QWORD *)(a1 + 384) = Pool2;
      if ( Pool2 )
      {
        DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a3);
        *(_DWORD *)(*(_QWORD *)(a1 + 384) + 12LL) = a4;
        *(_DWORD *)(*(_QWORD *)(a1 + 384) + 8LL) = a3;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return (unsigned int)v8;
    }
    goto LABEL_5;
  }
  return (unsigned int)v8;
}
