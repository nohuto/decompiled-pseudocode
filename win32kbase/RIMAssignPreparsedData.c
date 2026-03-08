/*
 * XREFs of RIMAssignPreparsedData @ 0x1C01B3578
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x1C01B9064 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall RIMAssignPreparsedData(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r10
  char v13; // r15
  _QWORD v15[2]; // [rsp+20h] [rbp-99h] BYREF
  PVOID BackTrace[28]; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v17; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v18; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v20; // [rsp+138h] [rbp+7Fh] BYREF

  v18 = a2;
  v5 = -1073741801;
  if ( *(_QWORD *)(a3 + 928) )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2772);
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2773);
  }
  if ( !*(_DWORD *)(a1 + 104) )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2774);
  }
  v6 = gpLeakTrackingAllocator;
  v7 = *(unsigned int *)(a1 + 104);
  v18 = 1668313938;
  v19 = 260LL;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  v20 = v7;
  if ( !v8 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v7, 1668313938LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
    goto LABEL_27;
  }
  if ( v8 != 1 )
  {
    if ( v8 == 2 )
    {
      v17 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313938, &v17) )
      {
        v15[0] = &v19;
        v15[1] = &v18;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v6,
                  (__int64)v15,
                  &v20);
        goto LABEL_27;
      }
      v13 = 0;
      if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
      {
        v7 += 16LL;
        v13 = 1;
        v20 = v7;
      }
      Pool2 = ExAllocatePool2(v12, v7, v11);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v13 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v6,
                 (const void *)Pool2,
                 v17,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_27;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v6,
                    Pool2,
                    v17,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          *(_QWORD *)(a3 + 928) = Pool2;
LABEL_31:
          memmove((void *)Pool2, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 104));
          return 0;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_33:
    *(_QWORD *)(a3 + 928) = 0LL;
    return v5;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63707352u)
    || v7 + 16 < v7 )
  {
    goto LABEL_33;
  }
  v10 = (_QWORD *)ExAllocatePool2(v19 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v18);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
        *v10 = 1668313938LL,
        Pool2 = (__int64)(v10 + 2),
        v10 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      0x63707352uLL);
  }
LABEL_27:
  *(_QWORD *)(a3 + 928) = Pool2;
  if ( Pool2 )
    goto LABEL_31;
  return v5;
}
