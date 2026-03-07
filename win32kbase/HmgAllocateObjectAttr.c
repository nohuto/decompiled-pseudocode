__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  _DWORD *v7; // r8
  int v8; // ecx
  char *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  void **v17; // rax
  void *v18; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 32) )
  {
    v2 = *(_QWORD *)(ThreadWin32Thread + 32);
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v4 = -*(_QWORD *)CurrentProcessWin32Process;
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  GreAcquireHmgrSemaphore(v4);
  if ( *(_QWORD *)(v5 + 48) )
    goto LABEL_5;
  v18 = 0LL;
  v10 = (char *)HmgAllocateSecureUserMemory(&v18);
  if ( !v10 )
    goto LABEL_5;
  v11 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, 0x568uLL, 0x66616247u);
  if ( v11 )
  {
    v12 = (_QWORD *)(v5 + 208);
    v13 = *(_QWORD *)(v5 + 208);
    if ( *(_QWORD *)(v13 + 8) != v5 + 208 )
      goto LABEL_23;
    *v11 = v13;
    v11[1] = v12;
    *(_QWORD *)(v13 + 8) = v11;
    v14 = 170LL;
    *v12 = v11;
    v15 = v11 + 3;
    *((_DWORD *)v11 + 4) = 170;
    *(_QWORD *)(v5 + 48) = v10 + 4056;
    do
    {
      *v15 = v10;
      v10 += 24;
      ++v15;
      --v14;
    }
    while ( v14 );
LABEL_5:
    if ( !*(_QWORD *)(v5 + 48) )
    {
LABEL_8:
      GreReleaseHmgrSemaphore();
      return v2;
    }
    v6 = v5 + 208;
    v2 = *(_QWORD *)(v5 + 48);
    v7 = *(_DWORD **)(v5 + 208);
    v8 = v7[4] - 1;
    v7[4] = v8;
    if ( v8 )
    {
      *(_QWORD *)(v5 + 48) = *(_QWORD *)&v7[2 * (v8 - 1) + 6];
      goto LABEL_8;
    }
    v16 = *(_QWORD **)v7;
    if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) == v7 )
    {
      v17 = (void **)*((_QWORD *)v7 + 1);
      if ( *v17 == v7 )
      {
        *v17 = v16;
        v16[1] = v17;
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
        if ( *(_QWORD *)v6 != v6 )
          v1 = *(_QWORD *)(*(_QWORD *)v6 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 16LL) - 1) + 24);
        *(_QWORD *)(v5 + 48) = v1;
        goto LABEL_8;
      }
    }
LABEL_23:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v10, v18);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
