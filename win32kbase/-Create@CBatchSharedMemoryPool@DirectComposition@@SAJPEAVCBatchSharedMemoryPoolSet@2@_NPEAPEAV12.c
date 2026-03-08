/*
 * XREFs of ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005E2BC
 * Callers:
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C005DDBC (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z @ 0x1C0060A74 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C00614C8 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::Create(
        struct DirectComposition::CBatchSharedMemoryPoolSet *a1,
        char a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3)
{
  NTSTATUS v6; // r14d
  unsigned __int64 v7; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  void *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rax
  __int64 Pool2; // rbx
  PVOID v11; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v13; // rdi
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // r10
  PVOID Section; // [rsp+40h] [rbp-C0h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v25; // [rsp+168h] [rbp+68h] BYREF

  Section = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  v21 = 4096LL;
  v6 = MmCreateSection(&Section, 6LL, 0LL, &v21, 4, 138412032, 0LL, 0LL);
  if ( v6 < 0 )
    goto LABEL_28;
  v6 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
  if ( v6 < 0 )
    goto LABEL_28;
  if ( !a2 )
  {
    v13 = gpLeakTrackingAllocator;
    v25 = 1935819588;
    v20 = 260LL;
    v23 = 72LL;
    v14 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, 72LL, 1935819588LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v13 + 14);
      goto LABEL_6;
    }
    if ( v14 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73624344u) )
      {
        v15 = (_QWORD *)ExAllocatePool2(v20 & 0xFFFFFFFFFFFFFFFDuLL, 88LL, v25);
        Pool2 = (__int64)v15;
        if ( !v15
          || (_InterlockedIncrement64((volatile signed __int64 *)v13 + 14),
              *v15 = 1935819588LL,
              Pool2 = (__int64)(v15 + 2),
              v15 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v13 + 1),
            (const void *)0x73624344);
        }
        goto LABEL_6;
      }
    }
    else if ( v14 == 2 )
    {
      v19[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73624344u, v19) )
      {
        v19[0] = (unsigned __int64)&v20;
        v19[1] = (unsigned __int64)&v25;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                   v13,
                                                                                                   v19,
                                                                                                   &v23);
        goto LABEL_5;
      }
      Pool2 = ExAllocatePool2(v16, 88LL, 1935819588LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v13 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v13,
                                  Pool2,
                                  v19[0],
                                  BackTrace) )
            goto LABEL_6;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v13,
                                     Pool2,
                                     v19[0],
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_6;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v13 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    Pool2 = 0LL;
    goto LABEL_6;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                                     v8,
                                                                                     v7,
                                                                                     0x48uLL,
                                                                                     0x73624344u);
LABEL_5:
  Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
LABEL_6:
  if ( Pool2 )
  {
    v11 = MappedBase;
    *(_QWORD *)(Pool2 + 24) = Section;
    *(_QWORD *)(Pool2 + 56) = v11;
    *(_QWORD *)(Pool2 + 16) = a1;
    *a3 = (struct DirectComposition::CBatchSharedMemoryPool *)Pool2;
    return (unsigned int)v6;
  }
  v6 = -1073741801;
LABEL_28:
  if ( MappedBase )
    MmUnmapViewInSessionSpace(MappedBase);
  if ( Section )
    ObfDereferenceObject(Section);
  return (unsigned int)v6;
}
