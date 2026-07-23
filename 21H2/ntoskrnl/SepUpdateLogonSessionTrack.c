/*
 * XREFs of SepUpdateLogonSessionTrack @ 0x14060DD64
 * Callers:
 *     SepRmAddLogonSessionInfoWrkr @ 0x14060DD40 (SepRmAddLogonSessionInfoWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepUpdateLogonSessionTrack(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edx
  __int64 v5; // rbx
  struct _ERESOURCE *v6; // rbp
  __int64 *v7; // rbx
  void *v8; // rcx
  char *PoolWithTag; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v1 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  --CurrentThread->KernelApcDisable;
  v5 = v4;
  v6 = &SepRmDbLock + (v4 & 3);
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
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            PagedPool,
                            *(unsigned __int16 *)(a1 + 24)
                          + 2LL
                          + ((*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFF8LL),
                            0x734C6553u);
    if ( PoolWithTag )
    {
      v7[8] = (__int64)PoolWithTag;
      v7[10] = (__int64)&PoolWithTag[(*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFFFFFFFFFF8uLL];
      memmove(PoolWithTag, (const void *)(a1 + 40), *(unsigned __int16 *)(a1 + 8));
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
      v1 = -1073741670;
    }
  }
  else
  {
LABEL_10:
    v1 = -1073741729;
  }
  ExReleaseResourceLite(v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  return v1;
}
