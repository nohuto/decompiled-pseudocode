/*
 * XREFs of ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C00B1A84
 * Callers:
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00B14F0 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C0273378 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall CitpStringDuplicate(unsigned __int16 **a1, const unsigned __int16 *a2, __int64 a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  size_t v6; // r15
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  unsigned int v12; // edx
  __int64 v13; // r10
  char v14; // si
  signed __int32 v15[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v16; // [rsp+20h] [rbp-99h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v21; // [rsp+138h] [rbp+7Fh] BYREF

  if ( !a2 || !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  v5 = gpLeakTrackingAllocator;
  v6 = 2 * a3;
  v7 = 2 * a3 + 2;
  v20 = 1231254357;
  v16 = 260LL;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  v17 = v7;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x49637355u)
        || v7 + 16 < v7 )
      {
        return 3221225626LL;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v20);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
            *Pool2 = 1231254357LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v5 + 1),
          (const void *)0x49637355);
      }
      goto LABEL_6;
    }
    if ( v8 != 2 )
      return 3221225626LL;
    v21 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, &v21) )
    {
      v18[0] = &v16;
      v18[1] = &v20;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                         (__int64)v5,
                                                                                         (__int64)v18,
                                                                                         &v17);
      goto LABEL_6;
    }
    v14 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v7 += 16LL;
      v14 = 1;
      v17 = v7;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v13, v7, v12);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      return 3221225626LL;
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v14
      && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v5,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v21,
                              BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_6;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v5,
                                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                 v21,
                                 BackTrace) )
    {
      goto LABEL_7;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return 3221225626LL;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     v7,
                                                                                     1231254357LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
LABEL_6:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_7:
    *a1 = (unsigned __int16 *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    _InterlockedOr(v15, 0);
    memmove((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, a2, v6);
    *(_WORD *)(v6 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) = 0;
    return 0LL;
  }
  return 3221225626LL;
}
