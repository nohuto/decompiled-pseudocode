/*
 * XREFs of PpmPerfCalculateQosClassPolicies @ 0x1403A2F3C
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x14078B79C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x14021E1DC (PpmGetPerfPolicyClass.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 */

char __fastcall PpmPerfCalculateQosClassPolicies(__int64 a1)
{
  char v1; // si
  _DWORD *v3; // rdi
  unsigned int v4; // r12d
  __int64 v5; // r13
  int v6; // r8d
  __int64 v7; // r9
  __int64 PerfPolicyClass; // r15
  int v9; // ebx
  __int64 *v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // xmm1_8
  __int64 v16; // rdx
  int v17; // ebx
  SIZE_T v18; // rax
  __int64 v19; // xmm1_8
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // r9d
  _WORD *v23; // rdi
  unsigned int i; // esi
  unsigned int j; // ebx
  __int64 v27; // rax
  __int64 *v28; // r10
  _DWORD *v29; // rax
  unsigned int v30; // esi
  unsigned int v31; // ebx
  int v32; // eax
  unsigned int v33; // r11d
  char v34; // al
  char v35; // al
  char v36; // dl
  char v37; // al
  int v38; // eax
  __int64 v39; // rbx
  SIZE_T v40; // rax
  __int128 v41; // xmm0
  __int64 v42; // xmm1_8
  int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // [rsp+20h] [rbp-40h]
  char v51; // [rsp+24h] [rbp-3Ch]
  char v52; // [rsp+28h] [rbp-38h]
  int v53; // [rsp+2Ch] [rbp-34h]
  __int128 Source2; // [rsp+30h] [rbp-30h] BYREF
  __int64 v55; // [rsp+40h] [rbp-20h]
  int v56; // [rsp+48h] [rbp-18h]

  v1 = 0;
  v52 = 0;
  v51 = 0;
  v3 = 0LL;
  v50 = 0;
  v4 = 0;
  v53 = dword_140C2332C;
  v5 = 0LL;
  PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(*(_BYTE **)(a1 + 16));
  v9 = v7 + 64;
  while ( 1 )
  {
    v55 = 0LL;
    v56 = 0;
    Source2 = 0LL;
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1u:
          v11 = PpmEntryLevelPerfProfile;
          break;
        case 2u:
          v11 = PpmBackgroundProfile;
          break;
        case 3u:
          v11 = PpmMultimediaQosProfile;
          v3 = (_DWORD *)(a1 + 376);
          break;
        default:
          if ( PpmMultimediaQosProfile == v7 )
            v10 = (__int64 *)v7;
          else
            v10 = (__int64 *)((char *)&unk_140C1EE68 + 2736 * v6);
          goto LABEL_12;
      }
      if ( !v11 )
      {
        v10 = (__int64 *)v7;
        goto LABEL_12;
      }
      v27 = v6;
      v28 = (__int64 *)(v11 + 40);
    }
    else
    {
      v27 = dword_140C2332C;
      v28 = PpmCurrentProfile + 5;
    }
    v10 = &v28[342 * v27];
LABEL_12:
    if ( v10 )
    {
      v12 = *v10;
      v13 = v10[PerfPolicyClass];
    }
    else
    {
      v12 = v7;
      v13 = v7;
    }
    if ( v3 )
    {
      v14 = v3[6];
      v15 = *((_QWORD *)v3 + 2);
      Source2 = *(_OWORD *)v3;
      if ( !PopHeteroSystem )
        LODWORD(v7) = v9;
      v55 = v15;
      v56 = v14;
      if ( PpmPerfQosGroupPolicyDisable )
        LODWORD(v7) = v7 | 0x100;
      if ( !PpmPerfSchedulerDirectedPerfStatesSupported )
        LODWORD(v7) = v7 | 0x80;
      if ( v10 )
      {
        if ( (v13 & 0x400000040C0LL) == 0 && (v12 & 0x1C000000C00LL) == 0 )
          LODWORD(v7) = v7 | 4;
      }
      else
      {
        LODWORD(v7) = v7 | 2;
      }
      v16 = *(__int64 *)((char *)PpmCurrentProfile + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
      if ( !v16 )
        v16 = *(__int64 *)((char *)PpmCurrentProfile + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
      v17 = v7 | 0x20;
      if ( v16 )
        v17 = v7;
      v7 = 0LL;
      if ( PpmPerfMaxOverrideEnabled )
        v17 |= 0x10u;
      if ( PpmPerfQosDisableRefcount )
        v17 |= 1u;
      if ( v17 )
      {
        v18 = RtlCompareMemory((const void *)(a1 + 28LL * v4 + 376), &Source2, 0x1CuLL);
        v19 = v55;
        if ( v18 == 28 )
          v1 = 1;
        v20 = v56;
        v21 = 28 * v5;
        v51 = v1;
        *(_OWORD *)(v21 + a1 + 376) = Source2;
        *(_QWORD *)(v21 + a1 + 392) = v19;
        *(_DWORD *)(v21 + a1 + 400) = v20;
        *(_DWORD *)(a1 + 4 * v5 + 516) = v17;
        goto LABEL_35;
      }
      LOBYTE(v9) = 64;
    }
    if ( v4 == 3 )
    {
      v12 = 0x1C000000C00LL;
      v13 = 0x400000040C0LL;
    }
    v29 = (_DWORD *)v7;
    if ( v4 != 3 )
      v29 = v3;
    v3 = v29;
    if ( PpmPerfEppViaPerfControl != (_BYTE)v7
      && (!v29 || (BYTE4(v13) & (unsigned __int8)v9) != 0 && v29[4] < *((_DWORD *)v10 + PerfPolicyClass + 16)) )
    {
      LODWORD(v55) = *((_DWORD *)v10 + PerfPolicyClass + 16);
    }
    if ( !v29
      || ((unsigned __int8)v13 & (unsigned __int8)v9) != 0
      && v29[2] > (unsigned int)*((unsigned __int8 *)v10 + PerfPolicyClass + 26) )
    {
      v30 = *((unsigned __int8 *)v10 + PerfPolicyClass + 26);
      DWORD2(Source2) = v30;
    }
    else
    {
      v30 = DWORD2(Source2);
    }
    if ( v29 && ((v13 & 0x80u) == 0LL || *v29 <= (unsigned int)*((unsigned __int8 *)v10 + PerfPolicyClass + 28)) )
    {
      v31 = Source2;
    }
    else
    {
      v31 = *((unsigned __int8 *)v10 + PerfPolicyClass + 28);
      LODWORD(Source2) = v31;
    }
    v32 = *((_DWORD *)v10 + PerfPolicyClass + 11);
    v33 = *(_DWORD *)(a1 + 320);
    if ( v32 )
    {
      v45 = (unsigned int)((*(_DWORD *)(a1 + 316) >> 1) + 100 * v32) / *(_DWORD *)(a1 + 316);
      if ( v45 < v33 )
        v33 = v45;
      LODWORD(v7) = 0;
    }
    if ( !v3 || (v13 & 0x40000000000LL) != 0 && v3[1] > v33 )
      DWORD1(Source2) = v33;
    else
      v33 = DWORD1(Source2);
    if ( PpmPerfAutonomousActivityWindowViaPerfControl != (_BYTE)v7 && (!v3 || (v12 & 0x8000000000LL) != 0) )
      HIDWORD(Source2) = *((_DWORD *)v10 + 18);
    if ( !v3 || (v12 & 0x400) != 0 && *((_BYTE *)v3 + 22) != (_BYTE)v7 && *((_DWORD *)v10 + 14) == (_DWORD)v7 )
      BYTE6(v55) = *((_BYTE *)v10 + 56);
    if ( !v3 || (v13 & 0x4000) != 0 && *((_BYTE *)v3 + 23) > *((_BYTE *)v10 + PerfPolicyClass + 77) )
      HIBYTE(v55) = *((_BYTE *)v10 + PerfPolicyClass + 77);
    v34 = *((_BYTE *)v10 + 16);
    if ( v34 == 1 || v34 == 2 && *(_BYTE *)(a1 + 356) != (_BYTE)v7 )
      v35 = 1;
    else
      v35 = v7;
    if ( !v3 || (v12 & 0x800) != 0 )
      BYTE5(v55) = v35;
    if ( *((_BYTE *)v10 + 76) == (_BYTE)v7 || (v36 = v7, *(_BYTE *)(a1 + 359) == (_BYTE)v7) )
      v36 = 1;
    if ( !v3 || (v12 & 0x10000000000LL) != 0 )
    {
      v37 = v52;
      if ( v36 )
        v37 = 1;
      BYTE4(v55) = v36;
      v52 = v37;
    }
    if ( v31 < v30 )
      v31 = v30;
    LODWORD(Source2) = v31;
    if ( v33 < v30 )
      v33 = v30;
    DWORD1(Source2) = v33;
    if ( v4 == 4 )
    {
      v46 = *(unsigned __int8 *)(a1 + 483);
      v47 = v33;
      if ( v31 < v33 )
        v47 = v31;
      if ( v47 >= v46 )
      {
        v48 = *(unsigned __int8 *)(a1 + 483);
      }
      else
      {
        v48 = v33;
        if ( v31 < v33 )
          v48 = v31;
      }
      if ( v30 <= v48 )
      {
        v49 = v33;
        if ( v31 < v33 )
          v49 = v31;
        if ( v49 >= v46 )
        {
          DWORD2(Source2) = *(unsigned __int8 *)(a1 + 483);
        }
        else
        {
          if ( v31 < v33 )
            v33 = v31;
          DWORD2(Source2) = v33;
        }
      }
    }
    if ( v36
      && ((v38 = PpmHeteroQosBias[v5], v38 == 1)
       || v38 == 3 && *(_BYTE *)(a1 + 204) > (unsigned __int8)v7
       || v38 == 2 && *(_BYTE *)(a1 + 204) == (_BYTE)v7) )
    {
      LOBYTE(v56) = 1;
    }
    else
    {
      LOBYTE(v56) = v7;
    }
    v39 = 28LL * v4;
    v40 = RtlCompareMemory((const void *)(v39 + a1 + 376), &Source2, 0x1CuLL);
    v1 = v51;
    v41 = Source2;
    v42 = v55;
    if ( v40 != 28 )
      v1 = 1;
    *(_DWORD *)(a1 + 4 * v5 + 516) = 0;
    v43 = v56;
    v44 = 28 * v5;
    v51 = v1;
    *(_OWORD *)(v44 + a1 + 376) = v41;
    *(_QWORD *)(v44 + a1 + 392) = v42;
    *(_DWORD *)(v44 + a1 + 400) = v43;
    if ( v3 && RtlCompareMemory(v3, &Source2, 0x1CuLL) == 28 )
    {
      *(_DWORD *)(a1 + 4 * v5 + 516) = 8;
LABEL_35:
      v22 = v50;
      goto LABEL_36;
    }
    v3 = (_DWORD *)(v39 + a1 + 376);
    v22 = ++v50;
LABEL_36:
    v6 = v53;
    ++v4;
    ++v5;
    v9 = 64;
    if ( v4 >= 5 )
      break;
    v7 = 0LL;
  }
  v23 = (_WORD *)(a1 + 536);
  *(_BYTE *)(a1 + 546) = v22 > 1;
  *(_BYTE *)(a1 + 360) = v52;
  for ( i = 0; i < 5; ++i )
  {
    *v23 = 0;
    for ( j = 0; j < 5; ++j )
    {
      if ( i == j
        || RtlCompareMemory((const void *)(a1 + 28LL * i + 376), (const void *)(28LL * j + a1 + 376), 0x1CuLL) == 28 )
      {
        *v23 |= 1 << j;
      }
    }
    ++v23;
  }
  return v51;
}
