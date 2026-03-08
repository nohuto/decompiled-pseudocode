/*
 * XREFs of MiDeletePteRun @ 0x140279760
 * Callers:
 *     MiDeleteEmptyPageTableTail @ 0x1402D3FC0 (MiDeleteEmptyPageTableTail.c)
 *     MiDeleteVaTail @ 0x140323460 (MiDeleteVaTail.c)
 * Callees:
 *     MiWriteTopLevelPxe @ 0x140201C64 (MiWriteTopLevelPxe.c)
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x14027A5E0 (MiDeleteBatch.c)
 *     MiDeleteClusterPage @ 0x14027A890 (MiDeleteClusterPage.c)
 *     MiSetNonResidentPteHeat @ 0x140287A90 (MiSetNonResidentPteHeat.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiTryDeleteTransitionPte @ 0x14029CB54 (MiTryDeleteTransitionPte.c)
 *     MiDecrementCombinedPteEx @ 0x14029DAF4 (MiDecrementCombinedPteEx.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiMakeProtoTransition @ 0x1402C59B0 (MiMakeProtoTransition.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CF5DC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiDecreaseUsedPtesCount @ 0x1402D0E90 (MiDecreaseUsedPtesCount.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MiInsertProtectedStandbyPage @ 0x1402DFCF4 (MiInsertProtectedStandbyPage.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiDoubleUnlockMdlPage @ 0x1402FFE30 (MiDoubleUnlockMdlPage.c)
 *     MiIsPfnLocked @ 0x14030043C (MiIsPfnLocked.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiShowBadMapper @ 0x14062EC9C (MiShowBadMapper.c)
 *     MiBadShareCount @ 0x14064B0E0 (MiBadShareCount.c)
 *     MiDecrementCloneBlockReference @ 0x14066176C (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeletePteRun(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rdx
  ULONG_PTR v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned int v9; // r12d
  ULONG_PTR v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // r14d
  unsigned __int64 v14; // r12
  ULONG_PTR v15; // r13
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  ULONG_PTR v18; // rbx
  __int64 v19; // r9
  ULONG_PTR v20; // r15
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rbx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rdx
  char v32; // cl
  __int64 v33; // r13
  char v34; // dl
  _DWORD *v35; // r12
  __int64 v36; // r10
  BOOL v37; // r8d
  int v38; // ebx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  char v42; // al
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r14
  BOOL v49; // eax
  char v50; // cl
  unsigned __int64 v51; // r8
  __int64 result; // rax
  unsigned __int64 v53; // r14
  __int64 v54; // rdi
  unsigned __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // r8
  int v60; // eax
  unsigned __int64 v61; // rax
  char v62; // al
  char v63; // al
  int PagingFileOffset; // eax
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v69; // rax
  struct _LIST_ENTRY *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct _LIST_ENTRY *v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  ULONG_PTR v78; // rbx
  unsigned __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // [rsp+30h] [rbp-D0h]
  BOOL v83; // [rsp+34h] [rbp-CCh]
  int v84; // [rsp+38h] [rbp-C8h]
  _QWORD *v85; // [rsp+40h] [rbp-C0h]
  char v87; // [rsp+50h] [rbp-B0h]
  __int64 v88; // [rsp+58h] [rbp-A8h]
  int v89; // [rsp+60h] [rbp-A0h]
  int v90; // [rsp+64h] [rbp-9Ch]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v92; // [rsp+70h] [rbp-90h] BYREF
  __int64 v93; // [rsp+78h] [rbp-88h]
  int v94; // [rsp+80h] [rbp-80h] BYREF
  int v95; // [rsp+84h] [rbp-7Ch] BYREF
  int v96; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v97; // [rsp+90h] [rbp-70h]
  __int64 v98; // [rsp+98h] [rbp-68h]
  ULONG_PTR v99; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v100; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v101; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v103; // [rsp+C0h] [rbp-40h]
  __int64 v104; // [rsp+C8h] [rbp-38h]
  __int64 v105; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v107; // [rsp+E0h] [rbp-20h]
  __int128 v108; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v109; // [rsp+F8h] [rbp-8h]
  _QWORD v110[18]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v111[2]; // [rsp+190h] [rbp+90h] BYREF

  v109 = 0LL;
  v108 = 0LL;
  memset(v110, 0, sizeof(v110));
  v3 = *(_QWORD **)(a2 + 32);
  v4 = *(unsigned int *)(a2 + 120);
  v5 = *(_QWORD *)a2;
  v87 = *(_BYTE *)(a2 + 124);
  v99 = *(_QWORD *)(a2 + 8);
  v101 = *(_QWORD *)(a2 + 104);
  v85 = v3;
  v82 = v4;
  v6 = 0LL;
  v104 = 0LL;
  v7 = (__int64)(v5 << 25) >> 16;
  v8 = 1LL;
  v83 = v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    v93 = 0LL;
  }
  else
  {
    v93 = a1 - 1664;
    v6 = v104;
  }
  v9 = 0;
  v10 = 0LL;
  v90 = 0;
  v98 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v84 = 0;
  v88 = 0LL;
  v100 = 0LL;
  if ( v5 <= v99 )
  {
    v11 = a1;
    v8 = 0xFFFFF6FB40000000uLL;
    while ( 1 )
    {
      v12 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v69 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
          if ( (v69 & 0x20) != 0 )
            v12 |= 0x20uLL;
          v4 = v82;
          if ( (v69 & 0x42) != 0 )
            v12 |= 0x42uLL;
        }
        else
        {
          v4 = v82;
        }
      }
      if ( v12 )
      {
        v13 = v4 & 0x80;
        v89 = v13;
        if ( (v4 & 0x80) != 0 && (v5 < 0xFFFFF6FB7DBED000uLL || v5 > 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v84 = ++v9;
          if ( !v10 )
          {
            v53 = ((((__int64)((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v54 = *(_QWORD *)v53;
            if ( (unsigned int)MiPteInShadowRange(v53)
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v54 & 1) != 0
              && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
            {
              v70 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v70 )
              {
                v71 = *((_QWORD *)&v70->Flink + ((v53 >> 3) & 0x1FF));
                if ( (v71 & 0x20) != 0 )
                  v54 |= 0x20uLL;
                if ( (v71 & 0x42) != 0 )
                  v54 |= 0x42uLL;
              }
            }
            v105 = v54;
            v13 = v89;
            v100 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v105) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          }
        }
        if ( (v12 & 0x400) != 0 )
        {
          v14 = 0LL;
          v15 = 0LL;
          BugCheckParameter3 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v16 = 0LL;
          v97 = 0LL;
          BugCheckParameter2 = 0LL;
          v103 = 0LL;
          v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&BugCheckParameter3) >> 12) & 0xFFFFFFFFFFLL;
          if ( v18 > qword_140C65820
            || (v17 = 48 * v18,
                v107 = 48 * v18,
                !_bittest64((const signed __int64 *)(48 * v18 - 0x21FFFFFFFFD8LL), 0x36u)) )
          {
            MiDeleteBatch(v110, v17, v6, v19);
            goto LABEL_201;
          }
          v20 = v17 - 0x220000000000LL;
          if ( (v82 & 0x60) != 0 && !v83 )
          {
            MiDeleteBatch(v110, v17, v6, v19);
            if ( v20 )
            {
              if ( !(unsigned int)MiIsPfnLocked(v20) )
                MiShowBadMapper(v18, 0LL);
              if ( (v82 & 0x40) != 0 )
                MiDoubleUnlockMdlPage(v20);
LABEL_187:
              v30 = 48 * MiGetContainingPageTable(v5, v66, v67) - 0x220000000000LL;
              v38 = 4;
LABEL_62:
              if ( v30 )
              {
                v96 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v96);
                  while ( *(__int64 *)(v30 + 24) < 0 );
                }
                if ( (*(_BYTE *)(v30 + 34) & 7) != 6 )
                  MiBadShareCount(v30);
                v44 = (*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
                *(_QWORD *)(v30 + 24) ^= (*(_QWORD *)(v30 + 24) ^ v44) & 0x3FFFFFFFFFFFFFFFLL;
                if ( !v44 )
                  MiPfnShareCountIsZero(v30);
                _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( v16 )
                MiReleasePageFileInfo(v88, v16, 1);
              if ( v14 )
              {
                v65 = MiDecrementCombinedPteEx(v93 + 1664, v14, 0LL);
              }
              else
              {
                if ( !BugCheckParameter2 )
                  goto LABEL_72;
                v65 = MiDecrementCloneBlockReference(BugCheckParameter2, v103);
              }
              v38 = v65;
LABEL_72:
              if ( !(_DWORD)v15 )
              {
                if ( v38 == 3 )
                {
                  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 || v88 == v98 )
                    ++v85[1];
                }
                else if ( v38 == 5 )
                {
                  ++v85[3];
                }
              }
              if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
                ++*v85;
              if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBEDFFFuLL && (*(_BYTE *)(a1 + 184) & 7) != 0 )
              {
                MiWriteTopLevelPxe((_QWORD *)v5, ZeroPte);
                goto LABEL_81;
              }
              v45 = ZeroPte;
              if ( !(unsigned int)MiPteInShadowRange(v5) )
              {
LABEL_80:
                *(_QWORD *)v5 = v45;
                goto LABEL_81;
              }
              if ( !(unsigned int)MiPteHasShadow(v47, v46, v6) )
              {
LABEL_158:
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v45 & 1) != 0 )
                {
                  v45 |= 0x8000000000000000uLL;
                }
                goto LABEL_80;
              }
              if ( HIBYTE(word_140C6697C) || (ZeroPte & 1) == 0 )
              {
LABEL_168:
                *(_QWORD *)v5 = v45;
                MiWritePteShadow(v5, v45);
LABEL_81:
                v9 = v84;
LABEL_82:
                v3 = v85;
LABEL_83:
                v11 = a1;
                goto LABEL_84;
              }
LABEL_223:
              v45 |= 0x8000000000000000uLL;
              goto LABEL_168;
            }
LABEL_201:
            MiDereferenceIoPages(1LL, v18, 1LL);
            goto LABEL_187;
          }
          if ( (*(_BYTE *)(a1 + 184) & 7) == 0
            && !v83
            && (v18 & 0xF) == 0
            && ((__int64)(v99 - v5) >> 3) + 1 >= 16
            && (unsigned int)MiDeleteClusterPage(v5) )
          {
            v9 = v84;
            if ( v13 )
            {
              v9 = v84 + 15;
              v84 += 15;
            }
            v5 += 120LL;
            goto LABEL_82;
          }
          v21 = *(_QWORD *)(v20 + 8);
          v22 = v21 | 0x8000000000000000uLL;
          v23 = *(_QWORD *)(v20 + 40);
          if ( v23 >= 0 )
          {
            if ( v20 == qword_140C69370 )
            {
              v45 = ZeroPte;
              if ( !(unsigned int)MiPteInShadowRange(v5) )
                goto LABEL_80;
              if ( !(unsigned int)MiPteHasShadow(v73, v72, v6) )
                goto LABEL_158;
              if ( HIBYTE(word_140C6697C) || (ZeroPte & 1) == 0 )
                goto LABEL_168;
              goto LABEL_223;
            }
            v85[1] += MiDeleteBatch(v110, v21, v6, v19);
            if ( v22 != v5 )
              KeBugCheckEx(0x1Au, 0x403uLL, v5, BugCheckParameter3, *(_QWORD *)(v20 + 8));
            v48 = 48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFLL);
            ++v85[4];
            v30 = v48 - 0x220000000000LL;
            v94 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v94);
              while ( *(__int64 *)(v20 + 24) < 0 );
            }
            v49 = v83;
            v33 = a1;
            if ( v83 )
            {
              if ( (*(_BYTE *)(a1 + 184) & 7) == 1
                && v5 >= 0xFFFFF6FB7DBED000uLL
                && v5 <= 0xFFFFF6FB7DBEDFFFuLL
                && (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 2 )
              {
                MiDecrementShareCount(v20);
                v30 = 0LL;
              }
              v49 = v83;
            }
            *(_QWORD *)(v20 + 24) |= 0x4000000000000000uLL;
            if ( v87 && v49 )
            {
              v108 = 0LL;
              v109 = 0LL;
              MiIdentifyPfn(v18, &v108);
              v90 = 1;
            }
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && ((*(_QWORD *)(v20 + 40) >> 60) & 7) == 2 )
              MiSetPfnIdentity(v20, 0LL);
            v24 = v85;
          }
          else
          {
            if ( (v23 & 0x10000000000LL) == 0 && v21 >= 0 && v21 )
            {
              v14 = *(_QWORD *)(v20 + 8) | 0x8000000000000000uLL;
              v97 = v14;
              goto LABEL_25;
            }
            if ( v5 <= 0xFFFFF6BFFFFFFF78uLL
              && v5 >= 0xFFFFF68000000000uLL
              && *(_QWORD *)(v93 + 1264)
              && (v103 = *(_QWORD *)(v20 + 8) | 0x8000000000000000uLL,
                  BugCheckParameter2 = MiLocateCloneAddress(v93, v103),
                  (v15 = BugCheckParameter2) != 0) )
            {
LABEL_25:
              v24 = v85;
              v85[1] += MiDeleteBatch(v110, v21, v6, v19);
            }
            else
            {
              v24 = v85;
            }
            v25 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v26 = *(_QWORD *)v25;
            if ( v25 >= 0xFFFFF6FB7DBED000uLL
              && v25 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v26 & 1) != 0
              && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
            {
              v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v74 )
              {
                v75 = *((_QWORD *)&v74->Flink + ((v25 >> 3) & 0x1FF));
                if ( (v75 & 0x20) != 0 )
                  v26 |= 0x20uLL;
                if ( (v75 & 0x42) != 0 )
                  v26 |= 0x42uLL;
              }
            }
            v106 = v26;
            v30 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v106) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( !LOBYTE(v110[0]) )
              goto LABEL_32;
            if ( v30 != v110[1]
              || *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)) != v98
              || _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
              v24[1] += MiDeleteBatch(v110, v27, v28, v29);
            }
            v31 = LOBYTE(v110[0]);
            if ( !LOBYTE(v110[0]) )
            {
LABEL_32:
              v110[1] = v30;
              v95 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v95);
                while ( *(__int64 *)(v20 + 24) < 0 );
              }
              v31 = LOBYTE(v110[0]);
            }
            if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
            {
              v32 = *(_BYTE *)(v20 + 34);
              if ( (v32 & 7) == 6
                && (*(_DWORD *)(v20 + 16) & 0x400LL) == 0
                && ((BugCheckParameter3 & 0x42) != 0 || (v32 & 0x10) != 0)
                && !v14
                && !v15 )
              {
                v110[(unsigned __int8)v31 + 2] = BugCheckParameter3;
                if ( !LOBYTE(v110[0]) )
                  v88 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
                v55 = ZeroPte;
                if ( (unsigned int)MiPteInShadowRange(v5) )
                {
                  if ( !(unsigned int)MiPteHasShadow(v57, v56, v6) )
                  {
                    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                      && (ZeroPte & 1) != 0 )
                    {
                      v55 = ZeroPte | 0x8000000000000000uLL;
                    }
                    goto LABEL_119;
                  }
                  if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
                    v55 = ZeroPte | 0x8000000000000000uLL;
                  *(_QWORD *)v5 = v55;
                  MiWritePteShadow(v5, v55);
                }
                else
                {
LABEL_119:
                  *(_QWORD *)v5 = v55;
                }
                if ( ++LOBYTE(v110[0]) != 16 )
                  goto LABEL_81;
                v3 = v85;
                v9 = v84;
                v85[1] += MiDeleteBatch(v110, v56, v6, v58);
                goto LABEL_83;
              }
            }
            if ( (_BYTE)v31 )
            {
              BYTE1(v110[0]) = 1;
              v24[1] += MiDeleteBatch(v110, v31, v28, v29);
              BYTE1(v110[0]) = 0;
            }
            v33 = a1;
          }
          v34 = *(_BYTE *)(v20 + 34);
          if ( (v34 & 7) != 6 )
            MiBadShareCount(v20);
          v35 = (_DWORD *)(v20 + 16);
          v36 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
          v88 = v36;
          if ( (BugCheckParameter3 & 0x42) != 0 && (v34 & 0x10) == 0 )
          {
            if ( (*v35 & 0x400LL) == 0 && (v34 & 8) == 0 )
            {
              v76 = MiCapturePageFileInfoInline(v20 + 16, 1LL, 0LL);
              v36 = v88;
              v16 = v76;
            }
            *(_BYTE *)(v20 + 34) |= 0x10u;
          }
          if ( (*(_BYTE *)(v33 + 184) & 7) != 0 && *(__int64 *)(v20 + 40) < 0 )
          {
            v77 = *(_QWORD *)v35;
            if ( (*(_QWORD *)v35 & 0x400LL) == 0 || (BugCheckParameter3 & 0x200) != 0 )
              goto LABEL_259;
            if ( qword_140C657C0 && (v77 & 0x10) == 0 )
              v77 &= ~qword_140C657C0;
            if ( (*(_DWORD *)(*(_QWORD *)(v77 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_259:
              ++v24[4];
          }
          v37 = v83;
          LODWORD(v15) = 0;
          v38 = 4;
          if ( v83 && v89 )
            LODWORD(v15) = (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
          v39 = *(_QWORD *)(v20 + 24) ^ ((*(_QWORD *)(v20 + 24) - 1LL) ^ *(_QWORD *)(v20 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v20 + 24) = v39;
          if ( (v39 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          {
            if ( v83 )
            {
              if ( (_WORD)v39 )
                KeBugCheckEx(0x1Au, 0x61951uLL, v20, v39 & 0x3FFFFFFFFFFFFFFFLL, *(unsigned __int16 *)(v20 + 32));
              v38 = 2;
              if ( (v82 & 0x100) == 0 )
                *(_QWORD *)v20 &= ~1uLL;
            }
          }
          else
          {
            if ( *(__int64 *)(v20 + 40) < 0 )
            {
              MiMakeProtoTransition(v20, 1LL);
              v37 = v83;
            }
            v40 = *(_QWORD *)(v20 + 24);
            --*(_WORD *)(v20 + 32);
            v41 = (v40 >> 62) & 1;
            if ( *(_WORD *)(v20 + 32) )
            {
              v62 = *(_BYTE *)(v20 + 34);
              if ( (_DWORD)v41 )
              {
                v63 = v62 | 7;
              }
              else if ( (v62 & 0x10) != 0 )
              {
                v63 = v62 & 0xF8 | 3;
              }
              else if ( (v62 & 8) != 0 )
              {
                v63 = v62 & 0xF8 | 3;
              }
              else
              {
                v63 = v62 & 0xF8 | 2;
              }
              *(_BYTE *)(v20 + 34) = v63;
              if ( (*v35 & 0x400LL) == 0 )
              {
                PagingFileOffset = MiGetPagingFileOffset(v20 + 16);
                v37 = v83;
                if ( PagingFileOffset )
                  *(_BYTE *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)) + 715LL) = 1;
              }
              v38 = 3;
              if ( v37 && v89 )
                LODWORD(v15) = 1;
              v36 = v88;
              if ( *(__int64 *)(v20 + 40) < 0 )
                v38 = 4;
            }
            else
            {
              if ( (_DWORD)v41 )
              {
                v42 = *(_BYTE *)(v20 + 35);
                if ( (v42 & 0x10) != 0 )
                  *(_BYTE *)(v20 + 35) = v42 & 0xEF;
                v43 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
                v92 = *(_QWORD *)v35;
                if ( (v92 & 0x400) == 0 )
                {
                  if ( (v92 & 4) != 0 || (v92 & 2) != 0 )
                  {
                    v61 = MI_READ_PTE_LOCK_FREE(&v92);
                    v92 = v61;
                    if ( v61 )
                      MiReleasePageFileInfo(v43, v61, 0);
                  }
                  else
                  {
                    v92 = 0LL;
                  }
                }
                MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v107 >> 4), 2);
                v38 = 4;
              }
              else
              {
                MiSetNonResidentPteHeat(v20 + 16, 0LL);
                v50 = *(_BYTE *)(v20 + 34);
                if ( (v50 & 0x10) != 0
                  || (v51 = v101, *(_BYTE *)(v20 + 34) = v50 & 0xF8 | 2, v51 <= 1)
                  || (unsigned int)MiGetPfnPriority(v20) >= 5 )
                {
                  MiInsertPageInList(v20);
                }
                else
                {
                  MiInsertProtectedStandbyPage(v59, v20);
                }
              }
              v36 = v88;
            }
          }
          if ( (_DWORD)v15 )
            MiChargeCommit(v36, 1LL, 4LL);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v90 )
          {
            v111[1] = 24LL;
            v111[0] = &v108;
            EtwTraceKernelEvent((unsigned int)v111, 1, 536870913, 631, 289413892);
            v90 = 0;
          }
          v14 = v97;
          goto LABEL_62;
        }
        v3[1] += MiDeleteBatch(v110, v4, v6, v8);
        v60 = MiTryDeleteTransitionPte(v5);
        if ( v60 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v5);
          v78 = BugCheckParameter3;
          MiReleasePageFileSpace(v98, BugCheckParameter3, 1LL);
          if ( (*(_BYTE *)(v11 + 184) & 7) != 0 )
          {
            ++v3[4];
            ++*v3;
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v78) )
          {
            ++v3[4];
          }
          v79 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v5) )
          {
            if ( (unsigned int)MiPteHasShadow(v81, v80, v6) )
            {
              if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
                v79 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)v5 = v79;
              MiWritePteShadow(v5, v79);
              goto LABEL_84;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v79 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v79;
LABEL_84:
          v4 = v82;
          v8 = 0xFFFFF6FB40000000uLL;
          goto LABEL_9;
        }
        ++v3[4];
        if ( (*(_BYTE *)(v11 + 184) & 7) != 0 )
          ++*v3;
        v4 = v82;
        v8 = 0xFFFFF6FB40000000uLL;
        if ( v60 == 3 )
          ++v3[1];
      }
LABEL_9:
      v10 = v100;
      v5 += 8LL;
      if ( v5 > v99 )
        break;
      v6 = v104;
    }
  }
  result = MiDeleteBatch(v110, v4, v6, v8);
  if ( v9 )
    return MiDecreaseUsedPtesCount(v10, v9);
  return result;
}
