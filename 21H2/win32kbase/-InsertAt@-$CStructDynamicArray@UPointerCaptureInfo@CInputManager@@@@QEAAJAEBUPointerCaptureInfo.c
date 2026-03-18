/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C023C318
 * Callers:
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C023C5E0 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?Grow@?$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C018ED5C (-Grow@-$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  int v3; // ebx
  __int64 v5; // r14
  PVOID v7; // rbp
  __int64 v8; // rax
  __int64 Pool2; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = 0;
  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12) )
  {
    v3 = CDynamicArray<tagHPD_ACTIVE_DEVICE *,2003858261>::Grow(a1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
    return (unsigned int)-1073741823;
  v7 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x32644344) == 0x32644344
    && (v8 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 845431620 )
    {
      if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_9;
    }
    Pool2 = ExAllocatePool2(260LL, 24LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v7,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_15;
      }
      goto LABEL_22;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v7,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_22:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return (unsigned int)-1073741801;
    }
    Pool2 += 16LL;
  }
  else
  {
LABEL_9:
    Pool2 = ExAllocatePool2(260LL, 8LL);
  }
  if ( !Pool2 )
    return (unsigned int)-1073741801;
LABEL_15:
  *(_QWORD *)Pool2 = *a2;
  v10 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v10 > (unsigned int)v5 )
  {
    v11 = 8 * v10;
    do
    {
      v10 = (unsigned int)(v10 - 1);
      *(_QWORD *)(v11 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v10);
      v11 -= 8LL;
    }
    while ( (unsigned int)v10 > (unsigned int)v5 );
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = Pool2;
  ++*(_DWORD *)(a1 + 8);
  return (unsigned int)v3;
}
