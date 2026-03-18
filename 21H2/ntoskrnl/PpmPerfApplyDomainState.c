/*
 * XREFs of PpmPerfApplyDomainState @ 0x14022560C
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x1402255A0 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     PpmPerfApplyCapsAndFloors @ 0x140225BE0 (PpmPerfApplyCapsAndFloors.c)
 *     PpmGetPerfPolicyClass @ 0x140225C88 (PpmGetPerfPolicyClass.c)
 *     PpmEventDomainPerfStateChange @ 0x140225CB4 (PpmEventDomainPerfStateChange.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  int v1; // r13d
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned __int8 PerfPolicyClass; // al
  unsigned int v6; // r10d
  unsigned int v7; // esi
  unsigned int v8; // r12d
  __int64 *v9; // r14
  __int64 v10; // rdi
  int v11; // r15d
  unsigned __int64 v12; // rsi
  bool v13; // zf
  unsigned int v14; // r11d
  unsigned int v15; // r14d
  unsigned int v16; // r9d
  __int64 v17; // r10
  __int128 *v18; // rcx
  char v19; // r8
  char v20; // di
  __int64 v22; // r13
  unsigned int v23; // eax
  unsigned int v24; // edi
  char v25; // r9
  int v26; // r8d
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // r15d
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // esi
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // esi
  char v45; // r12
  unsigned int v46; // eax
  int v47; // eax
  char v48; // al
  int v49; // eax
  unsigned int v50; // edx
  int v51; // eax
  unsigned int v52; // eax
  int IsSubsetAffinity; // eax
  int v54; // eax
  char v55; // r8
  char v56; // r9
  unsigned int v57; // eax
  char v58; // [rsp+58h] [rbp-49h]
  char v59; // [rsp+59h] [rbp-48h]
  unsigned __int8 v60; // [rsp+5Ah] [rbp-47h]
  unsigned int v61; // [rsp+5Ch] [rbp-45h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-41h]
  unsigned int v63; // [rsp+64h] [rbp-3Dh]
  int v64; // [rsp+68h] [rbp-39h]
  unsigned int v65; // [rsp+6Ch] [rbp-35h]
  unsigned int v66; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v67; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned int v68; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v69; // [rsp+7Ch] [rbp-25h]
  unsigned int v70; // [rsp+80h] [rbp-21h]
  __int64 *v71; // [rsp+88h] [rbp-19h]
  __int64 v72; // [rsp+90h] [rbp-11h] BYREF
  __int64 v73; // [rsp+98h] [rbp-9h]
  __int64 v74; // [rsp+A0h] [rbp-1h]
  __int128 v75; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v76; // [rsp+B8h] [rbp+17h]
  __int64 v77; // [rsp+C8h] [rbp+27h]

  v77 = 0LL;
  v2 = *(_QWORD *)(a1 + 312);
  v68 = 0;
  v72 = 0LL;
  v75 = 0LL;
  v74 = *(_QWORD *)(v2 + 8);
  v76 = 0LL;
  v58 = 0;
  v59 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v71 = &PpmCurrentProfile[534 * dword_140C232CC + 5];
  PerfPolicyClass = PpmGetPerfPolicyClass(v4);
  LOBYTE(v1) = v6;
  v7 = *(_DWORD *)(a1 + 452);
  v60 = PerfPolicyClass;
  v8 = v6 + 100;
  v61 = v6 + 100;
  v65 = *(_DWORD *)(a1 + 444);
  v66 = v65;
  v62 = v6;
  v64 = v1;
  v63 = v6;
  v70 = v7;
  v67 = v7;
  if ( PpmPerfArtificialDomainEnabled == v6
    || (IsSubsetAffinity = KeIsSubsetAffinityEx(a1 + 24, (__int64)&PpmPerfNewCoreParkingMask), v6 = 0, IsSubsetAffinity)
    || *(_DWORD *)(a1 + 304) )
  {
    v9 = *(__int64 **)a1;
    v10 = a1;
  }
  else
  {
    v10 = PpmPerfDomainHead;
    v9 = &PpmPerfDomainHead;
  }
  v11 = 1;
  if ( (__int64 *)v10 != v9 )
  {
    while ( 1 )
    {
      v12 = *(unsigned int *)(v10 + 508);
      if ( v10 == a1 )
        goto LABEL_5;
      if ( *(_DWORD *)(v10 + 304) == v6 )
      {
        v54 = KeIsSubsetAffinityEx(v10 + 24, (__int64)&PpmPerfNewCoreParkingMask);
        v6 = 0;
        if ( !v54 && *(_QWORD *)(*(_QWORD *)(a1 + 16) - 33776LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) - 33776LL) )
        {
          v55 = *(_BYTE *)(a1 + 300);
          v56 = *(_BYTE *)(v10 + 300);
          if ( v55 == v56 || PpmPerfQosEnabled )
            break;
        }
      }
LABEL_10:
      v10 = *(_QWORD *)v10;
      if ( (__int64 *)v10 == v9 )
      {
        v14 = v66;
        v7 = v67;
        v8 = v61;
        v65 = v66;
        v70 = v67;
        v64 = v1;
        goto LABEL_12;
      }
    }
    if ( *(_BYTE *)(a1 + 301) != *(_BYTE *)(v10 + 301) )
    {
      v12 = (*(_QWORD *)(v10 + 472) * v12 + (*(_QWORD *)(v10 + 472) >> 1)) / *(_QWORD *)(a1 + 472);
      if ( (unsigned int)v12 > *(_DWORD *)(a1 + 444) )
        LODWORD(v12) = *(_DWORD *)(a1 + 444);
    }
    if ( v55 != v56 )
    {
      if ( (unsigned int)v12 <= v63 )
        LODWORD(v12) = v63;
      v63 = v12;
      goto LABEL_10;
    }
LABEL_5:
    v1 = (unsigned __int8)v1;
    if ( (unsigned int)v12 <= v62 )
      LODWORD(v12) = v62;
    v13 = *(_BYTE *)(v10 + 516) == (unsigned __int8)v6;
    v62 = v12;
    if ( !v13 )
      v1 = 1;
    v58 |= PpmPerfApplyCapsAndFloors(&v66, &v67, &v61, v10);
    v6 = 0;
    goto LABEL_10;
  }
  v14 = v65;
LABEL_12:
  v15 = 0;
  v16 = 0;
  v69 = 0;
  v17 = 0LL;
  v73 = 0LL;
  do
  {
    if ( *(_DWORD *)(a1 + 4 * v17 + 688) )
    {
      if ( v16 == 3 )
      {
        v18 = (__int128 *)(a1 + 736);
      }
      else if ( v16 == 5 )
      {
        v18 = (__int128 *)(a1 + 816);
      }
      else
      {
        v18 = (__int128 *)(a1 + 8 * (v16 - 1 + 4 * (v16 - 1 + 23LL)));
      }
      goto LABEL_17;
    }
    v22 = 28 * v17;
    if ( *(_BYTE *)(a1 + 28 * v17 + 541) )
      v23 = *(_DWORD *)(a1 + 452);
    else
      v23 = *(_DWORD *)(a1 + 448);
    v24 = *(_DWORD *)(a1 + v22 + 528);
    v25 = *(_BYTE *)(a1 + v22 + 542);
    v26 = *(_BYTE *)(a1 + 28 * v17 + 541) != 0;
    v27 = 100;
    if ( v23 > v24 )
      v24 = v23;
    if ( v25 )
    {
      v28 = *(_DWORD *)(a1 + 444);
    }
    else
    {
      v26 |= 8u;
      v28 = v8;
      if ( !PpmPerfBoostAtGuaranteed )
        v28 = 100;
    }
    v29 = *(_DWORD *)(a1 + v22 + 520);
    if ( v29 < 0x64 && v28 >= v29 )
      v28 = *(_DWORD *)(a1 + v22 + 520);
    v30 = *(_DWORD *)(a1 + v22 + 524);
    if ( v28 < v30 )
      v30 = v28;
    if ( !PpmPerfMaxOverrideEnabled )
    {
      if ( PpmCheckLatencyBoostActive )
      {
        v27 = *(unsigned __int8 *)(a1 + v22 + 543);
      }
      else if ( (_BYTE)v64 )
      {
        v27 = *((_DWORD *)v71 + v60 + 28);
      }
      else
      {
        v27 = 0;
      }
    }
    v31 = v30;
    if ( v27 < v30 )
      v31 = v27;
    if ( v31 > v24 )
    {
      v32 = v30;
      if ( v27 < v30 )
        v32 = v27;
    }
    else
    {
      v32 = v24;
    }
    if ( v32 < v8 )
    {
      v52 = v30;
      if ( v27 < v30 )
        v52 = v27;
      if ( v52 > v24 )
      {
        v33 = v30;
        if ( v27 < v30 )
          v33 = v27;
      }
      else
      {
        v33 = v24;
      }
    }
    else
    {
      v33 = v8;
    }
    if ( v33 <= v7 )
    {
      v36 = v7;
    }
    else
    {
      v34 = v30;
      if ( v27 < v30 )
        v34 = v27;
      if ( v34 > v24 )
      {
        v35 = v30;
        if ( v27 < v30 )
          v35 = v27;
      }
      else
      {
        v35 = v24;
      }
      if ( v35 < v8 )
      {
        v57 = v30;
        if ( v27 < v30 )
          v57 = v27;
        if ( v57 <= v24 )
        {
          v36 = v24;
        }
        else
        {
          v36 = v30;
          if ( v27 < v30 )
            v36 = v27;
        }
      }
      else
      {
        v36 = v8;
      }
    }
    v37 = v24;
    if ( v30 > v24 )
      v37 = v30;
    if ( v37 < v14 )
    {
      v38 = v24;
      if ( v30 > v24 )
        v38 = v30;
    }
    else
    {
      v38 = v14;
    }
    if ( v38 <= v7 )
    {
      v24 = v7;
    }
    else
    {
      v39 = v24;
      if ( v30 > v24 )
        v39 = v30;
      if ( v39 < v14 )
      {
        if ( v30 > v24 )
          v24 = v30;
      }
      else
      {
        v24 = v14;
      }
    }
    if ( PpmPerfMaxOverrideEnabled )
    {
      v40 = v24;
      v41 = v24;
LABEL_74:
      if ( v40 < v36 )
        v41 = v36;
      goto LABEL_76;
    }
    if ( *(_BYTE *)(a1 + v22 + 544) )
    {
      v40 = v63;
      if ( v62 > v63 )
        v40 = v62;
    }
    else
    {
      v40 = v62;
    }
    v41 = v40;
    if ( v40 <= v24 )
      goto LABEL_74;
    v41 = v24;
    if ( v58 )
      v26 |= 2u;
LABEL_76:
    if ( ((v25 - 2) & 0xFD) == 0 )
    {
      v42 = 100;
      if ( PpmPerfBoostAtGuaranteed )
LABEL_164:
        v42 = v8;
      if ( (unsigned int)v41 >= v42 )
        v41 = v24;
      goto LABEL_80;
    }
    if ( (unsigned __int8)(v25 - 5) <= 1u )
      goto LABEL_164;
LABEL_80:
    v43 = 0;
    if ( !PpmPerfMaxOverrideEnabled )
      v43 = *((_DWORD *)v71 + 15);
    if ( v43 >= v40 )
      v44 = 0;
    else
      v44 = v40 - v43;
    if ( v44 < v36 )
      v44 = v36;
    if ( v44 > v8 )
      v44 = v8;
    if ( !PpmPerfMaxOverrideEnabled && !PpmCheckDeadlineBoostActive )
      v15 = *(_DWORD *)(a1 + v22 + 536);
    if ( (_BYTE)v64 && v15 >= *((_DWORD *)v71 + v60 + 26) )
      v15 = *((_DWORD *)v71 + v60 + 26);
    v45 = *(_BYTE *)(a1 + v22 + 540);
    if ( !v45 )
      v26 |= 4u;
    v46 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, _DWORD, int, unsigned int *, __int64 *))(a1 + 376))(
            v74,
            v41,
            v36,
            v24,
            v15,
            *(_DWORD *)(a1 + v22 + 532),
            v26,
            &v68,
            &v72);
    v16 = v69;
    HIDWORD(v76) = v15;
    if ( v44 > v46 )
      v44 = v46;
    *(_QWORD *)&v76 = __PAIR64__(v24, v36);
    *((_QWORD *)&v75 + 1) = __PAIR64__(v68, v46);
    HIDWORD(v77) = v45 == 0;
    v15 = 0;
    *(_QWORD *)&v75 = v72;
    v47 = *(_DWORD *)(a1 + v22 + 532);
    v11 = 1;
    DWORD2(v76) = v44;
    LODWORD(v77) = v47;
    if ( !v69 )
    {
      v48 = BYTE5(v77);
      if ( *(_QWORD *)(a1 + 400) )
        v48 = 1;
      BYTE5(v77) = v48;
    }
    v17 = v73;
    v18 = &v75;
LABEL_17:
    if ( !*(_BYTE *)(a1 + 988)
      && (v19 = *((_BYTE *)v18 + 36), *(_BYTE *)(a1 + 40 * v17 + 772) == v19)
      && *(_DWORD *)(a1 + 40 * v17 + 752) == *((_DWORD *)v18 + 4)
      && *(_DWORD *)(a1 + 40 * v17 + 756) == *((_DWORD *)v18 + 5)
      && *(_DWORD *)(a1 + 40 * v17 + 764) == *((_DWORD *)v18 + 7) )
    {
      v8 = v61;
      if ( *(_DWORD *)(a1 + 40 * v17 + 768) == *((_DWORD *)v18 + 8)
        && *(_QWORD *)(a1 + 40 * v17 + 736) == *(_QWORD *)v18
        && v61 == *(_DWORD *)(a1 + 512)
        && (v19
         || *(_DWORD *)(a1 + 40 * v17 + 760) == *((_DWORD *)v18 + 6)
         && *(_DWORD *)(a1 + 40 * v17 + 744) == *((_DWORD *)v18 + 2)) )
      {
        v20 = v59;
        goto LABEL_29;
      }
    }
    else
    {
      v8 = v61;
    }
    v20 = 1;
    v59 = 1;
    *(_OWORD *)(a1 + 40 * v17 + 736) = *v18;
    *(_OWORD *)(a1 + 40 * v17 + 752) = v18[1];
    *(_QWORD *)(a1 + 40 * v17 + 768) = *((_QWORD *)v18 + 4);
LABEL_29:
    v7 = v70;
    ++v16;
    v14 = v65;
    ++v17;
    v69 = v16;
    v73 = v17;
  }
  while ( v16 < 6 );
  if ( v20 )
  {
    v49 = *(_DWORD *)(a1 + 728);
    v50 = v61;
    v13 = v49 == -1;
    v51 = v49 + 1;
    *(_BYTE *)(a1 + 988) = 0;
    if ( !v13 )
      v11 = v51;
    *(_DWORD *)(a1 + 512) = v50;
    *(_DWORD *)(a1 + 728) = v11;
    *(LARGE_INTEGER *)(a1 + 976) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 984) = 0;
    PpmEventDomainPerfStateChange(a1);
  }
  return v20;
}
