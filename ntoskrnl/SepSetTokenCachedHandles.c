/*
 * XREFs of SepSetTokenCachedHandles @ 0x140739630
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140296F14 (SepSetTokenBnoIsolation.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     SepReferenceCachedTokenHandles @ 0x1402B7E88 (SepReferenceCachedTokenHandles.c)
 *     RtlCreateHashTable @ 0x1402B8530 (RtlCreateHashTable.c)
 *     SepCloseCachedTokenHandles @ 0x140300274 (SepCloseCachedTokenHandles.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SepGetCachedHandlesEntry @ 0x1407397EC (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCachedHandles(_QWORD *a1, _DWORD *a2, unsigned int a3, HANDLE *a4)
{
  HANDLE *v4; // rdi
  char v6; // r12
  __int64 Pool2; // rax
  int CachedHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rsi
  bool v14; // dl
  __int64 v15; // rcx
  char v16; // al
  char v17; // bl
  bool v19; // zf
  __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  HANDLE *v21; // [rsp+30h] [rbp-38h]
  char v22; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v6 = 0;
  v22 = 0;
  if ( a3 )
  {
    Pool2 = ExAllocatePool2(256LL, 8LL * a3, 1665688915LL);
    v4 = (HANDLE *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    CachedHandlesEntry = SepReferenceCachedTokenHandles(a3, a4, Pool2);
    if ( CachedHandlesEntry < 0 )
      goto LABEL_31;
    v6 = 1;
    CachedHandlesEntry = SepValidateReferencedCachedHandles(a1, a2, a3, v4);
    if ( CachedHandlesEntry < 0 )
    {
LABEL_30:
      SepCloseCachedTokenHandles(a3, v4);
      goto LABEL_31;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = a1[27] + 88LL;
  v21 = v4;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v13, 0LL);
  if ( !*(_QWORD *)(v13 + 8) && !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v13 + 8), 0, 0) )
  {
    CachedHandlesEntry = -1073741670;
    goto LABEL_24;
  }
  CachedHandlesEntry = SepGetCachedHandlesEntry(v13, a2, &v22, &v20);
  if ( CachedHandlesEntry )
  {
LABEL_24:
    v19 = (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
LABEL_25:
    if ( v19 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    goto LABEL_18;
  }
  v14 = 0;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      goto LABEL_13;
    v14 = v22 == 0;
    v15 = v20;
    a1[144] = v20;
  }
  else
  {
    v15 = v20;
    if ( a3 )
      v14 = *(_DWORD *)(v20 + 56) == 0;
    a1[136] = v20;
  }
  if ( v14 )
  {
    *(_DWORD *)(v15 + 56) = a3;
    *(_QWORD *)(v15 + 64) = v4;
  }
LABEL_13:
  v16 = v6;
  v6 = 0;
  if ( !v14 )
    v6 = v16;
  v4 = 0LL;
  if ( !v14 )
    v4 = v21;
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 )
  {
    v19 = (v17 & 4) == 0;
    goto LABEL_25;
  }
LABEL_18:
  KeAbPostRelease(v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    if ( v6 )
      goto LABEL_30;
LABEL_31:
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)CachedHandlesEntry;
}
