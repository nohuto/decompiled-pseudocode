/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C00115F8
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0011CCC (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C0011204 (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     strcmp_0 @ 0x1C00E18C1 (strcmp_0.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ValidateKbdNLSTable @ 0x1C021CA2C (ValidateKbdNLSTable.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  int v6; // esi
  struct tagKBDFILE *v8; // r14
  BOOL v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // r8
  void *v12; // r8
  char *v13; // rcx
  char *v14; // r14
  __int16 v15; // ax
  int v16; // esi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r12
  unsigned int v22; // r13d
  char *v23; // rax
  NSInstrumentation::CLeakTrackingAllocator *v24; // rsi
  char v25; // r14
  int v26; // eax
  unsigned __int64 Pool2; // rbx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rax
  BOOL v31; // r12d
  __int64 v32; // r11
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
  _WORD **v45; // rcx
  _WORD *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  _WORD **v49; // rcx
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
  unsigned __int64 v62; // r14
  _QWORD *v64; // rax
  __int64 v65; // r10
  unsigned int v66; // r11d
  _DWORD *v67; // rax
  _DWORD *v68; // rcx
  unsigned __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rdx
  _WORD *v72; // rcx
  _WORD *v73; // rax
  unsigned int v74; // eax
  unsigned __int64 v75; // r10
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // r9
  bool v78; // cc
  unsigned __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rdx
  __int64 v83; // rax
  unsigned __int64 v84; // rsi
  unsigned __int64 *v85; // rdx
  unsigned __int64 v86; // r10
  unsigned __int64 v87; // r11
  _BYTE *j; // rcx
  _BYTE *v89; // r9
  __int64 v90; // rax
  _BYTE *v91; // r9
  _BYTE *v92; // rax
  __int64 v93; // rax
  unsigned __int64 v94; // r8
  _QWORD *v95; // rdx
  __int64 v96; // rax
  unsigned __int64 v97; // r8
  unsigned __int64 v98; // r9
  _DWORD *v99; // rax
  unsigned __int64 v100; // rcx
  _DWORD *v101; // rdx
  __int64 v102; // rax
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // rsi
  _BYTE *v105; // rdx
  unsigned __int64 v106; // r10
  unsigned __int64 v107; // r11
  _WORD *k; // rax
  _WORD *v109; // r8
  __int64 v110; // rax
  unsigned __int64 v111; // r9
  _BYTE *v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // r8
  unsigned __int64 v115; // rsi
  _BYTE *v116; // rdx
  unsigned __int64 v117; // r10
  unsigned __int64 v118; // r11
  _WORD *m; // rax
  _WORD *v120; // r8
  __int64 v121; // rax
  unsigned __int64 v122; // r9
  _BYTE *v123; // rdx
  __int64 v124; // rax
  unsigned __int64 v125; // r8
  unsigned __int64 v126; // r11
  unsigned __int64 *v127; // rdx
  unsigned __int64 v128; // rsi
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
  void *v164; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v165; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v166; // [rsp+50h] [rbp-B8h] BYREF
  BOOL v167; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v168[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v169; // [rsp+78h] [rbp-90h] BYREF
  __int64 v170; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v171; // [rsp+88h] [rbp-80h]
  __int64 v172; // [rsp+90h] [rbp-78h]
  PVOID BackTrace[26]; // [rsp+A8h] [rbp-60h] BYREF

  v165 = 0;
  v5 = 0LL;
  v164 = 0LL;
  v6 = 0;
  v8 = a1;
  v9 = PsGetCurrentProcessId() == (HANDLE)gpidLogon;
  *((_QWORD *)v8 + 6) = 0LL;
  v167 = v9;
  if ( (int)LoadFileContent(a2, v10, v11, &v164, &v165) >= 0 )
  {
    v12 = v164;
    v13 = (char *)v164 + *((unsigned int *)v164 + 15);
    if ( v13 >= v164 && (v9 || v13 + 263 >= v13) )
    {
      v14 = (char *)v164 + v165;
      if ( v13 + 264 >= v14 )
      {
LABEL_133:
        v8 = a1;
        goto LABEL_134;
      }
      v15 = *((_WORD *)v13 + 2);
      if ( v15 == 512 || v15 == -31132 || v15 == -21916 )
        v172 = *((_QWORD *)v13 + 6);
      else
        v172 = *((unsigned int *)v13 + 13);
      v16 = *((unsigned __int16 *)v13 + 3);
      v17 = (unsigned __int64)&v13[*((unsigned __int16 *)v13 + 10) + 24];
      v171 = v17;
      if ( !v16 )
        goto LABEL_138;
      v18 = v17 + 40;
      do
      {
        if ( v17 < (unsigned __int64)v12 || !v9 && v18 - 1 < v17 || v18 >= (unsigned __int64)v14 )
          goto LABEL_138;
        v19 = strcmp_0((const char *)v17, ".data");
        v12 = v164;
        if ( !v19 )
          break;
        v17 += 40LL;
        v18 += 40LL;
        v171 = v17;
        --v16;
      }
      while ( v16 );
      if ( !v16
        || (v20 = *(_DWORD *)(v17 + 12), a3 < v20)
        || (v21 = *(unsigned int *)(v17 + 8), v22 = a3 - v20, v22 >= (unsigned int)v21)
        || (unsigned int)v21 >= 0x40000
        || (v23 = (char *)v164 + *(unsigned int *)(v17 + 20), v23 < v164)
        || &v23[v21] < v23
        || &v23[v21] >= v14 )
      {
LABEL_138:
        v6 = 0;
        goto LABEL_133;
      }
      v24 = gpLeakTrackingAllocator;
      v25 = 0;
      v170 = *(unsigned int *)(v17 + 8);
      v166 = 1953198933;
      v169 = 260LL;
      v26 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        Pool2 = ExAllocatePool2(260LL, (unsigned int)v21, 1953198933LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v24 + 14);
LABEL_25:
        if ( Pool2 )
        {
LABEL_26:
          v8 = a1;
          v28 = v171;
          *((_QWORD *)a1 + 3) = Pool2;
          memmove((void *)Pool2, (char *)v164 + *(unsigned int *)(v28 + 20), (unsigned int)v21);
          v29 = Pool2 + (unsigned int)v21;
          *((_DWORD *)a1 + 10) = v21;
          v5 = Pool2 + v22;
          v30 = *(unsigned int *)(v28 + 12);
          if ( Pool2 < v30 )
            goto LABEL_442;
          v31 = v167;
          v32 = Pool2 - v30 - v172;
          if ( !v167 && (v5 < Pool2 || v5 > v29 - 104) )
            goto LABEL_442;
          v33 = *(unsigned __int64 **)v5;
          if ( *(_QWORD *)v5 )
          {
            v33 = (unsigned __int64 *)((char *)v33 + v32);
            *(_QWORD *)v5 = v33;
            if ( (unsigned __int64)v33 < Pool2 || v33 + 2 < v33 || (unsigned __int64)(v33 + 2) > v29 )
              goto LABEL_442;
          }
          if ( !v31 && !v33 )
            goto LABEL_442;
          if ( *v33 )
          {
            *v33 += v32;
            v33 = *(unsigned __int64 **)v5;
            v34 = **(_QWORD **)v5;
            if ( v34 < Pool2 || v34 + 2 < v34 || v34 + 2 > v29 )
              goto LABEL_442;
          }
          if ( !v31 && ((unsigned __int64)v33 < Pool2 || (unsigned __int64)v33 > v29 - 16) )
            goto LABEL_442;
          v35 = (_BYTE *)*v33;
          if ( *v33 < Pool2 )
            goto LABEL_442;
          v36 = v35 + 2;
          while ( 1 )
          {
            if ( v36 < v35 || (unsigned __int64)v36 > v29 )
              goto LABEL_442;
            if ( !*v35 )
              break;
            v35 += 2;
            v36 += 2;
            if ( (unsigned __int64)v35 < Pool2 )
              goto LABEL_442;
          }
          v37 = *(_QWORD *)(v5 + 8);
          if ( v37 )
          {
            v38 = (unsigned __int64 *)(v32 + v37);
            *(_QWORD *)(v5 + 8) = v38;
            if ( (unsigned __int64)v38 < Pool2 || v38 + 2 < v38 || (unsigned __int64)(v38 + 2) > v29 )
              goto LABEL_442;
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
                    goto LABEL_59;
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
              goto LABEL_442;
            }
          }
LABEL_59:
          v41 = *(_QWORD *)(v5 + 16);
          if ( v41 )
          {
            v67 = (_DWORD *)(v32 + v41);
            *(_QWORD *)(v5 + 16) = v67;
            if ( (unsigned __int64)v67 < Pool2 || v67 + 2 < v67 || (unsigned __int64)(v67 + 2) > v29 )
              goto LABEL_442;
            if ( v67 )
            {
              while ( (unsigned __int64)v67 >= Pool2 )
              {
                v68 = v67 + 2;
                if ( v67 + 2 < v67 || (unsigned __int64)v68 > v29 )
                  break;
                if ( *v67 )
                {
                  v67 += 2;
                  if ( v68 )
                    continue;
                }
                goto LABEL_60;
              }
              goto LABEL_442;
            }
          }
LABEL_60:
          if ( !*(_WORD *)(v5 + 82)
            || (v42 = *(_QWORD *)(v5 + 88)) == 0
            || (v69 = v32 + v42, *(_QWORD *)(v5 + 88) = v69, v69 >= Pool2) && v69 + 6 >= v69 && v69 + 6 <= v29 )
          {
            v43 = *(_QWORD *)(v5 + 24);
            if ( v43 )
            {
              v44 = v32 + v43;
              *(_QWORD *)(v5 + 24) = v44;
              if ( v44 < Pool2 || v44 + 16 < v44 || v44 + 16 > v29 )
                goto LABEL_442;
              if ( v44 )
              {
                if ( v44 >= Pool2 )
                {
                  v45 = (_WORD **)(v44 + 8);
                  do
                  {
                    if ( v45 + 1 < v45 - 1 || (unsigned __int64)(v45 + 1) > v29 )
                      break;
                    if ( !*((_BYTE *)v45 - 8) )
                      goto LABEL_79;
                    v46 = *v45;
                    if ( *v45 )
                    {
                      v46 = (_WORD *)((char *)v46 + v32);
                      *v45 = v46;
                      if ( (unsigned __int64)v46 < Pool2 || v46 + 1 < v46 || (unsigned __int64)(v46 + 1) > v29 )
                        break;
                    }
                    if ( !v31 && v46 )
                    {
                      for ( ; (unsigned __int64)v46 >= Pool2; ++v46 )
                      {
                        if ( (unsigned __int64)v46 > v29 - 2 )
                          break;
                        if ( !*v46 )
                          goto LABEL_77;
                      }
                      *v45 = 0LL;
                    }
LABEL_77:
                    v45 += 2;
                  }
                  while ( (unsigned __int64)(v45 - 1) >= Pool2 );
                }
                goto LABEL_442;
              }
            }
LABEL_79:
            v47 = *(_QWORD *)(v5 + 32);
            if ( v47 )
            {
              v48 = v32 + v47;
              *(_QWORD *)(v5 + 32) = v48;
              if ( v48 < Pool2 || v48 + 16 < v48 || v48 + 16 > v29 )
                goto LABEL_442;
              if ( v48 )
              {
                if ( v48 >= Pool2 )
                {
                  v49 = (_WORD **)(v48 + 8);
                  do
                  {
                    if ( v49 + 1 < v49 - 1 || (unsigned __int64)(v49 + 1) > v29 )
                      break;
                    if ( !*((_BYTE *)v49 - 8) )
                      goto LABEL_96;
                    v50 = *v49;
                    if ( *v49 )
                    {
                      v50 = (_WORD *)((char *)v50 + v32);
                      *v49 = v50;
                      if ( (unsigned __int64)v50 < Pool2 || v50 + 1 < v50 || (unsigned __int64)(v50 + 1) > v29 )
                        break;
                    }
                    if ( !v31 && v50 )
                    {
                      for ( ; (unsigned __int64)v50 >= Pool2; ++v50 )
                      {
                        if ( (unsigned __int64)v50 > v29 - 2 )
                          break;
                        if ( !*v50 )
                          goto LABEL_94;
                      }
                      *v49 = 0LL;
                    }
LABEL_94:
                    v49 += 2;
                  }
                  while ( (unsigned __int64)(v49 - 1) >= Pool2 );
                }
                goto LABEL_442;
              }
            }
LABEL_96:
            v51 = *(_QWORD *)(v5 + 40);
            if ( v51 )
            {
              v70 = (_QWORD *)(v32 + v51);
              *(_QWORD *)(v5 + 40) = v70;
              if ( (unsigned __int64)v70 < Pool2 || v70 + 1 < v70 || (unsigned __int64)(v70 + 1) > v29 )
                goto LABEL_442;
              if ( v70 )
              {
                if ( (unsigned __int64)v70 < Pool2 )
                  goto LABEL_442;
LABEL_204:
                v71 = v70 + 1;
                if ( v70 + 1 < v70 || (unsigned __int64)v71 > v29 )
                  goto LABEL_442;
                if ( *v70 )
                {
                  v72 = (_WORD *)(v32 + *v70);
                  *v70 = v72;
                  if ( (unsigned __int64)v72 >= Pool2 )
                  {
                    v73 = v72 + 1;
                    if ( v72 + 1 >= v72 && (unsigned __int64)v73 <= v29 )
                    {
                      while ( (unsigned __int64)v72 >= Pool2 && v73 >= v72 && (unsigned __int64)v73 <= v29 )
                      {
                        if ( !*v72 )
                        {
                          v70 = v71;
                          if ( (unsigned __int64)v71 >= Pool2 )
                            goto LABEL_204;
                          goto LABEL_442;
                        }
                        ++v72;
                        ++v73;
                      }
                    }
                  }
                  goto LABEL_442;
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
                      goto LABEL_442;
                    if ( v56 )
                    {
                      for ( i = (_WORD *)(v56 + 2); !v31 || *i; i += 2 )
                      {
                        if ( (unsigned __int64)(i - 1) < Pool2 || i + 1 < i - 1 || (unsigned __int64)(i + 1) > v29 )
                          goto LABEL_442;
                        if ( !v31 && !*i )
                          break;
                      }
                    }
                  }
                  v58 = *(_QWORD *)(v5 + 72);
                  if ( !v58 )
                  {
LABEL_129:
                    if ( a4 )
                    {
                      v74 = *(_DWORD *)(v28 + 12);
                      if ( a4 < v74 )
                        goto LABEL_442;
                      v62 = Pool2 + a4 - v74;
                      if ( v62 < Pool2 )
                        goto LABEL_441;
                      v75 = v62 + 32;
                      if ( v62 + 32 < v62 || v75 > v29 )
                        goto LABEL_441;
                      v76 = *(_QWORD *)(v62 + 8);
                      if ( v76 )
                      {
                        v76 += v32;
                        *(_QWORD *)(v62 + 8) = v76;
                        if ( v76 < Pool2 || v76 + 132 < v76 || v76 + 132 > v29 )
                          goto LABEL_441;
                        if ( v76 )
                        {
                          v77 = *(unsigned int *)(v62 + 4);
                          if ( v31 )
                          {
                            v79 = v76 + 132LL * (unsigned int)(v77 - 1);
                            if ( v79 < Pool2 || v79 + 132 < v79 )
                              goto LABEL_441;
                            v78 = v79 + 132 <= v29;
                          }
                          else
                          {
                            v78 = v77 <= (v29 - v76) / 0x84;
                          }
                          if ( !v78 )
                          {
LABEL_441:
                            v8 = a1;
                            goto LABEL_442;
                          }
                        }
                      }
                      v80 = *(_QWORD *)(v62 + 24);
                      if ( v80 )
                      {
                        v81 = v32 + v80;
                        *(_QWORD *)(v62 + 24) = v81;
                        if ( v81 < Pool2 )
                          goto LABEL_441;
                        if ( v81 + 2 < v81 )
                          goto LABEL_441;
                        if ( v81 + 2 > v29 )
                          goto LABEL_441;
                        if ( v81 )
                        {
                          v82 = v81 + 2LL * (*(_DWORD *)(v62 + 16) - 1);
                          if ( v82 < Pool2 || v82 + 2 < v82 || v82 + 2 > v29 )
                            goto LABEL_441;
                        }
                      }
                      if ( !v31 )
                      {
                        v83 = *(unsigned int *)(v62 + 4);
                        if ( (_DWORD)v83 )
                        {
                          if ( v76 < v75 && v76 + 132 * v83 > v62 )
                            goto LABEL_441;
                        }
                        if ( v62 - 104 < v5 && v75 > v5 )
                          goto LABEL_441;
                      }
                      if ( !(unsigned __int8)ValidateKbdNLSTable(v62) )
                        goto LABEL_441;
                      *((_QWORD *)a1 + 6) = v62;
                    }
                    else
                    {
                      v62 = 0LL;
                    }
                    if ( v31 )
                      goto LABEL_132;
                    v84 = *(_QWORD *)(v5 + 8);
                    if ( v84 )
                    {
                      v85 = *(unsigned __int64 **)(v5 + 8);
                      if ( v84 < Pool2 )
                        goto LABEL_441;
                      v86 = v84 + 16;
LABEL_253:
                      if ( v86 < (unsigned __int64)v85 || v86 > v29 )
                        goto LABEL_441;
                      v87 = *v85;
                      if ( *v85 )
                      {
                        for ( j = (_BYTE *)*v85; (unsigned __int64)j >= Pool2; j += *(unsigned __int8 *)(v86 - 7) )
                        {
                          v89 = j + 4;
                          if ( j + 4 < j || (unsigned __int64)v89 > v29 )
                            break;
                          if ( !*j )
                          {
                            if ( !v62
                              || (v93 = *(unsigned int *)(v62 + 4), !(_DWORD)v93)
                              || (v94 = *(_QWORD *)(v62 + 8), v94 >= (unsigned __int64)v89)
                              || v94 + 132 * v93 <= v87 )
                            {
                              if ( v87 - 104 >= v5 || (unsigned __int64)v89 <= v5 )
                              {
                                v85 += 2;
                                v86 += 16LL;
                                if ( (unsigned __int64)v85 >= Pool2 )
                                  goto LABEL_253;
                              }
                            }
                            goto LABEL_441;
                          }
                          v90 = *(unsigned __int8 *)(v86 - 8);
                          if ( (unsigned __int8)v90 > 1u )
                          {
                            v91 = &j[2 * v90];
                            if ( (unsigned __int64)v91 < Pool2 )
                              goto LABEL_441;
                            v92 = &j[2 * v90 + 2];
                            if ( v92 < v91 || (unsigned __int64)v92 > v29 )
                              goto LABEL_441;
                          }
                        }
                        goto LABEL_441;
                      }
                      v95 = v85 + 2;
                      if ( v62 )
                      {
                        v96 = *(unsigned int *)(v62 + 4);
                        if ( (_DWORD)v96 )
                        {
                          v97 = *(_QWORD *)(v62 + 8);
                          if ( v97 < (unsigned __int64)v95 && v97 + 132 * v96 > v84 )
                            goto LABEL_441;
                        }
                      }
                      if ( v84 - 104 < v5 && (unsigned __int64)v95 > v5 )
                        goto LABEL_441;
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
                                goto LABEL_441;
                            }
                          }
                          if ( v98 - 104 < v5 && (unsigned __int64)v101 > v5 )
                            goto LABEL_441;
                          goto LABEL_294;
                        }
                        v100 += 8LL;
                        v99 += 2;
                        if ( !v101 )
                          goto LABEL_294;
                      }
                      goto LABEL_441;
                    }
LABEL_294:
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
                                  goto LABEL_441;
                              }
                            }
                            if ( v104 - 104 < v5 && (unsigned __int64)v112 > v5 )
                              goto LABEL_441;
                            goto LABEL_321;
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
                                      goto LABEL_441;
                                  }
                                }
                                if ( v107 - 104 < v5 && (unsigned __int64)v109 > v5 )
                                  goto LABEL_441;
                                goto LABEL_313;
                              }
                            }
                            goto LABEL_441;
                          }
LABEL_313:
                          v105 += 16;
                          v106 += 16LL;
                          if ( (unsigned __int64)v105 < Pool2 )
                            goto LABEL_441;
                        }
                      }
                      goto LABEL_441;
                    }
LABEL_321:
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
                                  goto LABEL_441;
                              }
                            }
                            if ( v115 - 104 < v5 && (unsigned __int64)v123 > v5 )
                              goto LABEL_441;
                            goto LABEL_348;
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
                                      goto LABEL_441;
                                  }
                                }
                                if ( v118 - 104 < v5 && (unsigned __int64)v120 > v5 )
                                  goto LABEL_441;
                                goto LABEL_340;
                              }
                            }
                            goto LABEL_441;
                          }
LABEL_340:
                          v116 += 16;
                          v117 += 16LL;
                          if ( (unsigned __int64)v116 < Pool2 )
                            goto LABEL_441;
                        }
                      }
                      goto LABEL_441;
                    }
LABEL_348:
                    v126 = *(_QWORD *)(v5 + 40);
                    if ( v126 )
                    {
                      v127 = *(unsigned __int64 **)(v5 + 40);
                      if ( v126 < Pool2 )
                        goto LABEL_441;
                      v128 = v126 + 8;
LABEL_351:
                      if ( v128 < (unsigned __int64)v127 || v128 > v29 )
                        goto LABEL_441;
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
                                  goto LABEL_351;
                              }
                            }
                            goto LABEL_441;
                          }
                        }
                        goto LABEL_441;
                      }
                      v134 = v127 + 1;
                      if ( v62 )
                      {
                        v135 = *(unsigned int *)(v62 + 4);
                        if ( (_DWORD)v135 )
                        {
                          v136 = *(_QWORD *)(v62 + 8);
                          if ( v136 < (unsigned __int64)v134 && v136 + 132 * v135 > v126 )
                            goto LABEL_441;
                        }
                      }
                      if ( v126 - 104 < v5 && (unsigned __int64)v134 > v5 )
                        goto LABEL_441;
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
                            goto LABEL_441;
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
                                  goto LABEL_441;
                              }
                            }
                            if ( v141 - 104 < v5 && v143 > v5 )
                              goto LABEL_441;
                            goto LABEL_392;
                          }
                          v142 += 4LL;
                          if ( v143 < Pool2 )
                            goto LABEL_441;
                        }
                      }
                      goto LABEL_441;
                    }
LABEL_392:
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
                                  goto LABEL_441;
                              }
                            }
                            if ( v146 - 104 < v5 && v148 > v5 )
                              goto LABEL_441;
                            goto LABEL_405;
                          }
                          v147 += 4LL;
                          if ( v148 < Pool2 )
                            goto LABEL_441;
                        }
                      }
                      goto LABEL_441;
                    }
LABEL_405:
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
                              goto LABEL_429;
                            v152 = 0;
                            if ( *(_BYTE *)(v5 + 84) )
                            {
                              v153 = (__int16 *)(v151 + 4);
                              while ( 1 )
                              {
                                if ( v152 > 0 )
                                {
                                  v154 = (unsigned __int64)&v151[2 * v152 + 4];
                                  if ( v154 < Pool2 || v154 > v29 - 2 )
                                    break;
                                }
                                v155 = *v153++;
                                ++v152;
                                if ( v155 == -4096 || v152 >= *(unsigned __int8 *)(v5 + 84) )
                                  goto LABEL_419;
                              }
                              *(_QWORD *)(v5 + 88) = 0LL;
                            }
LABEL_419:
                            if ( !*(_QWORD *)(v5 + 88) )
                              goto LABEL_429;
                            if ( v152 <= 0
                              || (!v62
                               || (v156 = *(unsigned int *)(v62 + 4), !(_DWORD)v156)
                               || (v157 = *(_QWORD *)(v62 + 8), v157 >= (unsigned __int64)&v151[2 * v152 + 4])
                               || v157 + 132 * v156 <= (unsigned __int64)(v151 + 4))
                              && ((unsigned __int64)(v151 - 100) >= v5 || (unsigned __int64)&v151[2 * v152 + 4] <= v5) )
                            {
                              v151 += *(unsigned __int8 *)(v5 + 85);
                              if ( (unsigned __int64)v151 >= Pool2 )
                                continue;
                            }
                            break;
                          }
                        }
                        *(_QWORD *)(v5 + 88) = 0LL;
LABEL_429:
                        v158 = *(_QWORD *)(v5 + 88);
                        if ( v158 )
                        {
                          if ( (v159 = v151 + 6, v62)
                            && (v160 = *(unsigned int *)(v62 + 4), (_DWORD)v160)
                            && (v161 = *(_QWORD *)(v62 + 8), v161 < (unsigned __int64)v159)
                            && v161 + 132 * v160 > v158
                            || v158 - 104 < v5 && (unsigned __int64)v159 > v5 )
                          {
                            *(_QWORD *)(v5 + 88) = 0LL;
                          }
                        }
                      }
                    }
                    if ( v62 )
                    {
                      v162 = *(unsigned int *)(v62 + 4);
                      if ( (_DWORD)v162 )
                      {
                        v163 = *(_QWORD *)(v62 + 8);
                        if ( v163 - 104 < v5 && v163 + 132 * v162 > v5 )
                          goto LABEL_441;
                      }
                    }
                    goto LABEL_132;
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
                            goto LABEL_129;
                          v60 += 4LL;
                        }
                        while ( v61 >= Pool2 );
                      }
                      goto LABEL_442;
                    }
                    goto LABEL_129;
                  }
                }
              }
            }
          }
LABEL_442:
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
          v6 = 0;
          goto LABEL_134;
        }
LABEL_132:
        v6 = 1;
        goto LABEL_133;
      }
      if ( v26 == 1 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x746B7355u)
          || v21 + 16 <= (unsigned __int64)(unsigned int)v21 )
        {
          goto LABEL_132;
        }
        v64 = (_QWORD *)ExAllocatePool2(v169 & 0xFFFFFFFFFFFFFFFDuLL, v21 + 16, v166);
        Pool2 = (unsigned __int64)v64;
        if ( !v64
          || (_InterlockedIncrement64((volatile signed __int64 *)v24 + 14),
              *v64 = 1953198933LL,
              Pool2 = (unsigned __int64)(v64 + 2),
              v64 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v24 + 1),
            (const void *)0x746B7355);
        }
        goto LABEL_25;
      }
      if ( v26 != 2 )
        goto LABEL_132;
      v168[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x746B7355u, v168) )
      {
        v168[0] = (unsigned __int64)&v169;
        v168[1] = (unsigned __int64)&v166;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v24,
                  v168,
                  &v170);
        goto LABEL_25;
      }
      if ( (unsigned int)v21 < 0x1000uLL || (v21 & 0xFFF) != 0 )
      {
        v65 += 16LL;
        v25 = 1;
        v170 = v65;
      }
      Pool2 = ExAllocatePool2(260LL, v65, v66);
      if ( !Pool2 )
        goto LABEL_132;
      _InterlockedIncrement64((volatile signed __int64 *)v24 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v25 && (Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v24,
                                Pool2,
                                v168[0],
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_25;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v24,
                                   Pool2,
                                   v168[0],
                                   BackTrace) )
      {
        goto LABEL_26;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v24 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      goto LABEL_132;
    }
  }
LABEL_134:
  if ( v164 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v164);
  if ( v6 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v8 + 6) = 0LL;
  return 0LL;
}
