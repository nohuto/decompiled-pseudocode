// write access to const memory has been detected, the output may be wrong!
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
  struct _DXGK_PTE *v9; // r15
  VIDMM_PAGE_DIRECTORY *v10; // r12
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r11
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  struct CVirtualAddressAllocator *v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // rax
  int v23; // ecx
  int v24; // ebx
  unsigned int v25; // r10d
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v26; // r8
  unsigned int v27; // eax
  const struct COMMIT_VA_STATE *v28; // r9
  unsigned __int64 v29; // r11
  __int64 v30; // r13
  unsigned __int64 v31; // rsi
  struct VIDMM_ALLOC **v32; // r13
  unsigned __int64 v33; // rdx
  int v34; // r14d
  char v35; // di
  unsigned int v36; // r8d
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // r10
  __int64 v40; // rdx
  unsigned int v41; // r11d
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v42; // r8
  unsigned __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rcx
  VIDMM_PAGE_DIRECTORY *v47; // r10
  unsigned __int8 v48; // r12
  unsigned int v49; // r15d
  int v50; // r11d
  __int64 v51; // rdi
  __int64 v52; // r14
  bool v53; // zf
  __int64 v54; // r9
  __int64 v55; // rcx
  bool v56; // dl
  int v57; // ecx
  bool v58; // r8
  PVOID v59; // r15
  const struct COMMIT_VA_STATE *v60; // r13
  int v61; // eax
  __int64 v62; // rsi
  unsigned __int8 v63; // di
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v64; // r8
  unsigned __int64 v65; // r9
  unsigned int v66; // r11d
  _QWORD *v67; // rdx
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // r10
  __int64 v70; // rdx
  struct CVirtualAddressAllocator *v71; // rsi
  unsigned __int64 *v72; // rax
  unsigned __int64 *v73; // rax
  __int64 result; // rax
  __int64 v75; // rax
  unsigned __int8 v76; // r8
  unsigned __int8 v77; // r9
  struct VIDMM_PAGE_DIRECTORY *PageTable; // rax
  __int64 v79; // r9
  char v80; // dl
  __int64 v81; // rcx
  __int64 v82; // rax
  unsigned int *v83; // r15
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // r14
  int v86; // r8d
  _QWORD *v87; // r13
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // r11
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  unsigned int v96; // eax
  __int64 v97; // rdi
  __int64 v98; // r14
  __int64 v99; // rax
  unsigned __int64 v100; // rsi
  __int64 v101; // r12
  __int64 v102; // rsi
  _QWORD *v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rdx
  char v106; // r9
  __int64 v107; // rax
  __int64 v108; // r8
  __int64 v109; // rdx
  struct _DXGK_UPDATEPAGETABLEFLAGS v110; // esi
  VIDMM_GLOBAL *v111; // rdi
  enum _DXGK_PAGETABLEUPDATEMODE v112; // eax
  PVOID v113; // r14
  __int64 v114; // rsi
  unsigned __int64 v115; // rcx
  int v116; // eax
  SIZE_T *v117; // rdx
  SIZE_T v118; // rdi
  int v119; // eax
  unsigned int v120; // edx
  struct DXGK_LOG *v121; // r14
  char *v122; // rsi
  _QWORD *VaPagingHistoryEntry; // rax
  char v124; // di
  unsigned __int64 v125; // r9
  unsigned int v126; // eax
  int v127; // r15d
  __int64 v128; // r12
  int v129; // r13d
  char *v130; // rsi
  char *v131; // rax
  __int128 v132; // xmm0
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v133; // r13
  unsigned __int64 v134; // rdi
  enum _DXGK_PAGETABLEUPDATEMODE v135; // eax
  unsigned int v136; // esi
  unsigned __int64 v137; // rbx
  unsigned int v138; // r8d
  unsigned int v139; // edx
  __int64 v140; // rcx
  VIDMM_PAGE_TABLE *v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rax
  unsigned __int64 *v145; // rbx
  unsigned __int64 *v146; // rbx
  __int64 v147; // rcx
  unsigned int v148; // eax
  __int64 v149; // rdx
  __int64 v150; // rax
  int v151; // ecx
  __int64 v152; // rdx
  int v153; // r8d
  int v154; // r8d
  int v155; // r8d
  unsigned int v156; // edx
  int v157; // eax
  __int64 v158; // rdi
  _DWORD *v159; // rcx
  unsigned __int8 v160; // al
  unsigned int v161; // r11d
  unsigned int v162; // eax
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 *v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 **v169; // rax
  VIDMM_CPU_HOST_APERTURE *v170; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v172; // rdi
  __int64 v173; // rsi
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rcx
  unsigned __int8 v177; // al
  __int64 v178; // rcx
  unsigned int v179; // r8d
  __int64 v180; // rcx
  unsigned int v181; // [rsp+38h] [rbp-D8h]
  unsigned __int64 v182; // [rsp+38h] [rbp-D8h]
  struct VIDMM_ALLOC **v183; // [rsp+40h] [rbp-D0h]
  unsigned __int64 v184; // [rsp+78h] [rbp-98h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v185; // [rsp+80h] [rbp-90h]
  unsigned __int8 v186; // [rsp+90h] [rbp-80h]
  char v187; // [rsp+91h] [rbp-7Fh]
  unsigned __int8 v188; // [rsp+92h] [rbp-7Eh] BYREF
  char v189; // [rsp+93h] [rbp-7Dh]
  char v190; // [rsp+94h] [rbp-7Ch]
  unsigned int v191; // [rsp+98h] [rbp-78h]
  char v192; // [rsp+9Ch] [rbp-74h]
  char v193; // [rsp+9Dh] [rbp-73h]
  unsigned int v194; // [rsp+A0h] [rbp-70h]
  unsigned int v195[2]; // [rsp+A8h] [rbp-68h] BYREF
  unsigned int v196; // [rsp+B0h] [rbp-60h]
  unsigned int v197; // [rsp+B4h] [rbp-5Ch]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v198; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v199; // [rsp+C0h] [rbp-50h]
  PVOID v200; // [rsp+C8h] [rbp-48h]
  unsigned int v201; // [rsp+D0h] [rbp-40h]
  unsigned int v202; // [rsp+D4h] [rbp-3Ch] BYREF
  unsigned int v203; // [rsp+D8h] [rbp-38h]
  VIDMM_PAGE_TABLE *v204; // [rsp+E0h] [rbp-30h]
  struct VIDMM_PAGE_TABLE *v205; // [rsp+E8h] [rbp-28h] BYREF
  unsigned __int64 v206; // [rsp+F0h] [rbp-20h]
  VIDMM_PAGE_DIRECTORY *v207; // [rsp+F8h] [rbp-18h]
  __int64 v208; // [rsp+100h] [rbp-10h]
  struct VIDMM_PAGE_DIRECTORY *v209; // [rsp+108h] [rbp-8h] BYREF
  __int64 v210; // [rsp+110h] [rbp+0h]
  VIDMM_GLOBAL *v211; // [rsp+118h] [rbp+8h]
  int v212; // [rsp+120h] [rbp+10h]
  unsigned int v213; // [rsp+124h] [rbp+14h]
  unsigned __int64 v214; // [rsp+128h] [rbp+18h]
  struct VIDMM_ALLOC *v215; // [rsp+130h] [rbp+20h]
  PVOID BaseAddress; // [rsp+138h] [rbp+28h] BYREF
  PVOID P; // [rsp+140h] [rbp+30h] BYREF
  unsigned __int64 v218; // [rsp+148h] [rbp+38h] BYREF
  unsigned __int64 v219; // [rsp+150h] [rbp+40h]
  unsigned int v220[2]; // [rsp+158h] [rbp+48h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+160h] [rbp+50h]
  unsigned __int64 v222; // [rsp+168h] [rbp+58h]
  __int64 v223; // [rsp+170h] [rbp+60h]

  v9 = 0LL;
  v219 = a4;
  v10 = this;
  v204 = 0LL;
  v205 = 0LL;
  v207 = 0LL;
  v209 = 0LL;
  *a9 = 0LL;
  v11 = *(_QWORD *)a3 & 1LL;
  if ( (*(_QWORD *)a3 & 1) == 0 )
  {
    v12 = *((_QWORD *)this + 2);
    if ( !v12 || !*(_QWORD *)(v12 + 120) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(1LL, 5730LL);
    DxgkLogInternalTriageEvent(v180, 0x40000LL);
    return 3221225485LL;
  }
  v13 = a5 >> 12;
  v214 = a5 >> 12;
  v222 = (a5 >> 12) + a6;
  if ( v222 <= a5 >> 12 )
  {
    WdLogSingleEntry1(1LL, 5747LL);
    DxgkLogInternalTriageEvent(v147, 0x40000LL);
    return 3221225485LL;
  }
  v14 = *(_DWORD *)this;
  v211 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v15 = v14 & 7;
  v16 = *((_QWORD *)v211 + 5028);
  v17 = (_QWORD *)*((_QWORD *)a2 + 12);
  v18 = (v14 >> 7) & 0x1F;
  VidMmGlobalAllocFromOwner = 0LL;
  v215 = 0LL;
  v223 = v16 + 1616 * v18;
  v198 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v223 + 48 * (v15 + 2));
  v19 = a2;
  v206 = (*((_QWORD *)v198 + 2) & v13) >> *((_QWORD *)v198 + 3);
  if ( (v14 & 0x10) == 0 )
  {
    v20 = *(_DWORD *)(1616 * v18 + 48 * (v15 + 2) + v16);
    v194 = v20;
    v197 = v20;
    goto LABEL_9;
  }
  v120 = *(_DWORD *)(32 * v18 + *((_QWORD *)a2 + 15) + 16);
  v197 = v120;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
  {
    v121 = (VIDMM_GLOBAL *)((char *)v211 + 41024);
    if ( !*((_QWORD *)v211 + 5128) )
    {
      v194 = v120;
      v197 = v120;
LABEL_125:
      v13 = v214;
LABEL_126:
      v20 = v120;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !*((_QWORD *)v211 + 5123) )
    {
      v194 = v120;
      v197 = v120;
      goto LABEL_126;
    }
    v121 = (VIDMM_GLOBAL *)((char *)v211 + 41024);
  }
  if ( !v11 )
  {
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || (v194 = v120, *((_QWORD *)v211 + 5123)) )
    {
      v122 = (char *)v211 + 41000;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v211 + 41000, 0LL);
      v53 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
      *((_QWORD *)v211 + 5126) = KeGetCurrentThread();
      if ( v53 )
        VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v211, 2LL, 32LL);
      else
        VaPagingHistoryEntry = operator new(32, v121, 2u, 0);
      if ( VaPagingHistoryEntry )
      {
        *VaPagingHistoryEntry = *v17;
        VaPagingHistoryEntry[1] = v17[4];
        VaPagingHistoryEntry[2] = a5;
        VaPagingHistoryEntry[3] = a6 << 12;
      }
      *((_QWORD *)v122 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v122, 0LL);
      KeLeaveCriticalRegion();
      v120 = v197;
      v19 = a2;
      v204 = v205;
      v207 = v209;
      v194 = v197;
    }
    goto LABEL_125;
  }
  v127 = *((_DWORD *)a3 + 14);
  v128 = *((_QWORD *)a3 + 6);
  v129 = *((_DWORD *)a3 + 15);
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)v211 + 5123) )
  {
    v130 = (char *)v211 + 41000;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v211 + 41000, 0LL);
    v53 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v211 + 5126) = KeGetCurrentThread();
    if ( v53 )
      v131 = (char *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v211, 1LL, 72LL);
    else
      v131 = (char *)operator new(72, v121, 1u, 0);
    if ( v131 )
    {
      *((_DWORD *)v131 + 17) = v127;
      v132 = *((_OWORD *)a3 + 2);
      *((_QWORD *)v131 + 7) = v128;
      *(_OWORD *)(v131 + 40) = v132;
      *((_QWORD *)v131 + 1) = v17[4];
      *(_QWORD *)v131 = *v17;
      *((_QWORD *)v131 + 4) = a7;
      *((_QWORD *)v131 + 2) = a5;
      *((_DWORD *)v131 + 16) = v129;
      *((_QWORD *)v131 + 3) = a6 << 12;
    }
    v9 = 0LL;
    *((_QWORD *)v130 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v130, 0LL);
    KeLeaveCriticalRegion();
    v120 = v197;
    v204 = v205;
    v207 = v209;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = this;
  v20 = v120;
  v19 = a2;
  v13 = v214;
  v194 = v120;
  v197 = v120;
LABEL_9:
  v21 = *((_QWORD *)v10 + 2);
  v203 = 0;
  v201 = 0;
  v190 = 0;
  if ( !v21 || !*(_QWORD *)(v21 + 120) )
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory((struct VIDMM_ALLOC **)v10, v19, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)v10 &= ~0x10000u;
    a8 = 1;
  }
  v23 = *(_DWORD *)v10;
  if ( (*(_DWORD *)v10 & 0x10000) == 0 )
  {
    v24 = 2;
    v212 = 2;
    goto LABEL_164;
  }
  v24 = 0;
  v212 = 0;
  if ( a8 )
  {
LABEL_164:
    v25 = v206;
    if ( (_DWORD)v206 )
    {
      v142 = 0LL;
      v143 = (unsigned int)v206;
      do
      {
        v144 = *((_QWORD *)v10 + 5);
        v142 += 16LL;
        *(_QWORD *)(v142 + v144 - 16) = 0LL;
        *(_QWORD *)(v142 + v144 - 8) = 0LL;
        --v143;
      }
      while ( v143 );
      v23 = *(_DWORD *)v10;
    }
    v201 = v20;
    v190 = 1;
    goto LABEL_14;
  }
  v25 = v206;
LABEL_14:
  v26 = v198;
  v27 = 0;
  v28 = a3;
  v29 = v13;
  v199 = v13;
  v192 = 0;
  v30 = *((_QWORD *)v198 + 5);
  v31 = v13 & ~*((_QWORD *)v198 + 4);
  v193 = 0;
  v32 = (struct VIDMM_ALLOC **)(v31 + v30);
  v202 = 0;
  v33 = (unsigned __int64)v32;
  if ( (v23 & 0x20) != 0 && *((_BYTE *)a3 + 65) )
  {
    if ( *((_BYTE *)a3 + 64) )
      v27 = v20;
    v202 = v27;
  }
  v34 = 0;
  v195[0] = 0;
  while ( 1 )
  {
    if ( v25 >= v20 )
      goto LABEL_50;
    v35 = 0;
    v186 = 0;
    v188 = 0;
    v189 = 0;
    v36 = v27 + v25;
    v196 = v27 + v25;
    v191 = v27 + v25;
    v187 = 0;
    if ( *((_BYTE *)v28 + 66) && (*(_DWORD *)v10 & 0x20) != 0 )
    {
      v35 = 1;
      v148 = v36 + v197;
      v187 = 1;
      if ( v36 != v25 )
        v148 = v25;
      v191 = v148;
    }
    if ( v33 >= v222 )
      v192 = 1;
    v37 = v222;
    v38 = *(_QWORD *)v28;
    if ( v33 < v222 )
      v37 = v33;
    v218 = v37;
    v39 = v37 - v29;
    v200 = (PVOID)(v37 - v29);
    if ( (v38 & 1) != 0 || (v40 = *((_QWORD *)v10 + 5), (*(_BYTE *)(v40 + 16LL * v36) & 1) != 0) )
    {
      v41 = v191;
    }
    else
    {
      v41 = v191;
      if ( (*(_BYTE *)(v40 + 16LL * v191) & 1) == 0 )
        goto LABEL_49;
    }
    if ( (v38 & 2) == 0 )
      goto LABEL_26;
    v149 = *((_QWORD *)v10 + 5);
    if ( (*(_BYTE *)(v149 + 16LL * v36) & 2) == 0 )
      break;
    v150 = v36;
LABEL_215:
    if ( (_DWORD)v150 == -1 || ((*(_BYTE *)(v149 + 16 * v150) ^ (unsigned __int8)v38) & 8) != 0 )
      goto LABEL_26;
LABEL_49:
    v9 = 0LL;
    v26 = v198;
    v29 = v218;
    LODWORD(v206) = v206 + 1;
    v31 = v218;
    v69 = v39 << 12;
    a7 += v69;
    v70 = *((_QWORD *)v198 + 5);
    v219 += v69;
    v33 = v218 + v70;
    v32 = (struct VIDMM_ALLOC **)v33;
    v199 = v218;
    if ( v192 )
      goto LABEL_50;
    v25 = v206;
    v20 = v194;
    v27 = v202;
  }
  if ( v35 && (*(_BYTE *)(v149 + 16LL * v41) & 2) != 0 )
  {
    v150 = v41;
    goto LABEL_215;
  }
LABEL_26:
  v42 = v198;
  v43 = a7;
  if ( *((_QWORD *)v198 + 5) <= v39 && (*((_DWORD *)a2 + 36) & 4) == 0 )
  {
    if ( !VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
            v10,
            a2,
            *(const struct _DXGK_GPUMMUCAPS **)(v223 + 448),
            v28,
            v198,
            v196,
            v41,
            v181,
            a7,
            &v188,
            (unsigned __int8 *)v28 + 69) )
    {
      v42 = v198;
      v28 = a3;
      v39 = (unsigned __int64)v200;
      v186 = v188;
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v10 + 5) + 16LL * v196) & 0x400LL) != 0 )
    {
      v151 = *((_DWORD *)a3 + 14);
      v215 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 6);
      VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(v151, (__int64)v215);
      if ( v153 >= 1 )
      {
        v154 = v153 - 1;
        if ( !v154 )
          goto LABEL_185;
        v155 = v154 - 3;
        if ( !v155 )
        {
          v215 = *(struct VIDMM_ALLOC **)(v152 + 64);
          goto LABEL_185;
        }
        if ( v155 == 1 )
        {
          v215 = *(struct VIDMM_ALLOC **)(v152 + 24);
          goto LABEL_185;
        }
      }
      v215 = 0LL;
    }
LABEL_185:
    v63 = v188;
    v193 = 1;
    goto LABEL_46;
  }
LABEL_27:
  v44 = *((_QWORD *)v10 + 5);
  v45 = v196;
  v46 = *(_QWORD *)(v44 + 16LL * v196) & 0x400LL;
  if ( (*(_QWORD *)(v44 + 16LL * v196) & 0x400) != 0 || v187 && (*(_DWORD *)(v44 + 16LL * v191) & 0x400LL) != 0 )
  {
    v156 = v196;
    if ( !v46 )
      v156 = v191;
    if ( *((_QWORD *)v42 + 5) <= v39 )
    {
      v158 = v156;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
        *(PVOID *)(*((_QWORD *)v10 + 6) + 8LL * v156));
      *(_QWORD *)(*((_QWORD *)v10 + 6) + 8 * v158) = 0LL;
      v158 *= 2LL;
      *(_QWORD *)(*((_QWORD *)v10 + 5) + 8 * v158) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)v10 + 5) + 8 * v158) &= ~1uLL;
      --*((_DWORD *)v10 + 1);
      v43 = a7;
    }
    else
    {
      v157 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(v10, a2, v42, *((_BYTE *)v28 + 65), (PVOID)(v31 << 12), v156, a9);
      v195[0] = v157;
      if ( v157 < 0 )
      {
        v34 = v157;
        WdLogSingleEntry1(3LL, v157);
        goto LABEL_287;
      }
    }
    v28 = a3;
    v189 = 1;
  }
  v47 = this;
  v48 = *((_BYTE *)v28 + 64);
  v49 = *(_DWORD *)this;
  v50 = *(_DWORD *)this & 0x20;
  if ( v50 && !*((_DWORD *)v28 + 15) && v48 )
  {
    if ( *((_BYTE *)v28 + 65)
      || (v159 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * v45)) == 0LL
      || !v159[1]
      || (*v159 & 0x40) != 0 )
    {
      if ( ((unsigned __int8)v200 & 0xF) != 0 )
      {
        v48 = 0;
        goto LABEL_241;
      }
      v160 = CheckContiguous64KB((const struct COMMIT_VA_STATE *)((char *)v28 + 32), (unsigned int)v200, v43 >> 12);
      v47 = this;
      v48 = v160;
      v28 = a3;
      if ( !v160 )
        goto LABEL_241;
    }
    else
    {
      v48 = 0;
LABEL_241:
      v196 = v206;
      if ( v187 )
        v191 = v194 + v206;
    }
  }
  v51 = v196;
  v52 = 16LL * v196;
  v53 = (*(_BYTE *)v28 & 1) == 0;
  v208 = v52;
  if ( !v53 || (*(_BYTE *)(v52 + *((_QWORD *)v47 + 5)) & 2) != 0 )
  {
    v75 = *((_QWORD *)v47 + 6);
    v208 = 16LL * v196;
    if ( !*(_QWORD *)(v75 + 8LL * v196) )
    {
      if ( v50 )
      {
        if ( *((_BYTE *)v28 + 65) && v48 || *((_DWORD *)v28 + 15) == -3 )
        {
          v76 = 1;
LABEL_62:
          v77 = 0;
        }
        else
        {
          v76 = 0;
          if ( !v48 )
            goto LABEL_62;
          v77 = 1;
        }
        PageTable = CreatePageTable(a2, (v49 >> 7) & 0x1F, v76, v77);
      }
      else
      {
        PageTable = CreatePageDirectory(a2, (v49 >> 7) & 0x1F, (v49 & 7) - 1);
      }
      v47 = this;
      v208 = v52;
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v51) = PageTable;
      if ( !*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v51) )
      {
        WdLogSingleEntry1(1LL, 6089LL);
        v9 = 0LL;
        DxgkLogInternalTriageEvent(v178, 0x40000LL);
        v34 = -1073741801;
        goto LABEL_286;
      }
    }
  }
  v54 = *((_QWORD *)v47 + 5);
  v55 = *(_QWORD *)(v52 + v54);
  v56 = (v55 & 1) == 0;
  v57 = v55 & 2;
  if ( v57 )
  {
    v161 = v191;
    goto LABEL_249;
  }
  v58 = v56;
  if ( !v187 || (v161 = v191, (*(_BYTE *)(v54 + 16LL * v191) & 2) == 0) )
  {
    v59 = v200;
    v60 = a3;
    v34 = v195[0];
    goto LABEL_35;
  }
LABEL_249:
  v59 = v200;
  if ( *((_QWORD *)v198 + 5) <= (unsigned __int64)v200 )
  {
    v34 = v195[0];
    v60 = a3;
    v162 = v161;
    if ( v57 )
      v162 = v196;
    v58 = v56;
    v163 = 2LL * v162;
    *(_QWORD *)(v54 + 8 * v163) &= ~2uLL;
    *(_QWORD *)(*((_QWORD *)v47 + 5) + 8 * v163) &= ~1uLL;
    --*((_DWORD *)v47 + 1);
LABEL_255:
    v189 = 1;
LABEL_35:
    v61 = *(_DWORD *)v47;
    v62 = 8 * v51;
    v210 = 8 * v51;
    if ( (v61 & 0x20) == 0 )
    {
      v34 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)(v62 + *((_QWORD *)v47 + 6)),
              a2,
              v60,
              v219,
              v199 << 12,
              (unsigned __int64)v59,
              a7,
              v58,
              a9);
      v195[0] = v34;
LABEL_37:
      if ( v34 < 0 )
        goto LABEL_289;
      v47 = this;
      v63 = v186;
      v64 = v198;
      v65 = v199;
      v66 = v191;
LABEL_39:
      if ( (*(_BYTE *)v60 & 1) == 0 )
      {
        if ( v189 )
          v63 = 1;
        if ( (*((_DWORD *)a2 + 36) & 4) != 0 )
        {
          v10 = this;
          goto LABEL_46;
        }
        v67 = (_QWORD *)(*((_QWORD *)v47 + 5) + v208);
        v68 = v65 & ~*((_QWORD *)v64 + 4);
        if ( (*(_BYTE *)v67 & 1) != 0 && !*(_DWORD *)(*(_QWORD *)(v62 + *((_QWORD *)v47 + 6)) + 4LL) )
        {
          --*((_DWORD *)v47 + 1);
          *v67 = 0LL;
          v67[1] = 0LL;
          v140 = *(_QWORD *)(v62 + *((_QWORD *)v47 + 6));
          if ( (*(_DWORD *)v47 & 0x20) != 0 )
          {
            *(_QWORD *)(v140 + 40) = v204;
            v141 = *(VIDMM_PAGE_TABLE **)(v62 + *((_QWORD *)v47 + 6));
            v204 = v141;
            v205 = v141;
          }
          else
          {
            *(_QWORD *)(v140 + 32) = v207;
            v141 = *(VIDMM_PAGE_TABLE **)(v62 + *((_QWORD *)v47 + 6));
            v207 = v141;
            v209 = v141;
          }
          *((_QWORD *)v141 + 1) = v68;
          v63 = 1;
          *(_QWORD *)(v62 + *((_QWORD *)v47 + 6)) = 0LL;
        }
        v10 = this;
        if ( v66 == v196
          || (v177 = VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(this, v66, v68, &v209, &v205),
              v204 = v205,
              v207 = v209,
              !v177) )
        {
LABEL_46:
          if ( !v63 )
          {
            v39 = (unsigned __int64)v200;
LABEL_48:
            v28 = a3;
            goto LABEL_49;
          }
        }
LABEL_145:
        if ( !v190 )
        {
          v190 = 1;
          v203 = v206;
        }
        v39 = (unsigned __int64)v200;
        if ( (unsigned int)v206 >= v201 )
          v201 = v206 + 1;
        goto LABEL_48;
      }
      v79 = v208;
      if ( (*(_DWORD *)v47 & 0x20) == 0 || *((_BYTE *)v60 + 65) )
      {
        v10 = this;
      }
      else
      {
        v10 = this;
        if ( ((**(_DWORD **)(v62 + *((_QWORD *)this + 6)) >> 6) & 1) != ((*(_DWORD *)(v208 + *((_QWORD *)v47 + 5)) & 0x60000) == 0x20000LL) )
        {
          v80 = 1;
          goto LABEL_69;
        }
      }
      v80 = 0;
LABEL_69:
      v81 = *((_QWORD *)v10 + 5);
      v82 = *(_QWORD *)(v81 + v208);
      if ( (v82 & 1) != 0 )
      {
        if ( !v80 && !v189 )
          goto LABEL_46;
      }
      else
      {
        *(_QWORD *)(v81 + v208) = v82 | 1;
        ++*((_DWORD *)v10 + 1);
      }
      *(_QWORD *)(v79 + *((_QWORD *)v10 + 5)) &= ~0x400uLL;
      *(_QWORD *)(v79 + *((_QWORD *)v10 + 5)) &= ~2uLL;
      *(_QWORD *)(v79 + *((_QWORD *)v10 + 5)) &= ~8uLL;
      if ( v187 )
      {
        v176 = 2LL * v66;
        *(_QWORD *)(*((_QWORD *)v10 + 5) + 8 * v176) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)v10 + 5) + 8 * v176) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)v10 + 5) + 8 * v176) &= ~8uLL;
      }
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(v10, a2, v196);
      goto LABEL_145;
    }
    if ( (*(_BYTE *)v60 & 1) != 0 )
    {
      v124 = *((_BYTE *)v60 + 64);
      v125 = v219;
      *((_BYTE *)v60 + 64) = v48;
      v126 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
               *(VIDMM_PAGE_TABLE **)(v62 + *((_QWORD *)v47 + 6)),
               a2,
               v60,
               v125,
               (PVOID)(v199 << 12),
               v59,
               a7,
               v58,
               a9);
      v47 = this;
      v34 = v126;
      v195[0] = v126;
      *((_BYTE *)v60 + 64) = v124;
    }
    else
    {
      v83 = *(unsigned int **)(v62 + *((_QWORD *)v47 + 6));
      if ( v83 )
      {
        v84 = v199;
        if ( v83[1] )
        {
          v85 = v199 << 12;
          BaseAddress = (PVOID)(v199 << 12);
          if ( (unsigned __int64)v200 + (v199 & 0xFFFFFFFFFFFFFLL) > (v199 & 0xFFFFFFFFFFFFFLL) )
          {
            v86 = *v83;
            v87 = (_QWORD *)*((_QWORD *)a2 + 11);
            v88 = (*v83 >> 7) & 0x1F;
            *(_QWORD *)v195 = v87;
            v89 = 1616 * v88;
            v90 = *((_QWORD *)v83 + 2);
            v91 = v87[5028] + v89;
            if ( !v90 || !*(_QWORD *)(v90 + 120) )
            {
              v60 = a3;
              v34 = 0;
              v195[0] = 0;
              goto LABEL_110;
            }
            v92 = *(_DWORD *)(v91 + 80);
            LODWORD(v93) = v92 & v199;
            *(_QWORD *)v220 = v92 & (unsigned int)v199;
            v94 = v92 & (v199 + (_DWORD)v200 - 1);
            if ( (v86 & 0x40) != 0 )
            {
              v93 = (unsigned int)v93 >> 4;
              v94 >>= 4;
              v85 &= 0xFFFFFFFFFFFF0000uLL;
              *(_QWORD *)v220 = v93;
              BaseAddress = (PVOID)v85;
            }
            v95 = v94 - v93 + 1;
            v53 = v87[5132] == 0LL;
            v213 = v95;
            if ( v53 )
            {
              v96 = v93 + v95;
            }
            else
            {
              v96 = v95 + v93;
              if ( (unsigned int)v93 < v95 + (unsigned int)v93 )
              {
                v97 = 16LL * (unsigned int)v93;
                v98 = v95;
                do
                {
                  v99 = *((_QWORD *)v83 + 4);
                  v100 = *(_QWORD *)(v99 + v97);
                  if ( (v100 & 1) != 0 )
                  {
                    v101 = *(_QWORD *)(v99 + v97 + 8);
                    v102 = (v100 >> 5) & 0x1F;
                    if ( v87[5132] )
                    {
                      KeEnterCriticalRegion();
                      ExAcquirePushLockExclusiveEx(v87 + 5125, 0LL);
                      v103 = *(_QWORD **)v195;
                      v87[5126] = KeGetCurrentThread();
                      v104 = *((unsigned int *)v103 + 10266);
                      if ( (_DWORD)v104 == dword_1C0076464 )
                      {
                        *((_DWORD *)v103 + 10266) = 0;
                        v104 = 0LL;
                      }
                      v105 = v103[5132] + 48 * v104;
                      *(_QWORD *)v105 = MEMORY[0xFFFFF78000000014];
                      *(_DWORD *)(v105 + 32) = 1;
                      *(_DWORD *)(v105 + 36) = v102;
                      *(_QWORD *)(v105 + 8) = v101;
                      *(_QWORD *)(v105 + 16) = 1LL;
                      *(_QWORD *)(v105 + 24) = 0LL;
                      *(_DWORD *)(v105 + 40) = *((_DWORD *)v103 + 10248);
                      ++*((_DWORD *)v103 + 10266);
                      v87[5126] = 0LL;
                      ExReleasePushLockExclusiveEx(v87 + 5125, 0LL);
                      KeLeaveCriticalRegion();
                      v87 = *(_QWORD **)v195;
                    }
                  }
                  v97 += 16LL;
                  --v98;
                }
                while ( v98 );
                v106 = 0;
                v24 = v212;
                LODWORD(v93) = v220[0];
                v95 = v213;
                v85 = (unsigned __int64)BaseAddress;
                v204 = v205;
                v207 = v209;
                v186 = v188;
                goto LABEL_91;
              }
            }
            v106 = 0;
            if ( (unsigned int)v93 >= v96 )
            {
              v60 = a3;
              goto LABEL_97;
            }
LABEL_91:
            v107 = 16LL * (unsigned int)v93;
            v108 = v95;
            do
            {
              v109 = *((_QWORD *)v83 + 4);
              if ( (*(_BYTE *)(v109 + v107) & 1) != 0 )
              {
                --v83[1];
                v106 = 1;
                *(_QWORD *)(v109 + v107) = 0LL;
                *(_QWORD *)(*((_QWORD *)v83 + 4) + v107 + 8) = 0LL;
              }
              v107 += 16LL;
              --v108;
            }
            while ( v108 );
            v60 = a3;
            if ( v106 )
              *((_BYTE *)a3 + 69) = 1;
LABEL_97:
            if ( v83[1] || (*((_DWORD *)a2 + 36) & 4) != 0 )
            {
              if ( (*v83 & 0x40) != 0 )
                v110 = (struct _DXGK_UPDATEPAGETABLEFLAGS)8;
              else
                v110 = 0;
              v111 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
              v195[0] = 0;
              BaseAddress = 0LL;
              P = 0LL;
              if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                          (VIDMM_PAGE_TABLE_BASE *)v83,
                          a2,
                          v195,
                          (unsigned __int64 *)&BaseAddress,
                          &P) < 0 )
              {
                WdLogSingleEntry1(2LL, 3949LL);
                WdLogSingleEntry1(1LL, 6541LL);
                v181 = 0;
                DxgkLogInternalTriageEvent(v164, 0x40000LL);
                v34 = -1073741823;
                v195[0] = -1073741823;
                goto LABEL_109;
              }
              if ( (*((_BYTE *)v111 + 40936) & 0x40) != 0 )
                v112 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
              else
                v112 = (int)(*v83 << 16) >> 29;
              v184 = v85 >> 12;
              v113 = BaseAddress;
              VIDMM_GLOBAL::UpdatePageTable(
                v111,
                *v83 & 7,
                *((struct VIDMM_PROCESS **)a2 + 12),
                0LL,
                0LL,
                0LL,
                0LL,
                v220[0],
                v213,
                0LL,
                0LL,
                (*v83 >> 7) & 0x1F,
                v195[0],
                (unsigned __int64)BaseAddress,
                v112,
                v184,
                v110,
                0LL);
              v114 = *((_QWORD *)a2 + 11);
              if ( (*(_BYTE *)(v114 + 40936) & 0x40) == 0 && (v115 = *v83, (v116 = (__int16)v115 >> 13) != 0) )
              {
                if ( v116 == 1 && *(struct CVirtualAddressAllocator **)(v114 + 8 * ((v115 >> 7) & 0x1F) + 40416) != a2 )
                {
                  v165 = *((_QWORD *)v83 + 3) + 128LL;
                  v166 = *(__int64 **)v165;
                  if ( *(_QWORD *)(*(_QWORD *)v165 + 8LL) != v165
                    || (v167 = *v166, *(__int64 **)(*v166 + 8) != v166)
                    || (*(_QWORD *)v165 = v167,
                        *(_QWORD *)(v167 + 8) = v165,
                        v166[2] = *(_QWORD *)(v114 + 8LL * ((*v83 >> 7) & 0x1F) + 4968),
                        v168 = 1616LL * ((*v83 >> 7) & 0x1F) + *(_QWORD *)(v114 + 40224) + 472LL,
                        v169 = *(__int64 ***)(v168 + 8),
                        *v169 != (__int64 *)v168) )
                  {
                    __fastfail(3u);
                  }
                  *v166 = v168;
                  v166[1] = (__int64)v169;
                  *v169 = v166;
                  *(_QWORD *)(v168 + 8) = v166;
                }
              }
              else
              {
                if ( !*(_QWORD *)(*((_QWORD *)v83 + 2) + 120LL) )
                {
                  g_DxgMmsBugcheckExportIndex = 1;
                  WdLogSingleEntry5(0LL, 270LL, 48LL, v83, 0LL, 0LL);
                }
                v117 = (SIZE_T *)*((_QWORD *)v83 + 2);
                v118 = v117[15];
                v119 = *(_DWORD *)(v118 + 80);
                if ( (v119 & 0x1001) == 0 )
                {
                  if ( (v119 & 4) != 0 )
                  {
                    if ( (*(_DWORD *)(*(_QWORD *)(v114 + 24) + 436LL) & 8) == 0 )
                      MmUnmapIoSpace(v113, v117[2]);
                  }
                  else
                  {
                    v170 = *(VIDMM_CPU_HOST_APERTURE **)(v118 + 504);
                    VIDMM_CPU_HOST_APERTURE::UnmapRange(v170, (struct _VIDMM_GLOBAL_ALLOC *)v117);
                    VIDMM_CPU_HOST_APERTURE::ReleaseRange(v170, *((struct _VIDMM_GLOBAL_ALLOC **)v83 + 2));
                    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
                    (*((void (__fastcall **)(PVOID, PVOID))VirtualMemoryInterface + 6))(v113, P);
                    ExFreePoolWithTag(P, 0);
                  }
                }
              }
            }
            v34 = 0;
            v195[0] = 0;
LABEL_109:
            v47 = this;
            v62 = v210;
LABEL_110:
            v59 = v200;
            v84 = v199;
            goto LABEL_111;
          }
          v34 = -1073741811;
          v195[0] = -1073741811;
        }
        v59 = v200;
LABEL_111:
        if ( !*((_BYTE *)v60 + 66) )
          goto LABEL_37;
        if ( v34 < 0 )
          goto LABEL_289;
        v66 = v191;
        v172 = 2LL * v191;
        v173 = v191;
        if ( (*(_BYTE *)(*((_QWORD *)v47 + 5) + 16LL * v191) & 1) == 0 )
          goto LABEL_280;
        v195[0] = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
                    *(VIDMM_PAGE_TABLE **)(*((_QWORD *)v47 + 6) + 8LL * v191),
                    a2,
                    v60,
                    v84 << 12,
                    (unsigned __int64)v59);
        v34 = v195[0];
        if ( (v195[0] & 0x80000000) != 0 )
        {
LABEL_289:
          WdLogSingleEntry0(3LL);
          v9 = 0LL;
LABEL_286:
          v10 = this;
LABEL_287:
          v26 = v198;
LABEL_50:
          v71 = a2;
          goto LABEL_51;
        }
        v47 = this;
        v66 = v191;
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v173) + 4LL) )
        {
LABEL_280:
          v65 = v199;
          v64 = v198;
        }
        else
        {
          v64 = v198;
          v65 = v199;
          if ( (*((_DWORD *)a2 + 36) & 4) == 0 )
          {
            --*((_DWORD *)this + 1);
            v174 = *((_QWORD *)this + 5);
            *(_QWORD *)(v174 + 8 * v172) = 0LL;
            *(_QWORD *)(v174 + 8 * v172 + 8) = 0LL;
            v63 = 1;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v173) + 40LL) = v204;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v173) + 8LL) = v65 & ~*((_QWORD *)v64 + 4);
            v175 = *((_QWORD *)this + 6);
            v204 = *(VIDMM_PAGE_TABLE **)(v175 + 8 * v173);
            v205 = v204;
            *(_QWORD *)(v175 + 8 * v173) = 0LL;
LABEL_282:
            v62 = v210;
            goto LABEL_39;
          }
        }
        v63 = v186;
        goto LABEL_282;
      }
      v59 = v200;
    }
    v84 = v199;
    goto LABEL_111;
  }
  v183 = v32;
  v60 = a3;
  v182 = v31;
  v71 = a2;
  v195[0] = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(v47, a2, a3, v196, v161, v199, v218, v182, (unsigned __int64)v183, a9);
  v34 = v195[0];
  if ( (v195[0] & 0x80000000) == 0 )
  {
    v47 = this;
    v58 = 0;
    goto LABEL_255;
  }
  v10 = this;
  v9 = 0LL;
  v26 = v198;
LABEL_51:
  if ( v190 )
  {
    v202 = 0;
    v218 = 0LL;
    P = 0LL;
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(v10, v71, &v202, &v218, &P) >= 0 )
    {
      v133 = v198;
      v134 = *((_QWORD *)v198 + 5) * v203 + (v214 & ~(*((_QWORD *)v198 + 2) | *((_QWORD *)v198 + 4)));
      if ( (*((_BYTE *)v211 + 40936) & 0x40) != 0 )
        v135 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v135 = (int)(*(_DWORD *)v10 << 16) >> 29;
      if ( *((_BYTE *)a3 + 65) && (*(_DWORD *)v10 & 0x20) != 0 )
      {
        v136 = v194 + v203;
        v9 = (struct _DXGK_PTE *)(*((_QWORD *)v10 + 5) + 16LL * (v194 + v203));
      }
      else
      {
        v136 = v197 + v203;
      }
      v185 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v24;
      v137 = v218;
      VIDMM_GLOBAL::UpdatePageTable(
        v211,
        *(_DWORD *)v10 & 7,
        *((struct VIDMM_PROCESS **)a2 + 12),
        *((_QWORD *)a3 + 2),
        v215,
        VidMmGlobalAllocFromOwner,
        a4
      + ((*((_QWORD *)v198 + 5) * v203 + (v214 & ~(*((_QWORD *)v198 + 2) | *((_QWORD *)v198 + 4)))) << 12)
      - (v214 << 12),
        v203,
        v201 - v203,
        (struct _DXGK_PTE *)(*((_QWORD *)v10 + 5) + 16LL * v203),
        v9,
        (*(_DWORD *)v10 >> 7) & 0x1F,
        v202,
        v218,
        v135,
        v134,
        v185,
        *((_QWORD *)a3 + 9));
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(v10, a2, v138, v137, P);
      v139 = *(_DWORD *)v10 | 0x10000;
      v53 = v193 == 0;
      *(_DWORD *)v10 = v139;
      if ( !v53
        && (CVirtualAddressAllocator::FlushGpuVaTlb(
              a2,
              (v139 >> 7) & 0x1F,
              v134 << 12,
              (v134 + *((_QWORD *)v133 + 5)) << 12),
            VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(v10, a2, v203, v201, v134, *((_QWORD *)v133 + 5), *a9),
            *((_BYTE *)a3 + 65))
        && (*(_DWORD *)v10 & 0x20) != 0 )
      {
        v179 = v136;
        v71 = a2;
        VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
          v10,
          a2,
          v179,
          v194 + v201,
          v134,
          *((_QWORD *)v133 + 5),
          *a9);
      }
      else
      {
        v71 = a2;
      }
      v26 = v133;
      goto LABEL_52;
    }
    WdLogSingleEntry1(2LL, 6364LL);
    v34 = -1073741823;
  }
  else
  {
LABEL_52:
    if ( !*((_DWORD *)v10 + 1) && (*((_DWORD *)v71 + 36) & 4) == 0 )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v10, v71, a5 & ~*((_QWORD *)v26 + 4), 1u, 1);
  }
  v72 = (unsigned __int64 *)v204;
  if ( v204 )
  {
    do
    {
      v145 = (unsigned __int64 *)v72[5];
      VIDMM_PAGE_TABLE::DestroyPageTable((VIDMM_PAGE_TABLE *)v72, v71, v72[1]);
      v72 = v145;
    }
    while ( v145 );
  }
  v73 = (unsigned __int64 *)v207;
  if ( v207 )
  {
    do
    {
      v146 = (unsigned __int64 *)v73[4];
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v73, v71, v73[1]);
      v73 = v146;
    }
    while ( v146 );
  }
  return (unsigned int)v34;
}
