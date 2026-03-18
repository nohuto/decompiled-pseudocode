/*
 * XREFs of ?Create@CSystemResourceReference@CBatch@DirectComposition@@SAJVResourceHandle@@PEAVCApplicationChannel@3@PEAPEAV123@@Z @ 0x1C0013D70
 * Callers:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0013D2C (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0013E10 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CBatch::CSystemResourceReference::Create(
        unsigned int a1,
        __int64 a2,
        __int64 *a3)
{
  PVOID v3; // rbp
  unsigned int v5; // esi
  __int64 Pool2; // rdi
  __int64 v10; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = gpLeakTrackingAllocator;
  v5 = 0;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72624344) != 0x72624344
    || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(261LL, 16LL);
LABEL_3:
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1919042372 )
  {
    if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(261LL, 32LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v3,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v3,
                           Pool2,
                           BackTrace) )
  {
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)-1073741801;
  }
LABEL_4:
  DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a1);
  *(_DWORD *)(Pool2 + 8) = a1;
  *a3 = Pool2;
  return v5;
}
