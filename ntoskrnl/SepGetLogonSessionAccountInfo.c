/*
 * XREFs of SepGetLogonSessionAccountInfo @ 0x14083DF34
 * Callers:
 *     AdtpBuildLogonIdStrings @ 0x14083DE80 (AdtpBuildLogonIdStrings.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepGetLogonSessionAccountInfo(_DWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // edi
  __int64 v11; // rbx
  struct _ERESOURCE *v12; // r13
  __int64 *v13; // rbx
  void *v14; // rsi
  __int64 v15; // rbp
  __int64 v17; // rax
  __int64 Pool2; // rax
  __int64 v19; // rax
  void *v20; // rcx
  void *v21; // rcx

  v4 = 1529154084 * *a1;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  --CurrentThread->KernelApcDisable;
  v4 >>= 28;
  v11 = v4;
  v12 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceSharedLite(v12, 1u);
  v13 = *(__int64 **)(SepLogonSessions + 8 * v11);
  if ( !v13 )
  {
LABEL_14:
    v10 = -1073741729;
    goto LABEL_10;
  }
  while ( *a1 != *((_DWORD *)v13 + 2) || a1[1] != *((_DWORD *)v13 + 3) )
  {
    v13 = (__int64 *)*v13;
    if ( !v13 )
      goto LABEL_14;
  }
  v14 = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)(v13 + 7);
  *(_OWORD *)a3 = *(_OWORD *)(v13 + 9);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  if ( !v13[8]
    || (v17 = ExAllocatePool2(256LL, *((unsigned __int16 *)v13 + 29), 1799447891LL), (*(_QWORD *)(a2 + 8) = v17) != 0LL) )
  {
    if ( v13[10] )
    {
      Pool2 = ExAllocatePool2(256LL, *((unsigned __int16 *)v13 + 37), 1799447891LL);
      *(_QWORD *)(a3 + 8) = Pool2;
      if ( !Pool2 )
        v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741670;
  }
  v15 = v13[6];
  if ( v10 < 0 )
    goto LABEL_22;
  if ( a4 )
  {
    if ( v15 )
    {
      v19 = ExAllocatePool2(256LL, 4LL * *(unsigned __int8 *)(**(_QWORD **)(v15 + 152) + 1LL) + 8, 1767073107LL);
      v14 = (void *)v19;
      if ( !v19 )
      {
        v10 = -1073741670;
LABEL_22:
        v20 = *(void **)(a2 + 8);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        v21 = *(void **)(a3 + 8);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        goto LABEL_10;
      }
    }
  }
  memmove(*(void **)(a2 + 8), (const void *)v13[8], *((unsigned __int16 *)v13 + 29));
  memmove(*(void **)(a3 + 8), (const void *)v13[10], *((unsigned __int16 *)v13 + 37));
  if ( v14 )
  {
    memmove(v14, **(const void ***)(v15 + 152), 4LL * *(unsigned __int8 *)(**(_QWORD **)(v15 + 152) + 1LL) + 8);
    *a4 = v14;
  }
LABEL_10:
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
