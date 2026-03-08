/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0086400
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0086318 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     UserReAllocPool @ 0x1C0077B10 (UserReAllocPool.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
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
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 i; // r14
  _QWORD *v16; // r15
  _QWORD *j; // r12
  _QWORD *v18; // r13
  PVOID *v19; // rcx
  int v20; // eax
  __int64 ProcessWin32Process; // rax
  __int64 k; // rdi
  _QWORD *v24; // rax
  __int64 v25; // r10
  unsigned int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+28h] [rbp-B9h] BYREF
  unsigned __int64 v30[2]; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v31; // [rsp+48h] [rbp-99h] BYREF
  __int64 v32; // [rsp+50h] [rbp-91h] BYREF
  PVOID BackTrace[28]; // [rsp+58h] [rbp-89h] BYREF
  int v37; // [rsp+160h] [rbp+7Fh]

  v3 = gpLeakTrackingAllocator;
  v4 = a2;
  v5 = 0;
  v6 = 128;
  v37 = 128;
  v29 = 1769239381;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v31 = 260LL;
  v8 = a3;
  v32 = 1024LL;
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
    v24 = (_QWORD *)ExAllocatePool2(v31 & 0xFFFFFFFFFFFFFFFDuLL, 1040LL, v29);
    Pool2 = (__int64)v24;
    if ( !v24
      || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
          *v24 = 1769239381LL,
          Pool2 = (__int64)(v24 + 2),
          v24 == (_QWORD *)-16LL) )
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
  v30[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x69747355u, v30) )
  {
    v30[0] = (unsigned __int64)&v31;
    v30[1] = (unsigned __int64)&v29;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v3,
              (__int64)v30,
              &v32);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(v25, 1040LL, v26);
  if ( !Pool2 )
    return 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v3,
                            Pool2,
                            v30[0],
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
                           v30[0],
                           BackTrace) )
    goto LABEL_45;
LABEL_5:
  v14 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v14 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        v16 = (_QWORD *)(i + 168);
        for ( j = *(_QWORD **)(i + 168); j != v16; j = (_QWORD *)*j )
        {
          v18 = j - 93;
          if ( j != (_QWORD *)744 && (!a3 || a3 == (struct tagKL *)v18[55]) )
          {
            v19 = (PVOID *)v18[53];
            if ( *v19 == gpepCSRSS || *(_QWORD *)v18[53] == PsGetCurrentProcess(v19, v10, v12, v13) )
            {
              v20 = v37;
              if ( v5 == v37 )
              {
                v37 += 128;
                v27 = UserReAllocPool((void *)Pool2, 8LL * v5, 8LL * (unsigned int)(v20 + 128), 0x69747355u);
                if ( !v27 )
                  goto LABEL_52;
                Pool2 = v27;
              }
              *(_QWORD *)(8LL * v5++ + Pool2) = v18;
              v16 = (_QWORD *)(i + 168);
            }
          }
        }
      }
      v14 = *(_QWORD *)(v14 + 8);
    }
    while ( v14 );
    v6 = v37;
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
        v28 = UserReAllocPool((void *)Pool2, 8LL * v5, 8LL * v6, 0x69747355u);
        if ( !v28 )
        {
LABEL_52:
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
          return 0LL;
        }
        Pool2 = v28;
      }
      *(_QWORD *)(8LL * v5++ + Pool2) = k;
      v8 = a3;
    }
  }
  if ( v5 && v9 )
  {
    *v9 = (struct tagTHREADINFO **)Pool2;
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(Pool2, v4, Win32FreePool);
  }
  else
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  }
  return v5;
}
