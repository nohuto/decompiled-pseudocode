/*
 * XREFs of HmgAllocateDcAttr @ 0x1C002631C
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C008E7F4 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C016BDC0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v13; // rcx
  void **v14; // rdx
  char *v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  void *v22; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 24) )
  {
    v5 = *(_QWORD *)(ThreadWin32Thread + 24);
    *(_QWORD *)(ThreadWin32Thread + 24) = 0LL;
    return v5;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL, v1, v2, v3);
  GreAcquireHmgrSemaphore(v7);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    goto LABEL_3;
  v22 = 0LL;
  v15 = (char *)HmgAllocateSecureUserMemory(&v22);
  if ( !v15 )
    goto LABEL_3;
  v16 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          0x104uLL,
          0x70uLL,
          0x66636447u);
  if ( v16 )
  {
    v17 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v18 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v18 + 8) != CurrentProcessWin32Process + 192 )
      goto LABEL_9;
    *v16 = v18;
    v16[1] = v17;
    *(_QWORD *)(v18 + 8) = v16;
    v19 = 11LL;
    *v17 = v16;
    v20 = v16 + 3;
    *((_DWORD *)v16 + 4) = 11;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v15 + 3520;
    do
    {
      *v20 = v15;
      v15 += 352;
      ++v20;
      --v19;
    }
    while ( v19 );
LABEL_3:
    v8 = *(_QWORD **)(CurrentProcessWin32Process + 40);
    if ( !v8 )
    {
LABEL_6:
      GreReleaseHmgrSemaphore(v8);
      return v5;
    }
    v9 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v5 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    v10 = *(_QWORD **)(CurrentProcessWin32Process + 192);
    if ( (*((_DWORD *)v10 + 4))-- != 1 )
    {
      v8 = (_QWORD *)v10[(unsigned int)(*((_DWORD *)v10 + 4) - 1) + 3];
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v8;
      goto LABEL_6;
    }
    v13 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) == v10 )
    {
      v14 = (void **)v10[1];
      if ( *v14 == v10 )
      {
        *v14 = v13;
        v13[1] = v14;
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v10);
        v8 = (_QWORD *)*v9;
        if ( (_QWORD *)*v9 != v9 )
          v4 = v8[(unsigned int)(*((_DWORD *)v8 + 4) - 1) + 3];
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v4;
        goto LABEL_6;
      }
    }
LABEL_9:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v15, v22);
  GreReleaseHmgrSemaphore(v21);
  return 0LL;
}
