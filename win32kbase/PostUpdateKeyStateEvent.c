/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C0092540
 * Callers:
 *     NtUserGetKeyState @ 0x1C0078A00 (NtUserGetKeyState.c)
 *     UpdateAsyncKeyState @ 0x1C00922C0 (UpdateAsyncKeyState.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C021CF48 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0092690 (ProcessUpdateKeyStateEvent.c)
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x1C00929A8 (ApiSetEditionPostUpdateKeyStateEvent.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall PostUpdateKeyStateEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _OWORD *v16; // rbx
  _DWORD *v17; // r14
  __int64 v18; // rax
  unsigned int v19; // ecx
  _DWORD *v20; // rdx
  _QWORD *Pool2; // rax
  __int64 v22; // r10
  _QWORD v23[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v25; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v26; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+110h] [rbp+77h] BYREF
  __int64 v28; // [rsp+118h] [rbp+7Fh] BYREF

  if ( (*(_DWORD *)(a1 + 396) & 1) == 0 || *(struct tagTHREADINFO **)(a1 + 104) == gptiRit )
    return;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v5 = (_OWORD *)(a1 + 204);
    v6 = SGDGetUserSessionState(a1, a2, a3, a4);
    ProcessUpdateKeyStateEvent(a1, v6 + 13992, v5);
LABEL_5:
    *v5 = 0LL;
    v5[1] = 0LL;
    *(_DWORD *)(a1 + 396) &= ~1u;
    return;
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v7 + 96) == 4 )
  {
    v16 = *(_OWORD **)(v7 + 32);
    v17 = v16 + 4;
    v18 = SGDGetUserSessionState(a1, a2, a3, a4);
    v5 = (_OWORD *)(a1 + 204);
    v19 = 0;
    v20 = (_DWORD *)(a1 + 204);
    *v16 = *(_OWORD *)(v18 + 13992);
    v16[1] = *(_OWORD *)(v18 + 14008);
    v16[2] = *(_OWORD *)(v18 + 14024);
    v16[3] = *(_OWORD *)(v18 + 14040);
    do
    {
      ++v19;
      *v17++ |= *v20++;
    }
    while ( v19 < 8 );
    if ( qword_1C02D6700 )
      qword_1C02D6700(*(_QWORD *)(a1 + 104), 8256LL);
    goto LABEL_5;
  }
  v8 = gpLeakTrackingAllocator;
  v25 = 1936421717;
  v27 = 260LL;
  v28 = 96LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v9 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x736B7355u) )
        return;
      Pool2 = (_QWORD *)ExAllocatePool2(v27 & 0xFFFFFFFFFFFFFFFDuLL, 112LL, v25);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
            *Pool2 = 1936421717LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v8 + 1),
          (const void *)0x736B7355);
      }
      goto LABEL_11;
    }
    if ( v9 != 2 )
      return;
    v26 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x736B7355u, &v26) )
    {
      v23[0] = &v27;
      v23[1] = &v25;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                         (__int64)v8,
                                                                                         (__int64)v23,
                                                                                         &v28);
      goto LABEL_11;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       v22,
                                                                                       112LL,
                                                                                       1936421717LL);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      return;
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v8,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v26,
                              BackTrace) )
      {
LABEL_12:
        v15 = SGDGetUserSessionState(v11, v10, v13, v14);
        v5 = (_OWORD *)(a1 + 204);
        *(_OWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = *(_OWORD *)(v15 + 13992);
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = *(_OWORD *)(v15 + 14008);
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = *(_OWORD *)(v15 + 14024);
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 48) = *(_OWORD *)(v15 + 14040);
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 64) = *(_OWORD *)(a1 + 204);
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 80) = *(_OWORD *)(a1 + 220);
        if ( !(unsigned int)ApiSetEditionPostUpdateKeyStateEvent(
                              a1,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            gpLeakTrackingAllocator,
            (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
          return;
        }
        goto LABEL_5;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v8,
                                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                 v26,
                                 BackTrace) )
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
      goto LABEL_11;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     96LL,
                                                                                     1936421717LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
LABEL_11:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_12;
}
