/*
 * XREFs of ExpWnfWriteStateData @ 0x140610910
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14060EA3C (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1403FA620 (ZwSetValueKey.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExpWnfComposeValueName @ 0x1406F67D0 (ExpWnfComposeValueName.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfWriteStateData(__int64 a1, const void *a2, unsigned int a3, int a4, int a5)
{
  size_t v6; // r13
  const void *v7; // r12
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  _DWORD *v12; // rcx
  _DWORD *v13; // r14
  __int32 i; // esi
  void *v15; // rcx
  _DWORD *v17; // r9
  _KPROCESS *v18; // rcx
  int v19; // r12d
  _DWORD *PoolWithTag; // r14
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // eax
  _DWORD *v24; // [rsp+38h] [rbp-C0h]
  NTSTATUS v25; // [rsp+40h] [rbp-B8h]
  PVOID P; // [rsp+48h] [rbp-B0h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-90h]
  _OWORD v30[3]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-58h] BYREF

  v6 = a3;
  v7 = a2;
  v29 = a1;
  memset(v30, 0, sizeof(v30));
  v25 = 0;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v31;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v24 = 0LL;
  P = 0LL;
  v9 = (volatile signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v10, a1 + 80);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( a5 )
  {
    v23 = *(_QWORD *)(a1 + 88) ? *(_DWORD *)(a1 + 96) : 0;
    if ( v23 != a4 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
      KeAbPostRelease(a1 + 80);
      return 3221225473LL;
    }
  }
  v12 = 0LL;
  if ( *(_QWORD *)(a1 + 88) != 1LL )
    v12 = *(_DWORD **)(a1 + 88);
  if ( !v12 && (*(_QWORD *)(a1 + 104) || (_DWORD)v6) || (v13 = v12) != 0LL && v12[1] < (unsigned int)v6 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || PsInitialSystemProcess == *(PEPROCESS *)(a1 + 152) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 16), 0x20666E57u);
      v24 = PoolWithTag;
    }
    else
    {
      v18 = *(_KPROCESS **)(a1 + 152);
      if ( !v18 )
        return 3221225524LL;
      if ( v18 == KeGetCurrentThread()->ApcState.Process )
      {
        v19 = 0;
      }
      else
      {
        v19 = 1;
        KiStackAttachProcess(v18, 0LL, (__int64)v30, v17);
      }
      PoolWithTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v6 + 16), 0x20666E57u);
      v24 = PoolWithTag;
      if ( v19 )
        KiUnstackDetachProcess((__int64)v30, 0);
      v7 = a2;
    }
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *PoolWithTag = 1050884;
    PoolWithTag[1] = v6;
    v21 = KeAbPreAcquire(a1 + 80, 0LL, 0);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v21, a1 + 80);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v13 = *(_DWORD **)(a1 + 88);
    if ( !v13 || v13[1] < (unsigned int)v6 )
      v13 = v24;
  }
  for ( i = *(_DWORD *)(a1 + 96) + 1; !i; i = 1 )
    ;
  if ( v13 )
  {
    memmove(v13 + 4, v7, v6);
    v13[2] = v6;
    v13[3] = i;
    v15 = *(void **)(a1 + 104);
    if ( v15 )
    {
      v25 = ZwSetValueKey(v15, &ValueName, 0, 3u, v13 + 3, v6 + 4);
      if ( v25 < 0 )
      {
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_24;
      }
    }
    if ( v13 == v24 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v13;
      v24 = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 1LL;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 96), i);
LABEL_24:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( (unsigned __int64)P >= 2 )
    ExFreePoolWithTag(P, 0x20666E57u);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x20666E57u);
  return (unsigned int)v25;
}
