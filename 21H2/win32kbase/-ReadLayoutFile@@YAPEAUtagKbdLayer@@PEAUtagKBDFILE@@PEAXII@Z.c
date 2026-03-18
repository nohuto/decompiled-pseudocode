/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0050A58
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0050970 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C0051110 (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     strcmp_0 @ 0x1C00DD7D1 (strcmp_0.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ValidateKbdNLSTable @ 0x1C01EB990 (ValidateKbdNLSTable.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  int v6; // esi
  struct tagKBDFILE *v8; // rbp
  bool v9; // zf
  BOOL v10; // r14d
  unsigned int v11; // edx
  unsigned int v12; // r8d
  void *v13; // rdx
  char *v14; // rcx
  char *v15; // rbp
  __int16 v16; // ax
  __int64 v17; // r13
  int v18; // esi
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // r12d
  char *v24; // rax
  PVOID v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 Pool2; // rbx
  __int64 v28; // rsi
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rax
  BOOL v31; // r11d
  __int64 v32; // r10
  unsigned __int64 *v33; // rcx
  unsigned __int64 v34; // rax
  _BYTE *v35; // rax
  _BYTE *v36; // rcx
  __int64 v37; // rax
  unsigned __int64 *v38; // rax
  _QWORD *v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  _QWORD *v45; // rcx
  _WORD *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  _QWORD *v49; // rcx
  _WORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  _WORD *i; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rbp
  __int64 v64; // rax
  char v65; // bp
  _DWORD *v66; // rax
  _DWORD *v67; // rcx
  unsigned __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  _WORD *v71; // rcx
  unsigned int v72; // eax
  unsigned __int64 v73; // r9
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // r8
  bool v77; // cc
  unsigned __int64 v78; // rcx
  __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rsi
  unsigned __int64 *v85; // r8
  unsigned __int64 v86; // r10
  unsigned __int64 v87; // r11
  _BYTE *j; // rdx
  __int64 v89; // rax
  _BYTE *v90; // r9
  _BYTE *v91; // rax
  _BYTE *v92; // rdx
  __int64 v93; // rax
  unsigned __int64 v94; // r9
  _QWORD *v95; // r8
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // r9
  _DWORD *v99; // rax
  unsigned __int64 v100; // rcx
  _DWORD *v101; // rdx
  __int64 v102; // rax
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // rsi
  _BYTE *v105; // rdx
  unsigned __int64 v106; // r9
  unsigned __int64 v107; // r11
  _WORD *k; // rax
  _WORD *v109; // r8
  __int64 v110; // rax
  unsigned __int64 v111; // r10
  _BYTE *v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // r8
  unsigned __int64 v115; // rsi
  _BYTE *v116; // rdx
  unsigned __int64 v117; // r9
  unsigned __int64 v118; // r11
  _WORD *m; // rax
  _WORD *v120; // r8
  __int64 v121; // rax
  unsigned __int64 v122; // r10
  _BYTE *v123; // rdx
  __int64 v124; // rax
  unsigned __int64 v125; // r8
  unsigned __int64 v126; // rsi
  unsigned __int64 *v127; // rdx
  unsigned __int64 v128; // r11
  unsigned __int64 v129; // r9
  _WORD *n; // rax
  _WORD *v131; // r8
  __int64 v132; // rax
  unsigned __int64 v133; // r10
  _QWORD *v134; // rdx
  __int64 v135; // rax
  unsigned __int64 v136; // r8
  __int64 v137; // rax
  __int64 v138; // rdx
  unsigned __int64 v139; // r8
  unsigned __int64 v140; // r9
  unsigned __int64 v141; // r8
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // rdx
  __int64 v144; // rax
  unsigned __int64 v145; // r9
  unsigned __int64 v146; // r8
  unsigned __int64 v147; // rax
  unsigned __int64 v148; // rdx
  __int64 v149; // rax
  unsigned __int64 v150; // r9
  _BYTE *v151; // rdx
  int v152; // r8d
  __int16 *v153; // rcx
  unsigned __int64 v154; // r9
  __int16 v155; // ax
  __int64 v156; // r9
  unsigned __int64 v157; // r10
  unsigned __int64 v158; // r8
  _BYTE *v159; // rdx
  __int64 v160; // rax
  unsigned __int64 v161; // r9
  __int64 v162; // rcx
  __int64 v163; // rdx
  void *v164; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v165[2]; // [rsp+40h] [rbp-F8h] BYREF
  BOOL v166; // [rsp+48h] [rbp-F0h]
  PVOID BackTrace[27]; // [rsp+60h] [rbp-D8h] BYREF

  v165[0] = 0;
  v5 = 0LL;
  v164 = 0LL;
  v6 = 0;
  v8 = a1;
  v9 = PsGetCurrentProcessId() == (HANDLE)gpidLogon;
  *((_QWORD *)v8 + 6) = 0LL;
  v10 = v9;
  v166 = v9;
  if ( (int)LoadFileContent(a2, v11, v12, &v164, v165) >= 0 )
  {
    v13 = v164;
    v14 = (char *)v164 + *((unsigned int *)v164 + 15);
    if ( v14 >= v164 && (v10 || v14 + 263 >= v14) )
    {
      v15 = (char *)v164 + v165[0];
      if ( v14 + 264 >= v15 )
      {
LABEL_132:
        v8 = a1;
        goto LABEL_133;
      }
      v16 = *((_WORD *)v14 + 2);
      if ( v16 == 512 || v16 == -31132 || v16 == -21916 )
        v17 = *((_QWORD *)v14 + 6);
      else
        v17 = *((unsigned int *)v14 + 13);
      v18 = *((unsigned __int16 *)v14 + 3);
      v19 = (unsigned __int64)&v14[*((unsigned __int16 *)v14 + 10) + 24];
      *(_QWORD *)v165 = v19;
      if ( !v18 )
        goto LABEL_144;
      v20 = v19 + 40;
      while ( 1 )
      {
        if ( v19 < (unsigned __int64)v13 || !v10 && v20 - 1 < v19 || v20 >= (unsigned __int64)v15 )
          goto LABEL_144;
        if ( !strcmp_0((const char *)v19, ".data") )
          break;
        v13 = v164;
        v19 += 40LL;
        v20 += 40LL;
        *(_QWORD *)v165 = v19;
        if ( !--v18 )
          goto LABEL_144;
      }
      v21 = *(_DWORD *)(v19 + 12);
      if ( a3 < v21
        || (v22 = *(unsigned int *)(v19 + 8), v23 = a3 - v21, v23 >= (unsigned int)v22)
        || (unsigned int)v22 >= 0x40000
        || (v24 = (char *)v164 + *(unsigned int *)(v19 + 20), v24 < v164)
        || &v24[v22] < v24
        || &v24[v22] >= v15 )
      {
LABEL_144:
        v6 = 0;
        goto LABEL_132;
      }
      v25 = gpLeakTrackingAllocator;
      v26 = (unsigned int)v22;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x746B7355) == 0x746B7355 )
      {
        v64 = 0LL;
        if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v64) != 1953198933 )
          {
            if ( ++v64 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_23;
          }
          v65 = 0;
          if ( (unsigned int)v22 < 0x1000uLL || (v22 & 0xFFF) != 0 )
          {
            v65 = 1;
            v26 = (unsigned int)v22 + 16LL;
          }
          Pool2 = ExAllocatePool2(260LL, v26);
          if ( !Pool2 )
            goto LABEL_131;
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v65 && (Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v25,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
LABEL_24:
              if ( Pool2 )
              {
LABEL_25:
                v8 = a1;
                v28 = *(_QWORD *)v165;
                *((_QWORD *)a1 + 3) = Pool2;
                memmove((void *)Pool2, (char *)v164 + *(unsigned int *)(v28 + 20), (unsigned int)v22);
                v29 = Pool2 + (unsigned int)v22;
                *((_DWORD *)a1 + 10) = v22;
                v5 = Pool2 + v23;
                v30 = *(unsigned int *)(v28 + 12);
                if ( Pool2 < v30 )
                  goto LABEL_438;
                v31 = v166;
                v32 = Pool2 - v30 - v17;
                if ( !v166 && (v5 < Pool2 || v5 > v29 - 104) )
                  goto LABEL_438;
                v33 = *(unsigned __int64 **)v5;
                if ( *(_QWORD *)v5 )
                {
                  v33 = (unsigned __int64 *)((char *)v33 + v32);
                  *(_QWORD *)v5 = v33;
                  if ( (unsigned __int64)v33 < Pool2 || v33 + 2 < v33 || (unsigned __int64)(v33 + 2) > v29 )
                    goto LABEL_438;
                }
                if ( !v31 && !v33 )
                  goto LABEL_438;
                if ( *v33 )
                {
                  *v33 += v32;
                  v33 = *(unsigned __int64 **)v5;
                  v34 = **(_QWORD **)v5;
                  if ( v34 < Pool2 || v34 + 2 < v34 || v34 + 2 > v29 )
                    goto LABEL_438;
                }
                if ( !v31 && ((unsigned __int64)v33 < Pool2 || (unsigned __int64)v33 > v29 - 16) )
                  goto LABEL_438;
                v35 = (_BYTE *)*v33;
                if ( *v33 < Pool2 )
                  goto LABEL_438;
                v36 = v35 + 2;
                while ( 1 )
                {
                  if ( v36 < v35 || (unsigned __int64)v36 > v29 )
                    goto LABEL_438;
                  if ( !*v35 )
                    break;
                  v35 += 2;
                  v36 += 2;
                  if ( (unsigned __int64)v35 < Pool2 )
                    goto LABEL_438;
                }
                v37 = *(_QWORD *)(v5 + 8);
                if ( v37 )
                {
                  v38 = (unsigned __int64 *)(v32 + v37);
                  *(_QWORD *)(v5 + 8) = v38;
                  if ( (unsigned __int64)v38 < Pool2 || v38 + 2 < v38 || (unsigned __int64)(v38 + 2) > v29 )
                    goto LABEL_438;
                  if ( v38 )
                  {
                    if ( (unsigned __int64)v38 >= Pool2 )
                    {
                      do
                      {
                        v39 = v38 + 2;
                        if ( v38 + 2 < v38 || (unsigned __int64)v39 > v29 )
                          break;
                        if ( !*v38 )
                          goto LABEL_58;
                        v40 = v32 + *v38;
                        *v38 = v40;
                        if ( v40 < Pool2 )
                          break;
                        if ( v40 + 4 < v40 )
                          break;
                        if ( v40 + 4 > v29 )
                          break;
                        v38 += 2;
                      }
                      while ( (unsigned __int64)v39 >= Pool2 );
                    }
                    goto LABEL_438;
                  }
                }
LABEL_58:
                v41 = *(_QWORD *)(v5 + 16);
                if ( v41 )
                {
                  v66 = (_DWORD *)(v32 + v41);
                  *(_QWORD *)(v5 + 16) = v66;
                  if ( (unsigned __int64)v66 < Pool2 || v66 + 2 < v66 || (unsigned __int64)(v66 + 2) > v29 )
                    goto LABEL_438;
                  if ( v66 )
                  {
                    while ( (unsigned __int64)v66 >= Pool2 )
                    {
                      v67 = v66 + 2;
                      if ( v66 + 2 < v66 || (unsigned __int64)v67 > v29 )
                        break;
                      if ( *v66 )
                      {
                        v66 += 2;
                        if ( v67 )
                          continue;
                      }
                      goto LABEL_59;
                    }
                    goto LABEL_438;
                  }
                }
LABEL_59:
                if ( !*(_WORD *)(v5 + 82)
                  || (v42 = *(_QWORD *)(v5 + 88)) == 0
                  || (v68 = v32 + v42, *(_QWORD *)(v5 + 88) = v68, v68 >= Pool2) && v68 + 6 >= v68 && v68 + 6 <= v29 )
                {
                  v43 = *(_QWORD *)(v5 + 24);
                  if ( v43 )
                  {
                    v44 = v32 + v43;
                    *(_QWORD *)(v5 + 24) = v44;
                    if ( v44 < Pool2 || v44 + 16 < v44 || v44 + 16 > v29 )
                      goto LABEL_438;
                    if ( v44 )
                    {
                      if ( v44 >= Pool2 )
                      {
                        v45 = (_QWORD *)(v44 + 8);
                        do
                        {
                          if ( v45 + 1 < v45 - 1 || (unsigned __int64)(v45 + 1) > v29 )
                            break;
                          if ( !*((_BYTE *)v45 - 8) )
                            goto LABEL_78;
                          if ( *v45 )
                          {
                            v46 = (_WORD *)(v32 + *v45);
                            *v45 = v46;
                            if ( (unsigned __int64)v46 < Pool2 || v46 + 1 < v46 || (unsigned __int64)(v46 + 1) > v29 )
                              goto LABEL_438;
                          }
                          else
                          {
                            v46 = 0LL;
                          }
                          if ( !v31 && v46 )
                          {
                            for ( ; (unsigned __int64)v46 >= Pool2; ++v46 )
                            {
                              if ( (unsigned __int64)v46 > v29 - 2 )
                                break;
                              if ( !*v46 )
                                goto LABEL_76;
                            }
                            *v45 = 0LL;
                          }
LABEL_76:
                          v45 += 2;
                        }
                        while ( (unsigned __int64)(v45 - 1) >= Pool2 );
                      }
                      goto LABEL_438;
                    }
                  }
LABEL_78:
                  v47 = *(_QWORD *)(v5 + 32);
                  if ( v47 )
                  {
                    v48 = v32 + v47;
                    *(_QWORD *)(v5 + 32) = v48;
                    if ( v48 < Pool2 || v48 + 16 < v48 || v48 + 16 > v29 )
                      goto LABEL_438;
                    if ( v48 )
                    {
                      if ( v48 >= Pool2 )
                      {
                        v49 = (_QWORD *)(v48 + 8);
                        do
                        {
                          if ( v49 + 1 < v49 - 1 || (unsigned __int64)(v49 + 1) > v29 )
                            break;
                          if ( !*((_BYTE *)v49 - 8) )
                            goto LABEL_95;
                          if ( *v49 )
                          {
                            v50 = (_WORD *)(v32 + *v49);
                            *v49 = v50;
                            if ( (unsigned __int64)v50 < Pool2 || v50 + 1 < v50 || (unsigned __int64)(v50 + 1) > v29 )
                              goto LABEL_438;
                          }
                          else
                          {
                            v50 = 0LL;
                          }
                          if ( !v31 && v50 )
                          {
                            for ( ; (unsigned __int64)v50 >= Pool2; ++v50 )
                            {
                              if ( (unsigned __int64)v50 > v29 - 2 )
                                break;
                              if ( !*v50 )
                                goto LABEL_93;
                            }
                            *v49 = 0LL;
                          }
LABEL_93:
                          v49 += 2;
                        }
                        while ( (unsigned __int64)(v49 - 1) >= Pool2 );
                      }
                      goto LABEL_438;
                    }
                  }
LABEL_95:
                  v51 = *(_QWORD *)(v5 + 40);
                  if ( v51 )
                  {
                    v69 = (_QWORD *)(v32 + v51);
                    *(_QWORD *)(v5 + 40) = v69;
                    if ( (unsigned __int64)v69 < Pool2 || v69 + 1 < v69 || (unsigned __int64)(v69 + 1) > v29 )
                      goto LABEL_438;
                    if ( v69 )
                    {
                      if ( (unsigned __int64)v69 < Pool2 )
                        goto LABEL_438;
LABEL_200:
                      v70 = v69 + 1;
                      if ( v69 + 1 < v69 || (unsigned __int64)v70 > v29 )
                        goto LABEL_438;
                      if ( *v69 )
                      {
                        v71 = (_WORD *)(v32 + *v69);
                        *v69 = v71;
                        if ( (unsigned __int64)v71 >= Pool2 && v71 + 1 >= v71 && (unsigned __int64)(v71 + 1) <= v29 )
                        {
                          while ( (unsigned __int64)v71 >= Pool2 && v71 + 1 >= v71 && (unsigned __int64)(v71 + 1) <= v29 )
                          {
                            if ( !*v71 )
                            {
                              ++v69;
                              if ( (unsigned __int64)v70 >= Pool2 )
                                goto LABEL_200;
                              goto LABEL_438;
                            }
                            ++v71;
                          }
                        }
                        goto LABEL_438;
                      }
                    }
                  }
                  v52 = *(_QWORD *)(v5 + 48);
                  if ( v52 )
                  {
                    v53 = v52 + v32;
                    *(_QWORD *)(v5 + 48) = v52 + v32;
                    if ( v52 + v32 >= Pool2 && v53 + 2 >= v53 && v53 + 2 <= v29 )
                    {
                      v54 = v53 + 2LL * *(unsigned __int8 *)(v5 + 56);
                      if ( v54 >= Pool2 && v54 + 2 >= v54 && v54 + 2 <= v29 )
                      {
                        v55 = *(_QWORD *)(v5 + 64);
                        if ( v55 )
                        {
                          v56 = v32 + v55;
                          *(_QWORD *)(v5 + 64) = v56;
                          if ( v56 < Pool2 || v56 + 4 < v56 || v56 + 4 > v29 )
                            goto LABEL_438;
                          if ( v56 )
                          {
                            for ( i = (_WORD *)(v56 + 2); !v31 || *i; i += 2 )
                            {
                              if ( (unsigned __int64)(i - 1) < Pool2 || i + 1 < i - 1 || (unsigned __int64)(i + 1) > v29 )
                                goto LABEL_438;
                              if ( !v31 && !*i )
                                break;
                            }
                          }
                        }
                        v58 = *(_QWORD *)(v5 + 72);
                        if ( !v58 )
                        {
LABEL_128:
                          if ( a4 )
                          {
                            v72 = *(_DWORD *)(v28 + 12);
                            if ( a4 < v72 )
                              goto LABEL_438;
                            v62 = Pool2 + a4 - v72;
                            if ( v62 < Pool2 )
                              goto LABEL_269;
                            v73 = v62 + 32;
                            if ( v62 + 32 < v62 || v73 > v29 )
                              goto LABEL_269;
                            v74 = *(_QWORD *)(v62 + 8);
                            if ( v74 )
                            {
                              v75 = v32 + v74;
                              *(_QWORD *)(v62 + 8) = v75;
                              if ( v75 < Pool2 || v75 + 132 < v75 || v75 + 132 > v29 )
                                goto LABEL_269;
                              if ( v75 )
                              {
                                v76 = *(unsigned int *)(v62 + 4);
                                if ( v31 )
                                {
                                  v78 = v75 + 132LL * (unsigned int)(v76 - 1);
                                  if ( v78 < Pool2 || v78 + 132 < v78 )
                                    goto LABEL_269;
                                  v77 = v78 + 132 <= v29;
                                }
                                else
                                {
                                  v77 = v76 <= (v29 - v75) / 0x84;
                                }
                                if ( !v77 )
                                {
LABEL_269:
                                  v8 = a1;
                                  goto LABEL_438;
                                }
                              }
                            }
                            v79 = *(_QWORD *)(v62 + 24);
                            if ( v79 )
                            {
                              v80 = v32 + v79;
                              *(_QWORD *)(v62 + 24) = v80;
                              if ( v80 < Pool2 )
                                goto LABEL_269;
                              if ( v80 + 2 < v80 )
                                goto LABEL_269;
                              if ( v80 + 2 > v29 )
                                goto LABEL_269;
                              if ( v80 )
                              {
                                v81 = v80 + 2LL * (*(_DWORD *)(v62 + 16) - 1);
                                if ( v81 < Pool2 || v81 + 2 < v81 || v81 + 2 > v29 )
                                  goto LABEL_269;
                              }
                            }
                            if ( !v31 )
                            {
                              v82 = *(unsigned int *)(v62 + 4);
                              if ( (_DWORD)v82 )
                              {
                                v83 = *(_QWORD *)(v62 + 8);
                                if ( v83 < v73 && v83 + 132 * v82 > v62 )
                                  goto LABEL_269;
                              }
                              if ( v62 - 104 < v5 && v73 > v5 )
                                goto LABEL_269;
                            }
                            if ( !(unsigned int)ValidateKbdNLSTable(v62) )
                              goto LABEL_269;
                            *((_QWORD *)a1 + 6) = v62;
                          }
                          else
                          {
                            v62 = 0LL;
                          }
                          if ( v31 )
                            goto LABEL_131;
                          v84 = *(_QWORD *)(v5 + 8);
                          if ( v84 )
                          {
                            v85 = *(unsigned __int64 **)(v5 + 8);
                            if ( v84 < Pool2 )
                              goto LABEL_269;
                            v86 = v84 + 16;
LABEL_249:
                            if ( v86 < (unsigned __int64)v85 || v86 > v29 )
                              goto LABEL_269;
                            v87 = *v85;
                            if ( *v85 )
                            {
                              for ( j = (_BYTE *)*v85;
                                    (unsigned __int64)j >= Pool2 && j + 4 >= j && (unsigned __int64)(j + 4) <= v29;
                                    j += *(unsigned __int8 *)(v86 - 7) )
                              {
                                if ( !*j )
                                {
                                  v92 = j + 4;
                                  if ( !v62
                                    || (v93 = *(unsigned int *)(v62 + 4), !(_DWORD)v93)
                                    || (v94 = *(_QWORD *)(v62 + 8), v94 >= (unsigned __int64)v92)
                                    || v94 + 132 * v93 <= v87 )
                                  {
                                    if ( v87 - 104 >= v5 || (unsigned __int64)v92 <= v5 )
                                    {
                                      v85 += 2;
                                      v86 += 16LL;
                                      if ( (unsigned __int64)v85 >= Pool2 )
                                        goto LABEL_249;
                                    }
                                  }
                                  goto LABEL_269;
                                }
                                v89 = *(unsigned __int8 *)(v86 - 8);
                                if ( (unsigned __int8)v89 > 1u )
                                {
                                  v90 = &j[2 * v89];
                                  if ( (unsigned __int64)v90 < Pool2 )
                                    goto LABEL_269;
                                  v91 = &j[2 * v89 + 2];
                                  if ( v91 < v90 || (unsigned __int64)v91 > v29 )
                                    goto LABEL_269;
                                }
                              }
                              goto LABEL_269;
                            }
                            v95 = v85 + 2;
                            if ( v62 )
                            {
                              v96 = *(unsigned int *)(v62 + 4);
                              if ( (_DWORD)v96 )
                              {
                                v97 = *(_QWORD *)(v62 + 8);
                                if ( v97 < (unsigned __int64)v95 && v97 + 132 * v96 > v84 )
                                  goto LABEL_269;
                              }
                            }
                            if ( v84 - 104 < v5 && (unsigned __int64)v95 > v5 )
                              goto LABEL_269;
                          }
                          v98 = *(_QWORD *)(v5 + 16);
                          v99 = (_DWORD *)v98;
                          if ( v98 )
                          {
                            v100 = v98 + 8;
                            while ( (unsigned __int64)v99 >= Pool2 && v100 >= (unsigned __int64)v99 && v100 <= v29 )
                            {
                              v101 = v99 + 2;
                              if ( !*v99 )
                              {
                                if ( v62 )
                                {
                                  v102 = *(unsigned int *)(v62 + 4);
                                  if ( (_DWORD)v102 )
                                  {
                                    v103 = *(_QWORD *)(v62 + 8);
                                    if ( v103 < (unsigned __int64)v101 && v103 + 132 * v102 > v98 )
                                      goto LABEL_269;
                                  }
                                }
                                if ( v98 - 104 < v5 && (unsigned __int64)v101 > v5 )
                                  goto LABEL_269;
                                goto LABEL_290;
                              }
                              v100 += 8LL;
                              v99 += 2;
                              if ( !v101 )
                                goto LABEL_290;
                            }
                            goto LABEL_269;
                          }
LABEL_290:
                          v104 = *(_QWORD *)(v5 + 24);
                          if ( v104 )
                          {
                            v105 = *(_BYTE **)(v5 + 24);
                            if ( v104 >= Pool2 )
                            {
                              v106 = v104 + 16;
                              while ( v106 >= (unsigned __int64)v105 && v106 <= v29 )
                              {
                                if ( !*v105 )
                                {
                                  v112 = v105 + 16;
                                  if ( v62 )
                                  {
                                    v113 = *(unsigned int *)(v62 + 4);
                                    if ( (_DWORD)v113 )
                                    {
                                      v114 = *(_QWORD *)(v62 + 8);
                                      if ( v114 < (unsigned __int64)v112 && v114 + 132 * v113 > v104 )
                                        goto LABEL_269;
                                    }
                                  }
                                  if ( v104 - 104 < v5 && (unsigned __int64)v112 > v5 )
                                    goto LABEL_269;
                                  goto LABEL_317;
                                }
                                v107 = *(_QWORD *)(v106 - 8);
                                if ( v107 )
                                {
                                  for ( k = *(_WORD **)(v106 - 8); (unsigned __int64)k >= Pool2; ++k )
                                  {
                                    v109 = k + 1;
                                    if ( k + 1 < k || (unsigned __int64)v109 > v29 )
                                      break;
                                    if ( !*k )
                                    {
                                      if ( v62 )
                                      {
                                        v110 = *(unsigned int *)(v62 + 4);
                                        if ( (_DWORD)v110 )
                                        {
                                          v111 = *(_QWORD *)(v62 + 8);
                                          if ( v111 < (unsigned __int64)v109 && v111 + 132 * v110 > v107 )
                                            goto LABEL_269;
                                        }
                                      }
                                      if ( v107 - 104 < v5 && (unsigned __int64)v109 > v5 )
                                        goto LABEL_269;
                                      goto LABEL_309;
                                    }
                                  }
                                  goto LABEL_269;
                                }
LABEL_309:
                                v105 += 16;
                                v106 += 16LL;
                                if ( (unsigned __int64)v105 < Pool2 )
                                  goto LABEL_269;
                              }
                            }
                            goto LABEL_269;
                          }
LABEL_317:
                          v115 = *(_QWORD *)(v5 + 32);
                          if ( v115 )
                          {
                            v116 = *(_BYTE **)(v5 + 32);
                            if ( v115 >= Pool2 )
                            {
                              v117 = v115 + 16;
                              while ( v117 >= (unsigned __int64)v116 && v117 <= v29 )
                              {
                                if ( !*v116 )
                                {
                                  v123 = v116 + 16;
                                  if ( v62 )
                                  {
                                    v124 = *(unsigned int *)(v62 + 4);
                                    if ( (_DWORD)v124 )
                                    {
                                      v125 = *(_QWORD *)(v62 + 8);
                                      if ( v125 < (unsigned __int64)v123 && v125 + 132 * v124 > v115 )
                                        goto LABEL_269;
                                    }
                                  }
                                  if ( v115 - 104 < v5 && (unsigned __int64)v123 > v5 )
                                    goto LABEL_269;
                                  goto LABEL_344;
                                }
                                v118 = *(_QWORD *)(v117 - 8);
                                if ( v118 )
                                {
                                  for ( m = *(_WORD **)(v117 - 8); (unsigned __int64)m >= Pool2; ++m )
                                  {
                                    v120 = m + 1;
                                    if ( m + 1 < m || (unsigned __int64)v120 > v29 )
                                      break;
                                    if ( !*m )
                                    {
                                      if ( v62 )
                                      {
                                        v121 = *(unsigned int *)(v62 + 4);
                                        if ( (_DWORD)v121 )
                                        {
                                          v122 = *(_QWORD *)(v62 + 8);
                                          if ( v122 < (unsigned __int64)v120 && v122 + 132 * v121 > v118 )
                                            goto LABEL_269;
                                        }
                                      }
                                      if ( v118 - 104 < v5 && (unsigned __int64)v120 > v5 )
                                        goto LABEL_269;
                                      goto LABEL_336;
                                    }
                                  }
                                  goto LABEL_269;
                                }
LABEL_336:
                                v116 += 16;
                                v117 += 16LL;
                                if ( (unsigned __int64)v116 < Pool2 )
                                  goto LABEL_269;
                              }
                            }
                            goto LABEL_269;
                          }
LABEL_344:
                          v126 = *(_QWORD *)(v5 + 40);
                          if ( v126 )
                          {
                            v127 = *(unsigned __int64 **)(v5 + 40);
                            if ( v126 < Pool2 )
                              goto LABEL_269;
                            v128 = v126 + 8;
LABEL_347:
                            if ( v128 < (unsigned __int64)v127 || v128 > v29 )
                              goto LABEL_269;
                            v129 = *v127;
                            if ( *v127 )
                            {
                              for ( n = (_WORD *)*v127; (unsigned __int64)n >= Pool2; ++n )
                              {
                                v131 = n + 1;
                                if ( n + 1 < n || (unsigned __int64)v131 > v29 )
                                  break;
                                if ( !*n )
                                {
                                  if ( !v62
                                    || (v132 = *(unsigned int *)(v62 + 4), !(_DWORD)v132)
                                    || (v133 = *(_QWORD *)(v62 + 8), v133 >= (unsigned __int64)v131)
                                    || v133 + 132 * v132 <= v129 )
                                  {
                                    if ( v129 - 104 >= v5 || (unsigned __int64)v131 <= v5 )
                                    {
                                      ++v127;
                                      v128 += 8LL;
                                      if ( (unsigned __int64)v127 >= Pool2 )
                                        goto LABEL_347;
                                    }
                                  }
                                  goto LABEL_269;
                                }
                              }
                              goto LABEL_269;
                            }
                            v134 = v127 + 1;
                            if ( v62 )
                            {
                              v135 = *(unsigned int *)(v62 + 4);
                              if ( (_DWORD)v135 )
                              {
                                v136 = *(_QWORD *)(v62 + 8);
                                if ( v136 < (unsigned __int64)v134 && v136 + 132 * v135 > v126 )
                                  goto LABEL_269;
                              }
                            }
                            if ( v126 - 104 < v5 && (unsigned __int64)v134 > v5 )
                              goto LABEL_269;
                          }
                          v137 = *(unsigned __int8 *)(v5 + 56);
                          if ( (_BYTE)v137 )
                          {
                            if ( v62 )
                            {
                              v138 = *(unsigned int *)(v62 + 4);
                              if ( (_DWORD)v138 )
                              {
                                v139 = *(_QWORD *)(v5 + 48);
                                v140 = *(_QWORD *)(v62 + 8);
                                if ( v140 < v139 + 2 * v137 && v140 + 132 * v138 > v139 )
                                  goto LABEL_269;
                              }
                            }
                          }
                          v141 = *(_QWORD *)(v5 + 64);
                          if ( v141 )
                          {
                            v142 = *(_QWORD *)(v5 + 64);
                            if ( v141 >= Pool2 )
                            {
                              while ( 1 )
                              {
                                v143 = v142 + 4;
                                if ( v142 + 4 < v142 || v143 > v29 )
                                  break;
                                if ( !*(_WORD *)(v142 + 2) )
                                {
                                  if ( v62 )
                                  {
                                    v144 = *(unsigned int *)(v62 + 4);
                                    if ( (_DWORD)v144 )
                                    {
                                      v145 = *(_QWORD *)(v62 + 8);
                                      if ( v145 < v143 && v145 + 132 * v144 > v141 )
                                        goto LABEL_269;
                                    }
                                  }
                                  if ( v141 - 104 < v5 && v143 > v5 )
                                    goto LABEL_269;
                                  goto LABEL_388;
                                }
                                v142 += 4LL;
                                if ( v143 < Pool2 )
                                  goto LABEL_269;
                              }
                            }
                            goto LABEL_269;
                          }
LABEL_388:
                          v146 = *(_QWORD *)(v5 + 72);
                          if ( v146 )
                          {
                            v147 = *(_QWORD *)(v5 + 72);
                            if ( v146 >= Pool2 )
                            {
                              while ( 1 )
                              {
                                v148 = v147 + 4;
                                if ( v147 + 4 < v147 || v148 > v29 )
                                  break;
                                if ( !*(_WORD *)(v147 + 2) )
                                {
                                  if ( v62 )
                                  {
                                    v149 = *(unsigned int *)(v62 + 4);
                                    if ( (_DWORD)v149 )
                                    {
                                      v150 = *(_QWORD *)(v62 + 8);
                                      if ( v150 < v148 && v150 + 132 * v149 > v146 )
                                        goto LABEL_269;
                                    }
                                  }
                                  if ( v146 - 104 < v5 && v148 > v5 )
                                    goto LABEL_269;
                                  goto LABEL_401;
                                }
                                v147 += 4LL;
                                if ( v148 < Pool2 )
                                  goto LABEL_269;
                              }
                            }
                            goto LABEL_269;
                          }
LABEL_401:
                          if ( *(_WORD *)(v5 + 82) )
                          {
                            v151 = *(_BYTE **)(v5 + 88);
                            if ( v151 )
                            {
                              if ( (unsigned __int64)v151 >= Pool2 )
                              {
                                while ( (unsigned __int64)v151 <= v29 - 6 )
                                {
                                  if ( !*v151 )
                                  {
                                    v158 = *(_QWORD *)(v5 + 88);
                                    if ( !v158 )
                                      goto LABEL_433;
                                    v159 = v151 + 6;
                                    if ( !v62
                                      || (v160 = *(unsigned int *)(v62 + 4), !(_DWORD)v160)
                                      || (v161 = *(_QWORD *)(v62 + 8), v161 >= (unsigned __int64)v159)
                                      || v161 + 132 * v160 <= v158 )
                                    {
                                      if ( v158 - 104 >= v5 || (unsigned __int64)v159 <= v5 )
                                        goto LABEL_433;
                                    }
                                    break;
                                  }
                                  v152 = 0;
                                  if ( *(_BYTE *)(v5 + 84) )
                                  {
                                    v153 = (__int16 *)(v151 + 4);
                                    while ( 1 )
                                    {
                                      if ( v152 )
                                      {
                                        v154 = (unsigned __int64)&v151[2 * v152 + 4];
                                        if ( v154 < Pool2 || v154 > v29 - 2 )
                                          break;
                                      }
                                      v155 = *v153++;
                                      ++v152;
                                      if ( v155 == -4096 || v152 >= *(unsigned __int8 *)(v5 + 84) )
                                        goto LABEL_415;
                                    }
                                    *(_QWORD *)(v5 + 88) = 0LL;
                                  }
LABEL_415:
                                  if ( !*(_QWORD *)(v5 + 88) )
                                    goto LABEL_433;
                                  if ( v152 <= 0
                                    || (!v62
                                     || (v156 = *(unsigned int *)(v62 + 4), !(_DWORD)v156)
                                     || (v157 = *(_QWORD *)(v62 + 8), v157 >= (unsigned __int64)&v151[2 * v152 + 4])
                                     || v157 + 132 * v156 <= (unsigned __int64)(v151 + 4))
                                    && ((unsigned __int64)(v151 - 100) >= v5
                                     || (unsigned __int64)&v151[2 * v152 + 4] <= v5) )
                                  {
                                    v151 += *(unsigned __int8 *)(v5 + 85);
                                    if ( (unsigned __int64)v151 >= Pool2 )
                                      continue;
                                  }
                                  break;
                                }
                              }
                              *(_QWORD *)(v5 + 88) = 0LL;
                            }
                          }
LABEL_433:
                          if ( v62 )
                          {
                            v162 = *(unsigned int *)(v62 + 4);
                            if ( (_DWORD)v162 )
                            {
                              v163 = *(_QWORD *)(v62 + 8);
                              if ( v163 - 104 < v5 && v163 + 132 * v162 > v5 )
                                goto LABEL_269;
                            }
                          }
                          goto LABEL_131;
                        }
                        v59 = v32 + v58;
                        *(_QWORD *)(v5 + 72) = v59;
                        if ( v59 >= Pool2 && v59 + 4 >= v59 && v59 + 4 <= v29 )
                        {
                          if ( v59 )
                          {
                            if ( v59 >= Pool2 )
                            {
                              v60 = v59 + 4;
                              do
                              {
                                v61 = v60;
                                if ( v60 < 4 || v60 > v29 )
                                  break;
                                if ( !*(_WORD *)(v60 - 2) )
                                  goto LABEL_128;
                                v60 += 4LL;
                              }
                              while ( v61 >= Pool2 );
                            }
                            goto LABEL_438;
                          }
                          goto LABEL_128;
                        }
                      }
                    }
                  }
                }
LABEL_438:
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  (void *)Pool2);
                v6 = 0;
                goto LABEL_133;
              }
LABEL_131:
              v6 = 1;
              goto LABEL_132;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v25,
                                       Pool2,
                                       BackTrace) )
          {
            goto LABEL_25;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_131;
        }
      }
LABEL_23:
      Pool2 = ExAllocatePool2(260LL, (unsigned int)v22);
      goto LABEL_24;
    }
  }
LABEL_133:
  if ( v164 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v164);
  if ( v6 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v8 + 6) = 0LL;
  return 0LL;
}
