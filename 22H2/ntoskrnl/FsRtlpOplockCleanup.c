/*
 * XREFs of FsRtlpOplockCleanup @ 0x140304D20
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402D44D0 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140206110 (FsRtlpComputeShareableOplockState.c)
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     IoGetOplockFullFoExt @ 0x1402D6F68 (IoGetOplockFullFoExt.c)
 *     FsRtlpOplockDequeueRH @ 0x1402D7250 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140305248 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpClearOwner @ 0x140375A58 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403798E4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0208 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F07CC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F08CC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r10
  __int64 OplockFullFoExt; // r13
  _QWORD *v11; // rbx
  int v12; // r12d
  __int64 v13; // rbx
  char v14; // r14
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rcx
  void *v19; // rcx
  _QWORD *v20; // r10
  __int64 v21; // rcx
  _QWORD *v22; // rax
  void *i; // rbx
  void *v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  char v30; // [rsp+40h] [rbp-48h]

  v4 = 0;
  v5 = 0;
  v30 = 0;
  if ( *(_DWORD *)(a1 + 144) == 1 )
    goto LABEL_59;
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48), a2, a3, a2);
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    for ( i = *(void **)(a1 + 104); ; i = *(void **)i )
    {
      if ( i == (void *)(a1 + 104) )
        goto LABEL_44;
      if ( *(_QWORD *)(v8 + 48) == *((_QWORD *)i + 2) )
        break;
    }
    while ( 1 )
    {
      v24 = *(void **)(a1 + 88);
      if ( v24 == (void *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v24);
    }
    v25 = (_QWORD *)**((_QWORD **)i + 1);
    v26 = *v25;
    v27 = (_QWORD *)v25[1];
    if ( *(_QWORD **)(*v25 + 8LL) != v25 || (_QWORD *)*v27 != v25 )
      goto LABEL_57;
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    ObfDereferenceObjectWithTag(*((PVOID *)i + 2), 0x746C6644u);
    ExFreePoolWithTag(i, 0);
    v8 = a2;
    v9 = 1;
LABEL_44:
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
      v5 = v9;
    v30 = v5;
  }
  v11 = *(_QWORD **)(a1 + 40);
  v12 = 534;
  if ( v11 != (_QWORD *)(a1 + 40) )
  {
    while ( v11 != (_QWORD *)(a1 + 40) )
    {
      v28 = v11[2];
      if ( *(_QWORD *)(v8 + 48) == *(_QWORD *)(v28 + 48) )
      {
        v11 = (_QWORD *)v11[1];
        if ( *(_DWORD *)(v28 + 24) == 590400 )
          v4 = v9;
        v29 = 534LL;
        if ( *(_DWORD *)(v28 + 24) != 590400 )
          v29 = 0LL;
        FsRtlpRemoveAndCompleteReadOnlyIrp(*v11, v29, 0LL);
        if ( v4 )
          break;
        v8 = a2;
        v9 = 1;
      }
      v11 = (_QWORD *)*v11;
    }
    FsRtlpComputeShareableOplockState(a1);
  }
  if ( !OplockFullFoExt )
    goto LABEL_11;
  v13 = *(_QWORD *)(OplockFullFoExt + 40);
  if ( !v13 )
    goto LABEL_11;
  v14 = 0;
  if ( (*(_DWORD *)(v13 + 48) & 0xF00000) != 0 )
  {
    FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v6, v7);
    FsRtlpModifyThreadPriorities(a1, v13, 0LL);
    FsRtlpClearOwner(a1, v13);
    if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
      *(_BYTE *)(a1 + 32) = 0;
    ObfDereferenceObjectWithTag(*(PVOID *)(v13 + 24), 0x746C6644u);
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v13 + 56) )
  {
    FsRtlpRemoveAndCompleteRHIrp((PVOID)v13, 0, 0, 0);
    goto LABEL_9;
  }
  FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v6, v7);
  v21 = *v20;
  v22 = (_QWORD *)v20[1];
  if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v22 != v20 )
LABEL_57:
    __fastfail(3u);
  *v22 = v21;
  *(_QWORD *)(v21 + 8) = v22;
  if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
    *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
  if ( *(_QWORD *)(v13 + 40) )
    FsRtlpClearOwner(a1, v13);
LABEL_27:
  ExFreePoolWithTag((PVOID)v13, 0);
  v14 = 1;
LABEL_9:
  FsRtlpComputeShareableOplockState(a1);
  if ( v14 )
    FsRtlpReleaseIrpsWaitingForRH(a1);
LABEL_11:
  if ( *(_QWORD *)(a2 + 48) == *(_QWORD *)(a1 + 8) )
  {
    v15 = *(_DWORD *)(a1 + 144);
    if ( (v15 & 0x1F00F80) == 0 )
    {
      v16 = *(_QWORD *)a1;
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v16 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v16 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v16 + 69));
      if ( *(_DWORD *)(v17 + 24) == 590400 )
      {
        v18 = *(_QWORD *)(v16 + 24);
        *(_OWORD *)v18 = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_DWORD *)v18 = 1572865;
        *(_DWORD *)(v18 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v16 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v16 + 56) = 8LL;
        v12 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v12;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v15 = *(_DWORD *)(a1 + 144);
      v5 = v30;
    }
    if ( (v15 & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    while ( 1 )
    {
      v19 = *(void **)(a1 + 88);
      if ( v19 == (void *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v19);
    }
  }
LABEL_59:
  if ( v5 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
}
