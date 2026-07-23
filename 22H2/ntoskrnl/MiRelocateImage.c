/*
 * XREFs of MiRelocateImage @ 0x140702D80
 * Callers:
 *     MiCreateNewSection @ 0x140700490 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x14075E09C (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14025AC04 (MiGetControlAreaPartition.c)
 *     PsSetSystemPagePriorityThread @ 0x14026C380 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14026C3D8 (PsRevertToUserPagePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiOffsetToProtos @ 0x1402A11E0 (MiOffsetToProtos.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1402F9E90 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1402FA08C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiUpdateControlAreaCommitCount @ 0x14030F5E0 (MiUpdateControlAreaCommitCount.c)
 *     MiSetLeafPfnBuddy @ 0x140323E3C (MiSetLeafPfnBuddy.c)
 *     MiLegacyImageArchitecture @ 0x14035AC3C (MiLegacyImageArchitecture.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiColdPageSizeSupported @ 0x1403F73D8 (MiColdPageSizeSupported.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiSetDeleteOnClose @ 0x14052A954 (MiSetDeleteOnClose.c)
 *     MiGetSubsectionFromPte @ 0x14054F6C8 (MiGetSubsectionFromPte.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140554328 (MiMakeUnusedImageExtentsCold.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x1405FC594 (MiDoesPageRequireRetpolineFixups.c)
 *     MiCompressRelocations @ 0x14065D4F0 (MiCompressRelocations.c)
 *     MiParseImageLoadConfig @ 0x140662858 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x14066321C (MiLogRelocationFaults.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14066A9FC (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14066AAC0 (MiSelectImageBase.c)
 *     MiUnmapImageInSystemSpace @ 0x14066BB40 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x14066BCCC (MiMapImageInSystemSpace.c)
 *     MiScanRelocationPage @ 0x140703580 (MiScanRelocationPage.c)
 *     MiFreeRelocations @ 0x14076A7B8 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x14076A848 (MiFreeImageLoadConfig.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  unsigned int v10; // ebx
  int v11; // edx
  __int64 v12; // r11
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // r13
  char v17; // r8
  unsigned int v18; // eax
  unsigned __int64 v19; // r8
  __int16 v20; // cx
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  __int64 v23; // r15
  SIZE_T v24; // rsi
  char *Pool; // rax
  char *v26; // r14
  char *v27; // rcx
  char *v28; // rsi
  char *v29; // rdi
  int updated; // esi
  __int64 v31; // r8
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // esi
  unsigned int v37; // r8d
  unsigned __int64 v38; // r9
  unsigned int v39; // edx
  unsigned __int64 v40; // r10
  unsigned int v41; // ecx
  unsigned int v42; // eax
  int v43; // esi
  __int64 *v44; // rdx
  __int64 v45; // r12
  unsigned __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // r15
  unsigned int v49; // edi
  unsigned int v51; // ecx
  unsigned int v52; // r9d
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r8
  unsigned int v55; // eax
  unsigned __int16 v56; // r9
  _WORD *v57; // r8
  unsigned int v58; // eax
  __int64 v59; // r10
  unsigned int v60; // r12d
  __int64 v61; // r9
  unsigned int v62; // r15d
  unsigned int i; // esi
  unsigned __int64 v64; // rax
  int v65; // edx
  _QWORD *v66; // r8
  unsigned __int64 v67; // r8
  __int64 ControlAreaPartition; // rax
  unsigned __int64 v69; // r15
  volatile signed __int64 *v70; // rsi
  __int64 v71; // [rsp+20h] [rbp-158h]
  unsigned int v72; // [rsp+30h] [rbp-148h]
  unsigned int v73; // [rsp+30h] [rbp-148h]
  unsigned int v74; // [rsp+34h] [rbp-144h]
  int v75; // [rsp+38h] [rbp-140h]
  char *v77; // [rsp+40h] [rbp-138h]
  _QWORD *v78; // [rsp+40h] [rbp-138h]
  unsigned int v79; // [rsp+4Ch] [rbp-12Ch]
  unsigned __int64 v81; // [rsp+58h] [rbp-120h]
  __int64 v82; // [rsp+58h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-118h]
  int v84; // [rsp+68h] [rbp-110h]
  unsigned int v85; // [rsp+68h] [rbp-110h]
  unsigned __int64 v86; // [rsp+70h] [rbp-108h]
  unsigned int v87; // [rsp+70h] [rbp-108h]
  char *v88; // [rsp+78h] [rbp-100h]
  unsigned int v90; // [rsp+88h] [rbp-F0h]
  __int64 Size; // [rsp+90h] [rbp-E8h]
  unsigned int Sizea; // [rsp+90h] [rbp-E8h]
  __int64 v93; // [rsp+98h] [rbp-E0h] BYREF
  unsigned __int64 v94; // [rsp+A0h] [rbp-D8h] BYREF
  unsigned __int64 v95[3]; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v96; // [rsp+C0h] [rbp-B8h]
  __int64 v97; // [rsp+C8h] [rbp-B0h]
  __int64 v98; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v100[10]; // [rsp+E0h] [rbp-98h] BYREF

  memset(v100, 0, sizeof(v100));
  v93 = 0LL;
  v10 = 2;
  v98 = *(_QWORD *)(a1 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v98 + 48)) )
  {
    v10 = v11 + 34;
    if ( (*(_BYTE *)(v12 + 44) & 1) != 0 )
      return 0LL;
    v13 = (*(_WORD *)(v12 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v13 = -1073741701;
  }
  v14 = *(unsigned int *)(a2 + 88);
  LODWORD(v93) = v14;
  v15 = *(unsigned int *)(a2 + 92);
  v74 = *(_DWORD *)(a2 + 92);
  HIDWORD(v93) = v74;
  if ( (_DWORD)v14 )
  {
    if ( !(_DWORD)v15 )
      return v13;
  }
  else
  {
    if ( (_DWORD)v15 )
      return v13;
    v10 &= ~2u;
  }
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v16 = *(_QWORD *)a1;
  v95[2] = v16;
  v97 = *(_QWORD *)(v16 + 96);
  v17 = *(_BYTE *)(a1 + 14) & 0x40;
  if ( (a3 & 0xFFF) > (v17 != 0 ? 4092 : 4088) || ((v17 != 0 ? 3 : 7) & a3) != 0 )
    return v13;
  v18 = a3 | 1;
  if ( !v17 )
    v18 = a3;
  v72 = v18;
  v19 = *(_QWORD *)(a1 + 32);
  v86 = v19;
  if ( v10 >= 0x20 && !a4 )
  {
    v20 = *(_WORD *)(v12 + 46);
    if ( (v20 & 0x40) == 0 && MmRegistryState != -1 && (v20 & 0x1000) == 0 )
      return 0LL;
  }
  v21 = *(_DWORD *)(a1 + 8);
  v22 = v21;
  v79 = v21;
  if ( (v10 & 2) == 0 )
  {
    v22 = (v18 >> 12) + 1;
    v79 = v22;
  }
  v90 = v21 << 12;
  if ( (int)v15 + (int)v14 > v21 << 12 )
    return v13;
  if ( (v10 & 2) != 0 )
  {
    if ( (int)v15 + (int)v14 <= (unsigned int)v14 )
      return v13;
    v23 = v14;
    if ( v14 + v19 <= v19 )
      return v13;
  }
  else
  {
    v23 = v14;
  }
  if ( (v10 & 2) != 0 && v23 + v15 + v19 <= v19 )
    return v13;
  Size = 8LL * v22;
  v24 = Size + v15 + 112;
  v94 = 0LL;
  v81 = 0LL;
  v75 = 0;
  CurrentThread = KeGetCurrentThread();
  Pool = (char *)MiAllocatePool(256, v24, 0x65526D4Du);
  v26 = Pool;
  v95[1] = (unsigned __int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  v27 = Pool;
  do
    v27 += 4096;
  while ( v27 < &Pool[v24] );
  Pool[68] = 0;
  *((_QWORD *)Pool + 7) = v79;
  *((_QWORD *)Pool + 3) = 0LL;
  if ( (v10 & 2) == 0 )
  {
    v29 = Pool + 72;
LABEL_28:
    updated = MiSelectImageBase(a1, (__int64)v26, a4, a6, (__int64 *)&v94);
    if ( updated < 0 )
    {
      MiFreeImageLoadConfig(v29);
      ExFreePoolWithTag(v26, 0);
      if ( !a4 )
        updated = v13;
      goto LABEL_70;
    }
    v31 = (__int64)v29;
    v32 = v94;
    v96 = v94;
    updated = MiUpdateCfgSystemWideBitmap((__int64 *)v16, v94, v31);
    if ( updated < 0 )
      goto LABEL_155;
    *((_DWORD *)v26 + 16) = v72;
    *((_QWORD *)v26 + 5) = v32 - v86;
    v33 = a5 - v86;
    if ( a5 == -1 )
      v33 = 0LL;
    *((_QWORD *)v26 + 6) = v33;
    v88 = v26 + 112;
    *(_QWORD *)v26 = v26 + 112;
    memset(v26 + 112, 0, Size);
    v34 = v26 + 112;
    v77 = &v26[Size + 112];
    *((_QWORD *)v26 + 4) = v77;
    v10 |= 4u;
    if ( (v10 & 2) == 0 )
    {
LABEL_56:
      v34[(unsigned __int64)*((unsigned int *)v26 + 16) >> 12] |= 1uLL;
      if ( (*(_DWORD *)(v16 + 56) & 0x40000000) != 0 )
      {
        v59 = 0LL;
        v60 = 0;
        v78 = 0LL;
        v61 = *(_QWORD *)(a1 + 64);
        v82 = v61;
        v62 = *((_DWORD *)v26 + 14);
        if ( v79 <= v62 )
          v62 = v79;
        for ( i = 0; i < v62; v88 += 8 )
        {
          if ( *v34 != v59 || MiDoesPageRequireRetpolineFixups((__int64)(v26 + 72), i) )
          {
            v64 = MI_READ_PTE_LOCK_FREE(v61 + 8LL * i);
            v99 = v64;
            if ( (v64 & 0x400) != 0 )
            {
              *((_QWORD *)v26 + 13) = 0LL;
              updated = -1073740023;
              goto LABEL_69;
            }
            v59 = 0LL;
            if ( (v64 & 0x800) != 0 )
            {
              v65 = 1;
              if ( qword_140C4DF40 )
              {
                if ( (v64 & 0x10) != 0 )
                  v64 &= ~0x10uLL;
                else
                  v64 &= ~qword_140C4DF40;
              }
              v66 = (_QWORD *)(48 * ((v64 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
              if ( (v66[2] & 0x400LL) != 0 && (*(_BYTE *)(MiGetSubsectionFromPte(v66[2]) + 34) & 2) != 0 )
                v65 = v59;
              if ( v65 )
              {
                MiSetLeafPfnBuddy(v66, 0LL);
                if ( *((_QWORD *)v26 + 13) == v59 )
                  *((_QWORD *)v26 + 13) = v67;
                else
                  MiSetLeafPfnBuddy(v78, v67);
                v78 = (_QWORD *)v67;
                ++v60;
              }
            }
            v61 = v82;
          }
          ++i;
          v34 = v88 + 8;
        }
        ControlAreaPartition = MiGetControlAreaPartition(v16);
        v69 = v60;
        if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v60, 0) )
        {
          *((_QWORD *)v26 + 13) = 0LL;
          updated = -1073741670;
          goto LABEL_69;
        }
        v45 = (__int64)CurrentThread;
        --CurrentThread->SpecialApcDisable;
        v70 = (volatile signed __int64 *)(a1 + 40);
        ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
        MiUpdateControlAreaCommitCount(v16, v69);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v70);
        KeAbPostRelease((ULONG_PTR)v70);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v46 = v94;
      }
      else
      {
        v45 = (__int64)CurrentThread;
        v46 = v96;
      }
      LOBYTE(v10) = v10 | 8;
      MI_LOCK_RELOCATIONS_EXCLUSIVE(v45, (__int64)v26);
      v47 = v97;
      *(_QWORD *)(v97 + 32) = v26;
      *(_QWORD *)(a1 + 32) = v46;
      v48 = v98;
      *(_QWORD *)v98 += *((_QWORD *)v26 + 5);
      *(_DWORD *)(v16 + 92) |= 0x400000u;
      if ( (*(_DWORD *)(v16 + 56) & 0x800) != 0 )
        MiSetDeleteOnClose(v16, 0);
      if ( (MiFlags & 0x4000) == 0
        || (*(_DWORD *)(v16 + 92) & 0xC0000) == 0
        || (qword_140C1DB60
          ? (updated = qword_140C1DB60(*(_QWORD *)(v47 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v46))
          : (updated = -1073741637),
            updated >= 0) )
      {
        updated = 0;
        v49 = a4 ? -1 : MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( a6 != 1 || *((_QWORD *)v26 + 12) )
        {
          if ( (*(_DWORD *)(v16 + 56) & 0x40000000) != 0 )
          {
            MiWalkEntireImage(v16, 0LL, 8, v49);
            if ( (unsigned int)MiColdPageSizeSupported(1u) )
              MiMakeUnusedImageExtentsCold(v16);
          }
          updated = MiWalkEntireImage(v16, 0LL, 2, v49);
        }
      }
      MI_UNLOCK_RELOCATIONS_EXCLUSIVE(v45, (__int64)v26);
      if ( updated >= 0 && !a6 )
        *(_BYTE *)(v48 + 51) |= 4u;
LABEL_69:
      if ( (v10 & 8) != 0 )
        goto LABEL_70;
LABEL_155:
      MiFreeRelocations(v16, v26);
      goto LABEL_70;
    }
    memmove(&v26[Size + 112], (const void *)(v23 + v81), v74);
    LODWORD(v23) = 0;
    v35 = *((_QWORD *)v26 + 12);
    if ( v35 )
    {
      LODWORD(v23) = v100[2] & 0xFFFFF;
      while ( (_DWORD)v23 )
      {
        v23 = (unsigned int)(v23 - 1);
        if ( *(_QWORD *)(v35 + 8 * v23 + 56) )
          goto LABEL_34;
      }
      LODWORD(v23) = 0;
    }
LABEL_34:
    v36 = v74;
    v37 = 0;
    if ( v74 )
    {
      v38 = (unsigned __int64)&v26[Size + 112];
      while ( v36 >= 0xA )
      {
        v39 = *(_DWORD *)(v38 + 4);
        v73 = v39;
        if ( v39 > v36 || (v39 & 1) != 0 || v39 < 8 )
          goto LABEL_100;
        v40 = *(unsigned int *)v38;
        v84 = v40;
        v41 = v10 & 0xFFFFFFFB;
        if ( (v40 & 0xFFF) == 0 )
          v41 = v10;
        v10 = v41;
        if ( (int)v40 + 4096 < (unsigned int)v40 || (int)v40 + 4096 > v90 || (unsigned int)v40 < v37 )
          goto LABEL_100;
        if ( v39 == 8 )
        {
          v36 -= 8;
          v10 = v41 & 0xFFFFFFFB;
        }
        else
        {
          if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(v16 + 92) & 0xC0000) != 0 )
          {
            v95[0] = 0LL;
            if ( (MiOffsetToProtos(v16, v40, v95)[8] & 4) != 0 )
            {
              updated = -1073741701;
              goto LABEL_69;
            }
            v39 = v73;
            LODWORD(v40) = v84;
            v38 = (unsigned __int64)v77;
          }
          v85 = (unsigned int)v40 >> 12;
          *(_QWORD *)&v26[8 * ((unsigned __int64)(unsigned int)v40 >> 12) + 112] |= v38;
          v87 = (v40 & 0xFFFFF000) + 4096;
          Sizea = v36 - v39;
          updated = MiScanRelocationPage(v81, v40, (v39 - 8) >> 1, (int)v38 + 8, v16, (__int64)v26);
          if ( updated < 0 )
          {
            if ( updated == -1073741207 )
            {
              updated = 0;
            }
            else if ( updated == -1073741701 )
            {
              updated = v13;
            }
            goto LABEL_69;
          }
          v10 |= 0x10u;
          v42 = v85;
          if ( v85 <= (unsigned int)v23 )
            v42 = v23;
          LODWORD(v23) = v42;
          v36 = Sizea;
          v39 = v73;
          v37 = v87;
          v38 = (unsigned __int64)v77;
        }
        v38 += v39;
        v77 = (char *)v38;
        if ( !v36 )
        {
          v43 = v74;
          goto LABEL_53;
        }
      }
      if ( v36 != 8 )
        goto LABEL_100;
      v43 = v74 - 8;
    }
    else
    {
      v43 = 0;
    }
LABEL_53:
    MiUnmapImageInSystemSpace(v100);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v75);
    LOBYTE(v10) = v10 & 0xFE;
    v44 = (__int64 *)*((_QWORD *)v26 + 2);
    if ( !v44 )
    {
LABEL_54:
      MiLogRelocationFaults(v16, (unsigned int *)&v93, (__int64)v26);
      *((_QWORD *)v26 + 7) = (unsigned int)(v23 + 1);
      if ( (v10 & 0x14) == 0x14 )
      {
        v26 = MiCompressRelocations((__int64)v26, v43);
        v34 = v26 + 112;
        v88 = v26 + 112;
      }
      else
      {
        v34 = v26 + 112;
      }
      goto LABEL_56;
    }
    while ( 1 )
    {
      v51 = v23;
      v52 = *((_DWORD *)v44 + 3);
      v53 = *(_QWORD *)&v26[8 * ((unsigned __int64)v52 >> 12) + 112];
      LODWORD(v23) = v52 >> 12;
      if ( v52 >> 12 <= v51 )
        LODWORD(v23) = v51;
      if ( v53 > 1 )
      {
        v54 = v53 & 0xFFFFFFFFFFFFFFFEuLL;
        v55 = *(_DWORD *)(v54 + 4) - 8;
        v56 = v52 & 0xFFF;
        v57 = (_WORD *)(v54 + 8);
        v58 = v55 >> 1;
        if ( v58 )
          break;
      }
LABEL_92:
      v44 = (__int64 *)*v44;
      if ( !v44 )
        goto LABEL_54;
    }
    while ( *v57 < 0x1000u || (unsigned __int16)(*v57 & 0xFFF) >= v56 )
    {
      ++v57;
      if ( !--v58 )
        goto LABEL_92;
    }
LABEL_100:
    updated = v13;
    goto LABEL_69;
  }
  if ( (int)MiMapImageInSystemSpace((__int64 *)v16, 3, (__int64)v100) < 0 )
  {
    ExFreePoolWithTag(v26, 0);
    MiSetDeleteOnClose(v16, 0);
    return 0LL;
  }
  v28 = (char *)v100[0];
  v81 = v100[0];
  v75 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v10 |= 1u;
  v29 = v26 + 72;
  updated = MiParseImageLoadConfig(v16, v28, LODWORD(v100[2]) << 12, (__int64 *)a2, v71, (__int64)(v26 + 72));
  if ( updated >= 0 )
    goto LABEL_28;
  ExFreePoolWithTag(v26, 0);
LABEL_70:
  if ( (v10 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v100);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v75);
  }
  return (unsigned int)updated;
}
