/*
 * XREFs of ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01CA0B8
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C01C9318 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01C9370 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01C9904 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDeadzone::_InitializeRightHandedDeadzone(RIMDeadzone *this)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v3; // eax
  __int64 Pool2; // rbx
  _QWORD *v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v12; // rax
  char v13; // r14
  _DWORD *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v22[26]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v23; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v24; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned __int64 v25; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 v26; // [rsp+1F8h] [rbp+F8h] BYREF

  v1 = gpLeakTrackingAllocator;
  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 8) = 1;
  v23 = 2053394514;
  v3 = *(_DWORD *)v1;
  v20 = 24LL;
  v15 = 260LL;
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(260LL, 24LL, 2053394514LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v1 + 14, 1uLL);
    goto LABEL_19;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v25 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v1, 2053394514, &v25) )
      {
        v18 = &v15;
        v19 = &v23;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v1,
                  (__int64)&v18,
                  &v20);
        goto LABEL_19;
      }
      Pool2 = ExAllocatePool2(260LL, 40LL, 2053394514LL);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v1 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v1,
                 Pool2,
                 v25,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_19;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v1,
                    (const void *)Pool2,
                    v25,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_19;
        }
        _InterlockedAdd64((volatile signed __int64 *)v1 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_18;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v1, 0x7A645052u) )
  {
LABEL_18:
    Pool2 = 0LL;
    goto LABEL_19;
  }
  v5 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v23);
  Pool2 = (__int64)v5;
  if ( !v5
    || (_InterlockedAdd64((volatile signed __int64 *)v1 + 14, 1uLL),
        *v5 = 2053394514LL,
        Pool2 = (__int64)(v5 + 2),
        v5 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v1 + 1),
      0x7A645052uLL);
  }
LABEL_19:
  *((_QWORD *)this + 3) = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_DWORD *)Pool2 = 280;
  v7 = *((_QWORD *)this + 3);
  v24 = 2053394514;
  v16 = 260LL;
  *(_DWORD *)(v7 + 4) = 30;
  *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 1;
  v8 = gpLeakTrackingAllocator;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  v10 = 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 16LL);
  v17 = v10;
  if ( !v9 )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       v10,
                                                                                       2053394514LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL);
    goto LABEL_44;
  }
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      v26 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2053394514, &v26) )
      {
        v18 = &v16;
        v19 = &v24;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v8,
                                                                                           (__int64)&v18,
                                                                                           &v17);
        goto LABEL_44;
      }
      v13 = 0;
      if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
      {
        v10 += 16LL;
        v13 = 1;
        v17 = v10;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         v10,
                                                                                         2053394514LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v8 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(v22);
        if ( v13
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v8,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v26,
                 (struct NSInstrumentation::CBackTrace *)v22) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_44;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v8,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v26,
                    (struct NSInstrumentation::CBackTrace *)v22) )
        {
          goto LABEL_44;
        }
        _InterlockedAdd64((volatile signed __int64 *)v8 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    goto LABEL_43;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A645052u)
    || v10 + 16 < v10 )
  {
LABEL_43:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_44;
  }
  v12 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, v24);
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v12;
  if ( !v12
    || (_InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL),
        *v12 = 2053394514LL,
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v12 + 2),
        v12 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v8 + 1),
      0x7A645052uLL);
  }
LABEL_44:
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  v14 = *(_DWORD **)(*((_QWORD *)this + 3) + 8LL);
  if ( !v14 )
  {
    RIMDeadzone::Release((DeadzonePalmTelemetry **)this);
    return 3221225495LL;
  }
  *v14 = 0;
  result = 0LL;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL) = 12000;
  *(_DWORD *)this = 1;
  return result;
}
