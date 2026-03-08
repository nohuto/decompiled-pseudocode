/*
 * XREFs of ?CreateInstance@CHidInput@@SAJPEAPEAV1@@Z @ 0x1C00962C8
 * Callers:
 *     CHidInput_CreateInstance @ 0x1C0096140 (CHidInput_CreateInstance.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C0096768 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall CHidInput::CreateInstance(struct CHidInput **a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v3; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 result; // rax
  _QWORD *Pool2; // rax
  __int64 v7; // r10
  _QWORD v8[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v10; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v11; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v12; // [rsp+110h] [rbp+77h] BYREF
  __int64 v13; // [rsp+118h] [rbp+7Fh] BYREF

  *a1 = 0LL;
  v1 = gpLeakTrackingAllocator;
  v10 = 1885947971;
  v12 = 260LL;
  v13 = 1512LL;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v3 != 1 )
    {
      if ( v3 != 2 )
        return 3221225495LL;
      v11 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70694843u, &v11) )
      {
        v8[0] = &v12;
        v8[1] = &v10;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v1,
                                                                                           (__int64)v8,
                                                                                           &v13);
        goto LABEL_4;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v7,
                                                                                         1528LL,
                                                                                         1885947971LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return 3221225495LL;
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v1,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v11,
                                BackTrace) )
          goto LABEL_5;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v1,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v11,
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_4;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return 3221225495LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70694843u) )
      return 3221225495LL;
    Pool2 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFDuLL, 1528LL, v10);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
          *Pool2 = 1885947971LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v1 + 1),
        (const void *)0x70694843);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       1512LL,
                                                                                       1885947971LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
  }
LABEL_4:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_5:
    CBaseInput::CBaseInput(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, 60LL, 2LL);
    *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 1408) = 0;
    *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = &CHidInput::`vftable';
    result = 0LL;
    *a1 = (struct CHidInput *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    return result;
  }
  return 3221225495LL;
}
