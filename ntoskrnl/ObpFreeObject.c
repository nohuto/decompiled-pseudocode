/*
 * XREFs of ObpFreeObject @ 0x1407C3980
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x1407C38A0 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     PspReturnResourceQuota @ 0x1402953A0 (PspReturnResourceQuota.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     PspReturnQuota @ 0x1403148A0 (PspReturnQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PspDereferenceQuotaBlock @ 0x140696A94 (PspDereferenceQuotaBlock.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 *     PspRemoveQuotaBlock @ 0x1409AB0BC (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v6; // rbp
  __int64 v7; // r13
  int *v8; // r15
  PVOID *v9; // r12
  unsigned int *v10; // r14
  char v11; // di
  __int64 v12; // rsi
  __int64 v13; // rbp
  char *v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // ecx
  ULONG_PTR v17; // r15
  ULONG v18; // edx
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  struct _SLIST_ENTRY *v21; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  void *v23; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  struct _KTHREAD *v27; // rcx
  bool v28; // zf
  signed int v29; // edi
  char *v30; // rsi
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // [rsp+28h] [rbp-50h]
  unsigned int v36; // [rsp+80h] [rbp+8h]
  unsigned int v37; // [rsp+88h] [rbp+10h]
  PVOID *v38; // [rsp+90h] [rbp+18h]
  char *v39; // [rsp+98h] [rbp+20h]

  v4 = *(unsigned __int8 *)(a1 + 26);
  if ( (v4 & 1) != 0 )
    v6 = (_QWORD *)(a1 - 32);
  else
    v6 = 0LL;
  if ( (v4 & 2) != 0 )
    v7 = a1 - ObpInfoMaskToOffset[v4 & 3];
  else
    v7 = 0LL;
  if ( (v4 & 4) != 0 )
    v38 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 7]);
  else
    v38 = 0LL;
  if ( (v4 & 8) != 0 )
    v8 = (int *)(a1 - ObpInfoMaskToOffset[v4 & 0xF]);
  else
    v8 = 0LL;
  if ( (v4 & 0x20) != 0 )
    v9 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 0x3F]);
  else
    v9 = 0LL;
  v10 = (unsigned int *)(a1 - ObpInfoMaskToOffset[v4]);
  if ( (v4 & 0x80u) != 0LL )
    v10 = (unsigned int *)((char *)v10 + 4LL - *v10);
  v11 = BYTE1(a1);
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  v35 = v12;
  if ( v6 && (_QWORD *)*v6 != v6 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v12 + 184, 0LL);
    v25 = *v6;
    v26 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v26 != v6 )
      __fastfail(3u);
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
    ExReleasePushLockEx((__int64 *)(v12 + 184), 0LL);
    v27 = KeGetCurrentThread();
    v28 = v27->SpecialApcDisable++ == -1;
    if ( v28 && ($C71981A45BEB2B45F82C232A7085991E *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery();
  }
  _InterlockedDecrement((volatile signed __int32 *)(v12 + 44));
  v13 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_25;
    v19 = *(_QWORD *)(v13 + 32);
    if ( v19 )
    {
      LOBYTE(a3) = 1;
      SeReleaseSecurityDescriptor(v19, *(unsigned __int8 *)(v13 + 16), a3, a4);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = *(struct _SLIST_ENTRY **)(a1 + 32);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v21);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v21);
    }
    goto LABEL_24;
  }
  if ( v13 )
  {
    if ( v8 )
    {
      v14 = (char *)*((_QWORD *)v8 + 2);
      v15 = *v8;
      v16 = v8[1];
      v36 = *v8;
      v37 = v16;
      v39 = v14;
      if ( (unsigned __int64)v14 > 1 )
      {
        if ( v8[2] )
        {
          PspReturnQuota(v14, 0LL, 1, (unsigned int)v8[2]);
          v14 = v39;
        }
        PspDereferenceQuotaBlock((volatile signed __int32 *)v14);
        v15 = v36;
        v16 = v37;
        v13 = *(_QWORD *)(a1 + 32);
      }
    }
    else
    {
      v15 = *(_DWORD *)(v12 + 104);
      v16 = *(_DWORD *)(v12 + 108);
    }
    v17 = v16;
    if ( v13 == 1 )
      goto LABEL_24;
    if ( v15 )
      PspReturnQuota((char *)v13, 0LL, 1, v15);
    if ( v17 )
      PspReturnQuota((char *)v13, 0LL, 0, v17);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_25;
    }
    v29 = 0;
    v30 = PspResourceFlags;
    v31 = v13 + 64;
    while ( 1 )
    {
      if ( (*v30 & 3) == 1 )
      {
        v32 = *(_QWORD *)(v31 + 16);
        v33 = *(_QWORD *)v31;
        if ( *(_QWORD *)v31 + *(_QWORD *)(v31 + 8) )
        {
          if ( v32 )
          {
            v34 = _InterlockedExchange64((volatile __int64 *)(v31 + 8), 0LL);
            v33 = _InterlockedExchange64((volatile __int64 *)v31, 0LL) + v34;
          }
          if ( v33 )
          {
LABEL_68:
            PspReturnResourceQuota(v29, v31 - 64, v33, v32 != 0);
            goto LABEL_69;
          }
        }
        else
        {
          v33 = 0LL;
        }
        if ( v32 )
          goto LABEL_68;
      }
LABEL_69:
      ++v29;
      v31 += 128LL;
      v30 += 8;
      if ( v29 >= 4 )
      {
        PspRemoveQuotaBlock(v13);
        ExFreePoolWithTag((PVOID)v13, 0);
        v11 = BYTE1(a1);
        v12 = v35;
        goto LABEL_24;
      }
    }
  }
LABEL_25:
  if ( v38 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v38, 0);
    *v38 = 0LL;
  }
  if ( v7 )
  {
    v23 = *(void **)(v7 + 16);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *(_QWORD *)(v7 + 16) = 0LL;
    }
  }
  if ( v9 && *v9 )
  {
    ExFreePoolWithTag(*v9, 0);
    *v9 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ v11 ^ 1;
  if ( v12 )
    v18 = *(_DWORD *)(v12 + 192);
  else
    v18 = 1416258127;
  ExFreePoolWithTag(v10, v18);
}
