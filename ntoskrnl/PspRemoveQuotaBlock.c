/*
 * XREFs of PspRemoveQuotaBlock @ 0x1409AB0BC
 * Callers:
 *     PspDereferenceQuotaBlock @ 0x140696A94 (PspDereferenceQuotaBlock.c)
 *     ObpFreeObject @ 0x1407C3980 (ObpFreeObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     PspUnlockQuotaListExclusive @ 0x1403B06EC (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x140745510 (PspHashKeyValue.c)
 */

char __fastcall PspRemoveQuotaBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  volatile signed __int64 *v8; // r14
  __int64 v9; // rax
  __int64 **v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)(a1 + 520);
  v3 = *(_QWORD *)(a1 + 520);
  v4 = a1 + 576;
  v6 = 0LL;
  if ( v3 != 1 )
    v6 = v4;
  v7 = PspHashKeyValue(v6, 0LL);
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(PspQuotaBlockTable + 24LL * v7);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v8, 0LL);
  if ( v3 == 1 )
  {
    if ( a1 == PspDefaultQuotaBlock )
      PspDefaultQuotaBlock = 0LL;
  }
  else
  {
    v9 = *v2;
    if ( *v2 )
    {
      if ( *(__int64 **)(v9 + 8) != v2 || (v10 = (__int64 **)v2[1], *v10 != v2) )
        __fastfail(3u);
      *v10 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
  }
  return PspUnlockQuotaListExclusive((__int64)CurrentThread, v8);
}
