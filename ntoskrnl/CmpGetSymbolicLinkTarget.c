/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x1407B0EF0
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x1402B3164 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1402BD900 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406B6550 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpComputeComponentHashes @ 0x140739D80 (CmpComputeComponentHashes.c)
 *     CmpValidateComponents @ 0x1407798BC (CmpValidateComponents.c)
 *     CmpGetComponentNameAtIndex @ 0x140779900 (CmpGetComponentNameAtIndex.c)
 *     CmpCompareUnicodeString @ 0x14077B3C0 (CmpCompareUnicodeString.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpConstructAndCacheName @ 0x1407929C4 (CmpConstructAndCacheName.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1407A751C (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFindNameInListWithStatus @ 0x1407A8DA0 (CmpFindNameInListWithStatus.c)
 *     CmpGetValueData @ 0x1407AAC20 (CmpGetValueData.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1407B05D8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        volatile signed __int64 **a9,
        __int64 *a10)
{
  unsigned int v10; // r12d
  unsigned int v11; // esi
  ULONG_PTR v12; // r15
  __int64 v13; // r9
  __int16 *v14; // rdi
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  char v19; // al
  signed __int64 v20; // rcx
  __int16 v21; // bx
  __int64 v22; // r12
  __int64 v23; // rcx
  unsigned int v24; // r14d
  unsigned int v25; // edi
  unsigned int v26; // ecx
  unsigned __int16 *v27; // rax
  wchar_t *v28; // r12
  int NameInListWithStatus; // ebx
  __int16 v30; // r9
  unsigned __int16 v31; // r8
  unsigned __int64 v32; // rcx
  __int16 v33; // r8
  unsigned __int64 v34; // r9
  unsigned __int16 v35; // ax
  char *v36; // rdx
  unsigned __int64 v37; // rcx
  signed __int64 v38; // r10
  unsigned __int64 v39; // r9
  unsigned int v40; // r15d
  unsigned __int16 *v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // r10
  unsigned __int16 v45; // ax
  _WORD *v46; // rcx
  unsigned __int64 v47; // r8
  __int16 v48; // r9
  unsigned __int64 v49; // rdx
  char *v50; // r11
  UNICODE_STRING *v51; // rbx
  void *v52; // rcx
  ULONG_PTR v53; // rdi
  ULONG_PTR *v54; // rax
  __int16 v55; // di
  unsigned int v56; // esi
  __int64 KcbAtLayerHeight; // rax
  __int16 v58; // r10
  __int64 v59; // rbx
  __int64 v60; // r8
  __int16 v61; // ax
  ULONG_PTR *v62; // rsi
  ULONG_PTR v63; // rcx
  __int64 CellFlat; // rax
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  bool v68; // zf
  unsigned int v69; // r14d
  unsigned int v70; // edx
  unsigned int v71; // ebx
  __int64 v72; // r15
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v74; // edx
  wchar_t *Buffer; // rdi
  volatile signed __int64 *v76; // rsi
  wchar_t *v77; // r15
  unsigned __int16 Length; // di
  UNICODE_STRING v79; // xmm6
  __int16 v80; // r8
  wchar_t *v81; // rax
  __int16 MaximumLength; // dx
  __int16 v83; // cx
  unsigned int v84; // ebx
  int v85; // ebx
  ULONG_PTR v86; // rcx
  __int64 v87; // rax
  int v88; // ebx
  __int64 v89; // rcx
  ULONG_PTR v90; // rcx
  unsigned int v91; // ebx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rsi
  const UNICODE_STRING *v95; // rax
  UNICODE_STRING *v96; // rbx
  void *v97; // rcx
  struct _SLIST_ENTRY *v98; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *L; // rcx
  char v102; // [rsp+40h] [rbp-C0h]
  char v103[15]; // [rsp+41h] [rbp-BFh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v106; // [rsp+70h] [rbp-90h]
  __int16 v107; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v108; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v109; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v110; // [rsp+80h] [rbp-80h] BYREF
  __int64 v111; // [rsp+88h] [rbp-78h] BYREF
  __int64 v112; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp-68h]
  __int16 v114; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v116; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v117; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v118; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v119; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING SourceString; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-18h]
  __int128 v122; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v123; // [rsp+100h] [rbp+0h]
  volatile signed __int64 **v124; // [rsp+108h] [rbp+8h]
  __int64 *v125; // [rsp+110h] [rbp+10h]
  __int64 v126; // [rsp+118h] [rbp+18h]
  __int128 v127; // [rsp+120h] [rbp+20h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+130h] [rbp+30h]
  PSLIST_ENTRY v129[22]; // [rsp+140h] [rbp+40h] BYREF

  v126 = a7;
  v123 = a8;
  v124 = a9;
  v10 = a4;
  v11 = a3;
  v119 = a2;
  v112 = a1;
  v125 = a10;
  v106 = a4;
  v114 = a3;
  DestinationString = 0LL;
  v110 = 0LL;
  SourceString = 0LL;
  v111 = 0LL;
  v116 = 0LL;
  v107 = 0;
  v122 = 0LL;
  v108 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v102 = 1;
  BugCheckParameter2 = 0LL;
  v103[3] = 0;
  *(_WORD *)v103 = 0;
  HvpGetCellContextReinitialize(&v110);
  v117 = 0LL;
  *(_DWORD *)&v103[7] = -1;
  v12 = 0LL;
  BugCheckParameter3 = 0LL;
  HvpGetCellContextReinitialize(&v111);
  P = 0LL;
  v109 = 0;
  HvpGetCellContextReinitialize(&v116);
  memset(v129, 0, 0xA8uLL);
  v13 = v112;
  v127 = 0LL;
  WORD1(v127) = -1;
  v14 = (__int16 *)(v112 + 2);
  *(_OWORD *)Privileges = 0LL;
  if ( a5 || *v14 )
  {
    v15 = *v14;
    v16 = 0;
    v103[2] = 0;
    if ( (int)v15 >= 2 )
    {
      _mm_lfence();
      v103[2] = 0;
      v17 = *(_QWORD *)(*(_QWORD *)(v112 + 24) + 8 * v15 - 16);
LABEL_69:
      if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess((PRKAPC_STATE)(a6 + 168));
        *(_DWORD *)(a6 + 160) |= 1u;
        v13 = v112;
      }
      v55 = *v14;
      v121 = 0LL;
      if ( v55 < 0 )
        goto LABEL_175;
      v56 = *(_DWORD *)&v103[7];
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v13, v55);
        v59 = KcbAtLayerHeight;
        if ( !v60
          && (*(_DWORD *)(KcbAtLayerHeight + 40) != -1
           || (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 4112LL) & 0x2000) == 0) )
        {
          v121 = KcbAtLayerHeight;
        }
        if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          goto LABEL_175;
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 )
          goto LABEL_93;
        if ( !CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 288), a5) )
          break;
        if ( *(_DWORD *)(v59 + 280) )
        {
          v62 = (ULONG_PTR *)(v59 + 32);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v59 + 32),
                                   (_DWORD *)(v59 + 280),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&v103[7]);
LABEL_90:
          if ( NameInListWithStatus >= 0 )
          {
            v12 = *v62;
            v56 = *(_DWORD *)&v103[7];
            BugCheckParameter3 = v12;
LABEL_97:
            if ( v56 != -1 )
            {
              v67 = (*(_BYTE *)(v12 + 140) & 1) != 0 ? HvpGetCellFlat(v12, v56) : HvpGetCellPaged(v12);
              v68 = (*(_BYTE *)(v67 + 16) & 2) == 0;
              v117 = v67;
              if ( v68 && *(_DWORD *)(v67 + 12) == 6 )
              {
                if ( !CmpGetValueData(v12, v56, v67, &v109, (__int64)&P, (__int64)&v103[1]) )
                {
                  NameInListWithStatus = -1073741670;
                  goto LABEL_176;
                }
                if ( v109 <= 0xFFFF && (v109 & 1) == 0 )
                {
                  v69 = v114;
                  v70 = v114;
                  SourceString.Buffer = (wchar_t *)P;
                  SourceString.Length = v109;
                  SourceString.MaximumLength = v109;
                  v71 = (unsigned __int16)v109;
                  if ( v114 < v10 )
                  {
                    v72 = v119;
                    do
                    {
                      ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v72, v70);
                      v70 = v74 + 1;
                      v71 += *ComponentNameAtIndex + 2;
                    }
                    while ( v70 < v10 );
                    v12 = BugCheckParameter3;
                  }
                  if ( v71 <= 0xFFFF )
                  {
                    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v71, 909528387LL);
                    Buffer = DestinationString.Buffer;
                    if ( !DestinationString.Buffer )
                    {
                      NameInListWithStatus = -1073741670;
                      goto LABEL_179;
                    }
                    v76 = 0LL;
                    DestinationString.Length = 0;
                    DestinationString.MaximumLength = v71;
                    RtlUnicodeStringCopy(&DestinationString, &SourceString);
                    if ( v103[1] )
                    {
                      ExFreePoolWithTag(P, 0);
                    }
                    else if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
                    {
                      HvpReleaseCellFlat(v12, &v116);
                    }
                    else
                    {
                      HvpReleaseCellPaged(v12, &v116);
                    }
                    v68 = (*(_BYTE *)(v12 + 140) & 1) == 0;
                    P = 0LL;
                    if ( v68 )
                      HvpReleaseCellPaged(v12, &v111);
                    else
                      HvpReleaseCellFlat(v12, &v111);
                    v117 = 0LL;
                    CmpUnlockKcbStack(v112);
                    v77 = DestinationString.Buffer;
                    Length = DestinationString.Length;
                    v79 = DestinationString;
                    v102 = 0;
                    if ( !v103[2] )
                      goto LABEL_163;
                    v118 = DestinationString;
                    v80 = 0;
                    *((_QWORD *)&v122 + 1) = DestinationString.Buffer;
                    LOWORD(v122) = 0;
                    WORD1(v122) = DestinationString.MaximumLength;
                    if ( DestinationString.Length )
                    {
                      v81 = v118.Buffer;
                      MaximumLength = v118.MaximumLength;
                      v83 = v118.Length;
                      while ( *v81 == 92 )
                      {
                        ++v81;
                        v83 -= 2;
                        MaximumLength -= 2;
                        v118.Buffer = v81;
                        v80 += 2;
                        v118.Length = v83;
                        v118.MaximumLength = MaximumLength;
                        LOWORD(v122) = v80;
                        if ( !v83 )
                          goto LABEL_135;
                      }
                      if ( v83 )
                      {
                        while ( *v81 != 92 )
                        {
                          ++v81;
                          v83 -= 2;
                          MaximumLength -= 2;
                          v118.Buffer = v81;
                          v80 += 2;
                          v118.Length = v83;
                          v118.MaximumLength = MaximumLength;
                          LOWORD(v122) = v80;
                          if ( !v83 )
                            goto LABEL_135;
                        }
                        do
                        {
                          if ( *v81 != 92 )
                            break;
                          ++v81;
                          MaximumLength -= 2;
                          v83 -= 2;
                        }
                        while ( v83 );
                        v118.Buffer = v81;
                        v118.Length = v83;
                        v118.MaximumLength = MaximumLength;
                      }
LABEL_135:
                      v76 = 0LL;
                    }
                    if ( (unsigned int)CmpCompareUnicodeString((__int64)&v122, (__int64)&CmRegistryRootName, 2)
                      || (int)CmpComputeComponentHashes((__m128i *)&v118, &v107, (__int64)v129) < 0
                      || (v84 = v107, (int)CmpValidateComponents(v107, (__int64)v129) < 0)
                      || (int)CmpPerformCompleteKcbCacheLookup(
                                *((_QWORD *)CmpRegistryRootObject + 1),
                                0,
                                v84,
                                (__int64)v129,
                                0LL,
                                (volatile signed __int64 **)&BugCheckParameter2,
                                v103,
                                &v108) < 0 )
                    {
LABEL_163:
                      v76 = (volatile signed __int64 *)BugCheckParameter2;
LABEL_164:
                      BugCheckParameter2 = (ULONG_PTR)v76;
                    }
                    else
                    {
                      if ( v108 != (_WORD)v84 )
                      {
                        CmpDereferenceKeyControlBlock(BugCheckParameter2);
                        goto LABEL_164;
                      }
                      v76 = (volatile signed __int64 *)BugCheckParameter2;
                      if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)&v127, BugCheckParameter2) >= 0 )
                      {
                        CmpLockKcbStackShared((__int64)&v127);
                        v85 = CmpConstructAndCacheName((__int64)v76, 0LL);
                        CmpUnlockKcbStack((__int64)&v127);
                        if ( v85 >= 0 )
                        {
                          if ( v103[0] )
                          {
                            CmpUnlockHashEntryByKcb((__int64)v76);
                            v103[0] = 0;
                          }
                          CmpLockKcbStackTopExclusiveRestShared(v112);
                          v102 = 1;
                          if ( !CmpIsKeyStackDeleted(v112) )
                          {
                            v86 = *(_QWORD *)(v17 + 32);
                            v87 = (*(_BYTE *)(v86 + 140) & 1) != 0
                                ? HvpGetCellFlat(v86, *(unsigned int *)(v17 + 40))
                                : HvpGetCellPaged(v86);
                            v88 = CmpFindNameInListWithStatus(
                                    *(_QWORD *)(v17 + 32),
                                    (_DWORD *)(v87 + 36),
                                    (__int64)&CmSymbolicLinkValueName,
                                    0,
                                    0LL,
                                    (__int64)&v103[7]);
                            v89 = *(_QWORD *)(v17 + 32);
                            if ( (*(_BYTE *)(v89 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(v89, &v110);
                            else
                              HvpReleaseCellPaged(v89, &v110);
                            if ( v88 >= 0 )
                            {
                              v90 = *(_QWORD *)(v17 + 32);
                              v91 = *(_DWORD *)&v103[7];
                              BugCheckParameter3 = v90;
                              v92 = (*(_BYTE *)(v90 + 140) & 1) != 0
                                  ? HvpGetCellFlat(v90, *(unsigned int *)&v103[7])
                                  : HvpGetCellPaged(v90);
                              v68 = *(_DWORD *)(v92 + 12) == 6;
                              v117 = v92;
                              if ( v68
                                && CmpGetValueData(BugCheckParameter3, v91, v92, &v109, (__int64)&P, (__int64)&v103[1])
                                && v109 <= 0xFFFF
                                && (v109 & 1) == 0 )
                              {
                                SourceString.Length = v109;
                                SourceString.MaximumLength = v109;
                                SourceString.Buffer = (wchar_t *)P;
                                if ( !(unsigned int)CmpCompareUnicodeString(
                                                      (__int64)&DestinationString,
                                                      (__int64)&SourceString,
                                                      0) )
                                {
                                  CmpCleanUpKcbCachedSymlink(v17);
                                  *(_QWORD *)(v17 + 104) = v76;
                                  CmpReferenceKeyControlBlockUnsafe(v76);
                                  v93 = v112;
                                  *(_WORD *)(v17 + 8) |= 8u;
                                  CmpUnlockKcbStack(v93);
                                  v102 = 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( v69 < v10 )
                    {
                      v94 = v119;
                      while ( 1 )
                      {
                        v95 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v94, v69);
                        DestinationString.Length = Length + 2;
                        v77[(unsigned __int64)Length >> 1] = 92;
                        RtlUnicodeStringCat(&DestinationString, v95);
                        if ( ++v69 >= v10 )
                          break;
                        v77 = DestinationString.Buffer;
                        Length = DestinationString.Length;
                      }
                      v79 = DestinationString;
                      v76 = (volatile signed __int64 *)BugCheckParameter2;
                    }
                    v96 = (UNICODE_STRING *)v123;
                    v97 = *(void **)(v123 + 8);
                    if ( v97 )
                    {
                      ExFreePoolWithTag(v97, 0);
                      v96->Buffer = 0LL;
                    }
                    if ( v103[0] )
                      CmpUnlockHashEntryByKcb((__int64)v76);
                    BugCheckParameter2 = 0LL;
                    *v124 = v76;
                    *v96 = v79;
                    RtlInitUnicodeString(&DestinationString, 0LL);
                    NameInListWithStatus = 0;
                    *v125 = v121;
                    goto LABEL_176;
                  }
                }
              }
            }
LABEL_175:
            NameInListWithStatus = -1073741772;
LABEL_176:
            Buffer = DestinationString.Buffer;
            if ( DestinationString.Buffer )
              ExFreePoolWithTag(DestinationString.Buffer, 0);
            v12 = BugCheckParameter3;
LABEL_179:
            if ( P )
            {
              if ( v103[1] )
              {
                ExFreePoolWithTag(P, 0);
              }
              else if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
              {
                HvpReleaseCellFlat(v12, &v116);
              }
              else
              {
                HvpReleaseCellPaged(v12, &v116);
              }
            }
            if ( v117 )
            {
              if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v12, &v111);
              else
                HvpReleaseCellPaged(v12, &v111);
            }
            if ( Buffer )
              ExFreePoolWithTag(Buffer, 0);
            if ( v102 )
              CmpUnlockKcbStack(v112);
            goto LABEL_193;
          }
          if ( NameInListWithStatus != -1073741772 )
            goto LABEL_176;
          v56 = *(_DWORD *)&v103[7];
          v58 = -1;
          v13 = v112;
LABEL_93:
          v61 = v58;
          goto LABEL_94;
        }
        v13 = v112;
        v56 = -1;
        *(_DWORD *)&v103[7] = -1;
        v61 = -1;
LABEL_94:
        v55 += v61;
        if ( v55 < 0 )
          goto LABEL_97;
      }
      v63 = *(_QWORD *)(v59 + 32);
      v62 = (ULONG_PTR *)(v59 + 32);
      if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v63, *(unsigned int *)(v59 + 40));
      else
        CellFlat = HvpGetCellPaged(v63);
      v65 = CmpFindNameInListWithStatus(
              *v62,
              (_DWORD *)(CellFlat + 36),
              (__int64)&CmSymbolicLinkValueName,
              0,
              0LL,
              (__int64)&v103[7]);
      v66 = *v62;
      NameInListWithStatus = v65;
      if ( (*(_BYTE *)(*v62 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v66, &v110);
      else
        HvpReleaseCellPaged(v66, &v110);
      goto LABEL_90;
    }
  }
  else
  {
    LOWORD(v15) = *v14;
    v16 = 1;
    v103[2] = 1;
  }
  _mm_lfence();
  v17 = *(_QWORD *)(v112 + 8LL * (__int16)v15 + 8);
  if ( !v16 || (*(_DWORD *)(v17 + 8) & 8) == 0 )
    goto LABEL_69;
  BugCheckParameter2 = *(_QWORD *)(v17 + 104);
  v18 = *(_QWORD *)(BugCheckParameter2 + 296);
  v19 = v18 & 1;
  if ( (v18 & 1) != 0 )
    v18 &= ~1uLL;
  if ( !v18 || v19 )
  {
    v12 = BugCheckParameter3;
    goto LABEL_69;
  }
  v20 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v20 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v20 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  v21 = 0;
  if ( *v14 >= 0 )
  {
    v22 = v13;
    do
    {
      if ( v21 < 2 )
        v23 = *(_QWORD *)(v22 + 8LL * v21 + 8);
      else
        v23 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL * v21 - 16);
      CmpUnlockKcb(v23);
      ++v21;
    }
    while ( v21 <= *v14 );
    LOWORD(v10) = v106;
  }
  v102 = 0;
  CmpLockKcbShared(BugCheckParameter2);
  v24 = *(unsigned __int16 *)v18;
  v25 = v11;
  v26 = v11;
  for ( v103[3] = 1; v26 < (__int16)v10; ++v26 )
  {
    if ( v26 >= 8 )
      v27 = (unsigned __int16 *)(*(_QWORD *)(v119 + 160) + 16 * (v26 - 8 + 6LL));
    else
      v27 = (unsigned __int16 *)(v119 + 16 * (v26 + 2LL));
    v24 += *v27 + 2;
  }
  if ( v24 > 0xFFFF )
    goto LABEL_175;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v24, 909528387LL);
  v28 = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    DestinationString.MaximumLength = v24;
    DestinationString.Length = 0;
    v30 = v24 & 1;
    v31 = 0;
    *(_WORD *)&v103[3] = v30;
    if ( (v24 & 1) == 0 && (_WORD)v24 != 0xFFFF )
    {
      v32 = *(unsigned __int16 *)v18;
      v33 = 0;
      v34 = (unsigned __int64)(unsigned __int16)v24 >> 1;
      if ( (v32 & 1) == 0 )
      {
        v35 = *(_WORD *)(v18 + 2);
        if ( (v35 & 1) == 0
          && (unsigned __int16)v32 <= v35
          && v35 != 0xFFFF
          && (*(_QWORD *)(v18 + 8) || !(_WORD)v32 && !v35) )
        {
          v36 = *(char **)(v18 + 8);
          v37 = v32 >> 1;
          if ( v34 )
          {
            v38 = (char *)DestinationString.Buffer - v36;
            v39 = v34 - v37;
            do
            {
              if ( !v37 )
                break;
              --v37;
              *(_WORD *)&v36[v38] = *(_WORD *)v36;
              ++v33;
              v36 += 2;
            }
            while ( v39 + v37 );
          }
        }
      }
      v30 = *(_WORD *)&v103[3];
      v31 = 2 * v33;
      DestinationString.Length = v31;
    }
    v40 = v106;
    if ( v11 < v106 )
    {
      do
      {
        if ( v25 >= 8 )
          v41 = (unsigned __int16 *)(*(_QWORD *)(v119 + 160) + 16 * (v25 - 8 + 6LL));
        else
          v41 = (unsigned __int16 *)(v119 + 16 * (v25 + 2LL));
        v42 = v31;
        v31 += 2;
        DestinationString.Length = v31;
        v28[v42 >> 1] = 92;
        if ( (v31 & 1) == 0 && !v30 && v31 <= (unsigned __int16)v24 && (_WORD)v24 != 0xFFFF )
        {
          v43 = *v41;
          v44 = (unsigned __int64)v31 >> 1;
          if ( (v43 & 1) == 0 )
          {
            v45 = v41[1];
            if ( (v45 & 1) == 0
              && (unsigned __int16)v43 <= v45
              && v45 != 0xFFFF
              && (*((_QWORD *)v41 + 1) || !(_WORD)v43 && !v45) )
            {
              v46 = (_WORD *)*((_QWORD *)v41 + 1);
              v47 = v43 >> 1;
              v48 = 0;
              v49 = ((unsigned __int64)(unsigned __int16)v24 >> 1) - v44;
              if ( v49 )
              {
                v50 = (char *)v28 + 2 * v44 - (_QWORD)v46;
                do
                {
                  if ( !v47 )
                    break;
                  --v47;
                  *(_WORD *)&v50[(_QWORD)v46] = *v46;
                  ++v48;
                  ++v46;
                  --v49;
                }
                while ( v49 );
              }
              v31 = 2 * (v48 + v44);
              DestinationString.Length = v31;
            }
          }
        }
        v30 = *(_WORD *)&v103[3];
        ++v25;
      }
      while ( v25 < v40 );
    }
    v51 = (UNICODE_STRING *)v123;
    v52 = *(void **)(v123 + 8);
    if ( v52 )
      ExFreePoolWithTag(v52, 0);
    *v51 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v53 = BugCheckParameter2;
    CmpUnlockKcb(BugCheckParameter2);
    v54 = (ULONG_PTR *)v124;
    v103[3] = 0;
    *v125 = v17;
    *v54 = v53;
    BugCheckParameter2 = 0LL;
    NameInListWithStatus = 0;
    goto LABEL_176;
  }
  NameInListWithStatus = -1073741670;
LABEL_193:
  if ( BugCheckParameter2 )
  {
    if ( v103[3] )
      CmpUnlockKcb(BugCheckParameter2);
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  }
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  v98 = v129[20];
  if ( v129[20] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[8].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) < L->Depth
      || (++L->FreeMisses,
          L = CurrentPrcb->PPLookasideList[8].L,
          ++L->TotalFrees,
          LOWORD(L->ListHead.Alignment) < L->Depth) )
    {
      RtlpInterlockedPushEntrySList(&L->ListHead, v98);
    }
    else
    {
      ++L->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))L->FreeEx)(v98);
    }
  }
  return (unsigned int)NameInListWithStatus;
}
