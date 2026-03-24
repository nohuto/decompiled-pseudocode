/*
 * XREFs of HmgAllocateDcAttr @ 0x1C002C9D8
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C00810F0 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C013F0B0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  char *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  void *v19; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 24) )
  {
    v2 = *(_QWORD *)(ThreadWin32Thread + 24);
    *(_QWORD *)(ThreadWin32Thread + 24) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  GreAcquireHmgrSemaphore(v5);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    goto LABEL_5;
  v19 = 0LL;
  v12 = (char *)HmgAllocateSecureUserMemory(&v19);
  if ( !v12 )
    goto LABEL_5;
  v13 = PALLOCMEM2(0x70uLL, 1717789767LL, 0);
  if ( v13 )
  {
    v14 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v15 + 8) != CurrentProcessWin32Process + 192 )
      goto LABEL_10;
    *v13 = v15;
    v13[1] = v14;
    *(_QWORD *)(v15 + 8) = v13;
    v16 = 11LL;
    *v14 = v13;
    v17 = v13 + 3;
    *((_DWORD *)v13 + 4) = 11;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v12 + 3520;
    do
    {
      *v17 = v12;
      v12 += 352;
      ++v17;
      --v16;
    }
    while ( v16 );
LABEL_5:
    v6 = *(_QWORD **)(CurrentProcessWin32Process + 40);
    if ( !v6 )
    {
LABEL_8:
      GreReleaseHmgrSemaphore(v6);
      return v2;
    }
    v7 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v2 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    v8 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( (*(_DWORD *)(v8 + 16))-- != 1 )
    {
      v6 = *(_QWORD **)(v8 + 8LL * (unsigned int)(*(_DWORD *)(v8 + 16) - 1) + 24);
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v6;
      goto LABEL_8;
    }
    v10 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) == v8 )
    {
      v11 = *(_QWORD **)(v8 + 8);
      if ( *v11 == v8 )
      {
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        Win32FreePool(v8);
        v6 = (_QWORD *)*v7;
        if ( (_QWORD *)*v7 != v7 )
          v1 = v6[(unsigned int)(*((_DWORD *)v6 + 4) - 1) + 3];
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v1;
        goto LABEL_8;
      }
    }
LABEL_10:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v12, v19);
  GreReleaseHmgrSemaphore(v18);
  return 0LL;
}
