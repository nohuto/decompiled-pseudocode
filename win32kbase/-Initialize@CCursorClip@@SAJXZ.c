/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x1C0097A98
 * Callers:
 *     InitializeInputComponents @ 0x1C009770C (InitializeInputComponents.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     RegisterCoreMsgProviderPreferences @ 0x1C0098030 (RegisterCoreMsgProviderPreferences.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 CCursorClip::Initialize(void)
{
  NSInstrumentation::CLeakTrackingAllocator *v0; // rbx
  unsigned int v1; // esi
  int v2; // eax
  __int64 Pool2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // r10
  _QWORD v7[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v9; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v11; // [rsp+120h] [rbp+77h] BYREF
  __int64 v12; // [rsp+128h] [rbp+7Fh] BYREF

  v0 = gpLeakTrackingAllocator;
  v1 = 0;
  v11 = 260LL;
  v9 = 1919964227;
  v2 = *(_DWORD *)gpLeakTrackingAllocator;
  v12 = 288LL;
  if ( !v2 )
  {
    Pool2 = ExAllocatePool2(260LL, 288LL, 1919964227LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v0 + 14);
    goto LABEL_16;
  }
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      v10 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x72705443u, &v10) )
      {
        v7[0] = &v11;
        v7[1] = &v9;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v0,
                  (__int64)v7,
                  &v12);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v5, 304LL, 1919964227LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v0 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v0,
                                  Pool2,
                                  v10,
                                  BackTrace) )
            goto LABEL_19;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v0,
                                     Pool2,
                                     v10,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v0 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_21:
    *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
    return (unsigned int)-1073741801;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x72705443u) )
    goto LABEL_21;
  v4 = (_QWORD *)ExAllocatePool2(v11 & 0xFFFFFFFFFFFFFFFDuLL, 304LL, v9);
  Pool2 = (__int64)v4;
  if ( !v4
    || (_InterlockedIncrement64((volatile signed __int64 *)v0 + 14),
        *v4 = 1919964227LL,
        Pool2 = (__int64)(v4 + 2),
        v4 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v0 + 1),
      (const void *)0x72705443);
  }
LABEL_16:
  if ( !Pool2 )
    goto LABEL_21;
LABEL_19:
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  memset((void *)(Pool2 + 48), 0, 0xC8uLL);
  *(_QWORD *)(Pool2 + 248) = Pool2 + 48;
  *(_DWORD *)(Pool2 + 256) = 0;
  *(_QWORD *)(Pool2 + 264) = 0LL;
  *(_DWORD *)(Pool2 + 272) = 0;
  *(_WORD *)(Pool2 + 276) = 0;
  *(_QWORD *)(Pool2 + 280) = 0LL;
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = Pool2;
  RegisterCoreMsgProviderPreferences(
    0,
    0,
    2,
    0,
    (__int64)lambda_0106af77700bc4a134663e8cc2385985_::_lambda_invoker_cdecl_);
  return v1;
}
