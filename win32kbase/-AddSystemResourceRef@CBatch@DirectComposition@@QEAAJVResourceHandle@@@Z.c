/*
 * XREFs of ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0069814
 * Callers:
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C006A0C0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C006AF08 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0061AD0 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C0068700 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CBatch::AddSystemResourceRef(__int64 a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rsi
  unsigned int v3; // r14d
  __int64 v4; // r13
  int v7; // eax
  __int64 UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  __int64 v11; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v14; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+130h] [rbp+77h] BYREF
  __int64 v16; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v16 = 260LL;
  v14 = 1919042372;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v11 = 16LL;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
        return (unsigned int)-1073741801;
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x72624344u, &v15) )
      {
        v12[0] = &v16;
        v12[1] = &v14;
        UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                                                                                           (__int64)v2,
                                                                                           (__int64)v12,
                                                                                           &v11);
        goto LABEL_4;
      }
      UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = ExAllocatePool2(
                                                                                         261LL,
                                                                                         32LL,
                                                                                         1919042372LL);
      if ( !UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
        return (unsigned int)-1073741801;
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v2,
                                UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                                v15,
                                BackTrace) )
          goto LABEL_5;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v2,
                                   UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                                   v15,
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 += 16LL;
        goto LABEL_4;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64);
      return (unsigned int)-1073741801;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x72624344u) )
      return (unsigned int)-1073741801;
    Pool2 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFCuLL | 1, 32LL, v14);
    UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
          *Pool2 = 1919042372LL,
          UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v2 + 1),
        (const void *)0x72624344);
    }
  }
  else
  {
    UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = ExAllocatePool2(
                                                                                       261LL,
                                                                                       16LL,
                                                                                       1919042372LL);
    if ( UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
  }
LABEL_4:
  if ( !UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
    return (unsigned int)-1073741801;
LABEL_5:
  DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(v4 + 40), a2);
  *(_DWORD *)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 + 8) = a2;
  *(_QWORD *)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64;
  return v3;
}
