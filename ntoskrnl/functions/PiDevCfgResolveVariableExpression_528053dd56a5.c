__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rdx
  int RegistryValue; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r12
  _WORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 *v15; // rsi
  wchar_t **v16; // rdx
  unsigned int v17; // ecx
  int v18; // eax
  __int64 *v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // r9
  unsigned __int16 v22; // bx
  __int64 v23; // rsi
  wchar_t *v24; // r13
  __int64 *v25; // r14
  int v26; // ecx
  int v27; // edx
  _WORD *v28; // rdx
  int v29; // ecx
  bool v30; // zf
  unsigned __int16 v31; // r12
  __int64 v32; // rax
  int v33; // r15d
  int v34; // ebx
  __int64 v35; // rax
  unsigned int v36; // ebx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  wchar_t *v40; // rax
  __int64 v41; // rbx
  _WORD *v42; // r8
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  size_t v47; // r13
  _WORD *v48; // r8
  const WCHAR *v49; // r12
  size_t v50; // r15
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rax
  unsigned int v58; // r15d
  __int64 v59; // rax
  unsigned __int64 v60; // rbx
  int v61; // r9d
  wchar_t *v62; // rax
  size_t v63; // rbx
  char *v64; // rdx
  wchar_t *v65; // rax
  size_t v66; // r8
  char *v67; // rcx
  BOOL v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  __int128 *v73; // rsi
  __int64 v74; // r14
  _QWORD *v75; // rbx
  void *v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // eax
  LONG v79; // eax
  int v80; // r8d
  _WORD *v81; // rbx
  unsigned int v82; // r15d
  int v83; // ecx
  __int64 v84; // rax
  wchar_t *v85; // rax
  unsigned __int64 v86; // r15
  void *v87; // r8
  const WCHAR *v88; // r13
  size_t v89; // r12
  _BYTE *v90; // rbx
  wchar_t *v91; // rax
  signed __int64 v92; // rbx
  wchar_t *v93; // rax
  const WCHAR *v94; // rdx
  unsigned int v95; // r9d
  int v96; // ecx
  unsigned int v97; // r8d
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  int v106; // r8d
  unsigned int v107; // r9d
  int v108; // eax
  int v109; // ecx
  int v110; // ecx
  int v111; // ecx
  int v112; // ecx
  int v113; // ecx
  int v114; // ecx
  int v115; // ecx
  bool v116; // zf
  const void *v117; // r10
  size_t v118; // r8
  const void *v119; // r11
  int v120; // r9d
  int v121; // ecx
  const void *v122; // r12
  char *v123; // r13
  wchar_t *v124; // rax
  bool v125; // cc
  __int16 v126; // r8
  int v127; // ecx
  unsigned __int16 v128; // bx
  _WORD *v129; // r13
  wchar_t *v130; // r12
  unsigned __int16 v131; // r15
  int v132; // ecx
  int v133; // ecx
  int v134; // ecx
  int v135; // ecx
  int v136; // ecx
  int v137; // ecx
  int v138; // ecx
  int v139; // ecx
  BOOL v140; // ecx
  int v141; // eax
  wchar_t *v142; // rax
  const void *v143; // rdx
  bool v144; // zf
  bool v145; // al
  int v146; // ecx
  _BYTE *v147; // rdx
  wchar_t *v149; // rax
  unsigned int v150; // eax
  __int64 v151; // r14
  __int128 *v152; // rbx
  _QWORD *v153; // rsi
  void *v154; // rcx
  PVOID *v155; // rbx
  __int64 v156; // rsi
  void *v157; // rcx
  int v159; // [rsp+30h] [rbp-79h]
  wchar_t *v160; // [rsp+38h] [rbp-71h]
  unsigned int v161; // [rsp+40h] [rbp-69h]
  __int64 v162; // [rsp+48h] [rbp-61h]
  unsigned int v163; // [rsp+50h] [rbp-59h]
  __int64 v164; // [rsp+58h] [rbp-51h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 Pool2; // [rsp+70h] [rbp-39h]
  unsigned int v167; // [rsp+78h] [rbp-31h]
  UNICODE_STRING String2; // [rsp+80h] [rbp-29h] BYREF
  __int64 v169; // [rsp+90h] [rbp-19h]
  __int64 v170; // [rsp+98h] [rbp-11h]
  PVOID P; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v172; // [rsp+A8h] [rbp-1h]
  __int128 v173; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v174; // [rsp+C0h] [rbp+17h]

  v172 = a3;
  v170 = a1;
  P = 0LL;
  v3 = 0;
  v163 = 0;
  LODWORD(v4) = 0;
  v5 = 0LL;
  v169 = 0LL;
  v174 = 0LL;
  v173 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_356;
  if ( !PnpValidateRegistryMultiSz(P, v6, v8, v9) )
    goto LABEL_355;
  v11 = v10 + *(unsigned int *)(v10 + 8);
  v164 = v11;
  v12 = (_WORD *)v11;
  if ( !*(_WORD *)v11 )
    goto LABEL_355;
  do
  {
    ++v3;
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v12 += v13 + 1;
  }
  while ( *v12 );
  v14 = v170;
  v167 = v3;
  if ( !v3 )
  {
LABEL_355:
    RegistryValue = -1073741823;
    goto LABEL_356;
  }
  Pool2 = ExAllocatePool2(256LL, 8LL * v3, 1667526736LL);
  v15 = (__int64 *)Pool2;
  if ( !Pool2 )
  {
    RegistryValue = -1073741670;
    goto LABEL_356;
  }
  if ( !*(_WORD *)v11 )
  {
LABEL_344:
    RegistryValue = -1073741823;
    goto LABEL_345;
  }
  while ( 1 )
  {
    if ( !*(_WORD *)(v11 + 2) || !*(_WORD *)(v11 + 4) )
    {
      v16 = &off_140A7AC40;
      v17 = 1;
      while ( *(_DWORD *)v11 != *(_DWORD *)*v16 )
      {
        ++v17;
        v16 += 3;
        if ( v17 >= 0x1B )
          goto LABEL_16;
      }
      v19 = &qword_140A7AC20[3 * v17];
      if ( v19 )
        break;
    }
LABEL_16:
    if ( (unsigned int)v4 >= v3 )
    {
      RegistryValue = -1073741571;
      goto LABEL_345;
    }
    v164 = 0LL;
    v18 = PiDevCfgResolveVariable(v14, (const WCHAR *)v11, &v164);
    RegistryValue = v18;
    if ( v18 < 0 )
    {
      if ( v18 != -1073741772 )
        goto LABEL_345;
      goto LABEL_344;
    }
    v15[(unsigned int)v4] = v164;
LABEL_148:
    LODWORD(v4) = v4 + 1;
    v163 = v4;
    v77 = -1LL;
    do
      ++v77;
    while ( *(_WORD *)(v11 + 2 * v77) );
    v11 += 2 * v77 + 2;
    v164 = v11;
    if ( !*(_WORD *)v11 )
    {
      v163 = v4;
      if ( RegistryValue < 0 )
        goto LABEL_345;
      if ( (_DWORD)v4 == 1 )
      {
        RegistryValue = PiDevCfgCopyVariableData(v172, *v15);
        v78 = 1;
        goto LABEL_346;
      }
      goto LABEL_344;
    }
  }
  v20 = *((_DWORD *)v19 + 4);
  v21 = 0LL;
  v161 = 0;
  if ( v20 )
  {
    v161 = 0;
    while ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      v163 = v4;
      *((_QWORD *)&v173 + v21) = v15[v4];
      v21 = (unsigned int)(v21 + 1);
      v161 = v21;
      if ( (unsigned int)v21 >= v20 )
      {
        v5 = v174;
        v169 = v174;
        goto LABEL_25;
      }
    }
    RegistryValue = -1073741823;
    goto LABEL_334;
  }
LABEL_25:
  if ( RegistryValue < 0 )
    goto LABEL_334;
  LODWORD(Src[0]) = 0;
  v22 = 0;
  LOWORD(v162) = 0;
  LODWORD(v23) = 0;
  LOWORD(v159) = 0;
  v24 = 0LL;
  v160 = 0LL;
  v25 = 0LL;
  if ( (_DWORD)v21 != 1 )
  {
    if ( (_DWORD)v21 == 2 )
    {
      switch ( *(_DWORD *)(*((_QWORD *)&v173 + 1) + 32LL) )
      {
        case 1:
        case 2:
          v121 = *(_DWORD *)(v173 + 32);
          if ( (unsigned int)(v121 - 1) <= 1 )
          {
            v125 = *(_DWORD *)(*((_QWORD *)&v173 + 1) + 36LL) <= 0xFFFEu;
            *(_OWORD *)Src = 0LL;
            String2 = 0LL;
            if ( v125 && *(_DWORD *)(v173 + 36) <= 0xFFFEu )
            {
              v126 = *(_WORD *)(*((_QWORD *)&v173 + 1) + 36LL);
              v127 = *(_DWORD *)v19;
              v128 = v126 - 2;
              v129 = *(_WORD **)(*((_QWORD *)&v173 + 1) + 40LL);
              v130 = *(wchar_t **)(v173 + 40);
              String2.MaximumLength = *(_WORD *)(v173 + 36);
              v131 = String2.MaximumLength - 2;
              Src[1] = v129;
              WORD1(Src[0]) = v126;
              LOWORD(Src[0]) = v126 - 2;
              String2.Buffer = v130;
              String2.Length = String2.MaximumLength - 2;
              v132 = v127 - 1;
              if ( !v132 )
              {
                if ( *v129 )
                {
                  if ( *v130 )
                  {
                    if ( v128 + (unsigned int)v131 >= 0xFFFE )
                      goto LABEL_331;
                    LOWORD(v159) = v128 + v131;
                    LOWORD(v162) = v126 + v131;
                    v142 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(v126 + v131), 1667526736LL);
                    if ( !v142 )
                    {
LABEL_329:
                      RegistryValue = -1073741670;
LABEL_330:
                      v150 = v161;
                      goto LABEL_335;
                    }
                    v143 = v129;
                    v24 = v142;
                    memmove(v142, v143, v128);
                    memmove(&v24[(unsigned __int64)v128 >> 1], v130, v131 + 2LL);
                    v22 = v162;
                    goto LABEL_300;
                  }
                  v25 = (__int64 *)*((_QWORD *)&v173 + 1);
                }
                else
                {
                  v25 = (__int64 *)v173;
                }
                v24 = 0LL;
                goto LABEL_61;
              }
              v133 = v132 - 12;
              if ( v133 )
              {
                v134 = v133 - 1;
                if ( v134 )
                {
                  v135 = v134 - 1;
                  if ( v135 )
                  {
                    v136 = v135 - 1;
                    if ( v136 )
                    {
                      v137 = v136 - 1;
                      if ( v137 )
                      {
                        v138 = v137 - 1;
                        if ( v138 )
                        {
                          v139 = v138 - 1;
                          if ( v139 )
                          {
                            if ( v139 != 1 )
                              goto LABEL_137;
                            v140 = RtlCompareUnicodeString((PCUNICODE_STRING)Src, &String2, 1u) >= 0;
                          }
                          else
                          {
                            v140 = RtlCompareUnicodeString((PCUNICODE_STRING)Src, &String2, 1u) <= 0;
                          }
                        }
                        else
                        {
                          v140 = RtlCompareUnicodeString((PCUNICODE_STRING)Src, &String2, 1u) > 0;
                        }
                      }
                      else
                      {
                        v140 = RtlCompareUnicodeString((PCUNICODE_STRING)Src, &String2, 1u) < 0;
                      }
                    }
                    else
                    {
                      v140 = RtlCompareUnicodeString((PCUNICODE_STRING)Src, &String2, 1u) != 0;
                    }
                  }
                  else
                  {
                    v140 = RtlCompareUnicodeString((PCUNICODE_STRING)Src, &String2, 1u) == 0;
                  }
                  LODWORD(v23) = v140;
                  v24 = 0LL;
                  goto LABEL_58;
                }
                if ( v128 >= 2u || (v141 = 0, v131 >= 2u) )
                  v141 = 1;
              }
              else if ( v128 < 2u || (v141 = 1, v131 < 2u) )
              {
                v141 = 0;
              }
              LODWORD(v23) = v141;
              v24 = 0LL;
              goto LABEL_58;
            }
            RegistryValue = -2147483643;
            goto LABEL_115;
          }
          if ( v121 != 7 )
            goto LABEL_84;
          v63 = *(unsigned int *)(*((_QWORD *)&v173 + 1) + 36LL);
          v122 = *(const void **)(*((_QWORD *)&v173 + 1) + 40LL);
          v123 = *(char **)(v173 + 40);
          v50 = *(unsigned int *)(v173 + 36);
          if ( (unsigned int)v63 > 0xFFFE || (unsigned int)v50 > 0xFFFE )
          {
LABEL_331:
            RegistryValue = -2147483643;
            goto LABEL_330;
          }
          if ( *(_DWORD *)v19 != 1 )
          {
            if ( *(_DWORD *)v19 == 8 )
            {
              if ( !PnpMultiSzContainsString(*(PCWSTR *)(v173 + 40), *(const WCHAR **)(*((_QWORD *)&v173 + 1) + 40LL)) )
                goto LABEL_128;
              goto LABEL_263;
            }
            if ( *(_DWORD *)v19 != 9 )
            {
              v25 = qword_140A74E68;
              goto LABEL_128;
            }
            if ( PnpMultiSzContainsString(*(PCWSTR *)(v173 + 40), *(const WCHAR **)(*((_QWORD *)&v173 + 1) + 40LL)) )
            {
              v25 = (__int64 *)v173;
              goto LABEL_128;
            }
          }
          if ( (unsigned int)(v50 + v63) > 0xFFFE )
            goto LABEL_331;
          LOWORD(v162) = v50 + v63;
          v124 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(v50 + v63), 1667526736LL);
          v160 = v124;
          if ( !v124 )
            goto LABEL_329;
          memmove(v124, v122, v63);
          v65 = v160;
          v64 = v123;
LABEL_126:
          v66 = v50;
          v67 = (char *)&v65[v63 >> 1];
LABEL_127:
          memmove(v67, v64, v66);
LABEL_128:
          v22 = v162;
          goto LABEL_129;
        case 3:
          if ( *(_DWORD *)(v173 + 32) == 3 )
          {
            v117 = *(const void **)(*((_QWORD *)&v173 + 1) + 40LL);
            v118 = *(unsigned int *)(*((_QWORD *)&v173 + 1) + 36LL);
            v119 = *(const void **)(v173 + 40);
            v120 = *(_DWORD *)(v173 + 36);
            if ( *(_DWORD *)v19 != 15 )
            {
              if ( *(_DWORD *)v19 != 16 )
              {
                v25 = qword_140A74E68;
                goto LABEL_139;
              }
              if ( (_DWORD)v118 != v120 )
                goto LABEL_238;
              v116 = memcmp(v117, v119, v118) == 0;
              v108 = 0;
              goto LABEL_237;
            }
            if ( (_DWORD)v118 != v120 )
              goto LABEL_300;
            v31 = 0;
            if ( memcmp(v117, v119, v118) )
              goto LABEL_301;
LABEL_251:
            LODWORD(v23) = 1;
            goto LABEL_38;
          }
          break;
        case 4:
          if ( *(_DWORD *)(v173 + 32) == 4 )
          {
            v95 = **(_DWORD **)(*((_QWORD *)&v173 + 1) + 40LL);
            v96 = *(_DWORD *)v19;
            v97 = **(_DWORD **)(v173 + 40);
            if ( *(int *)v19 <= 10 )
            {
              if ( v96 == 10 )
              {
                v106 = v95 ^ v97;
                goto LABEL_206;
              }
              v98 = v96 - 1;
              if ( !v98 )
              {
                LODWORD(v23) = v97 + v95;
                goto LABEL_37;
              }
              v99 = v98 - 1;
              if ( !v99 )
              {
                v107 = v95 - v97;
                goto LABEL_209;
              }
              v100 = v99 - 1;
              if ( !v100 )
              {
                v106 = v95 * v97;
                goto LABEL_206;
              }
              v101 = v100 - 1;
              if ( v101 )
              {
                v102 = v101 - 1;
                if ( v102 )
                {
                  v103 = v102 - 1;
                  if ( v103 )
                  {
                    v104 = v103 - 1;
                    if ( v104 )
                    {
                      v105 = v104 - 1;
                      if ( v105 )
                      {
                        if ( v105 != 1 )
                          goto LABEL_84;
                        v106 = v95 | v97;
                      }
                      else
                      {
                        v106 = v95 & v97;
                      }
LABEL_206:
                      LODWORD(v23) = v106;
                      goto LABEL_37;
                    }
                    v107 = v95 >> v97;
                  }
                  else
                  {
                    v107 = v95 << v97;
                  }
LABEL_209:
                  LODWORD(v23) = v107;
                  goto LABEL_37;
                }
                if ( v97 )
                {
                  LODWORD(v23) = v95 % v97;
                  goto LABEL_37;
                }
LABEL_216:
                RegistryValue = -1073741676;
                goto LABEL_115;
              }
              if ( !v97 )
                goto LABEL_216;
              v108 = v95 / v97;
LABEL_215:
              LODWORD(v23) = v108;
              goto LABEL_37;
            }
            v109 = v96 - 13;
            if ( v109 )
            {
              v110 = v109 - 1;
              if ( v110 )
              {
                v111 = v110 - 1;
                if ( v111 )
                {
                  v112 = v111 - 1;
                  if ( v112 )
                  {
                    v113 = v112 - 1;
                    if ( v113 )
                    {
                      v114 = v113 - 1;
                      if ( v114 )
                      {
                        v115 = v114 - 1;
                        if ( v115 )
                        {
                          if ( v115 != 1 )
                            goto LABEL_84;
                          v108 = v95 >= v97;
                        }
                        else
                        {
                          v108 = v95 <= v97;
                        }
                      }
                      else
                      {
                        v108 = v95 > v97;
                      }
                    }
                    else
                    {
                      v108 = v95 < v97;
                    }
                  }
                  else
                  {
                    v108 = v95 != v97;
                  }
                }
                else
                {
                  v108 = v95 == v97;
                }
                goto LABEL_215;
              }
              if ( v95 )
              {
LABEL_238:
                v108 = 1;
                goto LABEL_215;
              }
              v116 = v97 == 0;
              v108 = 0;
LABEL_237:
              if ( v116 )
                goto LABEL_215;
              goto LABEL_238;
            }
            if ( !v95 )
              goto LABEL_300;
            v31 = 0;
            if ( !v97 )
              goto LABEL_301;
            goto LABEL_251;
          }
          break;
        case 7:
          v46 = *(_DWORD *)(v173 + 32);
          if ( v46 == 7 )
          {
            v47 = *(unsigned int *)(*((_QWORD *)&v173 + 1) + 36LL);
            v48 = *(_WORD **)(v173 + 40);
            v49 = *(const WCHAR **)(*((_QWORD *)&v173 + 1) + 40LL);
            v50 = *(unsigned int *)(v173 + 36);
            Src[0] = v48;
            if ( (unsigned int)v47 > 0xFFFE || (unsigned int)v50 > 0xFFFE )
              goto LABEL_331;
            v51 = *(_DWORD *)v19;
            if ( *(int *)v19 > 15 )
            {
              v69 = v51 - 16;
              if ( !v69 )
              {
                v79 = RtlCompareUnicodeStrings(v49, v47 >> 1, v48, v50 >> 1, 1u);
                v31 = 0;
                v24 = 0LL;
                if ( v79 )
                {
                  LODWORD(v23) = 1;
                  goto LABEL_38;
                }
LABEL_301:
                if ( !v25 )
                  goto LABEL_38;
LABEL_138:
                v11 = v164;
                goto LABEL_139;
              }
              v70 = v69 - 1;
              if ( v70 )
              {
                v71 = v70 - 1;
                if ( v71 )
                {
                  v72 = v71 - 1;
                  if ( v72 )
                  {
                    if ( v72 != 1 )
                      goto LABEL_137;
                    v68 = RtlCompareUnicodeStrings(v49, v47 >> 1, v48, v50 >> 1, 1u) >= 0;
                  }
                  else
                  {
                    v68 = RtlCompareUnicodeStrings(v49, v47 >> 1, v48, v50 >> 1, 1u) <= 0;
                  }
                }
                else
                {
                  v68 = RtlCompareUnicodeStrings(v49, v47 >> 1, v48, v50 >> 1, 1u) > 0;
                }
              }
              else
              {
                v68 = RtlCompareUnicodeStrings(v49, v47 >> 1, v48, v50 >> 1, 1u) < 0;
              }
            }
            else
            {
              if ( v51 != 15 )
              {
                v52 = v51 - 1;
                if ( !v52 )
                {
LABEL_119:
                  if ( !*v49 )
                  {
                    v25 = (__int64 *)v173;
LABEL_129:
                    v31 = v22;
                    goto LABEL_184;
                  }
                  if ( !*v48 )
                  {
                    v25 = (__int64 *)*((_QWORD *)&v173 + 1);
                    goto LABEL_129;
                  }
                  if ( (unsigned __int64)(unsigned int)(v50 + v47) - 2 > 0xFFFE )
                    goto LABEL_331;
                  v162 = (unsigned __int16)(v50 + v47 - 2);
                  v62 = (wchar_t *)ExAllocatePool2(256LL, v162, 1667526736LL);
                  v160 = v62;
                  if ( !v62 )
                    goto LABEL_329;
                  v63 = v47;
                  memmove(v62, v49, v47 - 2);
                  v64 = (char *)Src[0];
                  v65 = v160 - 1;
                  goto LABEL_126;
                }
                v53 = v52 - 7;
                if ( v53 )
                {
                  v54 = v53 - 1;
                  if ( v54 )
                  {
                    v55 = v54 - 4;
                    if ( !v55 )
                    {
                      if ( (unsigned int)v47 <= 2 || (v56 = 1, (unsigned int)v50 <= 2) )
                        v56 = 0;
                      goto LABEL_98;
                    }
                    if ( v55 == 1 )
                    {
                      if ( (unsigned int)v47 > 2 || (v56 = 0, (unsigned int)v50 > 2) )
                        v56 = 1;
LABEL_98:
                      LODWORD(v23) = v56;
                      v24 = 0LL;
                      goto LABEL_37;
                    }
LABEL_137:
                    v25 = qword_140A74E68;
                    goto LABEL_138;
                  }
                  goto LABEL_119;
                }
                v159 = 0;
                if ( *v49 )
                {
                  LOWORD(v159) = 0;
                  while ( 1 )
                  {
                    v57 = -1LL;
                    do
                      ++v57;
                    while ( v49[v57] );
                    v58 = 2 * v57 + 2;
                    if ( PnpMultiSzContainsString(v48, v49) )
                    {
                      v59 = (__int64)v160;
                      if ( !v160 )
                      {
                        LOWORD(v159) = 0;
                        v59 = ExAllocatePool2(256LL, v47, 1667526736LL);
                        v160 = (wchar_t *)v59;
                        if ( !v59 )
                        {
                          RegistryValue = -1073741670;
                          v24 = 0LL;
                          goto LABEL_114;
                        }
                      }
                      v60 = v58;
                      memmove((void *)(v59 + (unsigned __int16)v159), v49, v58);
                      HIWORD(v61) = HIWORD(v159);
                      LOWORD(v61) = v58 + v159;
                      v159 = v61;
                    }
                    else
                    {
                      LOWORD(v61) = v159;
                      v60 = v58;
                    }
                    v49 += v60 >> 1;
                    if ( !*v49 )
                      break;
                    v48 = Src[0];
                  }
                  LOWORD(v159) = v61;
                  v24 = v160;
                  if ( v160 )
                  {
                    v22 = v61 + 2;
                    LOWORD(v159) = v61 + 2;
                    LOWORD(v162) = v61 + 2;
                    v160[((unsigned __int64)(unsigned __int16)(v61 + 2) >> 1) - 1] = 0;
                    goto LABEL_115;
                  }
LABEL_114:
                  v22 = v162;
                  goto LABEL_115;
                }
                v24 = 0LL;
LABEL_115:
                if ( RegistryValue < 0 )
                  goto LABEL_333;
                goto LABEL_300;
              }
              v68 = RtlCompareUnicodeStrings(v49, v47 >> 1, v48, v50 >> 1, 1u) == 0;
            }
            LODWORD(v23) = v68;
            v24 = 0LL;
            goto LABEL_37;
          }
          if ( (unsigned int)(v46 - 1) > 1 )
          {
            if ( v46 != 4 )
              goto LABEL_84;
            v80 = **(_DWORD **)(v173 + 40);
            if ( *(_DWORD *)v19 != 24 )
              goto LABEL_84;
            v81 = *(_WORD **)(*((_QWORD *)&v173 + 1) + 40LL);
            v82 = 0;
            v83 = 0;
            if ( *v81 )
            {
              while ( 1 )
              {
                v84 = -1LL;
                do
                  ++v84;
                while ( v81[v84] );
                v82 = 2 * v84 + 2;
                if ( v83 == v80 )
                  break;
                ++v83;
                v81 += (unsigned __int64)v82 >> 1;
                if ( !*v81 )
                  goto LABEL_168;
              }
            }
            else
            {
LABEL_168:
              if ( v83 != v80 )
              {
LABEL_173:
                v25 = qword_140A74E68;
                goto LABEL_114;
              }
            }
            if ( *v81 && v82 > 2 )
            {
              LOWORD(v162) = v82;
              LOWORD(v159) = v82 - 16;
              v85 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)v82, 1667526736LL);
              v24 = v85;
              if ( !v85 )
                goto LABEL_329;
              memmove(v85, v81, v82);
              goto LABEL_114;
            }
            goto LABEL_173;
          }
          v86 = *(unsigned int *)(*((_QWORD *)&v173 + 1) + 36LL);
          v87 = *(void **)(v173 + 40);
          v88 = *(const WCHAR **)(*((_QWORD *)&v173 + 1) + 40LL);
          v89 = *(unsigned int *)(v173 + 36);
          Src[0] = v87;
          if ( (unsigned int)v86 > 0xFFFE || (unsigned int)v89 > 0xFFFE )
            goto LABEL_331;
          if ( *(_DWORD *)v19 == 1 )
          {
LABEL_190:
            if ( (unsigned int)(v89 + v86) > 0xFFFE )
              goto LABEL_331;
            *(_QWORD *)&String2.Length = (unsigned __int16)(v89 + v86);
            LOWORD(v159) = v89 + v86;
            LOWORD(v162) = v89 + v86;
            v93 = (wchar_t *)ExAllocatePool2(256LL, *(_QWORD *)&String2.Length, 1667526736LL);
            if ( !v93 )
              goto LABEL_329;
            v94 = v88;
            v24 = v93;
            memmove(v93, v94, v86 - 2);
            memmove(&v24[(v86 >> 1) - 1], Src[0], v89);
            v24[(*(_QWORD *)&String2.Length >> 1) - 1] = 0;
            goto LABEL_61;
          }
          if ( *(_DWORD *)v19 != 2 )
          {
            if ( *(_DWORD *)v19 == 8 )
            {
              v31 = 0;
              if ( !PnpMultiSzContainsString(v88, (const WCHAR *)v87) )
              {
                v24 = 0LL;
                goto LABEL_301;
              }
              v25 = (__int64 *)v173;
LABEL_184:
              v24 = v160;
              goto LABEL_301;
            }
            if ( *(_DWORD *)v19 != 9 )
              goto LABEL_137;
            if ( PnpMultiSzContainsString(v88, (const WCHAR *)v87) )
            {
              v25 = (__int64 *)*((_QWORD *)&v173 + 1);
              v24 = 0LL;
              goto LABEL_300;
            }
            goto LABEL_190;
          }
          Src[0] = (void *)PnpMultiSzContainsString(v88, (const WCHAR *)v87);
          v90 = Src[0];
          if ( Src[0] )
          {
            LOWORD(v162) = v86 - v89;
            v91 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(v86 - v89), 1667526736LL);
            v160 = v91;
            if ( !v91 )
              goto LABEL_329;
            v92 = (v90 - (_BYTE *)v88) >> 1;
            if ( v92 > 0 )
            {
              memmove(v91, v88, v92);
              v91 = v160;
            }
            v67 = (char *)v91 + v92;
            v66 = (unsigned int)(v86 - v89) - v92;
            v64 = (char *)Src[0] + v89;
            goto LABEL_127;
          }
LABEL_263:
          v25 = (__int64 *)*((_QWORD *)&v173 + 1);
          goto LABEL_128;
        default:
LABEL_84:
          v25 = qword_140A74E68;
          goto LABEL_139;
      }
      v25 = qword_140A74E68;
      goto LABEL_300;
    }
    if ( (_DWORD)v21 != 3 )
      goto LABEL_37;
    switch ( *(_DWORD *)(v5 + 32) )
    {
      case 1:
      case 2:
        if ( *(_DWORD *)(v5 + 36) < 2u )
          goto LABEL_316;
        goto LABEL_322;
      case 3:
        v146 = *(_DWORD *)(v5 + 36);
        v147 = *(_BYTE **)(v5 + 40);
        if ( !v146 )
          goto LABEL_316;
        while ( !*v147++ )
        {
          if ( !--v146 )
            goto LABEL_316;
        }
        goto LABEL_322;
      case 4:
        v144 = **(_DWORD **)(v5 + 40) == 0;
        break;
      case 7:
        v145 = *(_DWORD *)(v5 + 36) > 4u;
        goto LABEL_315;
      default:
        v144 = *(_DWORD *)(v5 + 32) == 0;
        break;
    }
    v145 = !v144;
LABEL_315:
    if ( !v145 )
    {
LABEL_316:
      v25 = (__int64 *)v173;
      goto LABEL_300;
    }
LABEL_322:
    v25 = (__int64 *)*((_QWORD *)&v173 + 1);
    goto LABEL_300;
  }
  v26 = *(_DWORD *)v19;
  v27 = *(_DWORD *)v19 - 22;
  if ( !v27 )
  {
    v31 = 0;
    if ( !*(_DWORD *)(v173 + 32) )
      goto LABEL_38;
    LODWORD(v23) = 1;
    goto LABEL_301;
  }
  if ( v27 == 1 )
  {
    v31 = 0;
    LODWORD(v23) = *(_DWORD *)(v173 + 32) == 0;
    goto LABEL_38;
  }
  if ( *(_DWORD *)(v173 + 32) == 1 || *(_DWORD *)(v173 + 32) == 2 )
  {
    v42 = *(_WORD **)(v173 + 40);
    v43 = v26 - 11;
    if ( v43 )
    {
      v44 = v43 - 1;
      if ( !v44 )
      {
        v30 = *v42 == 0;
        goto LABEL_36;
      }
      v45 = v44 - 13;
      if ( !v45 )
      {
        v31 = 0;
        if ( PnpStringToDwordValue(*(_QWORD *)(v173 + 40), (unsigned int *)Src) )
          LODWORD(v23) = Src[0];
        else
          LODWORD(v23) = 0;
        goto LABEL_38;
      }
      if ( v45 != 1 )
        goto LABEL_66;
      v25 = (__int64 *)v173;
    }
    else
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v42[v23] );
    }
LABEL_300:
    v31 = v159;
    goto LABEL_301;
  }
  if ( *(_DWORD *)(v173 + 32) != 4 )
  {
    if ( *(_DWORD *)(v173 + 32) == 7 )
    {
      v28 = *(_WORD **)(v173 + 40);
      v29 = v26 - 11;
      if ( v29 )
      {
        if ( v29 == 1 )
        {
          v30 = *v28 == 0;
LABEL_36:
          LOBYTE(v23) = v30;
LABEL_37:
          v31 = 0;
          goto LABEL_38;
        }
        goto LABEL_66;
      }
      if ( !*v28 )
        goto LABEL_37;
      do
      {
        LODWORD(v23) = v23 + 1;
        v35 = -1LL;
        do
          ++v35;
        while ( v28[v35] );
        v28 += v35 + 1;
      }
      while ( *v28 );
      goto LABEL_115;
    }
LABEL_66:
    v25 = qword_140A74E68;
LABEL_139:
    LODWORD(v4) = v163;
    v15 = (__int64 *)Pool2;
    *(_QWORD *)(Pool2 + 8LL * v163) = v25;
    if ( v161 )
    {
      v73 = &v173;
      v74 = v161;
      do
      {
        v75 = *(_QWORD **)v73;
        if ( !*(_QWORD *)(*(_QWORD *)v73 + 24LL) )
        {
          v76 = (void *)v75[5];
          if ( v76 )
            ExFreePoolWithTag(v76, 0);
          ExFreePoolWithTag(v75, 0);
        }
        v73 = (__int128 *)((char *)v73 + 8);
        --v74;
      }
      while ( v74 );
      LODWORD(v4) = v163;
      v15 = (__int64 *)Pool2;
    }
    v14 = v170;
    v3 = v167;
    v5 = v169;
    goto LABEL_148;
  }
  v36 = **(_DWORD **)(v173 + 40);
  v37 = v26 - 11;
  if ( !v37 )
  {
    LODWORD(v23) = ~v36;
LABEL_61:
    v22 = v162;
    goto LABEL_300;
  }
  v38 = v37 - 1;
  if ( !v38 )
  {
    LOBYTE(v23) = v36 == 0;
    goto LABEL_58;
  }
  v39 = v38 - 13;
  if ( !v39 )
  {
    LODWORD(v23) = **(_DWORD **)(v173 + 40);
LABEL_58:
    v22 = 0;
    goto LABEL_37;
  }
  if ( v39 != 1 )
    goto LABEL_66;
  v40 = (wchar_t *)ExAllocatePool2(256LL, 22LL, 1667526736LL);
  v24 = v40;
  if ( !v40 )
    goto LABEL_329;
  RegistryValue = RtlStringCchPrintfW(v40, 0xBuLL, L"%u", v36);
  if ( RegistryValue < 0 )
  {
    ExFreePoolWithTag(v24, 0);
    v150 = v161;
    goto LABEL_335;
  }
  v41 = -1LL;
  do
    ++v41;
  while ( v24[v41] );
  v31 = 2 * v41;
  v22 = 2 * v41 + 2;
  LOWORD(v162) = v22;
LABEL_38:
  v32 = ExAllocatePool2(256LL, 48LL, 1667526736LL);
  v25 = (__int64 *)v32;
  if ( !v32 )
    goto LABEL_332;
  *(_DWORD *)(v32 + 16) = 0;
  *(_QWORD *)(v32 + 24) = 0LL;
  if ( v24 )
  {
    v33 = v22;
    v34 = 7;
    if ( v31 != (_WORD)v162 )
      v34 = 1;
    goto LABEL_326;
  }
  v34 = 4;
  v33 = 4;
  v149 = (wchar_t *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
  v24 = v149;
  if ( v149 )
  {
    *(_DWORD *)v149 = v23;
LABEL_326:
    v11 = v164;
    *((_DWORD *)v25 + 8) = v34;
    *((_DWORD *)v25 + 9) = v33;
    v25[5] = (__int64)v24;
    goto LABEL_139;
  }
LABEL_332:
  RegistryValue = -1073741670;
LABEL_333:
  v15 = (__int64 *)Pool2;
LABEL_334:
  v150 = v161;
  if ( !v161 )
    goto LABEL_345;
LABEL_335:
  v151 = v150;
  v152 = &v173;
  do
  {
    v153 = *(_QWORD **)v152;
    if ( !*(_QWORD *)(*(_QWORD *)v152 + 24LL) )
    {
      v154 = (void *)v153[5];
      if ( v154 )
        ExFreePoolWithTag(v154, 0);
      ExFreePoolWithTag(v153, 0);
    }
    v152 = (__int128 *)((char *)v152 + 8);
    --v151;
  }
  while ( v151 );
  v15 = (__int64 *)Pool2;
  if ( !Pool2 )
    goto LABEL_356;
LABEL_345:
  v78 = v163;
  if ( v163 )
  {
LABEL_346:
    v155 = (PVOID *)v15;
    v156 = v78;
    do
    {
      if ( !*((_QWORD *)*v155 + 3) )
      {
        v157 = (void *)*((_QWORD *)*v155 + 5);
        if ( v157 )
          ExFreePoolWithTag(v157, 0);
        ExFreePoolWithTag(*v155, 0);
      }
      ++v155;
      --v156;
    }
    while ( v156 );
    v15 = (__int64 *)Pool2;
  }
  ExFreePoolWithTag(v15, 0);
LABEL_356:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)RegistryValue;
}
