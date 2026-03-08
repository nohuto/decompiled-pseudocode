/*
 * XREFs of rimFindOrCreateHoldingFrame @ 0x1C01CE0A0
 * Callers:
 *     RIMStartPointerDeviceFrame @ 0x1C01CDC44 (RIMStartPointerDeviceFrame.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     rimFindHoldingFrame @ 0x1C00F07AA (rimFindHoldingFrame.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

_QWORD *__fastcall rimFindOrCreateHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-89h] BYREF
  __int64 v13; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v16; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v17; // [rsp+128h] [rbp+7Fh] BYREF

  result = rimFindHoldingFrame(a1, a2);
  if ( !result )
  {
    v5 = gpLeakTrackingAllocator;
    v13 = 88LL;
    v16 = 1718121298;
    v12 = 260LL;
    v6 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, 88LL, 1718121298LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
      goto LABEL_17;
    }
    if ( v6 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x66687352u) )
      {
        v8 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFDuLL, 104LL, v16);
        Pool2 = (__int64)v8;
        if ( !v8
          || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
              *v8 = 1718121298LL,
              Pool2 = (__int64)(v8 + 2),
              v8 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v5 + 1),
            0x66687352uLL);
        }
LABEL_17:
        if ( Pool2 )
          goto LABEL_20;
        return (_QWORD *)Pool2;
      }
    }
    else if ( v6 == 2 )
    {
      v17 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1718121298, &v17) )
      {
        v14[0] = &v12;
        v14[1] = &v16;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v5,
                  (__int64)v14,
                  &v13);
        goto LABEL_17;
      }
      Pool2 = ExAllocatePool2(v9, 104LL, 1718121298LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v5,
                 Pool2,
                 v17,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_20:
            *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a2 + 16);
            v10 = (__int64 *)(a1 + 728);
            v11 = *(_QWORD *)(a1 + 728);
            if ( *(_QWORD *)(v11 + 8) != a1 + 728 )
              __fastfail(3u);
            *(_QWORD *)Pool2 = v11;
            *(_QWORD *)(Pool2 + 8) = v10;
            *(_QWORD *)(v11 + 8) = Pool2;
            *v10 = Pool2;
            return (_QWORD *)Pool2;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v5,
                    (const void *)Pool2,
                    v17,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_17;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  return result;
}
