__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rax
  int v6; // ebp
  __int64 v7; // rbx
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  struct _FILE_OBJECT *v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // eax
  int v23; // edx
  __int64 v24; // rax
  struct _ERESOURCE **v25; // rdi
  unsigned int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rax
  int *v31; // rdx
  unsigned __int8 v32; // bl
  int v34; // edx
  int v35; // r8d
  unsigned __int64 v36; // rax
  volatile LONG *v37; // rsi
  unsigned __int64 v38; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  unsigned __int64 v43; // rbx
  __int64 v44; // rbx
  int v45; // r15d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  bool v49; // zf
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r9
  _DWORD *v61; // r8
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  _DWORD *v65; // r8
  int v66; // eax
  __int64 v67; // [rsp+60h] [rbp-58h] BYREF
  __int64 v68; // [rsp+68h] [rbp-50h]
  __int64 v69; // [rsp+70h] [rbp-48h] BYREF
  __int64 v70; // [rsp+78h] [rbp-40h]
  int v71; // [rsp+C8h] [rbp+10h]
  __int64 v73; // [rsp+D8h] [rbp+20h]
  unsigned int v74; // [rsp+D8h] [rbp+20h]

  v69 = 0LL;
  v3 = a2;
  v67 = 0LL;
  if ( a2 >= 0x10 )
  {
    v3 = 0;
    v5 = (_QWORD *)(a1 + 5328);
    do
    {
      if ( *v5 != 0x3FFFFFFFFFLL )
        goto LABEL_6;
      ++v3;
      v5 += 11;
    }
    while ( v3 < 0x10 );
    if ( v3 == 16 )
      return 0LL;
  }
LABEL_6:
  v6 = 0;
  v68 = a3 + 208;
  if ( *(_BYTE *)(a1 + 1043) )
  {
    v37 = (volatile LONG *)(a1 + 1036);
    v38 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1036));
    if ( *(_BYTE *)(a1 + 1045) )
    {
      *(_BYTE *)(a1 + 1045) = 0;
      *(_BYTE *)(a1 + 1043) = 0;
      v6 = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v37);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v38 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
        v49 = (v42 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v42;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v38);
  }
  if ( *(_BYTE *)(a1 + 1072) || v6 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  v73 = 88LL * v3;
  v7 = *(_QWORD *)(v73 + a1 + 5328);
  if ( v7 == 0x3FFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    if ( v7 != *(_QWORD *)(v73 + a1 + 5328) )
      goto LABEL_37;
    v10 = *(_QWORD *)(v8 + 16);
    if ( qword_140C657C0 && (v10 & 0x10) == 0 )
      v10 &= ~qword_140C657C0;
    v11 = v10 >> 16;
    v12 = *(_QWORD *)v11;
    v13 = *(_DWORD *)(*(_QWORD *)v11 + 56LL);
    if ( (v13 & 0x20) != 0 )
    {
      MiUnlinkPageFromListEx(v8);
      v43 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8 + 16) >> 5) & 0x1F;
      if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 3 )
      {
        MiClearPfnImageVerified(v8);
        if ( (_bittest((const signed __int32 *)&MiFlags, 0xFu) & ((v43 & 2) != 0)) != 0
          && (*(_DWORD *)(v12 + 92) & 0xC0000) != 0 )
        {
          MiMarkPfnVerified(v8, 32 * ((MiFlags & 0x10000) == 0) + 6);
        }
      }
      v44 = MiSwizzleInvalidPte(32LL * (unsigned int)v43);
      v45 = 0;
      if ( !(unsigned int)MiPteInShadowRange(v8 + 16) )
        goto LABEL_71;
      if ( (unsigned int)MiPteHasShadow(v47, v46, v48) )
      {
        v45 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v49 = (v44 & 1) == 0;
          goto LABEL_69;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v49 = (v44 & 1) == 0;
LABEL_69:
        if ( !v49 )
          v44 |= 0x8000000000000000uLL;
      }
LABEL_71:
      *(_QWORD *)(v8 + 16) = v44;
      if ( v45 )
        MiWritePteShadow(v8 + 16, v44);
      MiDereferenceControlAreaPfnList(v12, 0LL, v48, 3LL);
      goto LABEL_36;
    }
    if ( (v13 & 8) == 0 )
      break;
LABEL_35:
    MiUnlinkPageFromListEx(v8);
LABEL_36:
    MiInsertPageInList(v8);
LABEL_37:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v50 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v50 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v50 >= 2u )
      {
        v51 = KeGetCurrentPrcb();
        v52 = v51->SchedulerAssist;
        v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v49 = (v53 & v52[5]) == 0;
        v52[5] &= v53;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(v51);
      }
    }
    __writecr8(v9);
    v7 = *(_QWORD *)(v73 + a1 + 5328);
    if ( v7 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( (*(_DWORD *)(v12 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    goto LABEL_35;
  }
  v14 = *(_QWORD *)(v12 + 120);
  ++*(_DWORD *)(v12 + 76);
  v15 = 8 * v14;
  if ( 8 * v14 && _InterlockedIncrement64((volatile signed __int64 *)(v15 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  MiReferencePageForModifiedWrite(v8, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v54 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v54 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v54 >= 2u )
    {
      v55 = KeGetCurrentPrcb();
      v56 = v55->SchedulerAssist;
      v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v49 = (v57 & v56[5]) == 0;
      v56[5] &= v57;
      if ( v49 )
        KiRemoveSystemWorkPriorityKick(v55);
    }
  }
  __writecr8(v9);
  v16 = MiReferenceControlAreaFileWithTag(v12, 1666411853LL);
  v49 = *(_BYTE *)(a1 + 1043) == 0;
  v17 = (struct _FILE_OBJECT *)v16;
  v18 = *(_QWORD *)(v16 + 40);
  v70 = v18;
  if ( v49 )
    v19 = CcNotifyOfMappedWrite(v18, v67, 0LL);
  else
    v19 = 0;
  v20 = MiBuildMappedCluster((_QWORD *)v8, v68, v19);
  v68 = v20;
  *(_QWORD *)(a3 + 200) = v20;
  *(_QWORD *)(a3 + 160) = v12;
  v21 = MiStartingOffset(
          v11,
          *(_QWORD *)(48LL * *(_QWORD *)(v20 + 48) - 0x220000000000LL + 8) | 0x8000000000000000uLL,
          0xFFFFFFFFLL);
  v67 = v21;
  v22 = *(_DWORD *)(v20 + 40);
  v23 = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a3 + 136) = v22;
  v74 = v22 >> 12;
  *(_DWORD *)(a3 + 140) = (v22 >> 12) - 1;
  v24 = *(unsigned int *)(v20 + 40);
  v25 = (struct _ERESOURCE **)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v69 = v21 + v24;
  if ( (v17->DeviceObject->Characteristics & 0x10) != 0 )
    v26 = v23 | 2;
  else
    v26 = v23 & 0xFFFFFFFD;
  v71 = 0;
  *(_DWORD *)(a3 + 40) = v26;
  v27 = *(_DWORD *)(v12 + 56);
  if ( (v27 & 4) != 0 )
  {
    ObFastDereferenceObjectDeferDelete(v12 + 64, v17, 1666411853LL);
    v29 = -1073741740;
    v71 = 1;
    goto LABEL_30;
  }
  if ( (v27 & 0x10) != 0 )
  {
    ObFastDereferenceObjectDeferDelete(v12 + 64, v17, 1666411853LL);
    v29 = -1073741672;
    v71 = 1;
    goto LABEL_30;
  }
  *(_QWORD *)(a3 + 152) = v17;
  if ( (int)FsRtlAcquireFileForModWriteEx(v17, &v69, (struct _ERESOURCE **)(a3 + 168)) < 0 )
  {
    v29 = -1073741740;
    ObFastDereferenceObjectDeferDelete(v12 + 64, v17, 1666411853LL);
LABEL_29:
    *v25 = 0LL;
    goto LABEL_30;
  }
  v28 = CcNotifyOfMappedWrite(v70, v21, *(unsigned int *)(v68 + 40));
  if ( !v28 )
  {
    FsRtlReleaseFileForModWrite(v17, *v25);
    ObFastDereferenceObjectDeferDelete(v12 + 64, v17, 1666411853LL);
    v29 = -1073741740;
    v71 = 1;
    goto LABEL_29;
  }
  if ( v28 == 1 )
    *v25 = (struct _ERESOURCE *)((unsigned __int64)*v25 | 1);
  v34 = 2;
  *(_QWORD *)(a3 + 176) = v21;
  v35 = *(_DWORD *)(a1 + 728);
  v36 = *(_QWORD *)(a1 + 17216);
  if ( v35 )
  {
    if ( v36 < 0x420 )
    {
      v58 = v35 - 1;
      goto LABEL_96;
    }
    *(_DWORD *)(a1 + 728) = 0;
  }
  else
  {
    if ( v36 >= 0x120 )
      goto LABEL_45;
    v58 = v36 < 0xA0 ? 32 : 8;
LABEL_96:
    v34 = 4;
    *(_DWORD *)(a1 + 728) = v58;
  }
LABEL_45:
  __incgsdword(0x2EB4u);
  __addgsdword(0x2EB0u, v74);
  if ( (*(_BYTE *)(v12 + 62) & 0xC) != 0 )
  {
    MiFlushFileOnlyMdl(a3, v68, v67, 0LL, v11, a3 + 16);
    v32 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a3, (int *)(a3 + 16), 0);
    if ( KiIrqlFlags )
    {
      v59 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v59 <= 0xFu && v32 <= 0xFu && v59 >= 2u )
      {
        v60 = KeGetCurrentPrcb();
        v61 = v60->SchedulerAssist;
        v62 = ~(unsigned __int16)(-1LL << (v32 + 1));
        v49 = (v62 & v61[5]) == 0;
        v61[5] &= v62;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(v60);
      }
    }
    goto LABEL_31;
  }
  v29 = IoAsynchronousPageWrite(
          (_DWORD)v17,
          v68,
          (unsigned int)&v67,
          (unsigned int)MiWriteComplete,
          a3,
          v34,
          0,
          0,
          v15,
          a3 + 16,
          a3 + 32);
  if ( (v29 & 0xC0000000) == 0xC0000000 )
  {
LABEL_30:
    v30 = a3;
    *(_QWORD *)(a3 + 24) = 0LL;
    v31 = (int *)(a3 + 16);
    *(_DWORD *)(a3 + 16) = v29;
    v32 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(v30, v31, v71);
    if ( KiIrqlFlags )
    {
      v63 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v63 <= 0xFu && v32 <= 0xFu && v63 >= 2u )
      {
        v64 = KeGetCurrentPrcb();
        v65 = v64->SchedulerAssist;
        v66 = ~(unsigned __int16)(-1LL << (v32 + 1));
        v49 = (v66 & v65[5]) == 0;
        v65[5] &= v66;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(v64);
      }
    }
LABEL_31:
    __writecr8(v32);
  }
  if ( v15 )
    IoDiskIoAttributionDereference(v15);
  return 1LL;
}
