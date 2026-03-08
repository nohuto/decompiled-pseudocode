/*
 * XREFs of sub_140B0F1A0 @ 0x140B0F1A0
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x1403ED6A8 (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     $$ba @ 0x140B0E898 ($$ba.c)
 *     SdbpCheckDll @ 0x140B104F0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140B107B0 (KeGuardCheckICall.c)
 */

__int64 __fastcall sub_140B0F1A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rax
  int v6; // ecx
  int v7; // esi
  _QWORD *v8; // r9
  int v9; // r10d
  const char *v10; // rax
  __int64 v11; // r11
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // ecx
  unsigned int *v26; // rax
  int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // r8
  unsigned int v30; // r9d
  int *v31; // rbx
  __int64 v32; // r10
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  bool v38; // zf
  __int64 v39; // rax
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  _QWORD *v44; // r11
  int v45; // r14d
  unsigned int v46; // eax
  __int64 v47; // r8
  unsigned __int64 v48; // r15
  _QWORD *v49; // r9
  const char *v50; // rax
  unsigned __int64 v51; // rsi
  unsigned int v52; // r10d
  __int64 v53; // rax
  __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 i; // rax
  unsigned int v60; // esi
  BOOL v61; // r12d
  __int64 v62; // rcx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // r15
  int v66; // eax
  __int64 v67; // r13
  __int64 v68; // rbx
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // r12
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v72; // r14
  __int64 v73; // r15
  unsigned __int64 v74; // r8
  unsigned int v75; // r9d
  unsigned __int64 v76; // r10
  _QWORD *j; // rdx
  unsigned __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rsi
  _QWORD *v83; // rcx
  char *v84; // r9
  int v85; // r11d
  unsigned __int64 v86; // rbx
  signed __int64 v87; // r9
  __int64 v88; // r8
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rcx
  _QWORD *v91; // r9
  unsigned __int64 v92; // rax
  unsigned __int128 v93; // rax
  __int64 v94; // rdx
  char *v95; // rdx
  _QWORD *v96; // rcx
  __int64 v97; // r8
  char v98; // al
  unsigned __int64 v99; // rdx
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  volatile signed __int32 *v106; // rax
  signed __int32 v107[8]; // [rsp+8h] [rbp-79h] BYREF
  __int64 v108; // [rsp+48h] [rbp-39h]
  unsigned int v109; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v110; // [rsp+58h] [rbp-29h]
  unsigned __int64 v111; // [rsp+60h] [rbp-21h]
  __int64 v112; // [rsp+68h] [rbp-19h]
  __int16 v113; // [rsp+70h] [rbp-11h] BYREF
  __int64 v114; // [rsp+72h] [rbp-Fh]
  char v115; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v116[16]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v117; // [rsp+98h] [rbp+17h]
  unsigned __int64 v118; // [rsp+A0h] [rbp+1Fh]
  unsigned __int64 v119; // [rsp+A8h] [rbp+27h]
  __int64 v120; // [rsp+B0h] [rbp+2Fh]

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 2448) & 0x110000) != 0x110000 )
  {
    v3 = *(_QWORD *)(a2 + 2272);
    v4 = 38LL;
    v5 = (_QWORD *)v3;
    v6 = 304;
    do
    {
      *v5 = 0LL;
      v6 -= 8;
      ++v5;
      --v4;
    }
    while ( v4 );
    for ( ; v6; --v6 )
    {
      *(_BYTE *)v5 = 0;
      v5 = (_QWORD *)((char *)v5 + 1);
    }
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v2 + 2120);
    *(_OWORD *)(v3 + 32) = *(_OWORD *)(v2 + 2136);
    *(_OWORD *)(v3 + 288) = *(_OWORD *)(v2 + 2152);
    v113 = 303;
    v114 = v3;
    *(_WORD *)(v3 + 16) = v2 + 2168;
    *(_DWORD *)(v3 + 24) = (unsigned __int64)(v2 + 2168) >> 32;
    *(_WORD *)(v3 + 22) = (unsigned int)(v2 + 2168) >> 16;
    _disable();
    if ( *(int *)(v2 + 2448) >= 0 )
    {
      __sidt(v116);
      __lidt(&v113);
      __writedr(7u, 0LL);
      __lidt(v116);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  *(_DWORD *)(v2 + 2088) += 1576;
  v7 = *(_DWORD *)(v2 + 196);
  v8 = (_QWORD *)v2;
  v9 = *(_DWORD *)(v2 + 2068);
  v10 = (const char *)v2;
  v11 = *(_QWORD *)(v2 + 2072);
  *(_DWORD *)(v2 + 196) = 0;
  if ( v2 < (unsigned __int64)(v2 + 1576) )
  {
    do
    {
      _mm_prefetch(v10, 0);
      v10 += 64;
    }
    while ( (unsigned __int64)v10 < v2 + 1576 );
  }
  v12 = v11;
  v13 = 12;
  do
  {
    v14 = 8LL;
    do
    {
      v15 = *v8 ^ v12;
      v16 = v8 + 1;
      v17 = *v16 ^ __ROL8__(v15, v9);
      v8 = v16 + 1;
      v12 = __ROL8__(v17, v9);
      --v14;
    }
    while ( v14 );
    v18 = __ROL8__(v11 ^ ((unsigned __int64)v8 - v2), 17) ^ v11 ^ ((unsigned __int64)v8 - v2);
    v117 = (v18 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v9 = ((unsigned __int8)(v117 ^ v18) ^ (unsigned __int8)v9) & 0x3F;
    if ( !v9 )
      LOBYTE(v9) = 1;
    --v13;
  }
  while ( v13 );
  v19 = 40;
  v20 = 5LL;
  v21 = 64;
  do
  {
    v12 = __ROL8__(*v8++ ^ v12, v9);
    v19 -= 8;
    --v20;
  }
  while ( v20 );
  for ( ; v19; --v19 )
  {
    v22 = *(unsigned __int8 *)v8;
    v8 = (_QWORD *)((char *)v8 + 1);
    v12 = __ROL8__(v22 ^ v12, v9);
  }
  v23 = 0xA3A03F5891C8B4E8uLL;
  *(_DWORD *)(v2 + 196) = v7;
  if ( *(_QWORD *)(v2 + 2592) != v12 )
  {
    v24 = *(_QWORD *)(v2 + 1416);
    v25 = *(_DWORD *)(v2 + 2020);
    *(_QWORD *)v24 = v2;
    *(_DWORD *)(v24 + 16) = v25;
    if ( !*(_DWORD *)(v2 + 2296) )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = *(_QWORD *)(v2 + 2592) ^ v12;
      if ( !*(_DWORD *)(v2 + 2296) )
      {
        *(_QWORD *)(v2 + 2312) = 0LL;
        *(_QWORD *)(v2 + 2304) = v2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v2 + 2320) = 265LL;
        *(_QWORD *)(v2 + 2328) = v12;
        *(_DWORD *)(v2 + 2296) = 1;
        __ba(v2, 0LL);
      }
    }
  }
  v108 = 0LL;
  v26 = &v109;
  v27 = 4;
  do
  {
    *(_BYTE *)v26 = 0;
    v26 = (unsigned int *)((char *)v26 + 1);
    --v27;
  }
  while ( v27 );
  v28 = 0;
  LODWORD(v110) = 0;
  if ( *(_DWORD *)(v2 + 2016) )
  {
    while ( 1 )
    {
      v29 = v2;
      v30 = 0;
      if ( *(_QWORD *)(v2 + 2680) )
        v29 = *(_QWORD *)(v2 + 2680);
      v31 = (int *)(v29 + *(unsigned int *)(v29 + 2056));
      if ( (_DWORD)v108 && HIDWORD(v108) <= v28 )
      {
        v30 = HIDWORD(v108);
        v31 = (int *)(v29 + v109);
      }
      if ( v30 != v28 )
        break;
LABEL_58:
      v44 = (_QWORD *)*((_QWORD *)v31 + 1);
      v45 = *(_DWORD *)(v2 + 2068);
      v46 = (_DWORD)v31 - v29;
      v47 = (unsigned int)v31[4];
      *(_DWORD *)(v2 + 2088) += v47;
      v48 = *(_QWORD *)(v2 + 2072);
      HIDWORD(v108) = v30;
      v49 = v44;
      v109 = v46;
      LODWORD(v108) = 1;
      v50 = (const char *)v44;
      if ( v44 < (_QWORD *)((char *)v44 + v47) )
      {
        do
        {
          _mm_prefetch(v50, 0);
          v50 += 64;
        }
        while ( v50 < (const char *)v44 + v47 );
      }
      v51 = v48;
      v52 = (unsigned int)v47 >> 7;
      if ( (unsigned int)v47 >> 7 )
      {
        do
        {
          v53 = 8LL;
          do
          {
            v54 = v49[1] ^ __ROL8__(*v49 ^ v51, v45);
            v49 += 2;
            v51 = __ROL8__(v54, v45);
            --v53;
          }
          while ( v53 );
          v55 = __ROL8__(v48 ^ ((char *)v49 - (char *)v44), 17) ^ v48 ^ ((char *)v49 - (char *)v44);
          v23 = (v55 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v118 = v23;
          v45 = ((unsigned __int8)(v23 ^ v55) ^ (unsigned __int8)v45) & 0x3F;
          if ( !v45 )
            LOBYTE(v45) = 1;
          --v52;
        }
        while ( v52 );
        v2 = a2;
      }
      v56 = v47 & 0x7F;
      if ( (unsigned int)v56 >= 8 )
      {
        v57 = (unsigned __int64)(unsigned int)v56 >> 3;
        do
        {
          v51 = __ROL8__(*v49++ ^ v51, v45);
          v56 = (unsigned int)(v56 - 8);
          --v57;
        }
        while ( v57 );
      }
      if ( (_DWORD)v56 )
      {
        do
        {
          v58 = *(unsigned __int8 *)v49;
          v49 = (_QWORD *)((char *)v49 + 1);
          v51 = __ROL8__(v58 ^ v51, v45);
          v38 = (_DWORD)v56 == 1;
          v56 = (unsigned int)(v56 - 1);
        }
        while ( !v38 );
      }
      for ( i = v51; ; LODWORD(v51) = i ^ v51 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v60 = v51 & 0x7FFFFFFF;
      v61 = 0;
      if ( v60 != v31[5] )
      {
        if ( !*v31 )
          v61 = v31[6] != 0;
        v62 = (unsigned int)v31[4];
        v23 = *((_QWORD *)v31 + 1);
        if ( v31[4] && (*(_DWORD *)(v2 + 2452) & 0x40) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v64 = v23 & 0xFFFFFFFFFFFFF000uLL;
          v112 = (v23 + v62 - 1) | 0xFFF;
          v111 = (v23 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v65 = CurrentIrql;
            while ( 1 )
            {
              v66 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v2 + 1128))(
                      v64,
                      0LL,
                      v56,
                      v49);
              if ( v66 != -1073741267 )
                break;
              if ( v61 )
                goto LABEL_101;
              if ( CurrentIrql > 1u )
                goto LABEL_87;
              v65 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v66 < 0 )
            {
LABEL_101:
              __writecr8(v65);
              goto LABEL_102;
            }
LABEL_87:
            v23 = 4096LL;
            v64 += 4096LL;
            v111 += 4096LL;
            if ( v111 != v112 )
              continue;
            break;
          }
          __writecr8(v65);
        }
        else
        {
LABEL_102:
          if ( !*(_DWORD *)(v2 + 2296) )
          {
            *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = v60 ^ (unsigned __int64)(unsigned int)v31[5];
            v79 = *((_QWORD *)v31 + 1);
            if ( !*(_DWORD *)(v2 + 2296) )
            {
              *(_QWORD *)(v2 + 2304) = v2 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v2 + 2312) = (char *)v31 - 0x4C48B4211BBACBEBLL;
              v80 = *v31;
              *(_QWORD *)(v2 + 2328) = v79;
              *(_QWORD *)(v2 + 2320) = v80;
              *(_DWORD *)(v2 + 2296) = 1;
              __ba(v2, 0LL);
            }
          }
        }
      }
      v21 = 64;
      v28 = v110 + 1;
      LODWORD(v110) = v28;
      if ( v28 >= *(_DWORD *)(v2 + 2016) )
        goto LABEL_90;
    }
    v32 = v28 - v30;
    v30 = v28;
    while ( 1 )
    {
      v33 = *v31;
      if ( *v31 > 28 )
      {
        v41 = v33 - 30;
        if ( !v41 )
        {
          v23 = ((v31[9] != 0 ? v31[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
          v39 = (unsigned int)v23 + 24 * (*((unsigned __int16 *)v31 + 20) + 2);
          goto LABEL_57;
        }
        v42 = v41 - 3;
        if ( !v42 || (v43 = v42 - 1) == 0 )
        {
          v23 = ((v31[8] & 0xFFF) + (unsigned __int64)(unsigned int)v31[10] + 4095) >> 12;
          v39 = (unsigned int)(20 * v23 + 48);
          goto LABEL_57;
        }
        v38 = v43 == 9;
      }
      else
      {
        if ( v33 == 28 )
        {
          v40 = *((unsigned __int16 *)v31 + 20);
          goto LABEL_45;
        }
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_54;
        v35 = v34 - 6;
        if ( !v35 )
        {
          v39 = (unsigned int)(24 * (v31[6] + 2));
          goto LABEL_57;
        }
        v36 = v35 - 1;
        if ( !v36 )
        {
          v40 = *((unsigned __int16 *)v31 + 16);
LABEL_45:
          v39 = (v40 + 55) & 0xFFFFFFF8;
          goto LABEL_57;
        }
        v37 = v36 - 2;
        if ( !v37 )
        {
          v39 = (unsigned int)(16 * (v31[7] + 3));
          goto LABEL_57;
        }
        v38 = v37 == 2;
      }
      if ( v38 )
      {
LABEL_54:
        v23 = (unsigned int)v31[4] / 0xCuLL;
        v39 = (unsigned int)(4 * v23 + 48);
        goto LABEL_57;
      }
      v39 = 48LL;
LABEL_57:
      v31 = (int *)((char *)v31 + v39);
      if ( !--v32 )
        goto LABEL_58;
    }
  }
LABEL_90:
  if ( *(_DWORD *)(v2 + 2296) )
  {
    v67 = *(_QWORD *)(v2 + 2320);
    v68 = *(_QWORD *)(v2 + 2328);
    v69 = *(_QWORD *)(v2 + 2312);
    v70 = *(_QWORD *)(v2 + 2304);
    v112 = v68;
    v111 = v69;
    v110 = v70;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v72 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1600));
    v73 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1616));
    if ( !*((_BYTE *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1608))
      || (unsigned __int64)&v115 > v72
      || (unsigned __int64)&v115 < v72 - 24576 )
    {
      v72 = *(_QWORD *)(v73 + *(_QWORD *)(v2 + 1664));
    }
    if ( (*(_DWORD *)(v2 + 2448) & 0x8000000) == 0 )
    {
      v70 = __readcr0();
      __writecr0(v70 & 0xFFFFFFFFFFFEFFFFuLL);
      v74 = v2 + 2728;
      v75 = 0;
      v76 = v2 + 2728 + 16LL * *(unsigned int *)(v2 + 2720);
      for ( j = (_QWORD *)v76; v75 < *(_DWORD *)(v2 + 2724); ++v75 )
      {
        *(_QWORD *)*j = j[1];
        v78 = __readcr4();
        if ( (v78 & 0x20080) != 0 )
        {
          __writecr4(v78 ^ 0x80);
          __writecr4(v78);
        }
        else
        {
          v81 = __readcr3();
          __writecr3(v81);
        }
        j += 2;
      }
      if ( v74 < v76 )
      {
        do
        {
          v82 = *(unsigned int *)(v74 + 8);
          v83 = j;
          v84 = *(char **)v74;
          v85 = v82;
          if ( (unsigned int)v82 >= 8 )
          {
            v86 = (unsigned __int64)(unsigned int)v82 >> 3;
            do
            {
              v85 -= 8;
              *(_QWORD *)v84 = *v83++;
              v84 += 8;
              --v86;
            }
            while ( v86 );
          }
          if ( v85 )
          {
            v87 = v84 - (char *)v83;
            do
            {
              *((_BYTE *)v83 + v87) = *(_BYTE *)v83;
              v83 = (_QWORD *)((char *)v83 + 1);
              --v85;
            }
            while ( v85 );
          }
          j = (_QWORD *)((char *)j + v82);
          v74 += 16LL;
        }
        while ( v74 < v76 );
        LODWORD(v68) = v112;
        LODWORD(v69) = v111;
      }
      **(_BYTE **)(v2 + 536) = -61;
      __writecr0(v70);
      LODWORD(v70) = v110;
    }
    v101 = *(_DWORD *)(v2 + 2344);
    if ( v101 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v101 = *(_DWORD *)(v2 + 2344);
      }
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
                if ( v105 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1616)),
                    (*(_DWORD *)(v2 + 2448) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2 + 1456) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*(_QWORD *)(v2 + 1712)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1616))
                                              + *(_QWORD *)(v2 + 1680)),
                  (*(_DWORD *)(v2 + 2448) >> 10) & 0x1F);
              }
              goto LABEL_150;
            }
            v106 = *(volatile signed __int32 **)(v2 + 1368);
          }
          else
          {
            v106 = *(volatile signed __int32 **)(v2 + 1360);
          }
        }
        else
        {
          v106 = *(volatile signed __int32 **)(v2 + 1344);
        }
        _interlockedbittestandset64(v106, 0LL);
      }
    }
LABEL_150:
    *(_QWORD *)(v73 + *(_QWORD *)(v2 + 1688)) = 0LL;
    *(_QWORD *)(v73 + *(_QWORD *)(v2 + 1704)) = 0LL;
    SdbpCheckDll(265, v70, v69, v68, v67, *(_QWORD *)(v2 + 344), v72);
    JUMPOUT(0x140B0FCA4LL);
  }
  v88 = v2 + *(unsigned int *)(v2 + 2032);
  if ( (*(_DWORD *)(v2 + 2448) & 0x10000000) != 0 )
  {
    v89 = __rdtsc();
    v90 = __ROR8__(v89, 3) ^ v89;
    v23 = (v90 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v119 = v23;
    v88 = (__int64)KiMachineCheckControl + 16 * (((unsigned __int8)v90 ^ (unsigned __int8)v23) & 0xF);
  }
  v91 = *(_QWORD **)(v2 + 2568);
  if ( v91 )
  {
    v92 = __rdtsc();
    v93 = (__ROR8__(v92, 3) ^ v92) * (unsigned __int128)0x7010008004002001uLL;
    v120 = *((_QWORD *)&v93 + 1);
    *((_QWORD *)&v93 + 1) ^= v93;
    v91[2] = *((_QWORD *)&v93 + 1);
    *(_QWORD *)&v93 = v88 ^ *((_QWORD *)&v93 + 1);
    v23 = v2 ^ *((_QWORD *)&v93 + 1);
    v91[3] = v93;
    v91[1] = v23;
    _InterlockedOr(v107, 0);
    v88 = *(_QWORD *)(v2 + 752);
  }
  else
  {
    v91 = (_QWORD *)v2;
  }
  *(_QWORD *)(v2 + 1960) = v88;
  *(_QWORD *)(v2 + 1968) = v91;
  *(_QWORD *)(v2 + 1944) = 0LL;
  _disable();
  _enable();
  LOBYTE(v94) = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v2 + 616))(v2 + 2048, v23);
  (*(void (__fastcall **)(__int64, __int64))(v2 + 624))(v2 + 2048, v94);
  switch ( *(_DWORD *)(v2 + 2104) )
  {
    case 3:
      _disable();
      *(_QWORD *)(v2 + 2456) = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1616));
      _enable();
      break;
    case 4:
      v99 = *(_QWORD *)(v2 + 2528);
      *(_QWORD *)(*(_QWORD *)(v99 + 56) ^ *(_QWORD *)(v99 + 64)) = v99 ^ *(_QWORD *)(v99 + 72) ^ *(_QWORD *)(v99 + 64);
      *(_QWORD *)(v99 + 72) = 0LL;
      *(_QWORD *)(v99 + 56) = 0LL;
      break;
    case 5:
      v95 = (char *)(v2 + 2464);
      v96 = (_QWORD *)(*(_QWORD *)(v2 + 2456) + 8LL);
      v97 = 8LL;
      do
      {
        v21 -= 8;
        *v96 = *(_QWORD *)v95;
        v95 += 8;
        ++v96;
        --v97;
      }
      while ( v97 );
      for ( ; v21; --v21 )
      {
        v98 = *v95++;
        *(_BYTE *)v96 = v98;
        v96 = (_QWORD *)((char *)v96 + 1);
      }
      break;
  }
  _InterlockedOr(v107, 0);
  return v2;
}
