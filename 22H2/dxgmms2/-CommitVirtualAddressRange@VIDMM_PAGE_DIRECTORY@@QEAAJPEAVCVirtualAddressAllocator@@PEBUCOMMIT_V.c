/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006F458 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006FBAC (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BB97C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001FF4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C0026078 (ExFreeToPagedLookasideList.c)
 *     ?CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEI_KPEAPEAV1@PEAPEAVVIDMM_PAGE_TABLE@@@Z @ 0x1C005ED10 (-CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEI_KPEAPEAV1@PEAPEAVVIDMM_PAGE_TABLE@@@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005F790 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F978 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FCC8 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FE0C (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C006011C (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0060B54 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0060D1C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C006FB5C (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C0070C60 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0071370 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00721CC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00723E8 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0087F88 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z @ 0x1C00BB38C (-CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BB748 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BB97C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00BC6E0 (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VA.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00BD1A0 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  struct COMMIT_VA_STATE *v10; // r15
  unsigned __int64 *v12; // rdi
  __int64 v13; // r11
  int v14; // r11d
  __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r10d
  char v20; // r8
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rbx
  struct VIDMM_PROCESS *v24; // r14
  int v25; // r10d
  unsigned int v26; // eax
  VIDMM_PAGE_TABLE *v27; // r13
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  char v30; // dl
  int v31; // ebx
  char v32; // cl
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r10
  bool v40; // zf
  unsigned int v41; // eax
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // rcx
  unsigned int v44; // r10d
  unsigned __int64 v45; // r8
  struct CVirtualAddressAllocator *v46; // r12
  unsigned int v47; // edx
  struct COMMIT_VA_STATE *v48; // rdi
  unsigned int v49; // r15d
  unsigned int v50; // r13d
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rdx
  int v60; // r8d
  int v61; // r8d
  int v62; // r8d
  unsigned __int8 v63; // r15
  __int64 v64; // rcx
  __int64 v65; // r14
  __int64 v66; // rdx
  unsigned int v67; // ecx
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // rdi
  unsigned int v74; // r11d
  unsigned __int8 v75; // r15
  int v76; // r10d
  _DWORD *v77; // rcx
  unsigned int v78; // r14d
  __int64 v79; // r12
  unsigned __int8 v80; // r8
  char v81; // r9
  struct VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  int v89; // ecx
  char v90; // r8
  unsigned int v91; // r10d
  unsigned int v92; // eax
  __int64 v93; // rcx
  struct COMMIT_VA_STATE *v94; // r14
  char v95; // di
  unsigned __int64 v96; // r9
  struct COMMIT_VA_STATE *v97; // r8
  struct VIDMM_GLOBAL *v98; // rdx
  unsigned __int64 v99; // r15
  int v100; // eax
  VIDMM_PAGE_TABLE *v101; // rcx
  unsigned int v102; // r10d
  __int64 v103; // rdi
  __int64 v104; // r14
  unsigned __int64 v105; // r9
  struct CVirtualAddressAllocator *v106; // r11
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v107; // r9
  unsigned __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // r8
  char v112; // dl
  __int64 v113; // rcx
  __int64 v114; // rdi
  char v115; // al
  char v116; // di
  unsigned __int64 v117; // r8
  __int64 v118; // rax
  __int64 v119; // rax
  enum _DXGK_PAGETABLEUPDATEMODE v120; // r14d
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  unsigned int v126; // esi
  unsigned int v127; // ecx
  unsigned __int64 v128; // rdx
  struct _DXGK_PTE *v129; // r9
  struct VIDMM_ALLOC **v130; // rbx
  __int64 v131; // r8
  VIDMM_PAGE_TABLE *v132; // rbx
  unsigned __int64 *v133; // rbx
  __int64 v134; // rax
  struct VIDMM_ALLOC **v135; // [rsp+30h] [rbp-E0h]
  char v136; // [rsp+38h] [rbp-D8h]
  struct VIDMM_ALLOC **v137; // [rsp+40h] [rbp-D0h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v138; // [rsp+80h] [rbp-90h]
  unsigned __int8 v139; // [rsp+90h] [rbp-80h] BYREF
  char v140; // [rsp+91h] [rbp-7Fh]
  char v141; // [rsp+92h] [rbp-7Eh]
  char v142; // [rsp+93h] [rbp-7Dh]
  int v143; // [rsp+94h] [rbp-7Ch]
  char v144; // [rsp+98h] [rbp-78h]
  unsigned int v145; // [rsp+9Ch] [rbp-74h]
  unsigned int v146; // [rsp+A0h] [rbp-70h]
  unsigned int v147; // [rsp+A4h] [rbp-6Ch]
  unsigned int v148; // [rsp+A8h] [rbp-68h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v149; // [rsp+B0h] [rbp-60h]
  unsigned int v150; // [rsp+B8h] [rbp-58h]
  unsigned int v151; // [rsp+BCh] [rbp-54h]
  unsigned __int64 v152; // [rsp+C0h] [rbp-50h]
  unsigned int v153; // [rsp+C8h] [rbp-48h]
  VIDMM_PAGE_TABLE *v154; // [rsp+D0h] [rbp-40h]
  struct VIDMM_GLOBAL *v155; // [rsp+D8h] [rbp-38h]
  int v156; // [rsp+E0h] [rbp-30h]
  unsigned int v157[2]; // [rsp+E8h] [rbp-28h]
  struct VIDMM_PAGE_DIRECTORY *v158; // [rsp+F0h] [rbp-20h] BYREF
  struct VIDMM_PAGE_TABLE *v159; // [rsp+F8h] [rbp-18h] BYREF
  unsigned int v160; // [rsp+100h] [rbp-10h]
  unsigned int v161; // [rsp+104h] [rbp-Ch]
  unsigned __int64 v162; // [rsp+108h] [rbp-8h]
  struct VIDMM_ALLOC *v163; // [rsp+110h] [rbp+0h]
  void *v164; // [rsp+118h] [rbp+8h] BYREF
  unsigned __int64 v165; // [rsp+120h] [rbp+10h]
  unsigned int v166[2]; // [rsp+128h] [rbp+18h]
  VIDMM_GLOBAL *v167; // [rsp+130h] [rbp+20h]
  __int64 v168; // [rsp+138h] [rbp+28h]
  unsigned __int64 v169; // [rsp+140h] [rbp+30h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+148h] [rbp+38h]
  unsigned __int64 v171; // [rsp+150h] [rbp+40h]
  struct COMMIT_VA_STATE *v173; // [rsp+1B0h] [rbp+A0h] BYREF
  unsigned __int64 v174; // [rsp+1B8h] [rbp+A8h]

  v174 = a4;
  v173 = a3;
  v165 = a4;
  v10 = a3;
  v154 = 0LL;
  v159 = 0LL;
  *a9 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)a3;
  v158 = 0LL;
  v14 = v13 & 1;
  if ( !v14 )
  {
    v15 = *((_QWORD *)this + 2);
    if ( !v15 || !*(_QWORD *)(v15 + 128) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v134 = WdLogNewEntry5_WdAssertion(0LL, a5, a3);
    *(_QWORD *)(v134 + 24) = 5478LL;
    WdLogEvent5_WdAssertion(v134);
    return 3221225485LL;
  }
  *(_QWORD *)v166 = a5 >> 12;
  v17 = (a5 >> 12) + a6;
  v171 = v17;
  if ( v17 <= a5 >> 12 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, v17, a3);
    *(_QWORD *)(v18 + 24) = 5495LL;
    WdLogEvent5_WdAssertion(v18);
    return 3221225485LL;
  }
  v19 = *(_DWORD *)this;
  v20 = *(_DWORD *)this;
  v167 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v21 = v20 & 7;
  v22 = (v19 >> 7) & 0x1F;
  v23 = *((_QWORD *)v167 + 5027);
  VidMmGlobalAllocFromOwner = 0LL;
  v163 = 0LL;
  v168 = v23 + 1584 * v22;
  v24 = (struct VIDMM_PROCESS *)*((_QWORD *)a2 + 12);
  v149 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v168 + 88 + 48 * v21);
  *(_QWORD *)v157 = (*(_QWORD *)v166 & *((_QWORD *)v149 + 2)) >> *((_QWORD *)v149 + 3);
  v25 = v19 & 0x10;
  if ( v25 )
    v26 = *(_DWORD *)(32 * v22 + *((_QWORD *)a2 + 15) + 16);
  else
    v26 = *(_DWORD *)(v23 + 48 * (v21 + 33 * v22) + 88);
  v27 = v154;
  v146 = v26;
  if ( v25 && *((_QWORD *)v167 + 5123) )
  {
    v28 = a6 << 12;
    if ( v14 )
      VIDMM_GLOBAL::RecordVaPagingHistoryCommit(
        v167,
        v24,
        a5,
        v28,
        *((_DWORD *)v10 + 13),
        a7,
        *((_QWORD *)v10 + 4),
        *((_QWORD *)v10 + 5),
        *((_DWORD *)v10 + 12));
    else
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v167, v24, a5, v28);
  }
  v29 = *((_QWORD *)this + 2);
  v30 = 0;
  v147 = 0;
  v151 = 0;
  v31 = 0;
  v140 = 0;
  if ( v29 && *(_QWORD *)(v29 + 128) )
  {
    v32 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(this, a2, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)this &= ~0x10000u;
    v30 = 0;
    v32 = 1;
  }
  v33 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) == 0 )
  {
    v32 = 1;
    v31 = 2;
  }
  if ( v32 )
  {
    if ( v157[0] )
    {
      v34 = 0LL;
      v35 = v157[0];
      do
      {
        v36 = *((_QWORD *)this + 5);
        v34 += 16LL;
        *(_QWORD *)(v34 + v36 - 16) = 0LL;
        *(_QWORD *)(v34 + v36 - 8) = 0LL;
        --v35;
      }
      while ( v35 );
      v33 = *(_DWORD *)this;
    }
    v30 = 1;
    v140 = 1;
    v151 = v146;
  }
  v37 = *(_QWORD *)v166;
  v152 = *(_QWORD *)v166;
  LOBYTE(v156) = 0;
  v38 = *((_QWORD *)v149 + 5);
  v39 = *(_QWORD *)v166 & ~*((_QWORD *)v149 + 4);
  v153 = 0;
  v40 = (v33 & 0x20) == 0;
  v162 = v39;
  v41 = v146;
  v42 = v38 + v39;
  v164 = (void *)(v38 + v39);
  v43 = v38 + v39;
  if ( !v40 && *((_BYTE *)v10 + 57) )
  {
    v44 = 0;
    if ( *((_BYTE *)v10 + 56) )
      v44 = v146;
    v153 = v44;
    v39 = v162;
  }
  v143 = 0;
  v161 = 0;
  v45 = v42;
  LODWORD(v42) = v157[0];
  v160 = v157[0];
  v46 = a2;
  v144 = v30;
  v47 = v157[0];
  if ( v157[0] >= v146 )
    goto LABEL_183;
  while ( 1 )
  {
    v48 = v173;
    LOBYTE(v41) = 0;
    v49 = v42 + v153;
    v150 = v41;
    v139 = 0;
    v50 = v42 + v153;
    v142 = 0;
    v141 = 0;
    v148 = v42 + v153;
    v145 = v42 + v153;
    if ( *((_BYTE *)v173 + 58) && (*(_DWORD *)this & 0x20) != 0 )
    {
      v50 = v49 + v146;
      v141 = 1;
      if ( v49 != (_DWORD)v42 )
        v50 = v47;
      v145 = v50;
    }
    v51 = (unsigned __int8)v156;
    if ( v43 >= v171 )
      v51 = 1;
    v156 = v51;
    v52 = v171;
    v53 = *(_QWORD *)v173;
    if ( v45 < v171 )
      v52 = v45;
    v169 = v52;
    v54 = v52 - v37;
    v155 = (struct VIDMM_GLOBAL *)(v52 - v37);
    if ( (v53 & 1) == 0 )
    {
      v55 = *((_QWORD *)this + 5);
      if ( (*(_BYTE *)(v55 + 16LL * v49) & 1) == 0 && (*(_BYTE *)(v55 + 16LL * v50) & 1) == 0 )
        goto LABEL_173;
    }
    if ( (v53 & 2) != 0 )
    {
      v56 = *((_QWORD *)this + 5);
      if ( (*(_BYTE *)(v56 + 16LL * v49) & 2) != 0 )
      {
        v57 = v49;
      }
      else
      {
        if ( !v141 || (*(_BYTE *)(v56 + 16LL * v50) & 2) == 0 )
          goto LABEL_56;
        v57 = v50;
      }
      if ( (_DWORD)v57 != -1 && (((unsigned __int8)v53 ^ *(_BYTE *)(v56 + 16 * v57)) & 8) == 0 )
        goto LABEL_173;
    }
LABEL_56:
    if ( v38 > v54 || (*((_DWORD *)v46 + 36) & 4) != 0 )
      goto LABEL_68;
    if ( !VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
            this,
            v46,
            *(const struct _DXGK_GPUMMUCAPS **)(v168 + 440),
            v173,
            v149,
            v42 + v153,
            v50,
            v37,
            a7,
            &v139,
            (unsigned __int8 *)v173 + 61) )
      break;
    if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * v49) & 0x400LL) != 0 )
    {
      v58 = *((_DWORD *)v48 + 12);
      v163 = (struct VIDMM_ALLOC *)*((_QWORD *)v48 + 5);
      VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(v58, (__int64)v163);
      v61 = v60 - 1;
      if ( v61 )
      {
        v62 = v61 - 3;
        if ( v62 )
        {
          v63 = v139;
          if ( v62 == 1 )
            v163 = *(struct VIDMM_ALLOC **)(v59 + 24);
          else
            v163 = 0LL;
          goto LABEL_165;
        }
        v163 = *(struct VIDMM_ALLOC **)(v59 + 64);
      }
    }
    v63 = v139;
LABEL_165:
    if ( v63 )
      goto LABEL_166;
    v54 = (unsigned __int64)v155;
    LODWORD(v42) = v157[0];
LABEL_173:
    v41 = v147;
    v116 = v140;
LABEL_174:
    v42 = (unsigned int)(v42 + 1);
    v37 = v169;
    v117 = v54 << 12;
    v39 = v169;
    a7 += v117;
    v165 += v117;
    v38 = *((_QWORD *)v149 + 5);
    *(_QWORD *)v157 = v42;
    v152 = v169;
    v162 = v169;
    v43 = v169 + v38;
    v164 = (void *)(v169 + v38);
    if ( (_BYTE)v156 )
      goto LABEL_178;
    v45 = v169 + v38;
    v46 = a2;
    v47 = v42;
    v160 = v42;
    v161 = v41;
    v144 = v116;
    if ( (unsigned int)v42 >= v146 )
      goto LABEL_76;
  }
  v39 = v162;
  v54 = (unsigned __int64)v155;
  v150 = v139;
LABEL_68:
  v64 = *((_QWORD *)this + 5);
  v65 = v49;
  v66 = *(_QWORD *)(v64 + 16LL * v49) & 0x400LL;
  if ( (*(_QWORD *)(v64 + 16LL * v49) & 0x400) != 0 || v141 && (*(_DWORD *)(v64 + 16LL * v50) & 0x400LL) != 0 )
  {
    v67 = v49;
    if ( !v66 )
      v67 = v50;
    if ( *((_QWORD *)v149 + 5) <= v54 )
    {
      v73 = v67;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v46 + 11) + 40256LL),
        *(PVOID *)(*((_QWORD *)this + 6) + 8LL * v67));
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v73) = 0LL;
      v73 *= 2LL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v73) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v73) &= ~1uLL;
      --*((_DWORD *)this + 1);
      v48 = v173;
    }
    else
    {
      v68 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(this, v46, v149, *((_BYTE *)v48 + 57), v39 << 12, v67, a9);
      v71 = v68;
      v143 = v68;
      if ( v68 < 0 )
      {
        v72 = WdLogNewEntry5_WdWarning(v70, v69);
        *(_QWORD *)(v72 + 24) = v71;
        WdLogEvent5_WdWarning(v72);
LABEL_76:
        v10 = v173;
        goto LABEL_182;
      }
    }
    v142 = 1;
  }
  v74 = *(_DWORD *)this;
  v75 = *((_BYTE *)v48 + 56);
  v76 = *(_DWORD *)this & 0x20;
  if ( !v76 || *((_DWORD *)v48 + 13) || !v75 )
  {
LABEL_92:
    v78 = v148;
    goto LABEL_93;
  }
  if ( *((_BYTE *)v48 + 57)
    || (v77 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * v65)) == 0LL
    || !v77[1]
    || (*v77 & 0x40) != 0 )
  {
    if ( ((unsigned __int8)v155 & 0xF) != 0 )
    {
      v75 = 0;
      goto LABEL_90;
    }
    v75 = CheckContiguousSysMem(*((struct _MDL **)v48 + 4), (unsigned int)v155, a7 >> 12);
    if ( !v75 )
      goto LABEL_90;
    goto LABEL_92;
  }
  v75 = 0;
LABEL_90:
  v78 = v157[0];
  v148 = v157[0];
  if ( v141 )
    v145 = v146 + v157[0];
LABEL_93:
  v79 = v78;
  if ( (*(_BYTE *)v48 & 1) == 0 && (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * v78) & 2) == 0
    || *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v78) )
  {
    goto LABEL_107;
  }
  if ( v76 )
  {
    if ( *((_BYTE *)v48 + 57) && v75 || *((_DWORD *)v48 + 13) == -3 )
    {
      v80 = 1;
    }
    else
    {
      v80 = 0;
      if ( v75 )
      {
        v81 = 1;
        goto LABEL_104;
      }
    }
    v81 = 0;
LABEL_104:
    PageTable = CreatePageTable(a2, (v74 >> 7) & 0x1F, v80, v81);
  }
  else
  {
    PageTable = CreatePageDirectory(a2, (v74 >> 7) & 0x1F, (v74 & 7) - 1);
  }
  v85 = *((_QWORD *)this + 6);
  *(_QWORD *)(v85 + 8LL * v78) = PageTable;
  if ( *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v78) )
  {
LABEL_107:
    v86 = *((_QWORD *)this + 5);
    v87 = *(_QWORD *)(v86 + 16LL * v78);
    v88 = (unsigned __int8)v87;
    LOBYTE(v88) = (v87 & 1) == 0;
    v89 = v87 & 2;
    if ( v89 )
    {
      v91 = v145;
      goto LABEL_112;
    }
    v90 = v88;
    if ( v141 )
    {
      v91 = v145;
      if ( (*(_BYTE *)(v86 + 16LL * v145) & 2) != 0 )
      {
LABEL_112:
        if ( *((_QWORD *)v149 + 5) <= (unsigned __int64)v155 )
        {
          v92 = v78;
          v90 = v88;
          if ( !v89 )
            v92 = v91;
          v93 = 2LL * v92;
          *(_QWORD *)(v86 + 8 * v93) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v93) &= ~1uLL;
          --*((_DWORD *)this + 1);
        }
        else
        {
          v143 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
                   this,
                   a2,
                   v48,
                   v78,
                   v91,
                   v152,
                   v169,
                   v162,
                   (unsigned __int64)v164,
                   a9);
          if ( v143 < 0 )
            goto LABEL_178;
          v90 = 0;
        }
        v142 = 1;
      }
    }
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      if ( (*(_BYTE *)v48 & 1) != 0 )
      {
        v94 = v173;
        v95 = *((_BYTE *)v48 + 56);
        v96 = v165;
        v137 = a9;
        v136 = v90;
        v97 = v173;
        v135 = (struct VIDMM_ALLOC **)a7;
        v98 = v155;
        *((_BYTE *)v173 + 56) = v75;
        v99 = v152;
        v100 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                 *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v79),
                 a2,
                 v97,
                 v96,
                 v152 << 12,
                 v98,
                 (unsigned __int64)v135,
                 v136,
                 v137);
        *((_BYTE *)v94 + 56) = v95;
        v48 = v94;
        v143 = v100;
      }
      else
      {
        v99 = v152;
        v101 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8LL * v78);
        if ( v101 && *((_DWORD *)v101 + 1) )
        {
          v100 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(v101, a2, v48, v152 << 12, (unsigned __int64)v155);
          v143 = v100;
        }
        else
        {
          v100 = v143;
        }
      }
      if ( *((_BYTE *)v48 + 58) )
      {
        if ( v100 < 0 )
          goto LABEL_179;
        v102 = v145;
        v103 = 2LL * v145;
        v104 = v145;
        if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * v145) & 1) != 0 )
        {
          v105 = v99;
          v10 = v173;
          v143 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
                   *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8LL * v145),
                   a2,
                   v173,
                   v105 << 12,
                   (unsigned __int64)v155);
          if ( v143 < 0 )
            goto LABEL_180;
          v106 = a2;
          v102 = v145;
          v101 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v104);
          if ( !*((_DWORD *)v101 + 1) )
          {
            v107 = v149;
            v108 = v152;
            if ( (*((_DWORD *)a2 + 36) & 4) == 0 )
            {
              --*((_DWORD *)this + 1);
              v63 = 1;
              v109 = *((_QWORD *)this + 5);
              *(_QWORD *)(v109 + 8 * v103) = 0LL;
              *(_QWORD *)(v109 + 8 * v103 + 8) = 0LL;
              v48 = v173;
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v104) + 40LL) = v154;
              v88 = v108 & ~*((_QWORD *)v107 + 4);
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v104) + 8LL) = v88;
              v110 = *((_QWORD *)this + 6);
              v101 = *(VIDMM_PAGE_TABLE **)(v110 + 8 * v104);
              v154 = v101;
              v159 = v101;
              *(_QWORD *)(v110 + 8 * v104) = 0LL;
              goto LABEL_138;
            }
            v48 = v173;
LABEL_137:
            v63 = v150;
LABEL_138:
            if ( v143 < 0 )
            {
LABEL_179:
              v10 = v173;
LABEL_180:
              v119 = WdLogNewEntry5_WdWarning(v101, v88);
              WdLogEvent5_WdWarning(v119);
              goto LABEL_181;
            }
            if ( (*(_BYTE *)v48 & 1) != 0 )
            {
              if ( (*(_DWORD *)this & 0x20) == 0
                || *((_BYTE *)v48 + 57)
                || (v111 = *((_QWORD *)this + 5),
                    ((**(_DWORD **)(*((_QWORD *)this + 6) + 8 * v79) >> 6) & 1) == ((*(_DWORD *)(v111 + 16 * v79) & 0x60000) == 0x20000LL)) )
              {
                v111 = *((_QWORD *)this + 5);
                v112 = 0;
              }
              else
              {
                v112 = 1;
              }
              if ( (*(_QWORD *)(v111 + 16 * v79) & 1) == 0 || v112 || v142 )
              {
                if ( (*(_QWORD *)(v111 + 16 * v79) & 1LL) == 0 )
                {
                  *(_QWORD *)(v111 + 16 * v79) |= 1uLL;
                  ++*((_DWORD *)this + 1);
                  v111 = *((_QWORD *)this + 5);
                }
                *(_QWORD *)(v111 + 16 * v79) &= ~0x400uLL;
                *(_QWORD *)(*((_QWORD *)this + 5) + 16 * v79) &= ~2uLL;
                *(_QWORD *)(*((_QWORD *)this + 5) + 16 * v79) &= ~8uLL;
                if ( v141 )
                {
                  v113 = 2LL * v102;
                  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v113) &= ~0x400uLL;
                  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v113) &= ~2uLL;
                  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v113) &= ~8uLL;
                }
                VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, v106, v148);
                goto LABEL_166;
              }
            }
            else
            {
              if ( v142 )
                v63 = 1;
              if ( (*((_DWORD *)v106 + 36) & 4) == 0 )
              {
                v114 = v108 & ~*((_QWORD *)v107 + 4);
                if ( VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(this, v148, v114, &v158, &v159) )
                  v63 = 1;
                if ( v145 != v148 && VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(this, v145, v114, &v158, &v159) )
                {
                  v154 = v159;
LABEL_166:
                  LODWORD(v42) = v157[0];
                  v54 = (unsigned __int64)v155;
                  v115 = v140;
                  if ( !v140 )
                    v115 = 1;
                  v116 = v115;
                  v140 = v115;
                  v41 = v160;
                  if ( v144 )
                    v41 = v161;
                  v147 = v41;
                  if ( v157[0] >= v151 )
                  {
                    v147 = v41;
                    v151 = v157[0] + 1;
                  }
                  goto LABEL_174;
                }
                v154 = v159;
              }
            }
            goto LABEL_165;
          }
          v48 = v173;
LABEL_136:
          v107 = v149;
          v108 = v152;
          goto LABEL_137;
        }
        v48 = v173;
LABEL_135:
        v106 = a2;
        goto LABEL_136;
      }
    }
    else
    {
      v143 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
               *(VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 6) + 8LL * v78),
               a2,
               v48,
               v165,
               v152 << 12,
               (unsigned __int64)v155,
               a7,
               v90,
               a9);
    }
    v102 = v145;
    goto LABEL_135;
  }
  v118 = WdLogNewEntry5_WdAssertion(v85, v83, v84);
  *(_QWORD *)(v118 + 24) = 5841LL;
  WdLogEvent5_WdAssertion(v118);
  v143 = -1073741801;
LABEL_178:
  v10 = v173;
LABEL_181:
  v46 = a2;
LABEL_182:
  v12 = (unsigned __int64 *)v158;
  v27 = v154;
LABEL_183:
  if ( v140 )
  {
    v120 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    LODWORD(v173) = 0;
    a9 = 0LL;
    v164 = 0LL;
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                this,
                v46,
                (unsigned int *)&v173,
                (unsigned __int64 *)&a9,
                &v164) < 0 )
    {
      v125 = WdLogNewEntry5_WdError(v122, v121, v123, v124);
      *(_QWORD *)(v125 + 24) = 6116LL;
      WdLogEvent5_WdError(v125);
      v126 = -1073741823;
      goto LABEL_197;
    }
    v127 = *(_DWORD *)this;
    v128 = v147 * *((_QWORD *)v149 + 5) + (*(_QWORD *)v166 & ~(*((_QWORD *)v149 + 2) | *((_QWORD *)v149 + 4)));
    if ( *((_BYTE *)v10 + 57) && (v127 & 0x20) != 0 )
      v129 = (struct _DXGK_PTE *)(*((_QWORD *)this + 5) + 16LL * (v147 + v146));
    else
      v129 = 0LL;
    if ( (*((_BYTE *)v167 + 40936) & 0x10) == 0 )
      v120 = (__int16)v127 >> 13;
    v151 -= v147;
    v138 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v31;
    v130 = a9;
    VIDMM_GLOBAL::UpdatePageTable(
      v167,
      v127 & 7,
      *((struct VIDMM_PROCESS **)v46 + 12),
      *((_QWORD *)v10 + 2),
      v163,
      VidMmGlobalAllocFromOwner,
      v174 + (v128 << 12) - (*(_QWORD *)v166 << 12),
      v147,
      v151,
      (struct _DXGK_PTE *)(*((_QWORD *)this + 5) + 16LL * v147),
      v129,
      (v127 >> 7) & 0x1F,
      (unsigned int)v173,
      (unsigned __int64)a9,
      v120,
      v128,
      v138,
      *((_QWORD *)v10 + 8));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, v46, v131, v130, v164);
    *(_DWORD *)this |= 0x10000u;
  }
  if ( !*((_DWORD *)this + 1) && (*((_DWORD *)v46 + 36) & 4) == 0 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory((struct VIDMM_ALLOC **)this, v46, a5 & ~*((_QWORD *)v149 + 4), 1u, 1u);
  v126 = v143;
LABEL_197:
  if ( v27 )
  {
    do
    {
      v132 = (VIDMM_PAGE_TABLE *)*((_QWORD *)v27 + 5);
      VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)v27, v46, *((_QWORD *)v27 + 1));
      v27 = v132;
    }
    while ( v132 );
  }
  if ( v12 )
  {
    do
    {
      v133 = (unsigned __int64 *)v12[4];
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v12, v46, v12[1], v38);
      v12 = v133;
    }
    while ( v133 );
  }
  return v126;
}
