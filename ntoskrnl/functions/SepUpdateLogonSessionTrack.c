__int64 __fastcall SepUpdateLogonSessionTrack(__int64 a1)
{
  unsigned int v1; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  struct _ERESOURCE *v6; // rbp
  __int64 *v7; // rbx
  void *v8; // rcx
  char *Pool2; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx

  v1 = 1529154084 * *(_DWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v1 >>= 28;
  v5 = v1;
  v6 = &SepRmDbLock + (v1 & 3);
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = *(__int64 **)(SepLogonSessions + 8 * v5);
  if ( v7 )
  {
    while ( *(_DWORD *)a1 != *((_DWORD *)v7 + 2) || *(_DWORD *)(a1 + 4) != *((_DWORD *)v7 + 3) )
    {
      v7 = (__int64 *)*v7;
      if ( !v7 )
        goto LABEL_10;
    }
    v8 = (void *)v7[8];
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      v7[8] = 0LL;
      v7[10] = 0LL;
    }
    Pool2 = (char *)ExAllocatePool2(
                      256LL,
                      ((*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFF8LL) + *(unsigned __int16 *)(a1 + 24) + 2LL,
                      1934386515LL);
    if ( Pool2 )
    {
      v7[8] = (__int64)Pool2;
      v7[10] = (__int64)&Pool2[(*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFFFFFFFFFF8uLL];
      memmove(Pool2, (const void *)(a1 + 40), *(unsigned __int16 *)(a1 + 8));
      v10 = *(unsigned __int16 *)(a1 + 8);
      *((_WORD *)v7 + 28) = v10;
      *((_WORD *)v7 + 29) = v10 + 2;
      *(_WORD *)(v7[8] + 2 * (v10 >> 1)) = 0;
      memmove(
        (void *)v7[10],
        (const void *)(((*(unsigned __int16 *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + a1 + 40),
        *(unsigned __int16 *)(a1 + 24));
      v11 = *(unsigned __int16 *)(a1 + 24);
      *((_WORD *)v7 + 36) = v11;
      *((_WORD *)v7 + 37) = v11 + 2;
      *(_WORD *)(v7[10] + 2 * (v11 >> 1)) = 0;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
LABEL_10:
    v4 = -1073741729;
  }
  ExReleaseResourceLite(v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
