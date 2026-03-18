/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C0085318
 * Callers:
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C0084E24 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C0085140 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00853EC (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  int v3; // edi
  __int64 v5; // r14
  PVOID v7; // rbp
  __int64 Pool2; // rbx
  __int64 v9; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = 0;
  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12) )
  {
    v3 = CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Grow();
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
    return (unsigned int)-1073741823;
  v7 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x32644344) == 0x32644344
    && (v11 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v11) != 845431620 )
    {
      if ( ++v11 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 28LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v7,
                               Pool2,
                               BackTrace) )
      {
LABEL_19:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (unsigned int)-1073741801;
      }
      goto LABEL_7;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v7,
                             Pool2,
                             BackTrace) )
      goto LABEL_19;
    Pool2 += 16LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 12LL);
  }
  if ( !Pool2 )
    return (unsigned int)-1073741801;
LABEL_7:
  *(_QWORD *)Pool2 = *(_QWORD *)a2;
  *(_DWORD *)(Pool2 + 8) = *(_DWORD *)(a2 + 8);
  v9 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v9 > (unsigned int)v5 )
  {
    v12 = 8 * v9;
    do
    {
      v9 = (unsigned int)(v9 - 1);
      *(_QWORD *)(v12 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v9);
      v12 -= 8LL;
    }
    while ( (unsigned int)v9 > (unsigned int)v5 );
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = Pool2;
  ++*(_DWORD *)(a1 + 8);
  return (unsigned int)v3;
}
