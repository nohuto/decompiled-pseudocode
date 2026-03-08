/*
 * XREFs of MiGetPage @ 0x14026ED40
 * Callers:
 *     MiGetSystemPage @ 0x1402141C8 (MiGetSystemPage.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiGetUltraPage @ 0x1402446C8 (MiGetUltraPage.c)
 *     MiAllocateMdlPagesByLists @ 0x14025B5F0 (MiAllocateMdlPagesByLists.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiGetPageTablePages @ 0x140348AF8 (MiGetPageTablePages.c)
 *     MiGetPoolPages @ 0x14036413C (MiGetPoolPages.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403B7C98 (MiTradeTransitionPage.c)
 *     MiPruneStandbyPages @ 0x140464A50 (MiPruneStandbyPages.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiGetExtendedStandbyPage @ 0x14064E0CC (MiGetExtendedStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x140654ECC (MmAllocateNonChargedSecurePages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1406619A4 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiGetFileHashPage @ 0x14066392C (MiGetFileHashPage.c)
 *     MiAllocateTopLevelPage @ 0x140728F6C (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1407290FC (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140811138 (MiComputeCacheAttributeSpeeds.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x140A4734C (MiFillPerSessionProtos.c)
 *     MiInitializeGapFrames @ 0x140B36EE8 (MiInitializeGapFrames.c)
 *     MiAllocateDummyPage @ 0x140B39E68 (MiAllocateDummyPage.c)
 *     MxSwapPages @ 0x140B50198 (MxSwapPages.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x140214AC4 (MiPfnZeroingNeeded.c)
 *     MiGetPerfectColorHeadPage @ 0x140270750 (MiGetPerfectColorHeadPage.c)
 *     MiCheckZeroFreeRebalance @ 0x14027DFA0 (MiCheckZeroFreeRebalance.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     MiRemovePageAnyColor @ 0x1402D748C (MiRemovePageAnyColor.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x14034E684 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiPageAvailableEx @ 0x140350274 (MiPageAvailableEx.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 *     MiNodeHasFreeOrZeroPages @ 0x14064B4C0 (MiNodeHasFreeOrZeroPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v4; // r8d
  int v5; // r12d
  BOOL v6; // r11d
  unsigned int v7; // r10d
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r13d
  unsigned int v11; // r9d
  int v12; // esi
  unsigned int v13; // ebx
  PSLIST_ENTRY PerfectColorHeadPage; // r14
  unsigned int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  int v21; // eax
  unsigned __int8 *v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // r9
  int v25; // r8d
  int v26; // r11d
  int v27; // eax
  __int64 v28; // rdx
  union _SLIST_HEADER *v29; // rcx
  unsigned int v30; // r15d
  unsigned __int64 v31; // r9
  ULONG_PTR v32; // rdi
  int v33; // edx
  ULONG_PTR v34; // r8
  char *v35; // rax
  __int64 v36; // rdx
  int v38; // eax
  unsigned __int64 *v39; // rdx
  unsigned int v40; // r14d
  __int64 *v41; // r8
  int v42; // ecx
  __int64 v43; // rdx
  union _SLIST_HEADER *v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r8
  const void *v50; // rdx
  unsigned int v51; // r10d
  _QWORD *v52; // r9
  unsigned int v53; // r8d
  unsigned __int64 v54; // rcx
  int v55; // eax
  _QWORD *v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rcx
  int v59; // r9d
  int v60; // ecx
  int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  signed int v65; // r10d
  __int64 v66; // r11
  int v67; // r8d
  unsigned __int8 *v68; // r9
  int v69; // ecx
  char *v70; // rax
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rdx
  _QWORD *v74; // rcx
  unsigned int v75; // edx
  __int64 v76; // r8
  int v77; // r10d
  unsigned int v78; // r11d
  _QWORD *v79; // r9
  __int64 v80; // rax
  int v81; // eax
  unsigned int v82; // [rsp+30h] [rbp-F8h]
  unsigned int v83; // [rsp+34h] [rbp-F4h]
  int v84; // [rsp+38h] [rbp-F0h]
  signed int v85; // [rsp+3Ch] [rbp-ECh]
  unsigned int v86; // [rsp+40h] [rbp-E8h]
  int v87; // [rsp+44h] [rbp-E4h]
  unsigned int v88; // [rsp+48h] [rbp-E0h]
  int v89; // [rsp+4Ch] [rbp-DCh]
  unsigned int v90; // [rsp+4Ch] [rbp-DCh]
  unsigned int v92; // [rsp+58h] [rbp-D0h]
  unsigned __int8 *v93; // [rsp+60h] [rbp-C8h]
  __int64 v94; // [rsp+68h] [rbp-C0h]
  int v95; // [rsp+68h] [rbp-C0h]
  char v96; // [rsp+70h] [rbp-B8h] BYREF
  char v97; // [rsp+71h] [rbp-B7h] BYREF
  int v98; // [rsp+74h] [rbp-B4h]
  int v99; // [rsp+78h] [rbp-B0h]
  __int64 v100; // [rsp+80h] [rbp-A8h]
  int v101; // [rsp+88h] [rbp-A0h]
  __int64 v102; // [rsp+90h] [rbp-98h]
  __int64 *v103; // [rsp+98h] [rbp-90h]
  _QWORD *v104; // [rsp+A0h] [rbp-88h]
  __int64 v105; // [rsp+A8h] [rbp-80h]
  __int64 *v106; // [rsp+B0h] [rbp-78h]
  unsigned __int8 *v107; // [rsp+B8h] [rbp-70h]
  _OWORD v108[2]; // [rsp+C0h] [rbp-68h] BYREF

  v3 = a3;
  v82 = a2;
  v4 = a3 & 0xE00;
  v5 = 0;
  v101 = v4;
  v6 = 1;
  v7 = a2;
  v84 = 1;
  v8 = a1;
  if ( (v3 & 0x200) != 0 )
  {
    v9 = 1;
    v86 = 1;
    v10 = 1;
    if ( (v3 & 0x400) == 0 )
    {
      v86 = 1;
      if ( (v3 & 0x800) == 0 )
      {
LABEL_4:
        v11 = 1;
        goto LABEL_5;
      }
LABEL_103:
      v11 = 2;
      goto LABEL_5;
    }
  }
  else
  {
    if ( (v3 & 0x400) == 0 )
    {
      if ( (v3 & 0x800) == 0 )
      {
        v10 = 3;
        v9 = 3;
        v86 = 3;
        goto LABEL_4;
      }
      v9 = 2;
      v86 = 2;
      v10 = 2;
      goto LABEL_103;
    }
    v9 = 0;
    v10 = 0;
    v86 = 0;
  }
  v11 = 0;
LABEL_5:
  v12 = 0;
  v13 = v7 >> byte_140C6570D;
  PerfectColorHeadPage = 0LL;
  v85 = v11;
  v87 = 0;
  v92 = (unsigned __int16)KeNumberNodes;
  v88 = 0;
  if ( (v3 & 0x4010) != 0 )
  {
    LODWORD(v16) = MmNumberOfChannels;
    v83 = MmNumberOfChannels;
    v92 = 1;
  }
  else
  {
    v15 = 0;
    v83 = MmNumberOfChannels;
    if ( !KeNumberNodes )
    {
      v30 = v4 | v3 & 0xFFFFF1FF;
      v74 = (_QWORD *)(a1 + 16);
      goto LABEL_181;
    }
    v7 = v82;
    LODWORD(v16) = MmNumberOfChannels;
  }
  v102 = v11;
  v104 = (_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v17 = *(unsigned int *)(qword_140C65718 + 4LL * (v12 + v13 * (unsigned __int16)KeNumberNodes));
    v18 = 25408 * v17 + *v104;
    v100 = v18;
    if ( *(_QWORD *)(v18 + 22832) || !(_DWORD)InitializationPhase )
      break;
    v62 = *(_QWORD *)(a1 + 17216);
    v63 = v62 - 1;
    if ( !v62 )
      v63 = 0LL;
    if ( !(unsigned int)MiPageAvailableEx(a1, v63, v3) )
      return -1LL;
    v11 = v85;
    LODWORD(v16) = v83;
LABEL_122:
    if ( ++v12 >= v92 )
      goto LABEL_32;
    v9 = v86;
  }
  v86 = v9;
  v83 = v16;
  if ( !*(_QWORD *)(v18 + 8 * v102 + 22768) )
  {
    v56 = (_QWORD *)v100;
    v57 = 0;
    v83 = v16;
    v86 = v9;
    while ( !*v56 && !v56[1] )
    {
      ++v57;
      v56 += 134;
      if ( v57 >= 3 )
      {
        v19 = v87;
        v20 = 1 << v11;
        goto LABEL_135;
      }
    }
  }
  v19 = v87;
  v20 = 1 << v11;
  if ( ((1 << v11) & v87) == 0 )
    goto LABEL_12;
LABEL_135:
  v64 = v20 | v19;
  v65 = 0;
  v87 = v64;
  v66 = 0LL;
  while ( _bittest(&v64, v65) )
  {
LABEL_139:
    ++v65;
    ++v66;
    if ( v65 > 3 )
      goto LABEL_140;
  }
  if ( !(unsigned int)MiNodeHasFreeOrZeroPages(v100, (unsigned int)v65) )
  {
    v64 = v67 | v87;
    v87 |= v67;
    goto LABEL_139;
  }
  if ( v65 > 3 )
  {
LABEL_140:
    v7 = v82;
    v6 = v84;
    LODWORD(v16) = v83;
    goto LABEL_124;
  }
  v3 &= 0xFFFFF1FF;
  if ( v65 == 3 )
  {
    v65 = 1;
    v66 = 1LL;
    goto LABEL_144;
  }
  if ( v65 == 1 )
  {
LABEL_144:
    v3 |= 0x200u;
  }
  else if ( v65 )
  {
    if ( v65 == 2 )
      v3 |= 0x800u;
  }
  else
  {
    v3 |= 0x400u;
  }
  v11 = v65;
  v85 = v65;
  v7 = v82;
  v102 = v66;
  v6 = v84;
LABEL_12:
  v16 = v83;
  if ( v83 > 1 )
  {
    v22 = (unsigned __int8 *)(v100 + 23033);
    v93 = (unsigned __int8 *)(v100 + 23033);
    if ( (_DWORD)v17 == v13 )
    {
      v6 = (*(_DWORD *)(v100 + 23000) & 1) == 0;
      v84 = v6;
      if ( (v3 & 8) != 0 )
      {
        v22 = (unsigned __int8 *)(v100 + 23037);
        v93 = (unsigned __int8 *)(v100 + 23037);
      }
      if ( (v3 & 0x20) != 0 && (*(_DWORD *)(v100 + 23000) & 1) != 0 )
      {
        v68 = v93;
        v69 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v7 >> byte_140C6570E));
        v70 = &v97;
        v96 = MiChannelMaximumPowerOf2Mask & (v7 >> byte_140C6570E);
        do
        {
          v71 = *v68;
          if ( v71 != v69 )
            *v70++ = v71;
          ++v68;
          --v16;
        }
        while ( v16 );
        v22 = (unsigned __int8 *)&v96;
        LODWORD(v16) = v83;
        v11 = v85;
        v93 = (unsigned __int8 *)&v96;
      }
      v88 = *v22;
    }
  }
  else
  {
    v21 = dword_140C65778 & v7;
    v93 = 0LL;
    v7 = dword_140C65778 & v7 | ((_DWORD)v17 << byte_140C6570D);
    v22 = 0LL;
    v82 = v21 | ((_DWORD)v17 << byte_140C6570D);
  }
  v107 = &v22[(unsigned int)v16];
  if ( v22 != v107 )
  {
    v23 = a1;
    v24 = &MiZeroThenZero;
    v25 = v3 & 2;
    v98 = v25;
    if ( (v3 & 2) == 0 )
      v24 = &MiFreeThenFree;
    v26 = v3 & 0x400;
    v99 = v26;
    v103 = v24;
    while ( 1 )
    {
      if ( v22 )
      {
        v23 = a1;
        v7 = dword_140C65778 & v7 | ((_DWORD)v17 << byte_140C6570D) | (*v22 << byte_140C6570E);
        v82 = v7;
      }
      v27 = v25 == 0;
      v89 = v27;
      if ( v26 )
      {
        v38 = 0;
        goto LABEL_50;
      }
      if ( (v3 & 0x800) != 0 )
      {
        v38 = 2;
        goto LABEL_50;
      }
      v28 = 16LL * v7;
      v94 = v28;
      while ( 1 )
      {
        v29 = (union _SLIST_HEADER *)(v28 + *(_QWORD *)(v23 + 8LL * v27 + 6808));
        if ( LOWORD(v29->Alignment) )
        {
          PerfectColorHeadPage = RtlpInterlockedPopEntrySList(v29);
          if ( PerfectColorHeadPage )
          {
            PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)ZeroPte;
            if ( !v89 )
            {
              if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4));
              goto LABEL_27;
            }
            if ( ZeroPte )
            {
              v48 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_82:
              v47 = v48 | 0x80;
            }
            else
            {
              v47 = 128LL;
              if ( qword_140C657C0 )
              {
                if ( (qword_140C657C0 & 0x80u) == 0LL )
                {
                  v48 = qword_140C657C0;
                  goto LABEL_82;
                }
                v47 = 144LL;
              }
            }
            PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)v47;
LABEL_27:
            PerfectColorHeadPage->Next = 0LL;
            goto LABEL_28;
          }
          v28 = v94;
          v24 = v103;
        }
        v27 = *((_DWORD *)v24 + 1);
        if ( v89 == v27 )
          break;
        v23 = a1;
        v89 = *((_DWORD *)v24 + 1);
      }
      v7 = v82;
      v38 = 1;
LABEL_50:
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPerfectColorHeadPage(
                                             a1,
                                             *(_DWORD *)(a1 + 8LL * *(int *)v24 + 2496)
                                           + 88 * (v7 + dword_140C6577C * v38),
                                             v7,
                                             *(_DWORD *)v24,
                                             v3);
LABEL_28:
      if ( PerfectColorHeadPage )
      {
LABEL_29:
        v7 = v82;
        goto LABEL_30;
      }
      if ( v98 )
      {
        if ( (v3 & 0x100) != 0 )
          v39 = (unsigned __int64 *)(v100 + 32 * (v85 + 702LL));
        else
          v39 = 0LL;
        v40 = v3 & 0xFFFFFFFD;
      }
      else
      {
        v39 = (unsigned __int64 *)(32LL * v85 + v100 + 22480);
        v40 = v3 | 2;
      }
      v90 = v40;
      if ( v39 )
      {
        v49 = *v39;
        v50 = (const void *)v39[1];
        memset(v108, 0, sizeof(v108));
        memmove(v108, v50, v49 >> 3);
        v51 = 0;
        v52 = v108;
        v53 = 0;
        while ( 1 )
        {
          v54 = *v52 - ((*v52 >> 1) & 0x5555555555555555LL);
          v51 += (unsigned int)((0x101010101010101LL
                               * (((v54 & 0x3333333333333333LL)
                                 + ((v54 >> 2) & 0x3333333333333333LL)
                                 + (((v54 & 0x3333333333333333LL) + ((v54 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          if ( v51 >= 8 )
            break;
          ++v53;
          ++v52;
          if ( v53 >= 4 )
            goto LABEL_56;
        }
        PerfectColorHeadPage = (PSLIST_ENTRY)MiRemovePageAnyColor(a1, v82, v3);
        if ( PerfectColorHeadPage )
          goto LABEL_29;
        v40 = v90;
      }
LABEL_56:
      v41 = &MiZeroThenZero;
      v42 = (v40 & 2) == 0;
      v95 = v42;
      if ( (v40 & 2) == 0 )
        v41 = &MiFreeThenFree;
      v106 = v41;
      if ( (v40 & 0x400) != 0 )
      {
        v55 = 0;
        goto LABEL_93;
      }
      if ( (v40 & 0x800) != 0 )
      {
        v55 = 2;
        goto LABEL_93;
      }
      v43 = 16LL * v82;
      v105 = v43;
      while ( 2 )
      {
        v44 = (union _SLIST_HEADER *)(v43 + *(_QWORD *)(a1 + 8LL * v42 + 6808));
        if ( LOWORD(v44->Alignment) )
        {
          PerfectColorHeadPage = RtlpInterlockedPopEntrySList(v44);
          if ( PerfectColorHeadPage )
          {
            PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)ZeroPte;
            if ( v95 )
            {
              if ( ZeroPte )
              {
                v46 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_68:
                v45 = v46 | 0x80;
              }
              else
              {
                v45 = 128LL;
                if ( qword_140C657C0 )
                {
                  if ( (qword_140C657C0 & 0x80u) == 0LL )
                  {
                    v46 = qword_140C657C0;
                    goto LABEL_68;
                  }
                  v45 = 144LL;
                }
              }
              PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)v45;
            }
            else if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
            {
              MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4));
            }
            PerfectColorHeadPage->Next = 0LL;
            goto LABEL_71;
          }
          v43 = v105;
          v41 = v106;
        }
        v42 = *((_DWORD *)v41 + 1);
        if ( v95 != v42 )
        {
          v95 = *((_DWORD *)v41 + 1);
          continue;
        }
        break;
      }
      v40 = v90;
      v55 = 1;
LABEL_93:
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPerfectColorHeadPage(
                                             a1,
                                             *(_DWORD *)(a1 + 8LL * *(int *)v41 + 2496)
                                           + 88 * (v82 + dword_140C6577C * v55),
                                             v82,
                                             *(_DWORD *)v41,
                                             v40);
LABEL_71:
      if ( PerfectColorHeadPage )
        goto LABEL_29;
      MiCheckZeroFreeRebalance(a1, v82);
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetFreeOrZeroPageAnyColor(a1, v82, v3);
      if ( PerfectColorHeadPage )
        goto LABEL_29;
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetFreeOrZeroPageAnyColor(a1, v82, v90);
      if ( PerfectColorHeadPage )
        goto LABEL_29;
      v72 = *(_QWORD *)(a1 + 17216);
      v73 = v72 - 1;
      if ( !v72 )
        v73 = 0LL;
      if ( !(unsigned int)MiPageAvailableEx(a1, v73, v3) )
        return -1LL;
      v7 = v82;
      v22 = v93 + 1;
      v25 = v98;
      v24 = v103;
      v26 = v99;
      v93 = v22;
      if ( v22 == v107 )
      {
LABEL_30:
        LODWORD(v16) = v83;
        v6 = v84;
        v11 = v85;
        break;
      }
    }
  }
  if ( !PerfectColorHeadPage )
  {
    v61 = (1 << v11) | v87;
    v87 = v61;
    if ( ((v11 - 1) & 0xFFFFFFFD) == 0 )
    {
      v61 |= 0xAu;
      v87 = v61;
    }
    if ( v61 == 15 )
LABEL_124:
      v87 = 0;
    else
      --v12;
    goto LABEL_122;
  }
LABEL_32:
  v15 = v88;
  v84 = v6;
  if ( PerfectColorHeadPage == (PSLIST_ENTRY)1 )
    return -1LL;
  v30 = v101 | v3 & 0xFFFFF1FF;
  if ( !PerfectColorHeadPage )
  {
    v8 = a1;
    v74 = v104;
LABEL_181:
    if ( (v30 & 1) != 0 )
      return -1LL;
    if ( (v30 & 0x30) != 0 )
    {
      v75 = v15;
      v76 = *v74 + 25408LL * v13;
      if ( (*(_DWORD *)(v76 + 23000) & 1) != 0 )
      {
        v77 = v15 + 1;
      }
      else
      {
        v77 = MmNumberOfChannels;
        v75 = 0;
      }
      if ( v75 == v77 )
        return -1LL;
LABEL_187:
      v78 = 0;
      v79 = (_QWORD *)(704LL * v75 + v76 + 3256);
      while ( !*v79 )
      {
        ++v78;
        v79 += 11;
        if ( v78 >= 8 )
        {
          if ( ++v75 != v77 )
            goto LABEL_187;
          return -1LL;
        }
      }
      if ( v75 == v77 )
        return -1LL;
    }
    v80 = MiRemoveLowestPriorityStandbyPage(v8, 8LL, v30);
    v32 = v80;
    if ( v80 != -1 )
    {
      v15 = v88;
      PerfectColorHeadPage = (PSLIST_ENTRY)(48 * v80 - 0x220000000000LL);
      v6 = v84;
      v31 = 0xAAAAAAAAAAAAAAABuLL;
      goto LABEL_35;
    }
    return -1LL;
  }
  v84 = v6;
  v31 = 0xAAAAAAAAAAAAAAABuLL;
  v32 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4);
LABEL_35:
  PerfectColorHeadPage->Next = 0LL;
  v33 = dword_140C65708;
  v34 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4);
  if ( dword_140C65704 > (unsigned int)dword_140C65708
    || (v35 = (char *)qword_140C65748 + 16 * dword_140C65704, v34 < *(_QWORD *)v35)
    || dword_140C65704 != dword_140C65708 && v34 >= *((_QWORD *)v35 + 2) )
  {
    v59 = 0;
    if ( dword_140C65708 < 0 )
LABEL_208:
      KeBugCheckEx(0x1Au, 0x6201uLL, v34, 0LL, 0LL);
    while ( 1 )
    {
      v60 = (v59 + v33) >> 1;
      v35 = (char *)qword_140C65748 + 16 * v60;
      if ( v34 < *(_QWORD *)v35 )
      {
        if ( !v60 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v34, (ULONG_PTR)qword_140C65748, 0LL);
        v33 = v60 - 1;
      }
      else
      {
        if ( v60 == dword_140C65708 || v34 < *((_QWORD *)v35 + 2) )
        {
          dword_140C65704 = (v59 + v33) >> 1;
          v31 = 0xAAAAAAAAAAAAAAABuLL;
          break;
        }
        v59 = v60 + 1;
      }
      if ( v33 < v59 )
        goto LABEL_208;
    }
  }
  if ( *((_DWORD *)v35 + 2) != v13 )
    goto LABEL_206;
  if ( qword_140C65750 )
  {
    v81 = MiPageToChannel(v34);
    v15 = v88;
    v5 = v81;
    v6 = v84;
    v31 = 0xAAAAAAAAAAAAAAABuLL;
  }
  if ( v5 != v15 && !v6 )
  {
LABEL_206:
    if ( (v30 & 1) == 0 )
    {
      if ( (v30 & 0x80u) == 0 )
      {
        v32 = MiSwapNumaStandbyPage(v32);
        PerfectColorHeadPage = (PSLIST_ENTRY)(48 * v32 - 0x220000000000LL);
        v31 = 0xAAAAAAAAAAAAAAABuLL;
      }
      if ( (v30 & 0x10) != 0
        && *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4))
                     + 8) != v13
        || (v30 & 0x20) != 0 && (unsigned int)MiGetPfnChannel(PerfectColorHeadPage) != v88 && !v84 )
      {
        MiReleaseFreshPage(PerfectColorHeadPage);
        return -1LL;
      }
    }
  }
  v36 = v86;
  if ( (v30 & 0x100) != 0 && MiPfnZeroingNeeded((__int64)PerfectColorHeadPage) )
  {
    MiZeroPhysicalPage(v58, v32, 0LL, (unsigned int)v36);
    PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)((unsigned __int64)PerfectColorHeadPage[1].Next & 0xFFFFFFFFFFFFFC1FuLL);
    v36 = v86;
  }
  if ( v10 != 3 && BYTE2(PerfectColorHeadPage[2].Next) >> 6 != v10 )
    MiChangePageAttribute(PerfectColorHeadPage, v36, 8LL, v31);
  return v32;
}
