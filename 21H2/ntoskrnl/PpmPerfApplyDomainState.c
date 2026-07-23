/*
 * XREFs of PpmPerfApplyDomainState @ 0x14021DB70
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x14021DB00 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     PpmPerfApplyCapsAndFloors @ 0x14021E12C (PpmPerfApplyCapsAndFloors.c)
 *     PpmGetPerfPolicyClass @ 0x14021E1DC (PpmGetPerfPolicyClass.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PpmEventDomainPerfStateChange @ 0x14039A758 (PpmEventDomainPerfStateChange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeIsSubsetAffinityEx @ 0x140513880 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v3; // r12
  __int64 v4; // rcx
  unsigned __int8 PerfPolicyClass; // al
  __int64 v6; // r8
  unsigned int v7; // r11d
  char v8; // dl
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned int v11; // r15d
  __int64 *v12; // r14
  __int64 v13; // rbx
  unsigned int v14; // r13d
  unsigned __int64 v15; // rsi
  unsigned int v16; // r14d
  unsigned int v17; // esi
  __int64 v18; // rbx
  __int128 *v19; // rdx
  char v20; // r8
  __int64 v22; // r12
  int v23; // r10d
  unsigned int v24; // ecx
  char v25; // r8
  unsigned int v26; // r15d
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // eax
  bool v39; // cf
  unsigned int v40; // ecx
  unsigned int v41; // r13d
  char v42; // r14
  unsigned int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  int IsSubsetAffinity; // eax
  char v47; // r8
  char v48; // r9
  int v49; // eax
  char v50; // [rsp+50h] [rbp-49h]
  char v51; // [rsp+51h] [rbp-48h]
  unsigned __int8 v52; // [rsp+52h] [rbp-47h]
  char v53; // [rsp+53h] [rbp-46h]
  int v54; // [rsp+54h] [rbp-45h] BYREF
  unsigned int v55; // [rsp+58h] [rbp-41h]
  int v56; // [rsp+5Ch] [rbp-3Dh]
  unsigned int v57; // [rsp+60h] [rbp-39h]
  unsigned int v58; // [rsp+64h] [rbp-35h]
  unsigned int v59; // [rsp+68h] [rbp-31h]
  unsigned int v60; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v61; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v62; // [rsp+74h] [rbp-25h] BYREF
  unsigned int v63; // [rsp+78h] [rbp-21h]
  unsigned int v64; // [rsp+7Ch] [rbp-1Dh] BYREF
  __int64 *v65; // [rsp+80h] [rbp-19h]
  __int64 v66; // [rsp+88h] [rbp-11h] BYREF
  __int64 v67; // [rsp+90h] [rbp-9h]
  __int128 v68; // [rsp+98h] [rbp-1h] BYREF
  __int128 v69; // [rsp+A8h] [rbp+Fh]
  __int64 v70; // [rsp+B8h] [rbp+1Fh]

  v70 = 0LL;
  v1 = *(_QWORD *)(a1 + 216);
  v64 = 0;
  v66 = 0LL;
  v3 = 0;
  v68 = 0LL;
  v67 = *(_QWORD *)(v1 + 8);
  v69 = 0LL;
  v51 = 0;
  v53 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v65 = &PpmCurrentProfile[342 * dword_140C2332C + 5];
  PerfPolicyClass = PpmGetPerfPolicyClass(v4);
  v7 = *(_DWORD *)(a1 + 328);
  v8 = 0;
  v52 = PerfPolicyClass;
  v9 = 100;
  v10 = *(_DWORD *)(a1 + 320);
  v11 = v6;
  v54 = 100;
  v58 = v6;
  v50 = 0;
  v57 = v6;
  v60 = v10;
  v61 = v10;
  v55 = v7;
  v62 = v7;
  if ( PpmPerfArtificialDomainEnabled == (_DWORD)v6
    || (IsSubsetAffinity = KeIsSubsetAffinityEx(a1 + 24, &PpmPerfNewCoreParkingMask),
        v7 = v55,
        v8 = 0,
        v6 = 0LL,
        IsSubsetAffinity)
    || *(_DWORD *)(a1 + 208) != v11 )
  {
    v12 = *(__int64 **)a1;
    v13 = a1;
  }
  else
  {
    v13 = PpmPerfDomainHead;
    v12 = &PpmPerfDomainHead;
  }
  if ( (__int64 *)v13 != v12 )
  {
    v14 = v11;
    while ( 1 )
    {
      v15 = *(unsigned int *)(v13 + 364);
      if ( v13 == a1 )
        goto LABEL_6;
      if ( !*(_DWORD *)(v13 + 208)
        && !(unsigned int)KeIsSubsetAffinityEx(v13 + 24, &PpmPerfNewCoreParkingMask)
        && *(_QWORD *)(*(_QWORD *)(a1 + 16) - 32936LL) == *(_QWORD *)(*(_QWORD *)(v13 + 16) - 32936LL) )
      {
        v47 = *(_BYTE *)(a1 + 204);
        v48 = *(_BYTE *)(v13 + 204);
        if ( v47 == v48 || PpmPerfQosEnabled )
          break;
      }
LABEL_11:
      v13 = *(_QWORD *)v13;
      if ( (__int64 *)v13 == v12 )
      {
        v16 = v61;
        v6 = 0LL;
        v7 = v62;
        v8 = v50;
        v57 = v14;
        v9 = v54;
        v58 = v11;
        v60 = v61;
        v55 = v62;
        goto LABEL_13;
      }
    }
    if ( *(_BYTE *)(a1 + 205) != *(_BYTE *)(v13 + 205) )
    {
      v15 = (*(_QWORD *)(v13 + 344) * v15 + (*(_QWORD *)(v13 + 344) >> 1)) / *(_QWORD *)(a1 + 344);
      if ( (unsigned int)v15 > *(_DWORD *)(a1 + 320) )
        LODWORD(v15) = *(_DWORD *)(a1 + 320);
    }
    if ( v47 != v48 )
    {
      if ( (unsigned int)v15 <= v14 )
        LODWORD(v15) = v14;
      v14 = v15;
      goto LABEL_11;
    }
LABEL_6:
    if ( (unsigned int)v15 <= v11 )
      LODWORD(v15) = v11;
    v11 = v15;
    if ( *(_BYTE *)(v13 + 372) )
      v50 = 1;
    v51 |= PpmPerfApplyCapsAndFloors(&v61, &v62, &v54, v13);
    goto LABEL_11;
  }
  v16 = v60;
LABEL_13:
  v17 = v6;
  v18 = v6;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 4 * v18 + 516) )
    {
      v19 = (__int128 *)(a1 + 8 * (v17 - 1 + 4LL * (v17 - 1) + 69));
      goto LABEL_17;
    }
    v56 = v6;
    v22 = 28 * v18 + a1 + 376;
    v23 = v6;
    if ( *(_BYTE *)(v22 + 21) )
    {
      v24 = *(_DWORD *)(a1 + 328);
      v23 = 1;
      v56 = 1;
    }
    else
    {
      v24 = *(_DWORD *)(a1 + 324);
    }
    if ( v24 <= *(_DWORD *)(v22 + 8) )
      v24 = *(_DWORD *)(v22 + 8);
    v25 = *(_BYTE *)(v22 + 22);
    if ( v25 )
    {
      v26 = *(_DWORD *)(a1 + 320);
    }
    else
    {
      v23 |= 8u;
      v26 = v9;
      v56 = v23;
      if ( !PpmPerfBoostAtGuaranteed )
        v26 = 100;
    }
    if ( *(_DWORD *)v22 < 0x64u && v26 >= *(_DWORD *)v22 )
      v26 = *(_DWORD *)v22;
    if ( v26 >= *(_DWORD *)(v22 + 4) )
      v26 = *(_DWORD *)(v22 + 4);
    if ( PpmPerfMaxOverrideEnabled )
    {
      v27 = 100;
    }
    else if ( PpmCheckLatencyBoostActive )
    {
      v27 = *(unsigned __int8 *)(v22 + 23);
    }
    else if ( v8 )
    {
      v27 = *((_DWORD *)v65 + v52 + 28);
    }
    else
    {
      v27 = 0;
    }
    if ( v27 >= v26 )
      v27 = v26;
    v28 = v27 > v24 ? v27 : v24;
    if ( v28 < v9 )
    {
      v29 = v24;
      if ( v27 > v24 )
        v29 = v27;
    }
    else
    {
      v29 = v9;
    }
    if ( v29 > v7 )
    {
      if ( v27 > v24 )
        v30 = v27;
      else
        v30 = v24;
      if ( v30 < v9 )
      {
        v7 = v24;
        if ( v27 > v24 )
          v7 = v27;
      }
      else
      {
        v7 = v9;
      }
    }
    v59 = v7;
    v31 = v26 > v24 ? v26 : v24;
    if ( v31 < v16 )
    {
      v32 = v26;
      if ( v26 <= v24 )
        v32 = v24;
    }
    else
    {
      v32 = v16;
    }
    if ( v32 <= v55 )
    {
      v26 = v55;
    }
    else
    {
      v33 = v26 > v24 ? v26 : v24;
      if ( v33 < v16 )
      {
        if ( v26 <= v24 )
          v26 = v24;
      }
      else
      {
        v26 = v16;
      }
    }
    if ( PpmPerfMaxOverrideEnabled )
    {
      v34 = v26;
      v35 = v26;
    }
    else
    {
      if ( *(_BYTE *)(v22 + 24) )
      {
        v34 = v58;
        if ( v58 <= v57 )
          v34 = v57;
      }
      else
      {
        v34 = v58;
      }
      v35 = v34;
      if ( v34 > v26 )
      {
        v35 = v26;
        v49 = v23 | 2;
        if ( !v51 )
          v49 = v23;
        v23 = v49;
        v56 = v49;
        goto LABEL_71;
      }
    }
    if ( v34 < v7 )
      v35 = v7;
LABEL_71:
    if ( v25 == 2 || (unsigned __int8)(v25 - 4) <= 2u )
    {
      v36 = (unsigned __int8)(v25 - 5) <= 1u || PpmPerfBoostAtGuaranteed ? v9 : 100;
      if ( (unsigned int)v35 >= v36 )
        v35 = v26;
    }
    if ( PpmPerfMaxOverrideEnabled )
      v37 = 0;
    else
      v37 = *((_DWORD *)v65 + 15);
    v38 = v34 - v37;
    v39 = v37 < v34;
    v40 = v7;
    if ( !v39 )
      v38 = 0;
    if ( v38 >= v7 )
      v40 = v38;
    v63 = v40;
    if ( v40 > v9 )
      v63 = v9;
    if ( PpmPerfMaxOverrideEnabled || PpmCheckDeadlineBoostActive )
      v41 = 0;
    else
      v41 = *(_DWORD *)(v22 + 16);
    if ( v50 && v41 >= *((_DWORD *)v65 + v52 + 26) )
      v41 = *((_DWORD *)v65 + v52 + 26);
    v42 = *(_BYTE *)(v22 + 20);
    if ( !v42 )
      v56 = v23 | 4;
    v43 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, _DWORD, int, unsigned int *, __int64 *))(a1 + 280))(
            v67,
            v35,
            v7,
            v26,
            v41,
            *(_DWORD *)(v22 + 12),
            v56,
            &v64,
            &v66);
    v44 = v63;
    if ( v63 > v43 )
      v44 = v43;
    HIDWORD(v70) = v42 == 0;
    *(_QWORD *)&v68 = v66;
    *(_QWORD *)&v69 = __PAIR64__(v26, v59);
    LODWORD(v70) = *(_DWORD *)(v22 + 12);
    *((_QWORD *)&v68 + 1) = __PAIR64__(v64, v43);
    *((_QWORD *)&v69 + 1) = __PAIR64__(v41, v44);
    if ( !v17 && *(_QWORD *)(a1 + 304) )
      BYTE5(v70) = 1;
    v3 = v53;
    v19 = &v68;
LABEL_17:
    if ( *(_BYTE *)(a1 + 764)
      || (v20 = *((_BYTE *)v19 + 36), *(_BYTE *)(a1 + 40 * v18 + 588) != v20)
      || *(_DWORD *)(a1 + 40 * v18 + 568) != *((_DWORD *)v19 + 4)
      || *(_DWORD *)(a1 + 40 * v18 + 572) != *((_DWORD *)v19 + 5)
      || *(_DWORD *)(a1 + 40 * v18 + 580) != *((_DWORD *)v19 + 7) )
    {
      v9 = v54;
LABEL_98:
      v3 = 1;
      v53 = 1;
      *(_OWORD *)(a1 + 40 * v18 + 552) = *v19;
      *(_OWORD *)(a1 + 40 * v18 + 568) = v19[1];
      *(_QWORD *)(a1 + 40 * v18 + 584) = *((_QWORD *)v19 + 4);
      goto LABEL_28;
    }
    v9 = v54;
    if ( *(_DWORD *)(a1 + 40 * v18 + 584) != *((_DWORD *)v19 + 8)
      || *(_QWORD *)(a1 + 40 * v18 + 552) != *(_QWORD *)v19
      || v54 != *(_DWORD *)(a1 + 368)
      || !v20
      && (*(_DWORD *)(a1 + 40 * v18 + 576) != *((_DWORD *)v19 + 6)
       || *(_DWORD *)(a1 + 40 * v18 + 560) != *((_DWORD *)v19 + 2)) )
    {
      goto LABEL_98;
    }
LABEL_28:
    v16 = v60;
    ++v17;
    v7 = v55;
    ++v18;
    v8 = v50;
    if ( v17 >= 5 )
      break;
    LODWORD(v6) = 0;
  }
  if ( v3 )
  {
    v45 = *(_DWORD *)(a1 + 548) + 1;
    if ( *(_DWORD *)(a1 + 548) == -1 )
      v45 = 1;
    *(_DWORD *)(a1 + 368) = v54;
    *(_DWORD *)(a1 + 548) = v45;
    *(_BYTE *)(a1 + 764) = 0;
    *(LARGE_INTEGER *)(a1 + 752) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 760) = 0;
    PpmEventDomainPerfStateChange(a1);
  }
  return v3;
}
