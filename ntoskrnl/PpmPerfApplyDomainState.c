/*
 * XREFs of PpmPerfApplyDomainState @ 0x1402E56F8
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x1402E5690 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PpmGetPerfPolicyClass @ 0x140235B9C (PpmGetPerfPolicyClass.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     PpmPerfApplyCapsAndFloors @ 0x1402E5DE0 (PpmPerfApplyCapsAndFloors.c)
 *     PpmEventDomainPerfStateChange @ 0x1402E5E8C (PpmEventDomainPerfStateChange.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  int v1; // r15d
  __int64 v2; // rax
  _BYTE *v4; // rcx
  char PerfPolicyClass; // al
  __int64 v6; // r9
  unsigned int v7; // r13d
  unsigned int v8; // esi
  int IsSubsetAffinity; // eax
  __int64 v10; // rdi
  __int64 *v11; // r14
  int v12; // r12d
  unsigned __int64 v13; // rsi
  int v14; // eax
  char v15; // r8
  char v16; // r9
  unsigned int v17; // r14d
  unsigned int v18; // edi
  unsigned int v19; // r10d
  __int64 v20; // r11
  __int128 *v21; // rcx
  __int64 v22; // r13
  char v23; // cl
  unsigned int v24; // eax
  unsigned int v25; // esi
  char v26; // r9
  int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // r15d
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // r14d
  unsigned int v44; // edi
  __int64 v45; // rdx
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // edi
  char v49; // r12
  unsigned int v50; // eax
  int v51; // eax
  char v52; // r9
  unsigned int *v53; // r8
  char v54; // r13
  int v55; // eax
  unsigned int v56; // edx
  bool v57; // zf
  int v58; // eax
  char v60; // [rsp+58h] [rbp-49h]
  char v61; // [rsp+59h] [rbp-48h]
  unsigned __int8 v62; // [rsp+5Ah] [rbp-47h]
  unsigned int v63; // [rsp+5Ch] [rbp-45h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-41h]
  unsigned int v65; // [rsp+64h] [rbp-3Dh]
  int v66; // [rsp+68h] [rbp-39h]
  unsigned int v67; // [rsp+6Ch] [rbp-35h]
  unsigned int v68; // [rsp+70h] [rbp-31h]
  unsigned int v69; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned int v70; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v71; // [rsp+7Ch] [rbp-25h] BYREF
  unsigned int v72; // [rsp+80h] [rbp-21h]
  __int64 *v73; // [rsp+88h] [rbp-19h]
  __int64 v74; // [rsp+90h] [rbp-11h] BYREF
  __int64 v75; // [rsp+98h] [rbp-9h]
  __int64 v76; // [rsp+A0h] [rbp-1h]
  __int128 v77; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v78; // [rsp+B8h] [rbp+17h]
  __int64 v79; // [rsp+C8h] [rbp+27h]

  v79 = 0LL;
  v2 = *(_QWORD *)(a1 + 312);
  v71 = 0;
  v74 = 0LL;
  v77 = 0LL;
  v76 = *(_QWORD *)(v2 + 8);
  v78 = 0LL;
  v60 = 0;
  v61 = 0;
  v4 = *(_BYTE **)(a1 + 16);
  v73 = &PpmCurrentProfile[55 * dword_140C3D48C + 5];
  PerfPolicyClass = PpmGetPerfPolicyClass(v4);
  LOBYTE(v1) = v6;
  v62 = PerfPolicyClass;
  v7 = v6;
  v65 = v6;
  v8 = v6 + 100;
  v63 = v6 + 100;
  v68 = *(_DWORD *)(a1 + 444);
  v69 = v68;
  v67 = *(_DWORD *)(a1 + 452);
  v70 = v67;
  v66 = v1;
  v64 = v6;
  if ( PpmPerfArtificialDomainEnabled == (_DWORD)v6
    || (IsSubsetAffinity = KeIsSubsetAffinityEx(
                             (unsigned __int16 *)(a1 + 24),
                             (unsigned __int16 *)&PpmPerfNewCoreParkingMask),
        v6 = 0LL,
        IsSubsetAffinity)
    || *(_DWORD *)(a1 + 304) )
  {
    v11 = *(__int64 **)a1;
    v10 = a1;
  }
  else
  {
    v10 = PpmPerfDomainHead;
    v11 = &PpmPerfDomainHead;
  }
  v12 = 1;
  if ( (__int64 *)v10 != v11 )
  {
    while ( 1 )
    {
      v13 = *(unsigned int *)(v10 + 512);
      if ( v10 == a1 )
        break;
      if ( *(_DWORD *)(v10 + 304) != (_DWORD)v6 )
        goto LABEL_26;
      v14 = KeIsSubsetAffinityEx((unsigned __int16 *)(v10 + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask);
      v6 = 0LL;
      if ( v14 || *(_QWORD *)(*(_QWORD *)(a1 + 16) - 33776LL) != *(_QWORD *)(*(_QWORD *)(v10 + 16) - 33776LL) )
        goto LABEL_26;
      v15 = *(_BYTE *)(a1 + 300);
      v16 = *(_BYTE *)(v10 + 300);
      if ( v15 == v16 || PpmPerfQosEnabled )
      {
        if ( *(_BYTE *)(a1 + 301) != *(_BYTE *)(v10 + 301) )
        {
          v13 = (*(_QWORD *)(v10 + 472) * v13 + (*(_QWORD *)(v10 + 472) >> 1)) / *(_QWORD *)(a1 + 472);
          if ( (unsigned int)v13 > *(_DWORD *)(a1 + 444) )
            LODWORD(v13) = *(_DWORD *)(a1 + 444);
        }
        if ( v15 == v16 )
          break;
        if ( (unsigned int)v13 <= v64 )
          LODWORD(v13) = v64;
        v64 = v13;
      }
LABEL_25:
      v6 = 0LL;
LABEL_26:
      v10 = *(_QWORD *)v10;
      if ( (__int64 *)v10 == v11 )
      {
        v17 = v69;
        v18 = v70;
        v8 = v63;
        v68 = v69;
        v67 = v70;
        v65 = v7;
        v66 = v1;
        goto LABEL_29;
      }
    }
    v1 = (unsigned __int8)v1;
    if ( (unsigned int)v13 <= v7 )
      LODWORD(v13) = v7;
    v7 = v13;
    if ( *(_BYTE *)(v10 + 520) )
      v1 = 1;
    v60 |= PpmPerfApplyCapsAndFloors(&v69, &v70, &v63, v10);
    goto LABEL_25;
  }
  v18 = v67;
  v17 = v68;
LABEL_29:
  v19 = v6;
  v72 = v6;
  v20 = v6;
  v75 = v6;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 4 * v20 + 720) != (_DWORD)v6 )
    {
      if ( v19 == 3 )
      {
        v21 = (__int128 *)(a1 + 768);
      }
      else if ( v19 - 5 <= 1 )
      {
        v21 = (__int128 *)(a1 + 848);
      }
      else
      {
        v21 = (__int128 *)(a1 + 8 * (v19 - 1 + 4 * (v19 - 1 + 24LL)));
      }
      goto LABEL_152;
    }
    v22 = 28 * v20;
    v23 = *(_BYTE *)(a1 + 28 * v20 + 545);
    if ( v23 )
      v24 = *(_DWORD *)(a1 + 452);
    else
      v24 = *(_DWORD *)(a1 + 448);
    v25 = *(_DWORD *)(a1 + v22 + 532);
    v27 = v6;
    v26 = *(_BYTE *)(a1 + v22 + 546);
    LOBYTE(v27) = v23 != 0;
    if ( v24 > v25 )
      v25 = v24;
    v28 = 0;
    if ( v26 )
    {
      v29 = *(_DWORD *)(a1 + 444);
    }
    else
    {
      v27 |= 8u;
      v29 = v63;
      if ( !PpmPerfBoostAtGuaranteed )
        v29 = 100;
    }
    v30 = *(_DWORD *)(a1 + v22 + 524);
    if ( v30 < 0x64 && v29 >= v30 )
      v29 = *(_DWORD *)(a1 + v22 + 524);
    v31 = *(_DWORD *)(a1 + v22 + 528);
    if ( v29 < v31 )
      v31 = v29;
    if ( PpmPerfMaxOverrideEnabled )
    {
      v28 = 100;
    }
    else if ( PpmCheckLatencyBoostActive )
    {
      v28 = *(unsigned __int8 *)(a1 + v22 + 547);
    }
    else if ( (_BYTE)v1 )
    {
      v28 = *((_DWORD *)v73 + v62 + 28);
    }
    v32 = v31;
    if ( v28 < v31 )
      v32 = v28;
    if ( v32 <= v25 )
    {
      v33 = v25;
    }
    else
    {
      v33 = v31;
      if ( v28 < v31 )
        v33 = v28;
    }
    if ( v33 >= v63 )
    {
      v35 = v63;
    }
    else
    {
      v34 = v31;
      if ( v28 < v31 )
        v34 = v28;
      if ( v34 <= v25 )
      {
        v35 = v25;
      }
      else
      {
        v35 = v31;
        if ( v28 < v31 )
          v35 = v28;
      }
    }
    if ( v35 <= v18 )
    {
      v39 = v18;
    }
    else
    {
      v36 = v31;
      if ( v28 < v31 )
        v36 = v28;
      if ( v36 <= v25 )
      {
        v37 = v25;
      }
      else
      {
        v37 = v31;
        if ( v28 < v31 )
          v37 = v28;
      }
      if ( v37 >= v63 )
      {
        v39 = v63;
      }
      else
      {
        v38 = v31;
        if ( v28 < v31 )
          v38 = v28;
        if ( v38 <= v25 )
        {
          v39 = v25;
        }
        else
        {
          v39 = v31;
          if ( v28 < v31 )
            v39 = v28;
        }
      }
    }
    v40 = v25;
    if ( v31 > v25 )
      v40 = v31;
    if ( v40 >= v17 )
    {
      v41 = v17;
    }
    else
    {
      v41 = v25;
      if ( v31 > v25 )
        v41 = v31;
    }
    if ( v41 <= v18 )
    {
      v25 = v18;
    }
    else
    {
      v42 = v25;
      if ( v31 > v25 )
        v42 = v31;
      if ( v42 >= v17 )
      {
        v25 = v17;
      }
      else if ( v31 > v25 )
      {
        v25 = v31;
      }
    }
    v43 = 0;
    if ( PpmPerfMaxOverrideEnabled )
    {
      v44 = v25;
      v45 = v25;
    }
    else
    {
      if ( *(_BYTE *)(a1 + v22 + 549) )
      {
        v44 = v64;
        if ( v65 > v64 )
          v44 = v65;
      }
      else
      {
        v44 = v65;
      }
      v45 = v44;
      if ( v44 > v25 )
      {
        v45 = v25;
        if ( v60 )
          v27 |= 2u;
        goto LABEL_112;
      }
    }
    if ( v44 < v39 )
      v45 = v39;
LABEL_112:
    if ( v26 == 2 || (unsigned __int8)(v26 - 4) <= 2u )
    {
      if ( (unsigned __int8)(v26 - 5) <= 1u || (v46 = 100, PpmPerfBoostAtGuaranteed) )
        v46 = v63;
      if ( (unsigned int)v45 >= v46 )
        v45 = v25;
    }
    v47 = 0;
    if ( !PpmPerfMaxOverrideEnabled )
      v47 = *((_DWORD *)v73 + 15);
    if ( v47 >= v44 )
      v48 = 0;
    else
      v48 = v44 - v47;
    if ( v48 < v39 )
      v48 = v39;
    if ( v48 > v63 )
      v48 = v63;
    if ( !PpmPerfMaxOverrideEnabled && !PpmCheckDeadlineBoostActive )
      v43 = *(_DWORD *)(a1 + v22 + 540);
    if ( PpmCheckLatencyBoostActive && v43 >= *(unsigned __int8 *)(a1 + v22 + 548) )
      v43 = *(unsigned __int8 *)(a1 + v22 + 548);
    if ( (_BYTE)v66 && v43 >= *((_DWORD *)v73 + v62 + 26) )
      v43 = *((_DWORD *)v73 + v62 + 26);
    v49 = *(_BYTE *)(a1 + v22 + 544);
    if ( !v49 )
      v27 |= 4u;
    v50 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, _DWORD, int, unsigned int *, __int64 *))(a1 + 376))(
            v76,
            v45,
            v39,
            v25,
            v43,
            *(_DWORD *)(a1 + v22 + 536),
            v27,
            &v71,
            &v74);
    v19 = v72;
    LODWORD(v78) = v39;
    if ( v48 > v50 )
      v48 = v50;
    *((_QWORD *)&v77 + 1) = __PAIR64__(v71, v50);
    LOBYTE(v6) = 0;
    *(_QWORD *)&v77 = v74;
    BYTE4(v79) = v49 == 0;
    v51 = *(_DWORD *)(a1 + v22 + 536);
    v12 = 1;
    *(_WORD *)((char *)&v79 + 5) = 0;
    HIBYTE(v79) = 0;
    *(_QWORD *)((char *)&v78 + 4) = __PAIR64__(v48, v25);
    HIDWORD(v78) = v43;
    LODWORD(v79) = v51;
    if ( !v72 )
      BYTE5(v79) = *(_QWORD *)(a1 + 400) != 0LL;
    v8 = v63;
    v21 = &v77;
    v20 = v75;
    LOBYTE(v1) = v66;
LABEL_152:
    if ( *(_BYTE *)(a1 + 1060) == (_BYTE)v6
      && (v52 = *((_BYTE *)v21 + 36), *(_BYTE *)(a1 + 40 * v20 + 804) == v52)
      && *(_DWORD *)(a1 + 40 * v20 + 784) == *((_DWORD *)v21 + 4)
      && *(_DWORD *)(a1 + 40 * v20 + 788) == *((_DWORD *)v21 + 5)
      && *(_DWORD *)(a1 + 40 * v20 + 796) == *((_DWORD *)v21 + 7)
      && *(_DWORD *)(a1 + 40 * v20 + 800) == *((_DWORD *)v21 + 8)
      && *(_QWORD *)(a1 + 40 * v20 + 768) == *(_QWORD *)v21
      && (v53 = (unsigned int *)(a1 + 516), v8 == *(_DWORD *)(a1 + 516))
      && (v52
       || *(_DWORD *)(a1 + 40 * v20 + 792) == *((_DWORD *)v21 + 6)
       && *(_DWORD *)(a1 + 40 * v20 + 776) == *((_DWORD *)v21 + 2)) )
    {
      v54 = v61;
    }
    else
    {
      v54 = 1;
      v61 = 1;
      v53 = (unsigned int *)(a1 + 516);
      *(_OWORD *)(a1 + 40 * v20 + 768) = *v21;
      *(_OWORD *)(a1 + 40 * v20 + 784) = v21[1];
      *(_QWORD *)(a1 + 40 * v20 + 800) = *((_QWORD *)v21 + 4);
    }
    v18 = v67;
    ++v19;
    v17 = v68;
    ++v20;
    v72 = v19;
    v75 = v20;
    if ( v19 >= 7 )
      break;
    LODWORD(v6) = 0;
  }
  if ( v54 )
  {
    v55 = *(_DWORD *)(a1 + 764);
    v56 = v63;
    v57 = v55 == -1;
    v58 = v55 + 1;
    *(_BYTE *)(a1 + 1060) = 0;
    if ( !v57 )
      v12 = v58;
    *v53 = v56;
    *(_DWORD *)(a1 + 764) = v12;
    *(LARGE_INTEGER *)(a1 + 1048) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 1056) = 0;
    PpmEventDomainPerfStateChange(a1);
  }
  return v54;
}
