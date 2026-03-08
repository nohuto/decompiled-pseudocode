/*
 * XREFs of ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1C00D0180
 * Callers:
 *     CTouchpadAcceleration_CreateInstance @ 0x1C00D0130 (CTouchpadAcceleration_CreateInstance.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall CTouchpadAcceleration::CreateInstance(struct CDeviceAcceleration **a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v4; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 result; // rax
  _QWORD *Pool2; // rax
  __int64 v9; // r10
  __int64 v10; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+120h] [rbp+77h] BYREF
  __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  *a1 = 0LL;
  v13 = 1682006883;
  v15 = 260LL;
  v4 = *(_DWORD *)v2;
  v10 = 104LL;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      if ( v4 != 2 )
        return 3221225495LL;
      v14 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v2, 0x64416363u, &v14) )
      {
        v11[0] = &v15;
        v11[1] = &v13;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v2,
                                                                                           (__int64)v11,
                                                                                           &v10);
        goto LABEL_4;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v9,
                                                                                         120LL,
                                                                                         1682006883LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return 3221225495LL;
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v2,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v14,
                                BackTrace) )
          goto LABEL_5;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v2,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v14,
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_4;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return 3221225495LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v2, 0x64416363u) )
      return 3221225495LL;
    Pool2 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 120LL, v13);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
          *Pool2 = 1682006883LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v2 + 1),
        (const void *)0x64416363);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       104LL,
                                                                                       1682006883LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
  }
LABEL_4:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_5:
    *(_BYTE *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = 0;
    memset((void *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16), 0, 0x50uLL);
    *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 96) = a2;
    *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = &CTouchpadAcceleration::`vftable';
    result = 0LL;
    *a1 = (struct CDeviceAcceleration *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    return result;
  }
  return 3221225495LL;
}
