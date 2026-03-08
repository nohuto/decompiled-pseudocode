/*
 * XREFs of MiMapViewOfImageSection @ 0x1407D3750
 * Callers:
 *     MiMapViewOfSection @ 0x1407D51F0 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x140A2DEF4 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     MiInsertVad @ 0x1403312E0 (MiInsertVad.c)
 *     MiReferenceActiveSubsection @ 0x1403323F0 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140334140 (MiCheckPurgeAndUpMapCount.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiInsertVadEvent @ 0x14034C254 (MiInsertVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiControlAreaRequiresCharge @ 0x14034C4DC (MiControlAreaRequiresCharge.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiUpdateVadStartVpn @ 0x14034CF40 (MiUpdateVadStartVpn.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     MiDereferenceControlArea @ 0x14036CC30 (MiDereferenceControlArea.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14062EF5C (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x1406319E8 (MiRemoveVadEvent.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 *     MiUnmapVad @ 0x1406A2850 (MiUnmapVad.c)
 *     MiReleaseVadEventBlocks @ 0x1406ECE8C (MiReleaseVadEventBlocks.c)
 *     MiInitializeFixupVad @ 0x14072E14C (MiInitializeFixupVad.c)
 *     MiDereferencePerSessionProtos @ 0x14075B72C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14075B874 (MiCreatePerSessionProtos.c)
 *     MiSecureVad @ 0x14076918C (MiSecureVad.c)
 *     MiCommitVadMetadataBits @ 0x1407D2944 (MiCommitVadMetadataBits.c)
 *     PsCallImageNotifyRoutines @ 0x1407D30D0 (PsCallImageNotifyRoutines.c)
 *     MiAddSecureEntry @ 0x1407D3424 (MiAddSecureEntry.c)
 *     MiIsVaRangeAvailable @ 0x1407D3554 (MiIsVaRangeAvailable.c)
 *     MiAllowImageMap @ 0x1407D35A0 (MiAllowImageMap.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 *     MiReferenceFileObjectForMap @ 0x1407D6358 (MiReferenceFileObjectForMap.c)
 *     MiInsertSharedCommitNode @ 0x1407D63F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407D6770 (MiRemoveSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1407D6D30 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x1407D72F0 (MiAdvanceVadHint.c)
 *     MiArbitraryCodeBlocked @ 0x1407F1204 (MiArbitraryCodeBlocked.c)
 *     MiLogMapFileEvent @ 0x1408A76B2 (MiLogMapFileEvent.c)
 *     MiLoadUserSymbols @ 0x140A2DE34 (MiLoadUserSymbols.c)
 *     MiCreateLargePageVad @ 0x140A46988 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  unsigned int *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r15
  int v12; // edx
  int v13; // edx
  __int64 v14; // r11
  bool v15; // zf
  _DWORD *v16; // rcx
  void *v17; // r9
  unsigned __int64 v18; // r12
  unsigned int v19; // ebx
  __int16 v20; // si
  __int16 v21; // r8
  int v22; // edx
  __int64 result; // rax
  int v24; // ecx
  int v25; // edi
  unsigned int *v26; // rax
  SIZE_T v27; // rdx
  ULONG v28; // r8d
  _OWORD *Pool; // rax
  _OWORD *v30; // rdi
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // eax
  struct _KTHREAD *CurrentThread; // r12
  char *v40; // rsi
  int v41; // ecx
  __int64 v42; // rsi
  unsigned __int64 v43; // r12
  unsigned int v44; // r9d
  ULONG_PTR v45; // rdx
  _QWORD *v46; // r8
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  int PerSessionProtos; // r13d
  __int64 *v50; // rdi
  int v51; // eax
  int v52; // r11d
  void *v53; // rdi
  __int64 v54; // r8
  unsigned __int64 v55; // r13
  int v56; // ecx
  unsigned int v57; // ebx
  __int64 v58; // r13
  __int64 v59; // r8
  unsigned int v60; // ecx
  unsigned int v61; // edx
  int v62; // r8d
  __int64 v63; // rdi
  __int64 v64; // r12
  PVOID v65; // rsi
  unsigned __int64 v66; // rsi
  __int64 v67; // r12
  unsigned __int64 v68; // r12
  _OWORD *v69; // rax
  __int64 v70; // r12
  __int16 v71; // dx
  __int16 v72; // cx
  int v73; // r10d
  __int16 v74; // ax
  unsigned int v75; // eax
  int v76; // eax
  int LargePageVad; // r12d
  void *v78; // rcx
  __int16 v79; // ax
  void *v80; // rcx
  __int64 v81; // r8
  __int64 VadEvent; // rax
  unsigned __int64 v83; // r8
  char v84; // r9
  __int64 v85; // rax
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rdi
  unsigned int SessionId; // eax
  void *v89; // rcx
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  __int16 v92; // cx
  unsigned __int64 v93; // rdx
  int v94; // r9d
  _QWORD *v95; // rax
  __int64 v96; // [rsp+28h] [rbp-D8h]
  int v97; // [rsp+50h] [rbp-B0h]
  unsigned int v98; // [rsp+54h] [rbp-ACh]
  __int64 v99; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+60h] [rbp-A0h]
  __int64 v101; // [rsp+68h] [rbp-98h]
  unsigned __int64 v102; // [rsp+70h] [rbp-90h] BYREF
  __int64 v103; // [rsp+78h] [rbp-88h]
  __int16 v104; // [rsp+80h] [rbp-80h]
  PVOID Object; // [rsp+88h] [rbp-78h]
  unsigned __int64 v106; // [rsp+90h] [rbp-70h]
  __int64 v107; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v108; // [rsp+A0h] [rbp-60h]
  __int64 v109; // [rsp+A8h] [rbp-58h]
  __int64 v110; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  __int128 v112; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v113; // [rsp+D0h] [rbp-30h]
  __int128 v114; // [rsp+E0h] [rbp-20h]
  __int64 v115; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v116[11]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v118; // [rsp+1A8h] [rbp+A8h]

  v9 = (unsigned int *)a1;
  memset(v116, 0, 0x48uLL);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD *)(a2 + 88);
  v12 = *(_DWORD *)(a2 + 40) >> 22;
  v115 = 0LL;
  v13 = v12 & 2;
  v97 = 0;
  v101 = v10;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v14 = *(_QWORD *)(v10 + 56);
  v109 = v14;
  if ( dword_140C65508
    && dword_140C6550C == *(_DWORD *)(v14 + 60)
    && dword_140C65510 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v15 = (v9[14] & 0x20000000) == 0;
  v16 = (_DWORD *)(v11 + 2172);
  v17 = *(void **)(v10 + 32);
  v18 = *(_QWORD *)(v10 + 48);
  Object = v17;
  if ( !v15 || (v15 = (*v16 & 0x2000) == 0, v19 = v13, v106 = v11 + 2172, !v15) )
  {
    v15 = (*(_BYTE *)(v10 + 15) & 1) == 0;
    v19 = v13;
    v106 = v11 + 2172;
    if ( v15 )
    {
      v106 = v11 + 2172;
      v97 = 1;
      v19 = v13 | 5;
    }
  }
  v20 = *(_WORD *)(v11 + 2412);
  v21 = *(_WORD *)(a2 + 58);
  v104 = v20;
  v118 = v21;
  if ( !v21 )
  {
    if ( (*v16 & 0x1000) != 0 || (*v16 & 1) != 0 )
    {
      v118 = *(_WORD *)(v14 + 48);
      goto LABEL_9;
    }
    v21 = v20;
    v118 = v20;
  }
  if ( v21 != *(_WORD *)(v14 + 48) )
  {
    if ( (unsigned int)PdcCreateWatchdogAroundClientCall() )
    {
      v19 |= 4u;
      v97 = v73 | 2;
    }
    else
    {
      if ( v71 )
        return 3221225659LL;
      v118 = v72;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(v11 + 992) & 1) != 0 && (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 )
    return 3221225506LL;
  v22 = *(_DWORD *)(a2 + 40);
  v103 = *(_QWORD *)(a2 + 16);
  if ( (v22 & 0x20000000) != 0 )
  {
    if ( (unsigned __int64)v17 < 0x100000000LL || v19 >= 4 )
      return 3221225496LL;
    v19 = v19 & 0xFFFFFFFC | 1;
    v97 = 0;
    if ( (*(_BYTE *)(v14 + 44) & 1) != 0 )
      return 3221226089LL;
    v103 = 0x200000LL;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v22 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v19 |= 0x400u;
  }
  if ( v19 >= 0x400 )
    goto LABEL_132;
  result = MiAllowImageMap(v11, a5, (__int64)v9, v14);
  if ( (int)result < 0 )
    return result;
  v24 = *(_DWORD *)(v11 + 2512);
  if ( (v24 & 0x10) == 0 || (*(_BYTE *)(v109 + 51) & 4) != 0 )
    goto LABEL_21;
  if ( (*(_BYTE *)(v109 + 44) & 1) != 0 )
  {
    if ( (v24 & 8) == 0 )
      goto LABEL_21;
    return 3221226089LL;
  }
  v19 |= 1u;
  if ( v19 >= 0x400 )
  {
LABEL_132:
    v19 = v19 & 0xFFFFFFFC | 1;
    goto LABEL_22;
  }
LABEL_21:
  if ( (*(_BYTE *)(v10 + 15) & 1) != 0 && (*(_DWORD *)(v11 + 2512) & 0x40) == 0 )
    goto LABEL_132;
LABEL_22:
  if ( (a8 & 4) != 0 || v11 == PsSecureSystemProcess )
  {
    v25 = 0;
    v97 = 0;
    v19 &= 0xFFFFFFF9;
  }
  else
  {
    v25 = v97;
  }
  if ( *(_QWORD *)(*((_QWORD *)v9 + 12) + 32LL) && (v9[14] & 0x800) == 0 )
    goto LABEL_27;
  if ( (v19 & 4) != 0 )
    return 3221225496LL;
  v25 = 0;
  v97 = 0;
  v19 &= ~2u;
LABEL_27:
  v108 = 0LL;
  if ( v19 >= 0x400 )
    goto LABEL_31;
  v26 = v9 + 32;
  if ( v9 == (unsigned int *)-128LL )
    goto LABEL_31;
  while ( (v26[8] & 0xE) < 0xC )
  {
    v26 = (unsigned int *)*((_QWORD *)v26 + 2);
    if ( !v26 )
      goto LABEL_31;
  }
  result = MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 96));
  if ( (int)result >= 0 )
  {
LABEL_31:
    BugCheckParameter2 = (ULONG_PTR)(v9 + 32);
    MiCheckPurgeAndUpMapCount((__int64)v9);
    v100 = *(_QWORD *)(a2 + 24);
    if ( v25 )
    {
      v28 = 1231315286;
      v27 = 8
          * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)v9 + 8LL) >> 6)
           + ((*(_DWORD *)(*(_QWORD *)v9 + 8LL) & 0x3F) != 0)
           + 21LL);
    }
    else
    {
      v27 = 136LL;
      v28 = 543449430;
    }
    Pool = MiAllocatePool(64, v27, v28);
    v30 = Pool;
    if ( !Pool )
    {
      MiDereferenceControlArea((__int64)v9);
      return 3221225626LL;
    }
    if ( v97 )
      v19 |= 8u;
    v31 = *((_DWORD *)Pool + 16);
    *(_QWORD *)Pool = -2LL;
    v32 = v31 & 0xFBFFFFFF;
    *((_QWORD *)Pool + 1) = -2LL;
    *((_QWORD *)Pool + 2) = -2LL;
    v33 = 0;
    if ( a6 == 1 )
      v33 = 0x4000000;
    *((_DWORD *)v30 + 16) = v33 | v32;
    v34 = v30[3] & 0xFFFFFF8F | 0x20;
    *((_DWORD *)v30 + 12) = v34;
    *((_DWORD *)v30 + 12) = v34 ^ (v34 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
    if ( a5 )
    {
      v35 = MiReferenceFileObjectForMap(a5);
      v36 = *((_DWORD *)v30 + 16);
      *((_QWORD *)v30 + 16) = v35;
      *((_DWORD *)v30 + 16) = v36 & 0xF7FFFFFF | (*(_DWORD *)(a5 + 60) >> 4) & 0x8000000;
    }
    v37 = v30[3] & 0xFFFFF0FF;
    *((_QWORD *)v30 + 5) = 0LL;
    v38 = v37 | 0x80;
    *((_DWORD *)v30 + 12) = v38;
    if ( v19 < 0x400 )
    {
      *((_DWORD *)v30 + 12) = v38 | 0x380;
      if ( (*(_BYTE *)(v11 + 992) & 1) != 0 )
        *((_DWORD *)v30 + 16) |= 0x10000000u;
      *((_DWORD *)v30 + 13) ^= (*((_DWORD *)v30 + 13) ^ v18) & 0x7FFFFFFF;
      *((_BYTE *)v30 + 34) = v18 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v15 = (*(_DWORD *)(a2 + 60) & 1) == 0;
    v107 = 0LL;
    v98 = 0;
    v99 = (__int64)CurrentThread;
    if ( !v15 && v103 != 0x200000 )
    {
      v40 = (char *)*a3;
      v102 = *a3;
      goto LABEL_46;
    }
    v40 = (char *)Object + *a4;
    v102 = (unsigned __int64)v40;
    if ( v103 != 0x200000 )
      goto LABEL_46;
    v100 = (*(_QWORD *)(a2 + 24) + 0x1FFFFFLL) & 0xFFFFFFFFFFE00000uLL;
    v76 = (*((_DWORD *)v30 + 13) ^ (v100 >> 12)) & 0x7FFFFFFF;
    *((_BYTE *)v30 + 34) = v100 >> 43;
    *((_DWORD *)v30 + 13) ^= v76;
    *((_DWORD *)v30 + 16) |= 0x1000000u;
    LargePageVad = MiCreateLargePageVad(v11, v30, 0LL, 0LL);
    if ( LargePageVad >= 0 )
    {
      CurrentThread = (struct _KTHREAD *)v99;
LABEL_46:
      v110 = 0LL;
      if ( dword_140C694FC )
      {
        v79 = *(_WORD *)(v109 + 48);
        if ( (v79 == -31132 || v79 == 332 || v79 == -21916)
          && v19 < 0x400
          && (v30[4] & 0x1000000) == 0
          && v100 < 0x7FFFFFFF
          && (*(_BYTE *)(v11 + 992) & 1) == 0
          && (v100 >> 12) + ((v100 & 0xFFF) != 0) == *(_DWORD *)(v101 + 8)
          && (*(_DWORD *)(a2 + 64) & 4) == 0 )
        {
          if ( v100 + (unsigned int)dword_140C694FC < v100 )
          {
            v80 = (void *)*((_QWORD *)v30 + 16);
            if ( v80 )
              ObfDereferenceObject(v80);
            MiDereferenceControlArea((__int64)v9);
            ExFreePoolWithTag(v30, 0);
            return 3221225503LL;
          }
          v100 += (unsigned int)dword_140C694FC;
        }
      }
      if ( (v30[3] & 0xF80) == 0x380
        && *(_QWORD *)(v11 + 1088)
        && (*(_DWORD *)v106 & 0x1000) == 0
        && v11 != PsSecureSystemProcess
        && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask[0] & 4) != 0) )
      {
        v19 |= 0x800u;
      }
      LODWORD(v116[8]) = 32;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, v11);
      if ( (*(_DWORD *)(v11 + 1124) & 0x20) != 0 )
      {
        v42 = (__int64)v30;
        PerSessionProtos = -1073741558;
        v50 = (__int64 *)a1;
LABEL_226:
        if ( (v19 & 0x100) != 0 )
        {
          SessionId = MmGetSessionIdEx(v11);
          MiDereferencePerSessionProtos(v50, SessionId);
        }
        if ( (v19 & 0x200) != 0 )
          MiReturnCrossPartitionControlAreaCharges((__int64)v50);
        if ( (v19 & 0x80u) != 0 )
          MiRemoveSharedCommitNode(v50, v11, 0LL);
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v11);
        if ( (v19 & 0x40) != 0 )
          MiRemoveVadEvent(v42, v116);
        if ( v42 )
        {
          if ( v103 == 0x200000 )
            MiReleaseVadEventBlocks(v42, 0);
          v89 = *(void **)(v42 + 128);
          if ( v89 )
            ObfDereferenceObjectWithTag(v89, 0x63536D4Du);
          ExFreePoolWithTag((PVOID)v42, 0);
        }
        MiDereferenceControlArea((__int64)v50);
        return (unsigned int)PerSessionProtos;
      }
      if ( (*(_DWORD *)(a2 + 60) & 1) != 0 && v103 != 0x200000 )
      {
        if ( !(unsigned int)MiIsVaRangeAvailable(v11, (unsigned __int64)v40, v100, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
        {
          v42 = (__int64)v30;
          PerSessionProtos = -1073741800;
          v50 = (__int64 *)a1;
          goto LABEL_226;
        }
LABEL_58:
        v42 = (__int64)v30;
        if ( (PVOID)(v102 - *a4) != Object )
        {
          v98 = 1073741827;
          if ( (v19 & 2) != 0 )
          {
            if ( (v19 & 8) != 0 )
              goto LABEL_130;
            v69 = MiAllocatePool(
                    64,
                    8
                  * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)v9 + 8LL) >> 6)
                   + ((*(_DWORD *)(*(_QWORD *)v9 + 8LL) & 0x3F) != 0)
                   + 21LL),
                    0x49646156u);
            v70 = (__int64)v69;
            if ( v69 )
            {
              *v69 = *v30;
              v69[1] = v30[1];
              v69[2] = v30[2];
              v69[3] = v30[3];
              v69[4] = v30[4];
              v69[5] = v30[5];
              v69[6] = v30[6];
              v69[7] = v30[7];
              *((_QWORD *)v69 + 16) = *((_QWORD *)v30 + 16);
              ExFreePoolWithTag(v30, 0);
              v19 |= 8u;
              v42 = v70;
            }
            if ( (v19 & 8) != 0 )
LABEL_130:
              v98 = 1073741878;
          }
        }
        v106 = v102 >> 12;
        v43 = (v100 + v102 - 1) >> 12;
        MiUpdateVadStartVpn(v42, v102 >> 12);
        *(_DWORD *)(v42 + 28) = v43;
        v45 = (ULONG_PTR)(v9 + 32);
        *(_BYTE *)(v42 + 33) = BYTE4(v43);
        v47 = v9[43];
        v48 = *v46 >> 12;
        if ( v48 >= v47 )
        {
          do
          {
            v45 = *(_QWORD *)(v45 + 16);
            v48 -= v47;
            v47 = *(unsigned int *)(v45 + 44);
          }
          while ( v48 >= v47 );
          BugCheckParameter2 = v45;
        }
        *(_QWORD *)(v42 + 72) = v45;
        *(_QWORD *)(v42 + 80) = *(_QWORD *)(v45 + 8) + 8 * v48;
        *(_QWORD *)(v42 + 88) = *(_QWORD *)(v101 + 64) + 8 * (*(unsigned int *)(v101 + 8) - 1LL);
        if ( (v19 & 8) != 0 )
          MiInitializeFixupVad(v42, v44);
        if ( *(_DWORD *)(a2 + 52) )
          *(_BYTE *)(*(_QWORD *)(v11 + 1680) + 340LL) = 1;
        if ( (v9[14] & 0x8000000) != 0 )
        {
          v75 = MmGetSessionIdEx(v11);
          PerSessionProtos = MiCreatePerSessionProtos(v9, v75);
          if ( PerSessionProtos < 0 )
            goto LABEL_163;
          v9 = (unsigned int *)a1;
          v19 |= 0x100u;
        }
        if ( (*(_DWORD *)(v42 + 64) & 0x10000000) != 0 )
        {
          v85 = *(unsigned int *)(v42 + 52);
          LODWORD(v85) = v85 & 0x7FFFFFFF;
          v86 = v85 | ((unsigned __int64)*(unsigned __int8 *)(v42 + 34) << 31);
          v87 = MiUpdatePrivateDemandZeroView(v11, v42, 0) + v86;
          *(_DWORD *)(v42 + 52) ^= (*(_DWORD *)(v42 + 52) ^ v87) & 0x7FFFFFFF;
          *(_BYTE *)(v42 + 34) = v87 >> 31;
          v116[1] = v99;
          MiInsertVadEvent(v42, v116, 0);
          v19 |= 0x40u;
        }
        PerSessionProtos = MiInsertSharedCommitNode(v9, v11, 0LL);
        if ( PerSessionProtos >= 0 )
        {
          v19 |= 0x80u;
          v50 = (__int64 *)a1;
          v51 = MiControlAreaRequiresCharge(a1, (a8 & 8) != 0);
          if ( v51 )
          {
            if ( v51 == 2 )
            {
              PerSessionProtos = MiReferenceActiveSubsection((__int64 *)BugCheckParameter2, v52, 0x11u);
              if ( PerSessionProtos < 0 )
                goto LABEL_225;
              v19 |= 0x200u;
            }
            PerSessionProtos = MiInsertVadCharges(v42, v11);
            if ( PerSessionProtos >= 0 )
            {
              if ( (v19 & 8) != 0 )
                ++*(_QWORD *)(*(_QWORD *)(v11 + 1680) + 368LL);
              MiInsertVad(v42, v11, 0);
              v53 = 0LL;
              Object = 0LL;
              if ( v103 == 0x200000 )
              {
                MiLockVad(v99, v42);
                PerSessionProtos = MiMapUserLargePages(v42, 0, 0, 0LL);
                if ( PerSessionProtos < 0 )
                {
                  UNLOCK_ADDRESS_SPACE_UNORDERED(v99, v11);
                  MiReferenceVad(v42);
LABEL_263:
                  MiUnmapVad((unsigned int *)v42, 0LL, 0LL);
                  v95 = *(_QWORD **)(a2 + 72);
                  if ( v95 )
                    *v95 = 0LL;
                  return (unsigned int)PerSessionProtos;
                }
                MiUnlockVad(v99, v42);
              }
              v54 = v107;
              if ( v107 )
                MiAdvanceVadHint(v106, v43);
              v55 = (v108 << 16) + v102;
              v102 = v55;
              *a3 = v55;
              if ( *(_BYTE *)(v109 + 50) && v118 != v104 )
              {
                v19 |= 0x1000u;
                if ( *(_QWORD *)(v11 + 1408) && *(_WORD *)(v109 + 48) == 0x8664 )
                  v19 &= ~0x1000u;
                v56 = v98;
                if ( v19 >= 0x1000 )
                  v56 = 1073741838;
                v98 = v56;
              }
              else
              {
                v56 = v98;
              }
              if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
              {
                MiLogMapFileEvent(v42, 1061LL, v54);
                v56 = v98;
              }
              v57 = v19 | 0x10;
              if ( (v57 & 0x400) != 0 )
              {
LABEL_93:
                if ( (v57 & 0x20) == 0 )
                {
                  v64 = v99;
LABEL_109:
                  if ( (v57 & 0x10) != 0 )
                    UNLOCK_ADDRESS_SPACE_UNORDERED(v64, v11);
                  if ( (v57 & 0x400) == 0 && a5 && (*(_BYTE *)(v11 + 992) & 1) == 0 )
                    *(_DWORD *)(a2 + 60) |= 4u;
                  return v98;
                }
                MiLockVad(v99, v42);
                UNLOCK_ADDRESS_SPACE_UNORDERED(v99, v11);
                LOWORD(v57) = v57 & 0xFFEF;
                if ( (*(_DWORD *)(v42 + 64) & 0x10000000) != 0 )
                {
                  MiUpdatePrivateDemandZeroView(v11, v42, 1);
                  MiRemoveVadEvent(v42, v116);
                  LOWORD(v57) = v57 & 0xFFBF;
                }
                if ( (v57 & 0x400) == 0 )
                {
                  v62 = *(_DWORD *)(a2 + 120);
                  if ( v62 )
                  {
                    PerSessionProtos = MiCommitVadMetadataBits(v42, 0LL, v62);
                    if ( PerSessionProtos < 0 )
                      goto LABEL_261;
                  }
                }
                if ( !*(_QWORD *)(a2 + 72) )
                {
                  v63 = v110;
                  goto LABEL_101;
                }
                v94 = *(_DWORD *)(a2 + 68);
                if ( v94 == 4 || (unsigned int)(v94 - 1) <= 1 || v94 == -2147483647 )
                {
                  PerSessionProtos = MiSecureVad(v42, v102, *(_QWORD *)(a2 + 24), v94, 0, &v110);
                  if ( PerSessionProtos >= 0 )
                  {
                    v63 = 0LL;
                    **(_QWORD **)(a2 + 72) = v110 ^ qword_140C656C0 ^ v11;
LABEL_101:
                    if ( (v57 & 0x800) == 0
                      || (v63 = (__int64)MiAddSecureEntry(v42, v106 << 12, (v43 << 12) | 0xFFF, -2147483647, 0)) != 0 )
                    {
                      if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
                        MiSoftFaultMappedView(v42);
                      v64 = v99;
                      MiUnlockVad(v99, v42);
                      if ( (v57 & 0x800) != 0 )
                      {
                        v65 = Object;
                        PsCallImageNotifyRoutines((__int128 *)((char *)Object + 88), v11, &v112, (__int64)Object);
                        ObfDereferenceObjectWithTag(v65, 0x63536D4Du);
                      }
                      if ( v63 )
                        MmUnsecureVirtualMemory((HANDLE)(v63 ^ qword_140C656C0 ^ v11));
                      goto LABEL_109;
                    }
                    v53 = Object;
                    PerSessionProtos = -1073741670;
                  }
                }
                else
                {
                  PerSessionProtos = -1073741755;
                }
LABEL_261:
                MiReferenceVad(v42);
                if ( v53 )
                  ObfDereferenceObjectWithTag(v53, 0x63536D4Du);
                goto LABEL_263;
              }
              if ( (NtGlobalFlag & 0x40000) == 0
                || (v90 = (unsigned int)(v56 - 1073741827), (unsigned int)v90 <= 0x33)
                && (v91 = 0x8000000000801LL, _bittest64(&v91, v90)) )
              {
                v58 = a1;
              }
              else
              {
                v59 = v101;
                if ( (*(_BYTE *)(v99 + 1384) & 0x20) != 0
                  || (v92 = *(_WORD *)(v101 + 12), (v92 & 0x2000) != 0)
                  || *(char *)(v101 + 14) >= 0 )
                {
                  v58 = a1;
                  goto LABEL_85;
                }
                v93 = v55;
                v58 = a1;
                *(_WORD *)(v101 + 12) = v92 | 0x2000;
                MiLoadUserSymbols(a1, v93, v11);
              }
              v59 = v101;
LABEL_85:
              if ( (v57 & 0x800) != 0 )
              {
                BYTE8(v112) = 3;
                if ( (*(_DWORD *)(v42 + 64) & 0x8000000) != 0 )
                {
                  v61 = DWORD2(v112) & 0xFFF80FFF;
                }
                else
                {
                  v60 = DWORD2(v112) & 0xFFFF0FFF | ((*(_BYTE *)(v59 + 15) & 0xF0) << 8);
                  v61 = v60 ^ (v60 ^ (*(unsigned __int8 *)(v59 + 15) << 15)) & 0x70000;
                }
                DWORD2(v112) = v61 ^ ((unsigned __int16)v61 ^ (unsigned __int16)(v57 >> 1)) & 0x800;
                *(_QWORD *)&v113 = v102;
                *(_QWORD *)&v114 = *(_QWORD *)(a2 + 24);
                if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64(
                                               (volatile signed __int64 *)(v59 + 24),
                                               -1LL,
                                               -1LL) )
                  DWORD2(v112) |= 0x80000u;
                DWORD2(v113) = 0;
                DWORD2(v114) = 0;
                v53 = (void *)MiReferenceControlAreaFile(v58);
                Object = v53;
                LOWORD(v57) = v57 | 0x20;
              }
              if ( *(_DWORD *)(a2 + 120)
                || (*(_DWORD *)(v42 + 64) & 0x10000000) != 0
                || *(_QWORD *)(a2 + 72)
                || (*(_DWORD *)(a2 + 64) & 2) != 0 )
              {
                LOWORD(v57) = v57 | 0x20;
              }
              goto LABEL_93;
            }
          }
          else
          {
            PerSessionProtos = -1073740277;
          }
LABEL_225:
          CurrentThread = (struct _KTHREAD *)v99;
          goto LABEL_226;
        }
LABEL_163:
        v50 = (__int64 *)a1;
        goto LABEL_225;
      }
      v41 = v100;
      if ( v100 > 0x7FFFFFFF0000LL )
      {
        v42 = (__int64)v30;
        PerSessionProtos = -1073741801;
        v50 = (__int64 *)a1;
        goto LABEL_226;
      }
      if ( (v19 & 1) == 0 )
      {
        if ( (unsigned int)MiIsVaRangeAvailable(v11, (unsigned __int64)v40, v100, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
          goto LABEL_58;
        v41 = v100;
      }
      v66 = *(_QWORD *)(a2 + 8);
      v67 = 0LL;
      if ( (unsigned __int64)Object < 0x100000000LL && v66 >= 0x100000000LL && (*(_BYTE *)(v101 + 15) & 1) == 0 )
        v66 = 0xFFFFFFFFLL;
      if ( (*(_BYTE *)(v101 + 14) & 0x40) != 0 )
      {
        if ( !*(_QWORD *)(v11 + 1408) || (v74 = *(_WORD *)(v11 + 2412), v74 != 332) && v74 != 452 )
          v67 = 0x100000000LL;
      }
      if ( *(_QWORD *)a2 >= v66 )
      {
        PerSessionProtos = -1073741801;
      }
      else
      {
        PerSessionProtos = MiSelectUserAddress(
                             *(_DWORD *)(a2 + 40),
                             *(_QWORD *)a2,
                             v66,
                             v41,
                             v103,
                             v67,
                             (*((_DWORD *)v30 + 12) >> 7) & 0x1F,
                             0,
                             (__int64)&v107,
                             (__int64)&v102);
        if ( PerSessionProtos >= 0 )
        {
          v68 = v100;
LABEL_123:
          if ( v103 == 0x200000 )
          {
            if ( v68 - *(_QWORD *)(a2 + 24) >= 0x10000 )
              v108 = (unsigned int)ExGenRandom(1) % ((v68 - *(_QWORD *)(a2 + 24)) >> 16);
            VadEvent = MiLocateVadEvent();
            *(_QWORD *)(VadEvent + 16) = v83 >> 12;
            *(_BYTE *)(VadEvent + 8) = v84;
          }
          v9 = (unsigned int *)a1;
          goto LABEL_58;
        }
      }
      v81 = *(_QWORD *)(a2 + 8);
      if ( v66 == v81 )
      {
        v68 = v100;
      }
      else
      {
        v96 = v67;
        v68 = v100;
        PerSessionProtos = MiSelectUserAddress(
                             *(_DWORD *)(a2 + 40),
                             *(_QWORD *)a2,
                             v81,
                             v100,
                             v103,
                             v96,
                             (*((_DWORD *)v30 + 12) >> 7) & 0x1F,
                             0,
                             (__int64)&v107,
                             (__int64)&v102);
      }
      v42 = (__int64)v30;
      if ( PerSessionProtos < 0 )
        goto LABEL_163;
      goto LABEL_123;
    }
    v78 = (void *)*((_QWORD *)v30 + 16);
    if ( v78 )
      ObfDereferenceObject(v78);
    MiDereferenceControlArea((__int64)v9);
    ExFreePoolWithTag(v30, 0);
    return (unsigned int)LargePageVad;
  }
  return result;
}
