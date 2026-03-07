__int64 __fastcall sub_140138A9C(__int64 a1, __int64 a2)
{
  int v2; // r15d
  void *v3; // rbx
  __int64 v4; // rsi
  _QWORD *Pool2; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  const wchar_t *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rbx
  void *v26; // rsi
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  __int64 v29; // rax
  const wchar_t *v30; // rdx
  const wchar_t *v31; // rax
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  __int64 v34; // rax
  void *v35; // rsi
  const wchar_t *v36; // rdi
  const wchar_t *v37; // rax
  __int64 v38; // rax
  const wchar_t *v39; // rdx
  const wchar_t *v40; // rax
  volatile signed __int32 *v41; // rdi
  volatile signed __int32 *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  _QWORD *v47; // rax
  volatile signed __int32 *v48; // rdi
  __int64 v49; // rsi
  const wchar_t *v50; // rdi
  const wchar_t *v51; // rax
  const wchar_t *v52; // rax
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rbx
  __int64 v55; // rsi
  const wchar_t *v56; // rdi
  const wchar_t *v57; // rax
  __int64 v58; // rax
  const wchar_t *v59; // rbx
  const wchar_t *v60; // rax
  void *v61; // rdx
  void *v62; // rax
  volatile signed __int32 *v63; // rdi
  volatile signed __int32 *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rsi
  volatile signed __int32 *v69; // rdi
  __int64 v70; // rcx
  const wchar_t *v71; // rdi
  const wchar_t *v72; // rax
  __int64 v73; // rsi
  const wchar_t *v74; // rax
  volatile signed __int32 *v75; // rbx
  volatile signed __int32 *v76; // rbx
  __int64 v77; // rax
  void *v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rax
  const wchar_t *v81; // r8
  const wchar_t *v82; // rdx
  const wchar_t *v83; // rax
  volatile signed __int32 *v84; // rdi
  volatile signed __int32 *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  _QWORD *v89; // rsi
  volatile signed __int32 *v90; // rdi
  __int64 v91; // rcx
  const wchar_t *v92; // rdi
  const wchar_t *v93; // rax
  __int64 v94; // rsi
  const wchar_t *v95; // rax
  volatile signed __int32 *v96; // rbx
  volatile signed __int32 *v97; // rbx
  __int64 v98; // rax
  void *v99; // rsi
  const wchar_t *v100; // rdi
  const wchar_t *v101; // rax
  __int64 v102; // rax
  const wchar_t *v103; // rax
  volatile signed __int32 *v104; // rdi
  volatile signed __int32 *v105; // rdi
  _QWORD *v106; // rbx
  unsigned __int64 v107; // rdx
  __int64 v108; // rax
  unsigned __int64 v109; // rcx
  unsigned int v110; // edi
  const wchar_t *v111; // r12
  const wchar_t *v112; // rdi
  const wchar_t *v113; // rax
  const wchar_t *v114; // rax
  volatile signed __int32 *v115; // rbx
  volatile signed __int32 *v116; // rbx
  volatile signed __int32 *v117; // rbx
  __int64 v118; // rbx
  __int64 *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rdi
  __int64 v122; // rax
  const wchar_t *v123; // r12
  const wchar_t *v124; // rdx
  const wchar_t *v125; // rax
  volatile signed __int32 *v126; // rbx
  volatile signed __int32 *v127; // rbx
  volatile signed __int32 *v128; // rbx
  const wchar_t *v129; // r12
  const wchar_t *v130; // rdi
  const wchar_t *v131; // rax
  const wchar_t *v132; // rax
  volatile signed __int32 *v133; // rbx
  volatile signed __int32 *v134; // rbx
  volatile signed __int32 *v135; // rbx
  PVOID v136; // rbx
  __int64 v138; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v139; // [rsp+58h] [rbp-A8h]
  _QWORD *v140; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v141; // [rsp+68h] [rbp-98h]
  PVOID v142; // [rsp+70h] [rbp-90h]
  __int64 v143; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v144; // [rsp+80h] [rbp-80h]
  __int64 v145; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v146; // [rsp+90h] [rbp-70h]
  __int64 v147; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v148; // [rsp+A0h] [rbp-60h]
  __int64 v149; // [rsp+A8h] [rbp-58h]
  _BYTE v150[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v151; // [rsp+B8h] [rbp-48h]
  _BYTE v152[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v153; // [rsp+C8h] [rbp-38h]
  _BYTE v154[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v155; // [rsp+D8h] [rbp-28h]
  _BYTE v156[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v157; // [rsp+E8h] [rbp-18h]
  _BYTE v158[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v159; // [rsp+F8h] [rbp-8h]
  _BYTE v160[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v161; // [rsp+108h] [rbp+8h]
  _BYTE v162[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v163; // [rsp+118h] [rbp+18h]
  _BYTE v164[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v165; // [rsp+128h] [rbp+28h]
  _BYTE v166[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v167; // [rsp+138h] [rbp+38h]
  _BYTE v168[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v169; // [rsp+148h] [rbp+48h]
  _BYTE v170[8]; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v171; // [rsp+158h] [rbp+58h]
  _BYTE v172[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v173; // [rsp+168h] [rbp+68h]
  _BYTE v174[8]; // [rsp+170h] [rbp+70h] BYREF
  volatile signed __int32 *v175; // [rsp+178h] [rbp+78h]
  _BYTE v176[8]; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v177; // [rsp+188h] [rbp+88h]
  _BYTE v178[8]; // [rsp+190h] [rbp+90h] BYREF
  volatile signed __int32 *v179; // [rsp+198h] [rbp+98h]
  _BYTE v180[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  volatile signed __int32 *v181; // [rsp+1A8h] [rbp+A8h]
  _BYTE v182[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  volatile signed __int32 *v183; // [rsp+1B8h] [rbp+B8h]
  _BYTE v184[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  volatile signed __int32 *v185; // [rsp+1C8h] [rbp+C8h]
  _BYTE v186[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  volatile signed __int32 *v187; // [rsp+1D8h] [rbp+D8h]
  _BYTE v188[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  volatile signed __int32 *v189; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall **v190)(PVOID); // [rsp+1F0h] [rbp+F0h] BYREF
  PVOID P; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall **v192)(PVOID); // [rsp+218h] [rbp+118h] BYREF
  PVOID v193; // [rsp+228h] [rbp+128h]
  __int64 (__fastcall **v194)(PVOID); // [rsp+240h] [rbp+140h] BYREF
  PVOID v195; // [rsp+250h] [rbp+150h]
  __int64 (__fastcall **v196)(PVOID); // [rsp+268h] [rbp+168h] BYREF
  PVOID v197; // [rsp+278h] [rbp+178h]
  __int64 (__fastcall **v198)(PVOID); // [rsp+290h] [rbp+190h] BYREF
  PVOID v199; // [rsp+2A0h] [rbp+1A0h]

  v2 = 0;
  v138 = a1;
  v3 = 0LL;
  v4 = a1;
  v147 = a2;
  v142 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterNsOffload::UpdateNsParameters", v4);
      if ( v7 )
        v3 = v7;
      v142 = v3;
    }
  }
  v8 = ExAllocatePool2(64LL, 32LL, 808466017LL);
  if ( v8 )
  {
    v9 = sub_1400B4B28(v8);
    if ( v9 )
    {
      v10 = *(_QWORD **)(v9 + 16);
      if ( v10 )
      {
        v141 = (volatile signed __int32 *)v9;
        v140 = v10;
        v11 = ExAllocatePool2(64LL, 32LL, 808466018LL);
        if ( !v11 || (v12 = sub_1400B4BC0(v11, (_OWORD *)(a2 + 40))) == 0 || (v13 = *(_QWORD *)(v12 + 16)) == 0 )
        {
          v146 = 0LL;
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v118 = v4 + 56;
            v119 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v4 + 56) + 24LL))(v4 + 56, v182);
            v120 = v4 + 56;
            v121 = *v119;
            v4 = *(_QWORD *)(*(_QWORD *)(v4 + 176) + 16LL);
            v122 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v118 + 16LL))(v120, v184);
            v123 = (const wchar_t *)&unk_1400D44E0;
            v124 = (const wchar_t *)&unk_1400D44E0;
            v125 = *(const wchar_t **)(*(_QWORD *)v122 + 16LL);
            if ( v125 )
              v124 = v125;
            if ( *(_QWORD *)(v121 + 16) )
              v123 = *(const wchar_t **)(v121 + 16);
            sub_1400A3320(v4, 2u, 0xBu, 0x13u, (__int64)&unk_1400D9D48, v123, v124, L"firstTargetIpv6Address");
            LODWORD(v4) = v138;
            LOBYTE(v2) = 12;
          }
          if ( (v2 & 8) != 0 )
          {
            v126 = v183;
            LOBYTE(v2) = v2 & 0xF7;
            if ( v183 )
            {
              if ( _InterlockedExchangeAdd(v183 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v126 + 8LL))(v126);
                if ( _InterlockedExchangeAdd(v126 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v126 + 16LL))(v126);
              }
            }
          }
          if ( (v2 & 4) != 0 )
          {
            v127 = v185;
            if ( v185 )
            {
              if ( _InterlockedExchangeAdd(v185 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v127 + 8LL))(v127);
                if ( _InterlockedExchangeAdd(v127 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v127 + 16LL))(v127);
              }
            }
          }
          sub_14000B5F4(v4, (__int64)L"firstTargetIpv6Address", 167, 105);
          v110 = -1073741801;
          goto LABEL_257;
        }
        v146 = (volatile signed __int32 *)v12;
        v145 = v13;
        v14 = ExAllocatePool2(64LL, 32LL, 808476980LL);
        if ( v14 && (v15 = sub_1400B4BC0(v14, (_OWORD *)(a2 + 56))) != 0 && (v16 = *(_QWORD *)(v15 + 16)) != 0 )
        {
          v17 = v10[4];
          v144 = (volatile signed __int32 *)v15;
          v143 = v16;
          if ( v17 < v10[5] || !(unsigned int)sub_14000CDB4(v10 + 2, v17 + 1) )
          {
            v18 = v10[3];
            if ( v18 )
            {
              v19 = v10[4];
              if ( v19 < v10[5] )
              {
                sub_1400A5B28((__int64 *)(v18 + 16 * v19), &v145);
                ++v10[4];
              }
            }
          }
          v20 = v10[4];
          if ( v20 < v10[5] || !(unsigned int)sub_14000CDB4(v10 + 2, v20 + 1) )
          {
            v21 = v10[3];
            if ( v21 )
            {
              v22 = v10[4];
              if ( v22 < v10[5] )
              {
                sub_1400A5B28((__int64 *)(v21 + 16 * v22), &v143);
                ++v10[4];
              }
            }
          }
          v23 = (const wchar_t *)&unk_1400D44E0;
          if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
          {
            v25 = v4;
          }
          else
          {
            v24 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)v13 + 24LL))(
                    v13,
                    &v190);
            v25 = v138;
            v26 = &unk_1400D44E0;
            if ( *(_QWORD *)(v24 + 16) )
              v26 = *(void **)(v24 + 16);
            v27 = (const wchar_t *)&unk_1400D44E0;
            v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v138 + 56)
                                                                                             + 16LL))(
                                                   v138 + 56,
                                                   v152)
                                    + 16LL);
            if ( v28 )
              v27 = v28;
            v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v138 + 56) + 24LL))(v138 + 56, v150);
            v30 = (const wchar_t *)&unk_1400D44E0;
            v31 = *(const wchar_t **)(*(_QWORD *)v29 + 16LL);
            if ( v31 )
              v30 = v31;
            sub_1400A9338(
              *(_QWORD *)(*(_QWORD *)(v138 + 176) + 16LL),
              4u,
              0xBu,
              0x15u,
              (__int64)&unk_1400D9D48,
              v30,
              v27,
              (const wchar_t *)qword_14014EC70,
              (__int64)v26);
            v2 = 448;
          }
          if ( (v2 & 0x100) != 0 )
          {
            v32 = v151;
            v2 &= ~0x100u;
            if ( v151 )
            {
              if ( _InterlockedExchangeAdd(v151 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
                if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
              }
            }
          }
          if ( (v2 & 0x80u) != 0 )
          {
            v33 = v153;
            v2 &= ~0x80u;
            if ( v153 )
            {
              if ( _InterlockedExchangeAdd(v153 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
                if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
              }
            }
          }
          if ( (v2 & 0x40) != 0 )
          {
            v2 &= ~0x40u;
            v190 = &off_1400D41D0;
            if ( P )
              ExFreePool(P);
          }
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v2 |= 0xE00u;
            v34 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)v143 + 24LL))(
                    v143,
                    &v192);
            v35 = &unk_1400D44E0;
            if ( *(_QWORD *)(v34 + 16) )
              v35 = *(void **)(v34 + 16);
            v36 = (const wchar_t *)&unk_1400D44E0;
            v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56)
                                                                                             + 16LL))(
                                                   v25 + 56,
                                                   v156)
                                    + 16LL);
            if ( v37 )
              v36 = v37;
            v38 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56) + 24LL))(v25 + 56, v154);
            v25 = v138;
            v39 = (const wchar_t *)&unk_1400D44E0;
            v40 = *(const wchar_t **)(*(_QWORD *)v38 + 16LL);
            if ( v40 )
              v39 = v40;
            sub_1400A9338(
              *(_QWORD *)(*(_QWORD *)(v138 + 176) + 16LL),
              4u,
              0xBu,
              0x16u,
              (__int64)&unk_1400D9D48,
              v39,
              v36,
              (const wchar_t *)qword_14014EC70,
              (__int64)v35);
          }
          if ( (v2 & 0x800) != 0 )
          {
            v41 = v155;
            v2 &= ~0x800u;
            if ( v155 )
            {
              if ( _InterlockedExchangeAdd(v155 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
                if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
              }
            }
          }
          if ( (v2 & 0x400) != 0 )
          {
            v42 = v157;
            v2 &= ~0x400u;
            if ( v157 )
            {
              if ( _InterlockedExchangeAdd(v157 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
                if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
              }
            }
          }
          if ( (v2 & 0x200) != 0 )
          {
            v2 &= ~0x200u;
            v192 = &off_1400D41D0;
            if ( v193 )
              ExFreePool(v193);
          }
          v43 = ExAllocatePool2(64LL, 32LL, 808466019LL);
          if ( !v43 || (v44 = sub_1400B4A60(v43, v147 + 72), (v45 = v44) == 0) || (v46 = *(_QWORD *)(v44 + 16)) == 0 )
          {
            v46 = 0LL;
            v45 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
          }
          v47 = v140;
          v48 = (volatile signed __int32 *)v140[1];
          v140[1] = v45;
          *v47 = v46;
          if ( v48 )
          {
            if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
              if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
            }
          }
          v149 = *v140;
          if ( v149 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v2 |= 0x1C000u;
              v55 = *(_QWORD *)(*(_QWORD *)(v25 + 176) + 16LL);
              v56 = (const wchar_t *)&unk_1400D44E0;
              v57 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56)
                                                                                               + 16LL))(
                                                     v25 + 56,
                                                     v162)
                                      + 16LL);
              if ( v57 )
                v56 = v57;
              v58 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56) + 24LL))(v25 + 56, v160);
              v59 = (const wchar_t *)&unk_1400D44E0;
              v60 = *(const wchar_t **)(*(_QWORD *)v58 + 16LL);
              if ( v60 )
                v59 = v60;
              v61 = *(void **)((*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)v149 + 24LL))(
                                 v149,
                                 &v194)
                             + 16);
              v62 = &unk_1400D44E0;
              if ( v61 )
                v62 = v61;
              sub_1400A9338(
                v55,
                4u,
                0xBu,
                0x18u,
                (__int64)&unk_1400D9D48,
                v59,
                v56,
                (const wchar_t *)qword_14014EC70,
                (__int64)v62);
              v25 = v138;
            }
            if ( (v2 & 0x10000) != 0 )
            {
              v63 = v161;
              v2 &= ~0x10000u;
              if ( v161 )
              {
                if ( _InterlockedExchangeAdd(v161 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
                  if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
                }
              }
            }
            if ( (v2 & 0x8000) != 0 )
            {
              v64 = v163;
              v2 &= ~0x8000u;
              if ( v163 )
              {
                if ( _InterlockedExchangeAdd(v163 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
                  if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
                }
              }
            }
            if ( (v2 & 0x4000) != 0 )
            {
              v2 &= ~0x4000u;
              v194 = &off_1400D41D0;
              if ( v195 )
                ExFreePool(v195);
            }
            v65 = ExAllocatePool2(64LL, 32LL, 808466020LL);
            if ( !v65 || (v66 = sub_1400B4BC0(v65, (_OWORD *)(v147 + 8))) == 0 || (v67 = *(_QWORD *)(v66 + 16)) == 0 )
            {
              v67 = 0LL;
              v66 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
            }
            v68 = v140;
            v69 = (volatile signed __int32 *)v140[9];
            v140[9] = v66;
            v68[8] = v67;
            if ( v69 )
            {
              if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
                if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
              }
            }
            v70 = v68[8];
            if ( v70 )
            {
              if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v2 |= 0x380000u;
                v77 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)v70 + 24LL))(
                        v70,
                        &v196);
                v78 = &unk_1400D44E0;
                if ( *(_QWORD *)(v77 + 16) )
                  v78 = *(void **)(v77 + 16);
                v79 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56) + 16LL))(
                                   v25 + 56,
                                   v170);
                v80 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56) + 24LL))(v25 + 56, v168);
                v25 = v138;
                v81 = (const wchar_t *)&unk_1400D44E0;
                v82 = (const wchar_t *)&unk_1400D44E0;
                v83 = *(const wchar_t **)(*(_QWORD *)v80 + 16LL);
                if ( v83 )
                  v81 = v83;
                if ( *(_QWORD *)(v79 + 16) )
                  v82 = *(const wchar_t **)(v79 + 16);
                sub_1400A9338(
                  *(_QWORD *)(*(_QWORD *)(v138 + 176) + 16LL),
                  4u,
                  0xBu,
                  0x1Au,
                  (__int64)&unk_1400D9D48,
                  v81,
                  v82,
                  (const wchar_t *)qword_14014EC70,
                  (__int64)v78);
              }
              if ( (v2 & 0x200000) != 0 )
              {
                v84 = v169;
                v2 &= ~0x200000u;
                if ( v169 )
                {
                  if ( _InterlockedExchangeAdd(v169 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 8LL))(v84);
                    if ( _InterlockedExchangeAdd(v84 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 16LL))(v84);
                  }
                }
              }
              if ( (v2 & 0x100000) != 0 )
              {
                v85 = v171;
                v2 &= ~0x100000u;
                if ( v171 )
                {
                  if ( _InterlockedExchangeAdd(v171 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
                    if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 16LL))(v85);
                  }
                }
              }
              if ( (v2 & 0x80000) != 0 )
              {
                v2 &= ~0x80000u;
                v196 = &off_1400D41D0;
                if ( v197 )
                  ExFreePool(v197);
              }
              v86 = ExAllocatePool2(64LL, 32LL, 808466021LL);
              if ( !v86 || (v87 = sub_1400B4BC0(v86, (_OWORD *)(v147 + 24))) == 0 || (v88 = *(_QWORD *)(v87 + 16)) == 0 )
              {
                v88 = 0LL;
                v87 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
              }
              v89 = v140;
              v90 = (volatile signed __int32 *)v140[7];
              v140[7] = v87;
              v89[6] = v88;
              if ( v90 )
              {
                if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 8LL))(v90);
                  if ( _InterlockedExchangeAdd(v90 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 16LL))(v90);
                }
              }
              v91 = v89[6];
              if ( v91 )
              {
                if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                {
                  v2 |= 0x7000000u;
                  v98 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(PVOID)))(*(_QWORD *)v91 + 24LL))(
                          v91,
                          &v198);
                  v99 = &unk_1400D44E0;
                  if ( *(_QWORD *)(v98 + 16) )
                    v99 = *(void **)(v98 + 16);
                  v100 = (const wchar_t *)&unk_1400D44E0;
                  v101 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56) + 16LL))(
                                                          v25 + 56,
                                                          v178)
                                           + 16LL);
                  if ( v101 )
                    v100 = v101;
                  v102 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56) + 24LL))(v25 + 56, v176);
                  v25 = v138;
                  v103 = *(const wchar_t **)(*(_QWORD *)v102 + 16LL);
                  if ( v103 )
                    v23 = v103;
                  sub_1400A9338(
                    *(_QWORD *)(*(_QWORD *)(v138 + 176) + 16LL),
                    4u,
                    0xBu,
                    0x1Cu,
                    (__int64)&unk_1400D9D48,
                    v23,
                    v100,
                    (const wchar_t *)qword_14014EC70,
                    (__int64)v99);
                }
                if ( (v2 & 0x4000000) != 0 )
                {
                  v104 = v177;
                  v2 &= ~0x4000000u;
                  if ( v177 )
                  {
                    if ( _InterlockedExchangeAdd(v177 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v104 + 8LL))(v104);
                      if ( _InterlockedExchangeAdd(v104 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v104 + 16LL))(v104);
                    }
                  }
                }
                if ( (v2 & 0x2000000) != 0 )
                {
                  v105 = v179;
                  v2 &= ~0x2000000u;
                  if ( v179 )
                  {
                    if ( _InterlockedExchangeAdd(v179 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v105 + 8LL))(v105);
                      if ( _InterlockedExchangeAdd(v105 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v105 + 16LL))(v105);
                    }
                  }
                }
                if ( (v2 & 0x1000000) != 0 )
                {
                  v198 = &off_1400D41D0;
                  if ( v199 )
                    ExFreePool(v199);
                }
                v106 = (_QWORD *)(v25 + 400);
                v107 = v106[2];
                if ( v107 < v106[3] || !(unsigned int)sub_14000CDB4(v106, v107 + 1) )
                {
                  v108 = v106[1];
                  if ( v108 )
                  {
                    v109 = v106[2];
                    if ( v109 < v106[3] )
                    {
                      sub_1400A5B28((__int64 *)(v108 + 16 * v109), (__int64 *)&v140);
                      ++v106[2];
                    }
                  }
                }
                v110 = 0;
                goto LABEL_236;
              }
              if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
              {
                v94 = v138;
              }
              else
              {
                v2 |= 0xC00000u;
                v92 = (const wchar_t *)&unk_1400D44E0;
                v93 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56)
                                                                                                 + 16LL))(
                                                       v25 + 56,
                                                       v174)
                                        + 16LL);
                if ( v93 )
                  v92 = v93;
                v94 = v138;
                v95 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56)
                                                                                                 + 24LL))(
                                                       v25 + 56,
                                                       v172)
                                        + 16LL);
                if ( v95 )
                  v23 = v95;
                sub_1400A3320(
                  *(_QWORD *)(*(_QWORD *)(v138 + 176) + 16LL),
                  2u,
                  0xBu,
                  0x1Bu,
                  (__int64)&unk_1400D9D48,
                  v23,
                  v92,
                  L"hardwareNsOffloadParameters->solicitedNodeIPv6Address");
              }
              if ( (v2 & 0x800000) != 0 )
              {
                v96 = v173;
                v2 &= ~0x800000u;
                if ( v173 )
                {
                  if ( _InterlockedExchangeAdd(v173 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v96 + 8LL))(v96);
                    if ( _InterlockedExchangeAdd(v96 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v96 + 16LL))(v96);
                  }
                }
              }
              if ( (v2 & 0x400000) != 0 )
              {
                v97 = v175;
                if ( v175 )
                {
                  if ( _InterlockedExchangeAdd(v175 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v97 + 8LL))(v97);
                    if ( _InterlockedExchangeAdd(v97 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v97 + 16LL))(v97);
                  }
                }
              }
              sub_14008F7D8(v94, (__int64)L"hardwareNsOffloadParameters->solicitedNodeIPv6Address", 186, 105);
            }
            else
            {
              if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
              {
                v73 = v138;
              }
              else
              {
                v2 |= 0x60000u;
                v71 = (const wchar_t *)&unk_1400D44E0;
                v72 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56)
                                                                                                 + 16LL))(
                                                       v25 + 56,
                                                       v166)
                                        + 16LL);
                if ( v72 )
                  v71 = v72;
                v73 = v138;
                v74 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56)
                                                                                                 + 24LL))(
                                                       v25 + 56,
                                                       v164)
                                        + 16LL);
                if ( v74 )
                  v23 = v74;
                sub_1400A3320(
                  *(_QWORD *)(*(_QWORD *)(v138 + 176) + 16LL),
                  2u,
                  0xBu,
                  0x19u,
                  (__int64)&unk_1400D9D48,
                  v23,
                  v71,
                  L"hardwareNsOffloadParameters->remoteIPv6Address");
              }
              if ( (v2 & 0x40000) != 0 )
              {
                v75 = v165;
                v2 &= ~0x40000u;
                if ( v165 )
                {
                  if ( _InterlockedExchangeAdd(v165 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 8LL))(v75);
                    if ( _InterlockedExchangeAdd(v75 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 16LL))(v75);
                  }
                }
              }
              if ( (v2 & 0x20000) != 0 )
              {
                v76 = v167;
                if ( v167 )
                {
                  if ( _InterlockedExchangeAdd(v167 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 8LL))(v76);
                    if ( _InterlockedExchangeAdd(v76 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 16LL))(v76);
                  }
                }
              }
              sub_14008F700(v73, (__int64)L"hardwareNsOffloadParameters->remoteIPv6Address", 182, 105);
            }
          }
          else
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              LOWORD(v2) = v2 | 0x3000;
              v49 = *(_QWORD *)(*(_QWORD *)(v25 + 176) + 16LL);
              v50 = (const wchar_t *)&unk_1400D44E0;
              v51 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v25 + 56)
                                                                                                 + 24LL))(
                                                     v25 + 56,
                                                     &v147)
                                      + 16LL);
              if ( v51 )
                v50 = v51;
              v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v25 + 56)
                                                                                               + 16LL))(
                                                     v25 + 56,
                                                     v158)
                                      + 16LL);
              if ( v52 )
                v23 = v52;
              sub_1400A3320(
                v49,
                2u,
                0xBu,
                0x17u,
                (__int64)&unk_1400D9D48,
                v50,
                v23,
                L"hardwareNsOffloadParameters->localMacAddress");
            }
            if ( (v2 & 0x2000) != 0 )
            {
              v53 = v148;
              LOWORD(v2) = v2 & 0xDFFF;
              if ( v148 )
              {
                if ( _InterlockedExchangeAdd(v148 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
                  if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
                }
              }
            }
            if ( (v2 & 0x1000) != 0 )
            {
              v54 = v159;
              if ( v159 )
              {
                if ( _InterlockedExchangeAdd(v159 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
                  if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
                }
              }
            }
            sub_14008F628(v138, (__int64)L"hardwareNsOffloadParameters->localMacAddress", 178, 105);
          }
        }
        else
        {
          v144 = 0LL;
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v111 = (const wchar_t *)&unk_1400D44E0;
            v112 = (const wchar_t *)&unk_1400D44E0;
            v113 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v4 + 56)
                                                                                              + 16LL))(
                                                    v4 + 56,
                                                    v180)
                                     + 16LL);
            if ( v113 )
              v112 = v113;
            v114 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v4 + 56)
                                                                                                + 24LL))(
                                                    v4 + 56,
                                                    &v138)
                                     + 16LL);
            if ( v114 )
              v111 = v114;
            sub_1400A3320(
              *(_QWORD *)(*(_QWORD *)(v4 + 176) + 16LL),
              2u,
              0xBu,
              0x14u,
              (__int64)&unk_1400D9D48,
              v111,
              v112,
              L"secondTargetIpv6Address");
            LOBYTE(v2) = 48;
          }
          if ( (v2 & 0x20) != 0 )
          {
            v115 = v139;
            LOBYTE(v2) = v2 & 0xDF;
            if ( v139 )
            {
              if ( _InterlockedExchangeAdd(v139 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v115 + 8LL))(v115);
                if ( _InterlockedExchangeAdd(v115 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v115 + 16LL))(v115);
              }
            }
          }
          if ( (v2 & 0x10) != 0 )
          {
            v116 = v181;
            if ( v181 )
            {
              if ( _InterlockedExchangeAdd(v181 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v116 + 8LL))(v116);
                if ( _InterlockedExchangeAdd(v116 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v116 + 16LL))(v116);
              }
            }
          }
          sub_14008E02C(v4, (__int64)L"secondTargetIpv6Address", 170, 105);
        }
        v110 = -1073741801;
LABEL_236:
        if ( v144 )
        {
          if ( _InterlockedExchangeAdd(v144 + 2, 0xFFFFFFFF) == 1 )
          {
            v117 = v144;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v144 + 8LL))(v144);
            if ( _InterlockedExchangeAdd(v117 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v144 + 16LL))(v144);
          }
        }
LABEL_257:
        if ( v146 )
        {
          if ( _InterlockedExchangeAdd(v146 + 2, 0xFFFFFFFF) == 1 )
          {
            v128 = v146;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v146 + 8LL))(v146);
            if ( _InterlockedExchangeAdd(v128 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v146 + 16LL))(v146);
          }
        }
        goto LABEL_278;
      }
    }
  }
  v141 = 0LL;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v129 = (const wchar_t *)&unk_1400D44E0;
    v130 = (const wchar_t *)&unk_1400D44E0;
    v131 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v4 + 56) + 16LL))(
                                            v4 + 56,
                                            v188)
                             + 16LL);
    if ( v131 )
      v130 = v131;
    v132 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v4 + 56) + 24LL))(
                                            v4 + 56,
                                            v186)
                             + 16LL);
    if ( v132 )
      v129 = v132;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(v4 + 176) + 16LL),
      2u,
      0xBu,
      0x12u,
      (__int64)&unk_1400D9D48,
      v129,
      v130,
      L"hardwareNsOffloadParameters");
    LOBYTE(v2) = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v133 = v187;
    LOBYTE(v2) = v2 & 0xFD;
    if ( v187 )
    {
      if ( _InterlockedExchangeAdd(v187 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v133 + 8LL))(v133);
        if ( _InterlockedExchangeAdd(v133 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v133 + 16LL))(v133);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v134 = v189;
    if ( v189 )
    {
      if ( _InterlockedExchangeAdd(v189 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v134 + 8LL))(v134);
        if ( _InterlockedExchangeAdd(v134 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v134 + 16LL))(v134);
      }
    }
  }
  sub_14000B7A4(v4, (__int64)L"hardwareNsOffloadParameters", 164, 105);
  v110 = -1073741801;
LABEL_278:
  if ( v141 )
  {
    if ( _InterlockedExchangeAdd(v141 + 2, 0xFFFFFFFF) == 1 )
    {
      v135 = v141;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v141 + 8LL))(v141);
      if ( _InterlockedExchangeAdd(v135 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v141 + 16LL))(v141);
    }
  }
  v136 = v142;
  if ( v142 )
  {
    sub_140075108((__int64 *)v142);
    ExFreePool(v136);
  }
  return v110;
}
