/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C008E678
 * Callers:
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C008E4C0 (NtGdiCreateRectRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C008E7F4 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C016BDC0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // r8d
  _QWORD *v12; // rcx
  _QWORD *v13; // rsi
  __int64 *v14; // rax
  char *v17; // rsi
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 *v22; // rcx
  __int64 **v23; // rdx
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  void *v27; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 32) )
  {
    v5 = *(_QWORD *)(ThreadWin32Thread + 32);
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v5;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL, v1, v2, v3);
  GreAcquireHmgrSemaphore(v8, v7, v9);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) )
    goto LABEL_3;
  v27 = 0LL;
  v17 = (char *)HmgAllocateSecureUserMemory(&v27);
  if ( !v17 )
    goto LABEL_3;
  v18 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          260LL,
          0x568uLL,
          1717658183);
  if ( v18 )
  {
    v19 = (__int64 *)(CurrentProcessWin32Process + 208);
    v20 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( *(_QWORD *)(v20 + 8) != CurrentProcessWin32Process + 208 )
      goto LABEL_20;
    *(_QWORD *)v18 = v20;
    *(_QWORD *)(v18 + 8) = v19;
    *(_QWORD *)(v20 + 8) = v18;
    v10 = 170LL;
    *v19 = v18;
    v21 = (_QWORD *)(v18 + 24);
    *(_DWORD *)(v18 + 16) = 170;
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v17 + 4056;
    do
    {
      *v21 = v17;
      v17 += 24;
      ++v21;
      --v10;
    }
    while ( v10 );
LABEL_3:
    v12 = *(_QWORD **)(CurrentProcessWin32Process + 48);
    if ( !v12 )
    {
LABEL_6:
      GreReleaseHmgrSemaphore((int)v12, v10, v11);
      return v5;
    }
    v13 = (_QWORD *)(CurrentProcessWin32Process + 208);
    v5 = *(_QWORD *)(CurrentProcessWin32Process + 48);
    v14 = *(__int64 **)(CurrentProcessWin32Process + 208);
    if ( (*((_DWORD *)v14 + 4))-- != 1 )
    {
      v12 = (_QWORD *)v14[(unsigned int)(*((_DWORD *)v14 + 4) - 1) + 3];
      *(_QWORD *)(CurrentProcessWin32Process + 48) = v12;
      goto LABEL_6;
    }
    v22 = (__int64 *)*v14;
    if ( *(__int64 **)(*v14 + 8) == v14 )
    {
      v23 = (__int64 **)v14[1];
      if ( *v23 == v14 )
      {
        *v23 = v22;
        v22[1] = (__int64)v23;
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)v14);
        v12 = (_QWORD *)*v13;
        if ( (_QWORD *)*v13 != v13 )
          v4 = v12[(unsigned int)(*((_DWORD *)v12 + 4) - 1) + 3];
        *(_QWORD *)(CurrentProcessWin32Process + 48) = v4;
        goto LABEL_6;
      }
    }
LABEL_20:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v17, v27);
  GreReleaseHmgrSemaphore(v25, v24, v26);
  return 0LL;
}
