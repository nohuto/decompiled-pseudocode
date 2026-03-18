/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0064900
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0064820 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     UserReAllocPool @ 0x1C004EE90 (UserReAllocPool.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  struct _TL *v4; // r13
  unsigned int v5; // esi
  unsigned int v6; // r15d
  int v7; // eax
  struct tagKL *v8; // r14
  struct tagTHREADINFO ***v9; // r12
  __int64 v10; // rdx
  __int64 Pool2; // rbx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 i; // r14
  _QWORD *v15; // r15
  _QWORD *j; // r12
  _QWORD *v17; // r13
  PVOID *v18; // rcx
  int v19; // eax
  __int64 ProcessWin32Process; // rax
  __int64 k; // rdi
  _QWORD *v23; // rax
  __int64 v24; // r10
  unsigned int v25; // r11d
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+28h] [rbp-B9h] BYREF
  unsigned __int64 v29[2]; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v30; // [rsp+48h] [rbp-99h] BYREF
  __int64 v31; // [rsp+50h] [rbp-91h] BYREF
  PVOID BackTrace[28]; // [rsp+58h] [rbp-89h] BYREF
  int v36; // [rsp+160h] [rbp+7Fh]

  v3 = gpLeakTrackingAllocator;
  v4 = a2;
  v5 = 0;
  v6 = 128;
  v36 = 128;
  v28 = 1769239381;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v30 = 260LL;
  v8 = a3;
  v31 = 1024LL;
  v9 = a1;
  if ( !v7 )
  {
    Pool2 = ExAllocatePool2(260LL, 1024LL, 1769239381LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    goto LABEL_4;
  }
  if ( v7 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69747355u) )
      return 0LL;
    v23 = (_QWORD *)ExAllocatePool2(v30 & 0xFFFFFFFFFFFFFFFDuLL, 1040LL, v28);
    Pool2 = (__int64)v23;
    if ( !v23
      || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
          *v23 = 1769239381LL,
          Pool2 = (__int64)(v23 + 2),
          v23 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        (const void *)0x69747355);
    }
LABEL_4:
    if ( Pool2 )
      goto LABEL_5;
    return 0LL;
  }
  if ( v7 != 2 )
    return 0LL;
  v29[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x69747355u, v29) )
  {
    v29[0] = (unsigned __int64)&v30;
    v29[1] = (unsigned __int64)&v28;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v3,
              (__int64)v29,
              &v31);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(v24, 1040LL, v25);
  if ( !Pool2 )
    return 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v3,
                            Pool2,
                            v29[0],
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_45:
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 0LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v3,
                           Pool2,
                           v29[0],
                           BackTrace) )
    goto LABEL_45;
LABEL_5:
  v13 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v13 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        v15 = (_QWORD *)(i + 176);
        for ( j = *(_QWORD **)(i + 176); j != v15; j = (_QWORD *)*j )
        {
          v17 = j - 93;
          if ( j != (_QWORD *)744 && (!a3 || a3 == (struct tagKL *)v17[55]) )
          {
            v18 = (PVOID *)v17[53];
            if ( *v18 == gpepCSRSS || *(_QWORD *)v17[53] == PsGetCurrentProcess(v18, v10, v12) )
            {
              v19 = v36;
              if ( v5 == v36 )
              {
                v36 += 128;
                v26 = UserReAllocPool((void *)Pool2, 8LL * v5, 8LL * (unsigned int)(v19 + 128), 0x69747355u);
                if ( !v26 )
                  goto LABEL_52;
                Pool2 = v26;
              }
              *(_QWORD *)(8LL * v5++ + Pool2) = v17;
              v15 = (_QWORD *)(i + 176);
            }
          }
        }
      }
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
    v6 = v36;
    v8 = a3;
    v9 = a1;
    v4 = a2;
  }
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  if ( ProcessWin32Process )
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  for ( k = *(_QWORD *)(ProcessWin32Process + 320); k; k = *(_QWORD *)(k + 664) )
  {
    if ( !v8 || v8 == *(struct tagKL **)(k + 440) )
    {
      if ( v5 == v6 )
      {
        v6 += 128;
        v27 = UserReAllocPool((void *)Pool2, 8LL * v5, 8LL * v6, 0x69747355u);
        if ( !v27 )
        {
LABEL_52:
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
          return 0LL;
        }
        Pool2 = v27;
      }
      *(_QWORD *)(8LL * v5++ + Pool2) = k;
      v8 = a3;
    }
  }
  if ( v5 && v9 )
  {
    *v9 = (struct tagTHREADINFO **)Pool2;
    if ( qword_1C0295450 )
      qword_1C0295450(Pool2, v4, Win32FreePool);
  }
  else
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  }
  return v5;
}
