/*
 * XREFs of PspBuildCreateProcessContext @ 0x1407EEDE0
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x1407EEB00 (NtCreateThreadEx.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x140290374 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x1405A1B74 (IsTrustletCreateAttributeWellFormed.c)
 *     PspValidateMitigationOptions @ 0x140776EEC (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x14079B0D0 (RtlValidProcessProtection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x1407F026C (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationAuditOptions @ 0x140848974 (PspValidateMitigationAuditOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(unsigned __int64 *a1, char a2, int a3, __int64 a4)
{
  int v5; // r11d
  char v6; // r10
  __int64 v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // ebx
  int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  _DWORD *v22; // rax
  _BYTE *v23; // rax
  size_t v24; // rbx
  char *v25; // r15
  void *v26; // rcx
  __int64 v27; // rax
  size_t v28; // rbx
  char *v29; // r15
  void *v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  _DWORD *v37; // rcx
  int v38; // edx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  unsigned __int64 v47; // rbx
  char *v48; // r15
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // r13
  __int64 v52; // r12
  size_t v53; // rbx
  char *v54; // r15
  void *v55; // rax
  bool valid; // al
  bool v57; // zf
  size_t v58; // r8
  unsigned __int64 v59; // rdx
  __m128i v60; // xmm6
  __int64 v61; // xmm2_8
  _WORD *v62; // rax
  size_t v63; // rbx
  char *v64; // r15
  void *v65; // rax
  unsigned __int64 v66; // rbx
  _QWORD *v67; // rax
  _DWORD *v68; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  struct _PROCESSOR_NUMBER *v75; // rax
  ULONG ProcessorIndexFromNumber; // eax
  _OWORD *v77; // rax
  unsigned __int64 v78; // rcx
  size_t v79; // r8
  unsigned __int64 v80; // rdx
  __int128 v81; // xmm6
  __int64 v82; // xmm2_8
  _DWORD *v83; // rax
  size_t v84; // r12
  const void *v85; // r15
  void *v86; // rax
  __int64 *v87; // r13
  __int64 v88; // r15
  char *v89; // r9
  const void *v90; // r12
  __int64 v91; // rax
  char v92; // r10
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // rdx
  char *v97; // rbx
  __int64 v98; // rdx
  char *v99; // r15
  void *Pool2; // rax
  _QWORD *v101; // rax
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int8 v108; // cl
  _QWORD *v109; // [rsp+48h] [rbp-230h]
  unsigned __int16 v110; // [rsp+50h] [rbp-228h]
  unsigned __int64 v111; // [rsp+60h] [rbp-218h]
  unsigned __int64 v112; // [rsp+60h] [rbp-218h]
  unsigned __int64 v113; // [rsp+60h] [rbp-218h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp-210h] BYREF
  int v115; // [rsp+6Ch] [rbp-20Ch]
  unsigned __int64 v116; // [rsp+70h] [rbp-208h]
  int v117; // [rsp+78h] [rbp-200h]
  int v118; // [rsp+7Ch] [rbp-1FCh]
  char *v119; // [rsp+80h] [rbp-1F8h]
  __int64 v120; // [rsp+88h] [rbp-1F0h]
  __int64 v121; // [rsp+90h] [rbp-1E8h]
  __int64 v122; // [rsp+A0h] [rbp-1D8h]
  _DWORD *v123; // [rsp+B0h] [rbp-1C8h]
  _BYTE *v124; // [rsp+B8h] [rbp-1C0h]
  unsigned __int64 v125; // [rsp+C0h] [rbp-1B8h]
  unsigned __int64 v126; // [rsp+C8h] [rbp-1B0h]
  unsigned __int64 v127; // [rsp+D0h] [rbp-1A8h]
  _DWORD *v128; // [rsp+D8h] [rbp-1A0h]
  _DWORD *v129; // [rsp+E0h] [rbp-198h]
  _DWORD *v130; // [rsp+E8h] [rbp-190h]
  __int64 v131; // [rsp+F0h] [rbp-188h] BYREF
  __int64 v132; // [rsp+F8h] [rbp-180h]
  _WORD *v133; // [rsp+100h] [rbp-178h]
  char *v134; // [rsp+108h] [rbp-170h]
  struct _PROCESSOR_NUMBER *v135; // [rsp+110h] [rbp-168h]
  _OWORD *v136; // [rsp+118h] [rbp-160h]
  _DWORD *v137; // [rsp+120h] [rbp-158h]
  const void *v138; // [rsp+128h] [rbp-150h]
  _QWORD *v139; // [rsp+130h] [rbp-148h]
  char *v140; // [rsp+140h] [rbp-138h]
  char *v141; // [rsp+148h] [rbp-130h]
  void *v142; // [rsp+150h] [rbp-128h]
  char *v143; // [rsp+158h] [rbp-120h]
  unsigned __int64 v144; // [rsp+160h] [rbp-118h]
  unsigned __int64 v145; // [rsp+168h] [rbp-110h]
  int v146; // [rsp+170h] [rbp-108h]
  char *v147; // [rsp+178h] [rbp-100h]
  const void *v148; // [rsp+180h] [rbp-F8h]
  char *v149; // [rsp+188h] [rbp-F0h]
  char *v150; // [rsp+190h] [rbp-E8h]
  __int64 v151; // [rsp+198h] [rbp-E0h]
  unsigned __int64 v152; // [rsp+1A0h] [rbp-D8h]
  __m128i v153; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+1C0h] [rbp-B8h]
  __int128 v155; // [rsp+1D0h] [rbp-A8h] BYREF
  __int64 v156; // [rsp+1E0h] [rbp-98h]
  __m128i v157; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v158; // [rsp+200h] [rbp-78h]
  __int128 v159; // [rsp+208h] [rbp-70h] BYREF
  __int64 v160; // [rsp+218h] [rbp-60h]

  v5 = a3;
  v6 = a2;
  v118 = a3;
  v122 = a4;
  v7 = a4;
  v120 = a4;
  v142 = 0LL;
  v126 = 0LL;
  v123 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v141 = 0LL;
  v136 = 0LL;
  v134 = 0LL;
  ProcNumber = 0;
  v135 = 0LL;
  v127 = 0LL;
  v132 = 0LL;
  v131 = 0LL;
  v133 = 0LL;
  v124 = 0LL;
  v140 = 0LL;
  v115 = 0;
  v128 = 0LL;
  v117 = 0;
  v125 = 0LL;
  v130 = 0LL;
  v129 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v150 = 0LL;
  v138 = 0LL;
  v119 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v121 = 0LL;
  v137 = 0LL;
  v143 = 0LL;
  v151 = 0LL;
  v139 = 0LL;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *a1;
  v116 = v8;
  if ( v8 < 0x28 )
    return 3221225485LL;
  if ( v6 && v8 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v8 > 0x7FFFFFFF0000LL || (unsigned __int64 *)((char *)a1 + v8) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v10 = v8 - 8;
  v116 = v10;
  if ( (v10 & 0x1F) != 0 )
    return 3221225485LL;
  v11 = v10 >> 5;
  v116 = v11;
  v12 = a1 + 1;
  v109 = a1 + 1;
  while ( v11 )
  {
    v13 = *v12;
    v152 = *v12;
    if ( v5 && (v13 & 0x10000) == 0 )
      goto LABEL_17;
    if ( (v13 & 0x20000) != 0 && v12[3] )
      goto LABEL_17;
    v146 = 1 << v13;
    v15 = *(_DWORD *)(a4 + 4);
    if ( ((1 << v13) & v15) != 0 )
      goto LABEL_17;
    *(_DWORD *)(a4 + 4) = v15 | (1 << v13);
    if ( v13 > 0x20016 )
    {
      if ( v13 > 0x3001E )
      {
        v103 = v13 - 393216;
        if ( v103 )
        {
          v104 = v103 - 1;
          if ( v104 )
          {
            v105 = v104 - 1;
            if ( v105 )
            {
              v106 = v105 - 15;
              if ( !v106 )
              {
                if ( v12[1] != 1LL )
                  goto LABEL_17;
                v108 = *((_BYTE *)v12 + 16);
                *(_BYTE *)(a4 + 360) = v108;
                valid = RtlValidProcessProtection(v108);
                goto LABEL_150;
              }
              v107 = v106 - 9;
              if ( v107 )
              {
                if ( v107 != 2 || v12[1] != 2LL )
                  goto LABEL_17;
                *(_WORD *)(a4 + 160) = *((_WORD *)v12 + 8);
              }
              else
              {
                if ( v12[1] != 1LL )
                  goto LABEL_17;
                *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v12[2] != 0LL ? 0x80 : 0);
              }
            }
            else
            {
              if ( v12[1] != 8LL )
                goto LABEL_17;
              *(_QWORD *)(a4 + 144) = v12[2];
            }
          }
          else
          {
            if ( v12[1] != 8LL )
              goto LABEL_17;
            *(_QWORD *)(a4 + 136) = v12[2];
          }
        }
        else
        {
          if ( v12[1] != 8LL )
            goto LABEL_17;
          *(_QWORD *)(a4 + 120) = v12[2];
        }
      }
      else if ( v13 == 196638 )
      {
        if ( !v5 || v12[1] != 8LL )
          goto LABEL_17;
        v101 = (_QWORD *)v12[2];
        v139 = v101;
        if ( v6 )
        {
          if ( ((unsigned __int8)v101 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v109;
          v101 = v139;
        }
        v102 = *v101;
        *(_QWORD *)(a4 + 496) = *v101;
        v151 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v102) != 0 )
        {
LABEL_17:
          v14 = -1073741811;
          goto LABEL_298;
        }
        *(_QWORD *)(a4 + 496) = v102 & 0x40000;
      }
      else
      {
        v69 = v13 - 131095;
        if ( !v69 )
        {
          if ( v12[1] != 524LL )
            goto LABEL_17;
          v99 = (char *)v12[2];
          v150 = v99;
          if ( v6 && ((unsigned __int64)(v99 + 524) > 0x7FFFFFFF0000LL || v99 + 524 < v99) )
            MEMORY[0x7FFFFFFF0000] = 0;
          Pool2 = (void *)ExAllocatePool2(65LL, 524LL, 1666151248LL);
          *(_QWORD *)(a4 + 400) = Pool2;
          if ( !Pool2 )
            goto LABEL_52;
          memmove(Pool2, v99, 0x20CuLL);
          *(_DWORD *)(a4 + 408) = 524;
          if ( (**(_DWORD **)(a4 + 400) & 0x40) != 0 )
            goto LABEL_17;
          goto LABEL_262;
        }
        v70 = v69 - 1;
        if ( !v70 )
        {
          v84 = v12[1];
          if ( v84 != 40 )
            goto LABEL_17;
          v85 = (const void *)v12[2];
          v138 = v85;
          if ( v6 )
          {
            if ( ((unsigned __int8)v85 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v12 = v109;
            v84 = 40LL;
            v85 = v138;
          }
          v86 = (void *)ExAllocatePool2(65LL, v84, 1883401808LL);
          v87 = (__int64 *)(a4 + 416);
          v121 = a4 + 416;
          *(_QWORD *)(a4 + 416) = v86;
          if ( !v86 )
            goto LABEL_52;
          v115 = 0;
          memmove(v86, v85, v84);
          v88 = *v87;
          v121 = v88;
          v89 = *(char **)(v88 + 8);
          v149 = v89;
          v147 = v89;
          v90 = *(const void **)(v88 + 24);
          v148 = v90;
          *(_QWORD *)(v88 + 8) = 0LL;
          *(_QWORD *)(*v87 + 24) = 0LL;
          v91 = *(unsigned __int16 *)(v88 + 2);
          if ( (_WORD)v91 )
          {
            if ( *(_WORD *)v88 > (unsigned __int16)v91
              || (*(_WORD *)v88 & 1) != 0
              || (v91 & 1) != 0
              || (_WORD)v91 == 0xFFFF
              || !v89 )
            {
              goto LABEL_17;
            }
            v92 = a2;
            if ( a2 && ((unsigned __int64)&v89[v91] > 0x7FFFFFFF0000LL || &v89[v91] < v89) )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          else
          {
            v92 = a2;
          }
          v93 = *(unsigned int *)(*v87 + 16);
          v94 = *v87;
          if ( (_DWORD)v93 )
          {
            if ( !v90 || (unsigned int)v93 > 0xFFFF )
              goto LABEL_17;
            if ( v92 )
            {
              v95 = 8 * v93;
              if ( v95 )
              {
                if ( ((unsigned __int8)v90 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v96 = (unsigned __int64)v90 + v95;
                if ( v96 > 0x7FFFFFFF0000LL || v96 < (unsigned __int64)v90 )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                  v94 = *v87;
                }
              }
            }
          }
          v97 = 0LL;
          v119 = 0LL;
          v98 = *(unsigned __int16 *)(v88 + 2);
          if ( (_WORD)v98 || *(_DWORD *)(v94 + 16) )
          {
            v97 = (char *)ExAllocatePool2(65LL, v98 + 8LL * *(unsigned int *)(v94 + 16), 1883401808LL);
            v119 = v97;
            v89 = v149;
          }
          if ( *(_WORD *)(v88 + 2) )
          {
            *(_QWORD *)(v88 + 8) = v97;
            memmove(v97, v89, *(unsigned __int16 *)(v88 + 2));
            v97 += *(unsigned __int16 *)(v88 + 2);
            v119 = v97;
          }
          if ( *(_DWORD *)(*v87 + 16) )
          {
            *(_QWORD *)(*v87 + 24) = v97;
            memmove(*(void **)(*v87 + 24), v90, 8LL * *(unsigned int *)(*v87 + 16));
          }
          goto LABEL_261;
        }
        v71 = v70 - 1;
        if ( v71 )
        {
          v72 = v71 - 2;
          if ( !v72 )
          {
            v79 = v12[1];
            if ( v79 > 0x18 )
              goto LABEL_17;
            v159 = 0LL;
            v160 = 0LL;
            v12 = v109;
            v80 = v109[2];
            if ( v6 && v80 >= 0x7FFFFFFF0000LL )
              v80 = 0x7FFFFFFF0000LL;
            memmove(&v159, (const void *)v80, v79);
            v81 = v159;
            v155 = v159;
            v82 = v160;
            v156 = v160;
            v14 = PspValidateMitigationAuditOptions(&v155);
            if ( v14 < 0 )
              goto LABEL_298;
            *(_OWORD *)(a4 + 464) = v81;
            *(_QWORD *)(a4 + 480) = v82;
            goto LABEL_262;
          }
          v73 = v72 - 2;
          if ( v73 )
          {
            v74 = v73 - 65519;
            if ( !v74 )
            {
              if ( !v5 || v12[1] != 16LL )
                goto LABEL_17;
              v77 = (_OWORD *)v12[2];
              v136 = v77;
              if ( v6 )
              {
                if ( ((unsigned __int8)v77 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v12 = v109;
                v77 = v136;
              }
              *(_OWORD *)(a4 + 320) = *v77;
              valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_150:
              v57 = !valid;
              goto LABEL_151;
            }
            if ( v74 != 2 || !v5 || v12[1] != 4LL )
              goto LABEL_17;
            v75 = (struct _PROCESSOR_NUMBER *)v12[2];
            v135 = v75;
            if ( v6 )
            {
              if ( ((unsigned __int8)v75 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v75 = v135;
            }
            ProcNumber = *v75;
            ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
            *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
            v57 = ProcessorIndexFromNumber == -1;
LABEL_151:
            if ( v57 )
              goto LABEL_17;
LABEL_262:
            v5 = a3;
            v6 = a2;
            goto LABEL_263;
          }
          if ( v12[1] != 4LL )
            goto LABEL_17;
          v78 = v12[2];
          v145 = v78;
          if ( v6 )
          {
            if ( (v78 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v78 + 4 > 0x7FFFFFFF0000LL || v78 + 4 < v78 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( (*(_DWORD *)v78 & 0xFFFFFFFE) != 0 )
            return 3221225485LL;
          *(_QWORD *)(a4 + 456) = v78;
        }
        else
        {
          if ( v12[1] != 4LL )
            goto LABEL_17;
          v83 = (_DWORD *)v12[2];
          v137 = v83;
          if ( v6 )
          {
            if ( ((unsigned __int8)v83 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v12 = v109;
            v83 = v137;
          }
          *(_DWORD *)(a4 + 424) = *v83;
        }
      }
    }
    else
    {
      if ( v13 == 131094 )
      {
        if ( v12[1] != 8LL )
          goto LABEL_17;
        v66 = v12[2];
        v144 = v66;
        if ( v6 )
        {
          if ( (v66 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v66 + 8 > 0x7FFFFFFF0000LL || v66 + 8 < v66 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v67 = (_QWORD *)ExAllocatePool2(65LL, 8LL, 2004050768LL);
        *(_QWORD *)(a4 + 448) = v67;
        if ( !v67 )
        {
          v14 = -1073741801;
          goto LABEL_298;
        }
        *v67 = *(_QWORD *)v66;
        v68 = *(_DWORD **)(a4 + 448);
        if ( (*v68 & 3) == 0 || (unsigned int)(v68[1] - 1) > 5 )
          goto LABEL_17;
        goto LABEL_262;
      }
      if ( v13 > 0x2000A )
      {
        v39 = v13 - 131083;
        if ( !v39 )
        {
          v63 = v12[1];
          if ( !v63 || (v63 & 7) != 0 || (v63 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_17;
          v64 = (char *)v12[2];
          v134 = v64;
          if ( v6 )
          {
            if ( ((unsigned __int8)v64 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v64[v63] > 0x7FFFFFFF0000LL || &v64[v63] < v64 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v65 = (void *)ExAllocatePool2(65LL, v63, 1816687440LL);
          *(_QWORD *)(a4 + 296) = v65;
          if ( !v65 )
          {
LABEL_52:
            v14 = -1073741670;
            goto LABEL_298;
          }
          memmove(v65, v64, v63);
          *(_DWORD *)(a4 + 292) = v63 >> 3;
          goto LABEL_262;
        }
        v40 = v39 - 2;
        if ( v40 )
        {
          v41 = v40 - 3;
          if ( !v41 )
          {
            v58 = v12[1];
            if ( v58 > 0x18 )
              goto LABEL_17;
            v157 = 0LL;
            v158 = 0LL;
            v12 = v109;
            v59 = v109[2];
            if ( v6 && v59 >= 0x7FFFFFFF0000LL )
              v59 = 0x7FFFFFFF0000LL;
            memmove(&v157, (const void *)v59, v58);
            v60 = v157;
            v153 = v157;
            v61 = v158;
            v154 = v158;
            v14 = PspValidateMitigationOptions(&v153, 0);
            if ( v14 < 0 )
              goto LABEL_298;
            *(__m128i *)(a4 + 336) = v60;
            *(_QWORD *)(a4 + 352) = v61;
            goto LABEL_262;
          }
          v42 = v41 - 2;
          if ( !v42 )
          {
            v53 = v12[1];
            if ( !v53 || (v53 & 7) != 0 || v53 > 0x88 )
              goto LABEL_17;
            v54 = (char *)v12[2];
            v143 = v54;
            if ( v6 )
            {
              if ( ((unsigned __int8)v54 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v54[v53] > 0x7FFFFFFF0000LL || &v54[v53] < v54 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v55 = (void *)ExAllocatePool2(65LL, v53, 1632924496LL);
            *(_QWORD *)(a4 + 368) = v55;
            if ( !v55 )
              goto LABEL_52;
            memmove(v55, v54, v53);
            *(_DWORD *)(a4 + 384) = v53;
            valid = IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 368), v53);
            goto LABEL_150;
          }
          v43 = v42 - 1;
          if ( !v43 )
          {
            v47 = v12[1];
            if ( !v47 || (v47 & 7) != 0 || (v47 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
              goto LABEL_17;
            v48 = (char *)v12[2];
            v134 = v48;
            if ( v6 )
            {
              if ( ((unsigned __int8)v48 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v48[v47] > 0x7FFFFFFF0000LL || &v48[v47] < v48 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v49 = ExAllocatePool2(65LL, v47, 1816818512LL);
            *(_QWORD *)(a4 + 376) = v49;
            if ( !v49 )
              goto LABEL_52;
            *(_DWORD *)(a4 + 388) = v47 >> 3;
            v132 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
            while ( v50 < *(unsigned int *)(a4 + 388) )
            {
              v14 = ObpReferenceObjectByHandleWithTag(
                      *(_QWORD *)&v48[8 * v52],
                      1,
                      (__int64)PsJobType,
                      a2,
                      0x6C4A7350u,
                      &v131,
                      0LL,
                      0LL);
              if ( v14 < 0 )
                goto LABEL_298;
              *(_QWORD *)(*(_QWORD *)(a4 + 376) + 8 * v52) = v131;
              v50 = v51 + 1;
              v52 = v51 + 1;
              v132 = ++v51;
            }
LABEL_261:
            v7 = v120;
            goto LABEL_262;
          }
          v44 = v43 - 1;
          if ( v44 )
          {
            if ( v44 != 1 || v12[1] != 4LL )
              goto LABEL_17;
            v45 = (_DWORD *)v12[2];
            v129 = v45;
            if ( v6 )
            {
              if ( ((unsigned __int8)v45 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v45 = v129;
            }
            *(_DWORD *)(a4 + 396) = *v45;
          }
          else
          {
            if ( v12[1] != 4LL )
              goto LABEL_17;
            v46 = (_DWORD *)v12[2];
            v130 = v46;
            if ( v6 )
            {
              if ( ((unsigned __int8)v46 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v46 = v130;
            }
            *(_DWORD *)(a4 + 392) = *v46;
          }
        }
        else
        {
          if ( v12[1] != 2LL )
            goto LABEL_17;
          v62 = (_WORD *)v12[2];
          v133 = v62;
          if ( v6 )
          {
            if ( ((unsigned __int8)v62 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v62 = v133;
          }
          v110 = *v62;
          if ( *v62 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_17;
          _mm_lfence();
          if ( !*(_DWORD *)(KeNodeBlock[v110] + 16) )
            goto LABEL_17;
          *(_WORD *)(a4 + 250) = v110;
          v12 = v109;
        }
      }
      else if ( v13 == 131082 )
      {
        if ( v12[1] != 8LL )
          goto LABEL_17;
        v37 = (_DWORD *)v12[2];
        v128 = v37;
        if ( v6 )
        {
          if ( ((unsigned __int8)v37 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v109;
          v37 = v128;
        }
        if ( (*v37 & 0x1C) != 0 )
        {
          v14 = -1073741637;
          goto LABEL_298;
        }
        v38 = *v37 & 3;
        v117 = v38;
        if ( (unsigned __int8)v38 >= 3u )
          goto LABEL_17;
        *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v38)) & 0xC;
        if ( v38 == 1 )
          *(_DWORD *)(a4 + 288) = v37[1];
      }
      else
      {
        v16 = v13 - 6;
        if ( v16 )
        {
          v17 = v16 - 65533;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 65537;
              if ( !v19 )
              {
                v28 = v12[1];
                if ( !v28 || (v28 & 1) != 0 || v28 > 0xFFFF )
                  goto LABEL_17;
                v29 = (char *)v12[2];
                v141 = v29;
                if ( v6 && ((unsigned __int64)&v29[v28] > 0x7FFFFFFF0000LL || &v29[v28] < v29) )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v30 = (void *)ExAllocatePool2(65LL, v28, 1850110800LL);
                v142 = v30;
                if ( !v30 )
                  goto LABEL_52;
                *(_OWORD *)(a4 + 232) = 0LL;
                *(_WORD *)(a4 + 234) = v28;
                *(_QWORD *)(a4 + 240) = v30;
                memmove(v30, v29, v28);
                *(_WORD *)(a4 + 232) = v28;
                goto LABEL_262;
              }
              v20 = v19 - 2;
              if ( !v20 )
              {
                v24 = v12[1];
                if ( !v24 || (v24 & 0xF) != 0 )
                  goto LABEL_17;
                v25 = (char *)v12[2];
                v140 = v25;
                if ( v6 )
                {
                  if ( ((unsigned __int8)v25 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v25[v24] > 0x7FFFFFFF0000LL || &v25[v24] < v25 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                if ( v24 > 0x10 )
                {
                  v27 = ExAllocatePool2(65LL, v24, 1817342800LL);
                  *(_QWORD *)(v7 + 280) = v27;
                  v26 = (void *)v27;
                  if ( !v27 )
                    goto LABEL_52;
                }
                else
                {
                  v26 = (void *)(a4 + 264);
                  *(_QWORD *)(v7 + 280) = a4 + 264;
                }
                memmove(v26, v25, v24);
                *(_QWORD *)(a4 + 256) = v24 >> 4;
                goto LABEL_262;
              }
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 != 1 || v12[1] != 4LL )
                  goto LABEL_17;
                v22 = (_DWORD *)v12[2];
                v123 = v22;
                if ( v6 )
                {
                  if ( ((unsigned __int8)v22 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v12 = v109;
                  v22 = v123;
                }
                *(_DWORD *)(a4 + 316) = *v22;
              }
              else
              {
                if ( v12[1] != 1LL )
                  goto LABEL_17;
                v23 = (_BYTE *)v12[2];
                v124 = v23;
                if ( v6 )
                {
                  v12 = v109;
                  v23 = v124;
                }
                *(_BYTE *)(a4 + 248) = *v23;
              }
            }
            else
            {
              if ( v12[1] != 8LL )
                goto LABEL_17;
              v31 = v12[2];
              v125 = v31;
              if ( v6 )
              {
                if ( (v31 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v31 >= 0x7FFFFFFF0000LL )
                  v31 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v31 = *(_BYTE *)v31;
                *(_BYTE *)(v31 + 7) = *(_BYTE *)(v31 + 7);
                v12 = v109;
                v31 = v125;
              }
              *(_QWORD *)(a4 + 24) = v31;
              v32 = v12[3];
              v111 = v32;
              if ( v32 )
              {
                if ( v6 )
                {
                  if ( (v32 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v32 >= 0x7FFFFFFF0000LL )
                    v32 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v32 = *(_BYTE *)v32;
                  *(_BYTE *)(v32 + 7) = *(_BYTE *)(v32 + 7);
                  v12 = v109;
                  v32 = v111;
                }
                *(_QWORD *)v32 = 8LL;
              }
            }
          }
          else
          {
            if ( v12[1] != 16LL )
              goto LABEL_17;
            v33 = v12[2];
            v126 = v33;
            if ( v6 )
            {
              if ( (v33 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v33 >= 0x7FFFFFFF0000LL )
                v33 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v33 = *(_BYTE *)v33;
              *(_BYTE *)(v33 + 15) = *(_BYTE *)(v33 + 15);
              v33 = v126;
              v12 = v109;
            }
            *(_QWORD *)(a4 + 16) = v33;
            v34 = v12[3];
            v112 = v34;
            if ( v34 )
            {
              if ( v6 )
              {
                if ( (v34 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v34 >= 0x7FFFFFFF0000LL )
                  v34 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v34 = *(_BYTE *)v34;
                *(_BYTE *)(v34 + 7) = *(_BYTE *)(v34 + 7);
                v12 = v109;
                v34 = v112;
              }
              *(_QWORD *)v34 = 16LL;
            }
          }
        }
        else
        {
          if ( v12[1] != 64LL )
            goto LABEL_17;
          v35 = v12[2];
          v127 = v35;
          if ( v6 )
          {
            if ( (v35 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v35 >= 0x7FFFFFFF0000LL )
              v35 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v35 = *(_BYTE *)v35;
            *(_BYTE *)(v35 + 63) = *(_BYTE *)(v35 + 63);
            v12 = v109;
            v35 = v127;
          }
          *(_QWORD *)(a4 + 32) = v35;
          v36 = v12[3];
          v113 = v36;
          if ( v36 )
          {
            if ( v6 )
            {
              if ( (v36 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v36 >= 0x7FFFFFFF0000LL )
                v36 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v36 = *(_BYTE *)v36;
              *(_BYTE *)(v36 + 7) = *(_BYTE *)(v36 + 7);
              v12 = v109;
              v36 = v113;
            }
            *(_QWORD *)v36 = 64LL;
          }
        }
      }
    }
LABEL_263:
    v12 += 4;
    v109 = v12;
    v11 = --v116;
  }
  v14 = 0;
LABEL_298:
  if ( v14 < 0 )
    goto LABEL_304;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v14 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v118 != 0);
  }
  if ( v14 < 0 )
LABEL_304:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v14;
}
