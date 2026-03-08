/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C005EE98
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005DAA4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z @ 0x1C0060A74 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0060E20 (NtDCompositionSubmitDWMBatch.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  void *QuotaZInit; // rax
  __int64 Pool2; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rsi
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // r10
  __int64 v14; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v17; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v18; // [rsp+130h] [rbp+77h] BYREF
  __int64 v19; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) != 3 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v6, v5, 0xA0uLL, 0x61624344u);
LABEL_3:
    Pool2 = (__int64)QuotaZInit;
    goto LABEL_4;
  }
  v10 = gpLeakTrackingAllocator;
  v19 = 260LL;
  v17 = 1633829700;
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  v14 = 160LL;
  if ( !v11 )
  {
    Pool2 = ExAllocatePool2(260LL, 160LL, 1633829700LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
    goto LABEL_4;
  }
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      v18 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x61624344u, &v18) )
      {
        v15[0] = &v19;
        v15[1] = &v17;
        QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                               v10,
                               v15,
                               &v14);
        goto LABEL_3;
      }
      Pool2 = ExAllocatePool2(v13, 176LL, 1633829700LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v10,
                                  Pool2,
                                  v18,
                                  BackTrace) )
            goto LABEL_4;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v10,
                                     Pool2,
                                     v18,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_24;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x61624344u) )
  {
LABEL_24:
    Pool2 = 0LL;
    goto LABEL_4;
  }
  v12 = (_QWORD *)ExAllocatePool2(v19 & 0xFFFFFFFFFFFFFFFDuLL, 176LL, v17);
  Pool2 = (__int64)v12;
  if ( !v12
    || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
        *v12 = 1633829700LL,
        Pool2 = (__int64)(v12 + 2),
        v12 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v10 + 1),
      (const void *)0x61624344);
  }
LABEL_4:
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = this;
    *(_QWORD *)(Pool2 + 120) = &DirectComposition::CBatch::CBatchListProxy::`vftable';
    *(_DWORD *)(Pool2 + 20) = 7;
    *(_QWORD *)(Pool2 + 128) = Pool2;
    *a2 = (struct DirectComposition::CBatch *)Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
