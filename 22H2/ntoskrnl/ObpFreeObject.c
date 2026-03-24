/*
 * XREFs of ObpFreeObject @ 0x14063DC40
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14063DB60 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnQuota @ 0x1402C2010 (PspReturnQuota.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     PspReturnResourceQuota @ 0x140318838 (PspReturnResourceQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     PspDereferenceQuotaBlock @ 0x1406D91D0 (PspDereferenceQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x1409073F8 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v6; // r15
  PVOID *v7; // rdx
  PVOID *v8; // r12
  int *v9; // rsi
  unsigned int *v10; // r14
  char v11; // di
  __int64 v12; // rbp
  __int64 v13; // rcx
  void *v14; // r15
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  __int64 v17; // rsi
  __int64 v18; // r9
  ULONG v19; // edx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  void *v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  signed int v26; // r12d
  char *v27; // r13
  __int64 v28; // r15
  __int64 v29; // r8
  PVOID *v30; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+68h] [rbp+10h]
  PVOID *v32; // [rsp+70h] [rbp+18h]

  v4 = *(unsigned __int8 *)(a1 + 26);
  if ( (v4 & 1) != 0 )
    v6 = (_QWORD *)(a1 - 32);
  else
    v6 = 0LL;
  v7 = (PVOID *)*(unsigned __int8 *)(a1 + 26);
  if ( (v4 & 2) != 0 )
  {
    a3 = a1 - ObpInfoMaskToOffset[v4 & 3];
    v31 = a3;
  }
  else
  {
    v31 = 0LL;
  }
  if ( (v4 & 4) != 0 )
    v8 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 7]);
  else
    v8 = 0LL;
  v30 = v8;
  if ( (v4 & 8) != 0 )
    v9 = (int *)(a1 - ObpInfoMaskToOffset[v4 & 0xF]);
  else
    v9 = 0LL;
  if ( (v4 & 0x20) != 0 )
  {
    v7 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 0x3F]);
    v32 = v7;
  }
  else
  {
    v32 = 0LL;
  }
  v10 = (unsigned int *)(a1 - ObpInfoMaskToOffset[v4]);
  if ( (v4 & 0x80u) != 0LL )
    v10 = (unsigned int *)((char *)v10 + 4LL - *v10);
  v11 = BYTE1(a1);
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v6 && (_QWORD *)*v6 != v6 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v12 + 184, 0LL);
    v24 = *v6;
    v25 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v25 != v6 )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
    ExReleasePushLockEx(v12 + 184, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  _InterlockedDecrement((volatile signed __int32 *)(v12 + 44));
  v13 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_26;
    if ( *(_QWORD *)(v13 + 32) )
    {
      LOBYTE(a3) = 1;
      SeReleaseSecurityDescriptor(*(_QWORD *)(v13 + 32), *(unsigned __int8 *)(v13 + 16), a3, a4);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
      v13 = *(_QWORD *)(a1 + 32);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++P->FreeMisses;
      ((void (*)(void))P->FreeEx)();
    }
    goto LABEL_25;
  }
  if ( v13 )
  {
    if ( v9 )
    {
      v14 = (void *)*((_QWORD *)v9 + 2);
      v15 = *v9;
      v16 = v9[1];
      if ( (unsigned __int64)v14 > 1 )
      {
        if ( v9[2] )
          PspReturnQuota(*((char **)v9 + 2), 0LL, 1u, (unsigned int)v9[2]);
        PspDereferenceQuotaBlock(v14);
      }
    }
    else
    {
      v15 = *(_DWORD *)(v12 + 104);
      v16 = *(_DWORD *)(v12 + 108);
    }
    v17 = *(_QWORD *)(a1 + 32);
    v18 = v15;
    if ( v17 == 1 )
      goto LABEL_24;
    if ( v15 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1u, v15);
    if ( v16 )
      PspReturnQuota((char *)v17, 0LL, 0, v16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      v8 = v30;
LABEL_25:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_26;
    }
    v26 = 0;
    v27 = PspResourceFlags;
    v28 = v17 + 64;
    while ( 1 )
    {
      if ( (*v27 & 3) == 1 )
      {
        v7 = *(PVOID **)(v28 + 16);
        a3 = *(_QWORD *)v28;
        v18 = v7 != 0LL;
        if ( *(_QWORD *)v28 + *(_QWORD *)(v28 + 8) )
        {
          if ( v7 )
          {
            v29 = _InterlockedExchange64((volatile __int64 *)(v28 + 8), 0LL);
            a3 = _InterlockedExchange64((volatile __int64 *)v28, 0LL) + v29;
          }
          if ( a3 )
          {
LABEL_66:
            PspReturnResourceQuota(v26, v28 - 64, a3, v18);
            goto LABEL_67;
          }
        }
        else
        {
          a3 = 0LL;
        }
        if ( v7 )
          goto LABEL_66;
      }
LABEL_67:
      ++v26;
      v28 += 128LL;
      v27 += 8;
      if ( v26 >= 4 )
      {
        PspRemoveQuotaBlock(v17, v7, a3, v18);
        ExFreePoolWithTag((PVOID)v17, 0);
        goto LABEL_24;
      }
    }
  }
LABEL_26:
  if ( v8 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v8, 0);
    *v8 = 0LL;
  }
  if ( v31 )
  {
    v22 = *(void **)(v31 + 16);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *(_QWORD *)(v31 + 16) = 0LL;
    }
  }
  if ( v32 && *v32 )
  {
    ExFreePoolWithTag(*v32, 0);
    *v32 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ v11 ^ 1;
  if ( v12 )
    v19 = *(_DWORD *)(v12 + 192);
  else
    v19 = 1416258127;
  ExFreePoolWithTag(v10, v19);
}
