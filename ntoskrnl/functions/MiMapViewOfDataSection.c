__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8)
{
  int v8; // eax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  void *v14; // r10
  __int64 v15; // r9
  __int64 v16; // r13
  int v17; // edx
  int v18; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned int inserted; // esi
  unsigned __int64 v27; // rbx
  bool v28; // si
  ULONG_PTR SubsectionNode; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  _DWORD *Pool; // rax
  int v36; // ecx
  unsigned int v37; // ecx
  int v38; // eax
  bool v39; // zf
  int v40; // ecx
  unsigned int v41; // edx
  int v42; // ecx
  unsigned int v43; // eax
  int v44; // ecx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // rsi
  _DWORD *v50; // rsi
  unsigned __int64 v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r8
  __int64 *v57; // rax
  void *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // r8
  PVOID v62; // r14
  volatile signed __int64 *v63; // rdi
  int v64; // r8d
  int v65; // r9d
  int v66; // eax
  PVOID v67; // rbx
  PVOID v68; // r14
  unsigned __int64 v69; // [rsp+50h] [rbp-89h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-81h]
  PVOID PlaceholderVadToReplace; // [rsp+60h] [rbp-79h]
  int v72; // [rsp+68h] [rbp-71h]
  int v73; // [rsp+6Ch] [rbp-6Dh]
  unsigned __int64 v74; // [rsp+70h] [rbp-69h]
  unsigned __int64 v75; // [rsp+78h] [rbp-61h]
  unsigned __int64 ControlAreaPtes; // [rsp+80h] [rbp-59h]
  __int64 v77; // [rsp+88h] [rbp-51h]
  __int64 v78; // [rsp+90h] [rbp-49h]
  unsigned __int64 v79; // [rsp+98h] [rbp-41h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-39h]
  __int64 v81; // [rsp+A8h] [rbp-31h]
  __int64 v82; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int64 v83; // [rsp+B8h] [rbp-21h]
  __int64 v84; // [rsp+C0h] [rbp-19h] BYREF
  PVOID P; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v86; // [rsp+D0h] [rbp-9h] BYREF
  ULONG_PTR v87; // [rsp+D8h] [rbp-1h]
  int PlaceholderStorage; // [rsp+128h] [rbp+4Fh] BYREF
  unsigned __int64 *v89; // [rsp+130h] [rbp+57h]
  unsigned __int64 *v90; // [rsp+138h] [rbp+5Fh]

  v90 = a4;
  v89 = a3;
  v8 = *(_DWORD *)(a2 + 64);
  v69 = 0LL;
  v84 = 0LL;
  v73 = 0;
  if ( (v8 & 2) != 0 )
    return 3221225485LL;
  if ( (unsigned int)MiAweControlArea(a1) )
    return 3221225485LL;
  v15 = *v13;
  v16 = *(_QWORD *)(v12 + 88);
  v17 = *(_DWORD *)(v12 + 40);
  v80 = (unsigned __int64)v14;
  v77 = v15;
  if ( (v17 & 0x2000) != 0 && *(void **)(a1 + 64) == v14 )
    return 3221225485LL;
  v18 = v17 & 0x40000000;
  if ( (v17 & 0x20000000) != 0 )
  {
    if ( v18 || (v17 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
      return 3221225485LL;
    if ( *(void **)(a1 + 64) == v14 )
    {
      if ( !_bittest16((const signed __int16 *)(v15 + 12), 0xCu) )
        return 3221225485LL;
    }
    else if ( (*(_BYTE *)(a1 + 62) & 0xC) != 4 )
    {
      return 3221225485LL;
    }
  }
  else if ( v18 && ((v17 & 0x2000) != 0 || *(void **)(v16 + 2240) == v14 && (*(_DWORD *)(a2 + 60) & 1) == 0) )
  {
    return 3221225485LL;
  }
  v20 = *(_QWORD *)(a2 + 16);
  if ( v20 >= 0x200000 && ((v20 - 1) & *(_QWORD *)(a2 + 32)) != 0 || (v17 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
    return 3221225503LL;
  v21 = (__int64)v14;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v16 + 1680) + 48LL;
  PlaceholderVadToReplace = v14;
  v78 = v23;
  P = v14;
  v72 = (int)v14;
  MiCheckPurgeAndUpMapCount(a1);
  v24 = *a4;
  v25 = v24 + *(_QWORD *)(a2 + 24);
  v74 = v24 >> 12;
  v75 = v25 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v24 >> 12 < ControlAreaPtes )
  {
    v27 = a8;
    v28 = 0;
    if ( *(_QWORD *)(a1 + 64) == v21 )
    {
      v86 = v74;
      BugCheckParameter2 = (ULONG_PTR)MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v86);
      SubsectionNode = BugCheckParameter2;
      if ( !v27 && a7 == 24 )
        v28 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
    }
    else
    {
      SubsectionNode = (ULONG_PTR)MiLocateSubsectionNode(a1, *v90, 0);
      BugCheckParameter2 = SubsectionNode;
    }
    v30 = *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
    v74 -= v30;
    v31 = v75 - v30;
    if ( v28 )
      v31 = 1LL;
    v75 = v31;
    PlaceholderStorage = MiAddViewsForSection(SubsectionNode, v31, 8);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_118;
    v32 = (__int64 *)BugCheckParameter2;
    v81 = *(_QWORD *)(BugCheckParameter2 + 8) + 8 * v74;
    if ( *(_QWORD *)(a1 + 64) == v21 && v27 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
    {
      v33 = v21;
      LOBYTE(v33) = (v27 & 0xFFF) != 0;
      v80 = (v27 >> 12) + v33;
    }
    v82 = v21;
    v34 = *(_QWORD *)(a5 + 24) << 12;
    Pool = MiAllocatePool(64, 0x88uLL, 0x20646156u);
    v21 = (__int64)Pool;
    if ( !Pool )
    {
      inserted = -1073741670;
LABEL_117:
      MiRemoveViewsFromSectionWithPfn((__int64 *)BugCheckParameter2);
LABEL_118:
      MiDereferenceControlArea(a1);
      if ( v21 )
      {
        if ( *(__int64 *)(v21 + 120) < 0 )
          MiDereferenceExtendInfo(v21, a1);
        v58 = *(void **)(v21 + 128);
        if ( v58 )
          ObfDereferenceObject(v58);
        MiFreePlaceholderStorage(v21);
        ExFreePoolWithTag((PVOID)v21, 0);
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      return inserted;
    }
    v36 = Pool[16];
    *((_QWORD *)Pool + 2) = -2LL;
    v37 = v36 & 0xFBFFFFFF;
    *((_QWORD *)Pool + 10) = v81;
    v38 = 0;
    v39 = a6 == 1;
    *(_QWORD *)(v21 + 72) = v32;
    if ( v39 )
      v38 = 0x4000000;
    *(_DWORD *)(v21 + 64) = v38 | v37;
    v40 = *(_DWORD *)(v21 + 48) ^ (*(_DWORD *)(v21 + 48) ^ (a7 << 7)) & 0xF80;
    *(_DWORD *)(v21 + 48) = v40;
    *(_DWORD *)(v21 + 48) = v40 ^ (v40 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
    if ( *(_DWORD *)(a2 + 52) )
      *(_BYTE *)(*(_QWORD *)(v16 + 1680) + 340LL) = 1;
    if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
      *(_DWORD *)(v21 + 64) |= 0x2000000u;
    *(_QWORD *)(v21 + 40) = 0LL;
    v87 = v21 + 40;
    *(_DWORD *)(v21 + 64) = ((__int64)*v90 >> 16) & 0xFFFFFF | *(_DWORD *)(v21 + 64) & 0xFF000000;
    if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(v21);
      inserted = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
        goto LABEL_117;
      v32 = (__int64 *)BugCheckParameter2;
    }
    *(_QWORD *)(v21 + 128) = MiReferenceFileObjectForMap(a5);
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        v41 = MiIncrementLargeSubsections(v32, v75);
        if ( v41 > 1 )
        {
          inserted = -1073741280;
          goto LABEL_117;
        }
        v42 = *(_DWORD *)(v21 + 48);
        v73 = 1;
        v43 = v42 & 0xFFE7FFFF | 0x100000;
        v44 = v42 | 0x180000;
        if ( v41 == 1 )
          v44 = v43;
        *(_DWORD *)(v21 + 48) = v44;
      }
      else
      {
        *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x100000;
      }
    }
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v16);
    if ( (*(_DWORD *)(v16 + 1124) & 0x20) != 0 )
    {
      inserted = -1073741558;
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
      goto LABEL_115;
    }
    if ( (*(_DWORD *)(a2 + 60) & 1) != 0 )
    {
      v51 = *v89;
    }
    else
    {
      if ( !v34 )
      {
        PlaceholderStorage = MiSelectUserAddress(
                               *(_DWORD *)(a2 + 40),
                               *(_QWORD *)a2,
                               *(_QWORD *)(a2 + 8),
                               *(_QWORD *)(a2 + 24),
                               *(_QWORD *)(a2 + 16),
                               0LL,
                               a7,
                               0,
                               (__int64)&v82,
                               (__int64)&v69);
        inserted = PlaceholderStorage;
        if ( PlaceholderStorage >= 0 )
        {
          v45 = v69 - 1 + *(_QWORD *)(a2 + 24);
          v79 = v45;
          goto LABEL_66;
        }
LABEL_113:
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
        if ( v72 )
          MiRemoveSharedCommitNode(a1, v16, 0LL);
        goto LABEL_115;
      }
      v51 = v34 + *v90;
    }
    v52 = *(_QWORD *)(a2 + 24) - 1LL;
    v69 = v51;
    v45 = v51 + v52;
    v39 = (*(_DWORD *)(a2 + 64) & 0x4000000) == 0;
    v79 = v45;
    if ( v39 )
    {
      if ( !(unsigned int)MiIsVaRangeAvailable(v16, v51, v45 - v51 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        inserted = -1073741800;
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
LABEL_115:
        if ( v73 )
        {
          v57 = MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v90 - 1, 0);
          MiDecrementLargeSubsections((__int64 *)BugCheckParameter2, v57);
        }
        goto LABEL_117;
      }
    }
    else
    {
      PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(v51, v45, *(_BYTE *)(a2 + 57), &PlaceholderStorage);
      if ( !PlaceholderVadToReplace )
      {
        inserted = PlaceholderStorage;
        goto LABEL_113;
      }
    }
LABEL_66:
    ControlAreaPtes = v69 >> 12;
    v83 = v45 >> 12;
    MiUpdateVadStartVpn(v21, v69 >> 12);
    *(_DWORD *)(v21 + 28) = v46;
    *(_BYTE *)(v21 + 33) = BYTE4(v46);
    if ( (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
    {
      --CurrentThread->SpecialApcDisable;
      v48 = KeAbPreAcquire((__int64)&qword_140C651D0, 0LL);
      v49 = v48;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C651D0, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_140C651D0, v48, (__int64)&qword_140C651D0);
      if ( v49 )
        *(_BYTE *)(v49 + 18) = 1;
      v50 = *(_DWORD **)(v77 + 32);
      if ( v50 )
      {
        ++v50[2];
      }
      else
      {
        v53 = MiAllocatePool(64, 0x10uLL, 0x78436D4Du);
        v50 = v53;
        if ( !v53 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651D0);
          KeAbPostRelease((ULONG_PTR)&qword_140C651D0);
          v39 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v39
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          inserted = -1073741670;
          goto LABEL_111;
        }
        v54 = v77;
        v53[2] = 1;
        *(_QWORD *)v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 24), -1LL, -1LL);
        *(_QWORD *)(v54 + 32) = v53;
      }
      v55 = *(_QWORD *)(a5 + 48);
      if ( *(_QWORD *)v50 < v55 )
        *(_QWORD *)v50 = v55;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651D0);
      KeAbPostRelease((ULONG_PTR)&qword_140C651D0);
      v39 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v39
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v46 = v83;
      v47 = ControlAreaPtes;
      *(_QWORD *)(v21 + 120) = v50;
      v45 = v79;
    }
    if ( (a7 & 5) == 5 )
    {
      v56 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
          - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
          + 1;
      *(_DWORD *)(v21 + 52) ^= (*(_DWORD *)(v21 + 52) ^ (*(_DWORD *)(v21 + 28) - *(_DWORD *)(v21 + 24) + 1)) & 0x7FFFFFFF;
      *(_BYTE *)(v21 + 34) = v56 >> 31;
    }
    *(_QWORD *)(v21 + 88) = MiComputeContiguousSubsectionPte(BugCheckParameter2, v46 + v74 - v47);
    if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
    {
      P = MiAddSecureEntry(v21, v69, v45, 0x80000000, 0);
      if ( !P )
      {
        inserted = -1073741670;
        goto LABEL_111;
      }
    }
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
    {
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFFFFF8F | 0x50;
      *(_DWORD *)(v21 + 64) |= 0x1000000u;
    }
    if ( !*(_QWORD *)(a1 + 64) )
    {
      inserted = MiInsertSharedCommitNode(a1, v16, 0LL);
      if ( (inserted & 0x80000000) != 0 )
        goto LABEL_111;
      v72 = 1;
    }
    if ( v80 && !(unsigned int)MiChargeSegmentCommit(BugCheckParameter2, v81, v80) )
    {
      inserted = -1073741523;
      goto LABEL_111;
    }
    PlaceholderStorage = MiInsertVadCharges(v21, v16);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
    {
LABEL_111:
      if ( PlaceholderVadToReplace )
        MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace);
      goto LABEL_113;
    }
    if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x80000;
    if ( PlaceholderVadToReplace )
    {
      MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v16, v78);
      v59 = KeAbPreAcquire(v21 + 40, 0LL);
      v60 = v59;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v21 + 40), v59, v21 + 40);
      if ( v60 )
        *(_BYTE *)(v60 + 18) = 1;
    }
    else
    {
      MiLockVad((__int64)CurrentThread, v21);
    }
    MiInsertVad(v21, v16, 0);
    if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v77 + 56) )
      *(_QWORD *)(v77 + 56) = v69;
    v61 = v82;
    if ( v82 )
      MiAdvanceVadHint(ControlAreaPtes, v83);
    if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
    if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
      MiLogMapFileEvent(v21, 1061LL, v61);
    inserted = 0;
    PlaceholderStorage = 0;
    if ( !*(_DWORD *)(a2 + 120) && !*(_QWORD *)(a2 + 72) )
    {
      v62 = PlaceholderVadToReplace;
      if ( PlaceholderVadToReplace )
      {
        v63 = (volatile signed __int64 *)v87;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v87, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v63);
        KeAbPostRelease((ULONG_PTR)v63);
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
        inserted = PlaceholderStorage;
        MiFinishPlaceholderVadReplacement(v62);
        *v89 = v69;
      }
      else
      {
        MiUnlockVad((__int64)CurrentThread, v21);
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
        *v89 = v69;
      }
      return inserted;
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v16);
    MiReferenceVad(v21);
    v64 = *(_DWORD *)(a2 + 120);
    if ( v64 )
    {
      inserted = MiCommitVadMetadataBits(v21, 0LL, v64);
      if ( (inserted & 0x80000000) != 0 )
      {
LABEL_161:
        v67 = PlaceholderVadToReplace;
        MiUnmapVad((unsigned int *)v21, (__int64)PlaceholderVadToReplace, 0LL);
        if ( v67 )
          MiFinishPlaceholderVadReplacement(v67);
        return inserted;
      }
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v65 = *(_DWORD *)(a2 + 68);
      if ( (unsigned int)(v65 - 1) > 1 && v65 != -2147483647 && v65 != 4 )
      {
        v66 = -1073741755;
LABEL_160:
        inserted = v66;
        goto LABEL_161;
      }
      v66 = MiSecureVad(v21, v69, *(_QWORD *)(a2 + 24), v65, 0, &v84);
      if ( v66 < 0 )
        goto LABEL_160;
      **(_QWORD **)(a2 + 72) = qword_140C656C0 ^ v84 ^ v16;
    }
    v68 = PlaceholderVadToReplace;
    if ( PlaceholderVadToReplace )
    {
      MiUnlockAndDereferenceNestedVad((PVOID)v21);
      MiFinishPlaceholderVadReplacement(v68);
    }
    else
    {
      MiUnlockAndDereferenceVad((PVOID)v21);
    }
    *v89 = v69;
    return inserted;
  }
  inserted = -1073741793;
  MiDereferenceControlArea(a1);
  return inserted;
}
