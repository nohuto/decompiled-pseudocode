/*
 * XREFs of SepSetTokenCachedHandles @ 0x1406C6254
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x1402F6178 (SepSetTokenBnoIsolation.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 * Callees:
 *     SepReferenceCachedTokenHandles @ 0x1402A5464 (SepReferenceCachedTokenHandles.c)
 *     SepCloseCachedTokenHandles @ 0x1402A54F4 (SepCloseCachedTokenHandles.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     RtlCreateHashTable @ 0x140376310 (RtlCreateHashTable.c)
 *     SepGetCachedHandlesEntry @ 0x1406C6414 (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1406C68F0 (SepValidateReferencedCachedHandles.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCachedHandles(_QWORD *a1, _DWORD *a2, unsigned int a3, HANDLE *a4)
{
  HANDLE *v4; // rsi
  char v6; // r12
  HANDLE *PoolWithTag; // rax
  int CachedHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rdi
  bool v14; // dl
  __int64 v15; // rcx
  char v16; // cl
  HANDLE *v17; // rax
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v23; // zf
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF
  char v25; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v24[0] = 0LL;
  v6 = 0;
  v25 = 0;
  if ( !a3 )
    goto LABEL_5;
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x63486553u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  CachedHandlesEntry = SepReferenceCachedTokenHandles(a3, a4, (__int64)PoolWithTag);
  if ( CachedHandlesEntry >= 0 )
  {
    v6 = 1;
    CachedHandlesEntry = SepValidateReferencedCachedHandles(a1, a2, a3, v4);
    if ( CachedHandlesEntry >= 0 )
    {
LABEL_5:
      CurrentThread = KeGetCurrentThread();
      v13 = a1[27] + 88LL;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      if ( !*(_QWORD *)(v13 + 8) && !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v13 + 8), 0, 0) )
      {
        CachedHandlesEntry = -1073741670;
        goto LABEL_27;
      }
      CachedHandlesEntry = SepGetCachedHandlesEntry(v13, a2, &v25, v24);
      if ( CachedHandlesEntry )
      {
LABEL_27:
        v23 = (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
        goto LABEL_31;
      }
      v14 = 0;
      if ( *a2 )
      {
        if ( *a2 != 1 )
        {
LABEL_13:
          v16 = 0;
          if ( !v14 )
            v16 = v6;
          v17 = 0LL;
          v6 = v16;
          if ( !v14 )
            v17 = v4;
          v4 = v17;
          v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v18 & 2) == 0 )
            goto LABEL_18;
          v23 = (v18 & 4) == 0;
LABEL_31:
          if ( v23 )
            ExfTryToWakePushLock(v13);
LABEL_18:
          KeAbPostRelease(v13);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
          goto LABEL_19;
        }
        v14 = v25 == 0;
        v15 = v24[0];
        a1[144] = v24[0];
      }
      else
      {
        v15 = v24[0];
        if ( a3 )
          v14 = *(_DWORD *)(v24[0] + 56LL) == 0;
        a1[136] = v24[0];
      }
      if ( v14 )
      {
        *(_DWORD *)(v15 + 56) = a3;
        *(_QWORD *)(v15 + 64) = v4;
      }
      goto LABEL_13;
    }
  }
LABEL_19:
  if ( v4 )
  {
    if ( v6 )
      SepCloseCachedTokenHandles(a3, v4);
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)CachedHandlesEntry;
}
