/*
 * XREFs of HmgAllocateDcAttr @ 0x1C00E02F0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C008AA88 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     PALLOCNOZ @ 0x1C008AF78 (PALLOCNOZ.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C0158E0C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 CurrentThread; // rax
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  char *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi
  char *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  char **v19; // rax
  void *v20; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = W32GetCurrentThread();
  v2 = 0LL;
  v3 = *(_QWORD *)(CurrentThread + 24);
  if ( v3 )
  {
    *(_QWORD *)(CurrentThread + 24) = 0LL;
LABEL_23:
    *(_QWORD *)(v3 + 352) = 0LL;
    return v3;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v5 = -*(_QWORD *)CurrentProcessWin32Process;
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  GreAcquireHmgrSemaphore(v5);
  if ( !*(_QWORD *)(v6 + 40) )
  {
    v20 = 0LL;
    v8 = (char *)HmgAllocateSecureUserMemory(&v20);
    if ( v8 )
    {
      v9 = PALLOCNOZ(0x70u, 0x66636447u);
      if ( !v9 )
      {
        HmgFreeAllocateSecureUserMemory(v8, v20);
        GreReleaseHmgrSemaphore(v10);
        return 0LL;
      }
      v12 = (__int64 *)(v6 + 192);
      v13 = *(_QWORD *)(v6 + 192);
      if ( *(_QWORD *)(v13 + 8) != v6 + 192 )
        goto LABEL_20;
      *(_QWORD *)v9 = v13;
      *(_QWORD *)(v9 + 8) = v12;
      *(_QWORD *)(v13 + 8) = v9;
      v14 = 11LL;
      *v12 = v9;
      v7 = (_QWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 16) = 11;
      *(_QWORD *)(v6 + 40) = v8 + 3600;
      do
      {
        *v7 = v8;
        v8 += 360;
        ++v7;
        --v14;
      }
      while ( v14 );
    }
  }
  if ( !*(_QWORD *)(v6 + 40) )
    goto LABEL_22;
  v2 = *(_QWORD *)(v6 + 40);
  v15 = v6 + 192;
  v16 = *(char **)(v6 + 192);
  v17 = *((_DWORD *)v16 + 4) - 1;
  *((_DWORD *)v16 + 4) = v17;
  if ( v17 )
  {
    *(_QWORD *)(v6 + 40) = *(_QWORD *)&v16[8 * (v17 - 1) + 24];
    goto LABEL_22;
  }
  v18 = *(_QWORD *)v16;
  if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 || (v19 = (char **)*((_QWORD *)v16 + 1), *v19 != v16) )
LABEL_20:
    __fastfail(3u);
  *v19 = (char *)v18;
  *(_QWORD *)(v18 + 8) = v19;
  Win32FreePool(v16);
  if ( *(_QWORD *)v15 == v15 )
    v7 = 0LL;
  else
    v7 = *(_QWORD **)(*(_QWORD *)v15 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v15 + 16LL) - 1) + 24);
  *(_QWORD *)(v6 + 40) = v7;
LABEL_22:
  v3 = v2;
  GreReleaseHmgrSemaphore((__int64)v7);
  if ( v2 )
    goto LABEL_23;
  return v3;
}
