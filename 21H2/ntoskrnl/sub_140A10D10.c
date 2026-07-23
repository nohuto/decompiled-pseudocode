/*
 * XREFs of sub_140A10D10 @ 0x140A10D10
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x1403EBCD4 (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     $$b8 @ 0x140A103CC ($$b8.c)
 *     SdbpCheckDll @ 0x140A12080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A12340 (KeGuardCheckICall.c)
 */

__int64 __fastcall sub_140A10D10(__int64 a1, __int64 a2)
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
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // r11
  int v22; // r13d
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rax
  int v26; // ecx
  unsigned int *v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // r9
  unsigned int v30; // r8d
  int *v31; // rbx
  __int64 v32; // r10
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // r11
  int v40; // r14d
  unsigned int v41; // eax
  unsigned __int64 v42; // r15
  _QWORD *v43; // r9
  __int64 v44; // r8
  const char *v45; // rax
  unsigned __int64 v46; // rsi
  unsigned int v47; // r10d
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 i; // rax
  unsigned int v55; // esi
  BOOL v56; // r12d
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // r15
  int v62; // eax
  __int64 v63; // r13
  __int64 v64; // rbx
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // r12
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v68; // r14
  __int64 v69; // r15
  unsigned __int64 v70; // r8
  unsigned int v71; // r10d
  unsigned __int64 v72; // r9
  _QWORD *j; // rdx
  unsigned __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // rsi
  _QWORD *v80; // rcx
  char *v81; // r10
  int v82; // r11d
  unsigned __int64 v83; // rbx
  signed __int64 v84; // r10
  __int64 v85; // r8
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rcx
  _QWORD *v88; // r9
  unsigned __int64 v89; // rax
  unsigned __int128 v90; // rax
  __int64 v91; // rdx
  char *v92; // rdx
  _QWORD *v93; // rcx
  __int64 v94; // r8
  char v95; // al
  unsigned __int64 v96; // rdx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  volatile signed __int32 *v103; // rax
  signed __int32 v104[8]; // [rsp+8h] [rbp-79h] BYREF
  __int64 v105; // [rsp+48h] [rbp-39h]
  unsigned int v106; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v107; // [rsp+58h] [rbp-29h]
  unsigned __int64 v108; // [rsp+60h] [rbp-21h]
  __int64 v109; // [rsp+68h] [rbp-19h]
  __int64 v110; // [rsp+70h] [rbp-11h] BYREF
  __int16 v111; // [rsp+78h] [rbp-9h] BYREF
  __int64 v112; // [rsp+7Ah] [rbp-7h]
  _BYTE v113[16]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v114; // [rsp+98h] [rbp+17h]
  __int64 v115; // [rsp+A0h] [rbp+1Fh]
  __int64 v116; // [rsp+A8h] [rbp+27h]
  __int64 v117; // [rsp+B0h] [rbp+2Fh]

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
    v111 = 303;
    v112 = v3;
    *(_WORD *)(v3 + 16) = v2 + 2168;
    *(_DWORD *)(v3 + 24) = (unsigned __int64)(v2 + 2168) >> 32;
    *(_WORD *)(v3 + 22) = (unsigned int)(v2 + 2168) >> 16;
    _disable();
    if ( *(int *)(v2 + 2448) >= 0 )
    {
      __sidt(v113);
      __lidt(&v111);
      __writedr(7u, 0LL);
      __lidt(v113);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  *(_DWORD *)(v2 + 2088) += 1568;
  v7 = *(_DWORD *)(v2 + 196);
  v8 = (_QWORD *)v2;
  v9 = *(_DWORD *)(v2 + 2068);
  v10 = (const char *)v2;
  v11 = *(_QWORD *)(v2 + 2072);
  *(_DWORD *)(v2 + 196) = 0;
  if ( v2 < (unsigned __int64)(v2 + 1568) )
  {
    do
    {
      _mm_prefetch(v10, 0);
      v10 += 64;
    }
    while ( (unsigned __int64)v10 < v2 + 1568 );
  }
  v12 = v11;
  v13 = 12;
  do
  {
    v14 = 8LL;
    do
    {
      v15 = v12 ^ *v8;
      v16 = v8 + 1;
      v17 = *v16;
      v8 = v16 + 1;
      v12 = __ROL8__(__ROL8__(v15, v9) ^ v17, v9);
      --v14;
    }
    while ( v14 );
    v18 = __ROL8__(v11 ^ ((unsigned __int64)v8 - v2), 17) ^ v11 ^ ((unsigned __int64)v8 - v2);
    v114 = (v18 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v9 = ((unsigned __int8)(v114 ^ v18) ^ (unsigned __int8)v9) & 0x3F;
    if ( !v9 )
      LOBYTE(v9) = 1;
    --v13;
  }
  while ( v13 );
  LODWORD(v19) = 32;
  v20 = 4;
  v21 = 4LL;
  v22 = 64;
  do
  {
    v12 = __ROL8__(*v8++ ^ v12, v9);
    v19 = (unsigned int)(v19 - 8);
    --v21;
  }
  while ( v21 );
  if ( (_DWORD)v19 )
  {
    do
    {
      v23 = *(unsigned __int8 *)v8;
      v8 = (_QWORD *)((char *)v8 + 1);
      v12 = __ROL8__(v23 ^ v12, v9);
      v24 = (_DWORD)v19 == 1;
      v19 = (unsigned int)(v19 - 1);
    }
    while ( !v24 );
  }
  *(_DWORD *)(v2 + 196) = v7;
  if ( *(_QWORD *)(v2 + 2592) != v12 )
  {
    v25 = *(_QWORD *)(v2 + 1424);
    v26 = *(_DWORD *)(v2 + 2020);
    *(_QWORD *)v25 = v2;
    *(_DWORD *)(v25 + 16) = v26;
    v19 = *(_QWORD *)(v2 + 2592);
    if ( !*(_DWORD *)(v2 + 2296) )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 1424) + 24LL) = v19 ^ v12;
      if ( !*(_DWORD *)(v2 + 2296) )
      {
        *(_QWORD *)(v2 + 2312) = 0LL;
        *(_QWORD *)(v2 + 2304) = v2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v2 + 2320) = 265LL;
        *(_QWORD *)(v2 + 2328) = v12;
        *(_DWORD *)(v2 + 2296) = 1;
        __b8(v2, 0LL);
      }
    }
  }
  v105 = 0LL;
  v27 = &v106;
  do
  {
    *(_BYTE *)v27 = 0;
    v27 = (unsigned int *)((char *)v27 + 1);
    --v20;
  }
  while ( v20 );
  v28 = 0;
  LODWORD(v107) = 0;
  if ( *(_DWORD *)(v2 + 2016) )
  {
    while ( 1 )
    {
      v29 = v2;
      v30 = 0;
      if ( *(_QWORD *)(v2 + 2680) )
        v29 = *(_QWORD *)(v2 + 2680);
      v31 = (int *)(v29 + *(unsigned int *)(v29 + 2056));
      if ( (_DWORD)v105 && HIDWORD(v105) <= v28 )
      {
        v30 = HIDWORD(v105);
        v31 = (int *)(v29 + v106);
      }
      if ( v30 != v28 )
        break;
LABEL_57:
      v39 = (_QWORD *)*((_QWORD *)v31 + 1);
      v40 = *(_DWORD *)(v2 + 2068);
      v41 = (_DWORD)v31 - v29;
      v42 = *(_QWORD *)(v2 + 2072);
      v43 = v39;
      HIDWORD(v105) = v30;
      v44 = (unsigned int)v31[4];
      *(_DWORD *)(v2 + 2088) += v44;
      v106 = v41;
      v45 = (const char *)v39;
      LODWORD(v105) = 1;
      if ( v39 < (_QWORD *)((char *)v39 + v44) )
      {
        do
        {
          _mm_prefetch(v45, 0);
          v45 += 64;
        }
        while ( v45 < (const char *)v39 + v44 );
      }
      v46 = v42;
      v47 = (unsigned int)v44 >> 7;
      if ( (unsigned int)v44 >> 7 )
      {
        do
        {
          v48 = 8LL;
          do
          {
            v49 = v43[1] ^ __ROL8__(*v43 ^ v46, v40);
            v43 += 2;
            v46 = __ROL8__(v49, v40);
            --v48;
          }
          while ( v48 );
          v50 = __ROL8__(v42 ^ ((char *)v43 - (char *)v39), 17) ^ v42 ^ ((char *)v43 - (char *)v39);
          v19 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v115 = v19;
          v40 = ((unsigned __int8)(v19 ^ v50) ^ (unsigned __int8)v40) & 0x3F;
          if ( !v40 )
            LOBYTE(v40) = 1;
          --v47;
        }
        while ( v47 );
        v2 = a2;
      }
      v51 = v44 & 0x7F;
      if ( (unsigned int)v51 >= 8 )
      {
        v52 = (unsigned __int64)(unsigned int)v51 >> 3;
        do
        {
          v46 = __ROL8__(*v43++ ^ v46, v40);
          v51 = (unsigned int)(v51 - 8);
          --v52;
        }
        while ( v52 );
      }
      if ( (_DWORD)v51 )
      {
        do
        {
          v53 = *(unsigned __int8 *)v43;
          v43 = (_QWORD *)((char *)v43 + 1);
          v46 = __ROL8__(v53 ^ v46, v40);
          v24 = (_DWORD)v51 == 1;
          v51 = (unsigned int)(v51 - 1);
        }
        while ( !v24 );
      }
      for ( i = v46; ; LODWORD(v46) = i ^ v46 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v55 = v46 & 0x7FFFFFFF;
      v56 = 0;
      if ( v55 != v31[5] )
      {
        if ( !*v31 )
          v56 = v31[6] != 0;
        v57 = (unsigned int)v31[4];
        v58 = *((_QWORD *)v31 + 1);
        if ( v31[4] && (*(_DWORD *)(v2 + 2452) & 0x40) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v60 = v58 & 0xFFFFFFFFFFFFF000uLL;
          v109 = (v58 + v57 - 1) | 0xFFF;
          v108 = (v58 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v61 = CurrentIrql;
            while ( 1 )
            {
              v62 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v2 + 1128))(
                      v60,
                      0LL,
                      v51,
                      v43);
              if ( v62 != -1073741267 )
                break;
              if ( v56 )
                goto LABEL_100;
              if ( CurrentIrql > 1u )
                goto LABEL_86;
              v61 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v62 < 0 )
            {
LABEL_100:
              __writecr8(v61);
              goto LABEL_101;
            }
LABEL_86:
            v19 = 4096LL;
            v60 += 4096LL;
            v108 += 4096LL;
            if ( v108 != v109 )
              continue;
            break;
          }
          __writecr8(v61);
        }
        else
        {
LABEL_101:
          v75 = *(_DWORD *)(v2 + 2296);
          v19 = (unsigned int)v31[5];
          if ( !v75 )
          {
            *(_QWORD *)(*(_QWORD *)(v2 + 1424) + 24LL) = v19 ^ v55;
            v75 = *(_DWORD *)(v2 + 2296);
          }
          v76 = *((_QWORD *)v31 + 1);
          if ( !v75 )
          {
            *(_QWORD *)(v2 + 2304) = v2 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v2 + 2312) = (char *)v31 - 0x4C48B4211BBACBEBLL;
            v77 = *v31;
            *(_QWORD *)(v2 + 2328) = v76;
            *(_QWORD *)(v2 + 2320) = v77;
            *(_DWORD *)(v2 + 2296) = 1;
            __b8(v2, 0LL);
          }
        }
      }
      v22 = 64;
      v28 = v107 + 1;
      LODWORD(v107) = v28;
      if ( v28 >= *(_DWORD *)(v2 + 2016) )
        goto LABEL_89;
    }
    v32 = v28 - v30;
    v30 = v28;
    while ( 1 )
    {
      v33 = *v31;
      if ( *v31 > 12 )
        break;
      if ( v33 == 12 )
        goto LABEL_50;
      v34 = v33 - 1;
      if ( !v34 )
        goto LABEL_50;
      v35 = v34 - 6;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( !v36 )
        {
          v38 = *((unsigned __int16 *)v31 + 16);
LABEL_55:
          v37 = (v38 + 55) & 0xFFFFFFF8;
          goto LABEL_56;
        }
        if ( v36 != 2 )
          goto LABEL_52;
        v37 = (unsigned int)(16 * (v31[7] + 3));
      }
      else
      {
        v37 = (unsigned int)(24 * (v31[6] + 2));
      }
LABEL_56:
      v31 = (int *)((char *)v31 + v37);
      if ( !--v32 )
        goto LABEL_57;
    }
    if ( v33 == 28 )
    {
      v38 = *((unsigned __int16 *)v31 + 20);
      goto LABEL_55;
    }
    if ( v33 == 30 )
    {
      v19 = ((v31[9] != 0 ? v31[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
      v37 = (unsigned int)v19 + 24 * (*((unsigned __int16 *)v31 + 20) + 2);
      goto LABEL_56;
    }
    if ( v33 <= 32 )
    {
LABEL_52:
      v37 = 48LL;
      goto LABEL_56;
    }
    if ( v33 <= 34 )
    {
      v19 = ((v31[8] & 0xFFF) + (unsigned __int64)(unsigned int)v31[10] + 4095) >> 12;
      v37 = (unsigned int)(20 * v19 + 48);
      goto LABEL_56;
    }
    if ( v33 != 43 )
      goto LABEL_52;
LABEL_50:
    v19 = (unsigned int)v31[4] / 0xCuLL;
    v37 = (unsigned int)(4 * v19 + 48);
    goto LABEL_56;
  }
LABEL_89:
  if ( *(_DWORD *)(v2 + 2296) )
  {
    v63 = *(_QWORD *)(v2 + 2320);
    v64 = *(_QWORD *)(v2 + 2328);
    v65 = *(_QWORD *)(v2 + 2312);
    v66 = *(_QWORD *)(v2 + 2304);
    v109 = v64;
    v108 = v65;
    v107 = v66;
    v110 = v2;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v68 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1592));
    v69 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1608));
    if ( !*((_BYTE *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1600))
      || (unsigned __int64)&v110 > v68
      || (unsigned __int64)&v110 < v68 - 24576 )
    {
      v68 = *(_QWORD *)(v69 + *(_QWORD *)(v2 + 1656));
    }
    if ( (*(_DWORD *)(v2 + 2448) & 0x8000000) == 0 )
    {
      v66 = __readcr0();
      __writecr0(v66 & 0xFFFFFFFFFFFEFFFFuLL);
      v70 = v2 + 2728;
      v71 = 0;
      v72 = v2 + 2728 + 16LL * *(unsigned int *)(v2 + 2720);
      for ( j = (_QWORD *)v72; v71 < *(_DWORD *)(v2 + 2724); ++v71 )
      {
        *(_QWORD *)*j = j[1];
        v74 = __readcr4();
        if ( (v74 & 0x20080) != 0 )
        {
          __writecr4(v74 ^ 0x80);
          __writecr4(v74);
        }
        else
        {
          v78 = __readcr3();
          __writecr3(v78);
        }
        j += 2;
      }
      if ( v70 < v72 )
      {
        do
        {
          v79 = *(unsigned int *)(v70 + 8);
          v80 = j;
          v81 = *(char **)v70;
          v82 = v79;
          if ( (unsigned int)v79 >= 8 )
          {
            v83 = (unsigned __int64)(unsigned int)v79 >> 3;
            do
            {
              v82 -= 8;
              *(_QWORD *)v81 = *v80++;
              v81 += 8;
              --v83;
            }
            while ( v83 );
          }
          if ( v82 )
          {
            v84 = v81 - (char *)v80;
            do
            {
              *((_BYTE *)v80 + v84) = *(_BYTE *)v80;
              v80 = (_QWORD *)((char *)v80 + 1);
              --v82;
            }
            while ( v82 );
          }
          j = (_QWORD *)((char *)j + v79);
          v70 += 16LL;
        }
        while ( v70 < v72 );
        LODWORD(v64) = v109;
        LODWORD(v65) = v108;
      }
      **(_BYTE **)(v2 + 536) = -61;
      __writecr0(v66);
      LODWORD(v66) = v107;
    }
    v98 = *(_DWORD *)(v2 + 2344);
    if ( v98 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v98 = *(_DWORD *)(v2 + 2344);
      }
      if ( v98 )
      {
        v99 = v98 - 1;
        if ( v99 )
        {
          v100 = v99 - 1;
          if ( v100 )
          {
            v101 = v100 - 1;
            if ( v101 )
            {
              v102 = v101 - 1;
              if ( v102 )
              {
                if ( v102 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1608)),
                    (*(_DWORD *)(v2 + 2448) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2 + 1464) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*(_QWORD *)(v2 + 1704)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1608))
                                              + *(_QWORD *)(v2 + 1672)),
                  (*(_DWORD *)(v2 + 2448) >> 10) & 0x1F);
              }
              goto LABEL_150;
            }
            v103 = *(volatile signed __int32 **)(v2 + 1376);
          }
          else
          {
            v103 = *(volatile signed __int32 **)(v2 + 1368);
          }
        }
        else
        {
          v103 = *(volatile signed __int32 **)(v2 + 1352);
        }
        _interlockedbittestandset64(v103, 0LL);
      }
    }
LABEL_150:
    *(_QWORD *)(v69 + *(_QWORD *)(v2 + 1680)) = 0LL;
    *(_QWORD *)(v69 + *(_QWORD *)(v2 + 1696)) = 0LL;
    SdbpCheckDll(265, v66, v65, v64, v63, *(_QWORD *)(v2 + 344), v68);
    JUMPOUT(0x140A11821LL);
  }
  v85 = v2 + *(unsigned int *)(v2 + 2032);
  if ( (*(_DWORD *)(v2 + 2448) & 0x10000000) != 0 )
  {
    v86 = __rdtsc();
    v87 = __ROR8__(v86, 3) ^ v86;
    v19 = (v87 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v116 = v19;
    v85 = (__int64)KiMachineCheckControl + 16 * (((unsigned __int8)v87 ^ (unsigned __int8)v19) & 0xF);
  }
  v88 = *(_QWORD **)(v2 + 2568);
  if ( v88 )
  {
    v89 = __rdtsc();
    v90 = (__ROR8__(v89, 3) ^ v89) * (unsigned __int128)0x7010008004002001uLL;
    v117 = *((_QWORD *)&v90 + 1);
    *((_QWORD *)&v90 + 1) ^= v90;
    v88[2] = *((_QWORD *)&v90 + 1);
    *(_QWORD *)&v90 = v85 ^ *((_QWORD *)&v90 + 1);
    v19 = v2 ^ *((_QWORD *)&v90 + 1);
    v88[3] = v90;
    v88[1] = v19;
    _InterlockedOr(v104, 0);
    v85 = *(_QWORD *)(v2 + 752);
  }
  else
  {
    v88 = (_QWORD *)v2;
  }
  *(_QWORD *)(v2 + 1960) = v85;
  *(_QWORD *)(v2 + 1968) = v88;
  *(_QWORD *)(v2 + 1944) = 0LL;
  _disable();
  _enable();
  LOBYTE(v91) = (*(__int64 (__fastcall **)(__int64, __int64))(v2 + 616))(v2 + 2048, v19);
  (*(void (__fastcall **)(__int64, __int64))(v2 + 624))(v2 + 2048, v91);
  switch ( *(_DWORD *)(v2 + 2104) )
  {
    case 3:
      _disable();
      *(_QWORD *)(v2 + 2456) = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1608));
      _enable();
      break;
    case 4:
      v96 = *(_QWORD *)(v2 + 2528);
      *(_QWORD *)(*(_QWORD *)(v96 + 56) ^ *(_QWORD *)(v96 + 64)) = v96 ^ *(_QWORD *)(v96 + 72) ^ *(_QWORD *)(v96 + 64);
      *(_QWORD *)(v96 + 72) = 0LL;
      *(_QWORD *)(v96 + 56) = 0LL;
      break;
    case 5:
      v92 = (char *)(v2 + 2464);
      v93 = (_QWORD *)(*(_QWORD *)(v2 + 2456) + 8LL);
      v94 = 8LL;
      do
      {
        v22 -= 8;
        *v93 = *(_QWORD *)v92;
        v92 += 8;
        ++v93;
        --v94;
      }
      while ( v94 );
      for ( ; v22; --v22 )
      {
        v95 = *v92++;
        *(_BYTE *)v93 = v95;
        v93 = (_QWORD *)((char *)v93 + 1);
      }
      break;
  }
  _InterlockedOr(v104, 0);
  return v2;
}
