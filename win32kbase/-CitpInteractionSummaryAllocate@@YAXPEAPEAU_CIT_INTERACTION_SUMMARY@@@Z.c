/*
 * XREFs of ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00C21FC
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B67C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0272BF0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpInteractionSummaryAllocate(struct _CIT_INTERACTION_SUMMARY **a1, const char *a2)
{
  __int64 v2; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  unsigned __int64 v5; // r14
  int v6; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int16 v8; // si
  _QWORD *Pool2; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  char v12; // r15
  __int64 v13; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v16; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v17; // [rsp+130h] [rbp+77h] BYREF
  __int64 v18; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = (unsigned __int16)dword_1C02D4D9C;
  v3 = gpLeakTrackingAllocator;
  v16 = 1231254357;
  v18 = 260LL;
  v5 = (unsigned __int16)dword_1C02D4D9C;
  v13 = (unsigned __int16)dword_1C02D4D9C;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v6 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x49637355u)
        || v2 + 16 <= v5 )
      {
        goto LABEL_25;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, v2 + 16, v16);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
            *Pool2 = 1231254357LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v3 + 1),
          (const void *)0x49637355);
      }
      goto LABEL_4;
    }
    if ( v6 != 2 )
      goto LABEL_25;
    v17 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, &v17) )
    {
      v14[0] = &v18;
      v14[1] = &v16;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                         (__int64)v3,
                                                                                         (__int64)v14,
                                                                                         &v13);
      goto LABEL_4;
    }
    v12 = 0;
    if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
    {
      v10 += 16LL;
      v12 = 1;
      v13 = v10;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       v11,
                                                                                       v10,
                                                                                       1231254357LL);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_25;
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v12
      && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v3,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v17,
                              BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_4;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v3,
                                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                 v17,
                                 BackTrace) )
    {
      goto LABEL_5;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    goto LABEL_25;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     (unsigned __int16)dword_1C02D4D9C,
                                                                                     1231254357LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
LABEL_4:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_5:
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    v8 = (*(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 100) ^ (4 * v2)) & 0x7FFC;
    *a1 = (struct _CIT_INTERACTION_SUMMARY *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 100) ^= v8;
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 160) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 176;
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 168) = v5 - 176;
    return;
  }
LABEL_25:
  CitpLogFailureWorker(-1073741670, a2, 0x7D5u);
}
