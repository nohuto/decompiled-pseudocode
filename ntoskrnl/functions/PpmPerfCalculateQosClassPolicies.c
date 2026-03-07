char __fastcall PpmPerfCalculateQosClassPolicies(__int64 a1)
{
  char v1; // r12
  _DWORD *v3; // rsi
  int v4; // r8d
  __int64 v5; // r10
  __int64 PerfPolicyClass; // r14
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // r11
  __int64 *v11; // r11
  __int64 *v12; // r13
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // xmm1_8
  int v18; // edx
  __int64 v19; // r9
  int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // rdi
  bool v23; // zf
  int v24; // eax
  __int64 v25; // xmm1_8
  unsigned int v26; // r9d
  __int64 v27; // r9
  __int64 v28; // r8
  char *v29; // r10
  unsigned int v30; // edi
  char *v31; // rcx
  unsigned int v32; // r12d
  unsigned int v33; // r14d
  char *v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // ebx
  int v38; // eax
  unsigned int v39; // eax
  _BYTE *v40; // rax
  char *v41; // rcx
  char v42; // al
  bool v43; // al
  char v44; // dl
  char v45; // al
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rbx
  SIZE_T v53; // rax
  __int128 v54; // xmm0
  int v55; // eax
  __int64 v56; // xmm1_8
  _WORD *v57; // rdi
  unsigned int v58; // esi
  unsigned int i; // ebx
  unsigned int v61; // [rsp+24h] [rbp-5Ch]
  char v62; // [rsp+28h] [rbp-58h]
  char v63; // [rsp+2Ch] [rbp-54h]
  __int64 v64; // [rsp+30h] [rbp-50h]
  unsigned int v65; // [rsp+38h] [rbp-48h]
  unsigned int v66; // [rsp+3Ch] [rbp-44h]
  int v67; // [rsp+40h] [rbp-40h]
  __int64 v68; // [rsp+48h] [rbp-38h]
  __int128 Source2; // [rsp+50h] [rbp-30h] BYREF
  __int64 v70; // [rsp+60h] [rbp-20h]
  int v71; // [rsp+68h] [rbp-18h]

  v1 = 0;
  v63 = 0;
  v62 = 0;
  v3 = 0LL;
  v61 = 0;
  v67 = dword_140C3D48C;
  v65 = 0;
  v68 = 0LL;
  PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(*(_BYTE **)(a1 + 16));
  v64 = PerfPolicyClass;
  do
  {
    v7 = (unsigned int)PpmQosClassesOrdered[2 * v5];
    v70 = 0LL;
    v71 = 0;
    v66 = v7;
    Source2 = 0LL;
    switch ( (_DWORD)v7 )
    {
      case 0:
        goto LABEL_30;
      case 1:
        v8 = PpmEntryLevelPerfProfile;
        v3 = (_DWORD *)(a1 + 524);
        goto LABEL_10;
      case 2:
        v8 = PpmBackgroundProfile;
        v3 = (_DWORD *)(a1 + 552);
        goto LABEL_10;
      case 3:
        v8 = PpmMultimediaQosProfile;
        v3 = (_DWORD *)(a1 + 524);
        goto LABEL_10;
    }
    if ( (_DWORD)v7 != 4 )
    {
      if ( (_DWORD)v7 == 5 )
      {
        v8 = PpmEcoQosProfile;
        v3 = (_DWORD *)(a1 + 692);
      }
      else
      {
        if ( (_DWORD)v7 != 6 )
        {
LABEL_30:
          v9 = dword_140C3D48C;
          v10 = PpmCurrentProfile + 5;
LABEL_31:
          v11 = &v10[55 * v9];
          goto LABEL_32;
        }
        v8 = PpmUtilityQosProfile;
        v3 = (_DWORD *)(a1 + 580);
      }
LABEL_10:
      if ( !v8 )
      {
        v11 = 0LL;
        goto LABEL_32;
      }
      v9 = v4;
      v10 = (__int64 *)(v8 + 40);
      goto LABEL_31;
    }
    v3 = (_DWORD *)(a1 + 524);
    if ( !PpmMultimediaQosProfile )
    {
      v11 = 0LL;
      v12 = 0LL;
      v13 = (_DWORD *)(a1 + 524);
LABEL_16:
      v14 = 0LL;
      v15 = 0LL;
      goto LABEL_17;
    }
    v11 = (__int64 *)((char *)&unk_140C390C8 + 440 * v4);
LABEL_32:
    v12 = v11;
    v13 = v3;
    if ( !v11 )
      goto LABEL_16;
    v14 = *v11;
    v15 = v11[PerfPolicyClass];
LABEL_17:
    if ( v3 )
    {
      v16 = 0;
      if ( !PopHeteroSystem )
        v16 = 64;
      v17 = *((_QWORD *)v3 + 2);
      v18 = v3[6];
      Source2 = *(_OWORD *)v3;
      v71 = v18;
      v70 = v17;
      if ( PpmPerfQosGroupPolicyDisable )
        v16 |= 0x100u;
      if ( !PpmPerfSchedulerDirectedPerfStatesSupported )
        v16 |= 0x80u;
      if ( v11 )
      {
        if ( (v14 & 0x1C000000C00LL) == 0 && (v15 & 0x400000040C0LL) == 0 )
          v16 |= 4u;
      }
      else
      {
        v16 |= 2u;
      }
      v19 = *(__int64 *)((char *)PpmCurrentProfile + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
      if ( !v19 )
        v19 = *(__int64 *)((char *)PpmCurrentProfile + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
      v20 = v16 | 0x20;
      if ( v19 )
        v20 = v16;
      if ( PpmPerfMaxOverrideEnabled )
        v20 |= 0x10u;
      if ( PpmPerfQosDisableRefcount )
        v20 |= 1u;
      if ( v20 )
      {
        v21 = a1 + 28 * v7;
        v22 = v7;
        v23 = RtlCompareMemory((const void *)(v21 + 524), &Source2, 0x1CuLL) == 28;
        v24 = v71;
        v25 = v70;
        v26 = v61;
        *(_OWORD *)(v21 + 524) = Source2;
        *(_QWORD *)(v21 + 540) = v25;
        if ( v23 )
          v1 = 1;
        *(_DWORD *)(v21 + 548) = v24;
        *(_DWORD *)(a1 + 4 * v22 + 720) = v20;
        v62 = v1;
        goto LABEL_161;
      }
      PerfPolicyClass = v64;
    }
    if ( (_DWORD)v7 == 3 )
    {
      v27 = 0x1C000000C00LL;
      v28 = 0x400000040C0LL;
      v3 = 0LL;
LABEL_52:
      v29 = (char *)v12 + PerfPolicyClass;
      goto LABEL_53;
    }
    v28 = v15;
    v27 = v14;
    v3 = v13;
    if ( !v13 )
      goto LABEL_52;
    v28 = v15;
    if ( (v15 & 0x80) == 0
      || (v29 = (char *)v11 + PerfPolicyClass, *v13 <= (unsigned int)*((unsigned __int8 *)v11 + PerfPolicyClass + 28)) )
    {
      v30 = Source2;
      goto LABEL_54;
    }
LABEL_53:
    v30 = (unsigned __int8)v29[28];
    LODWORD(Source2) = v30;
    if ( !v3 )
    {
      v31 = (char *)v12 + PerfPolicyClass;
      goto LABEL_62;
    }
LABEL_54:
    if ( (v28 & 0x40) == 0
      || (v31 = (char *)v11 + PerfPolicyClass, v3[2] <= (unsigned int)*((unsigned __int8 *)v11 + PerfPolicyClass + 26)) )
    {
      v32 = DWORD2(Source2);
      goto LABEL_63;
    }
LABEL_62:
    v32 = (unsigned __int8)v31[26];
    DWORD2(Source2) = v32;
LABEL_63:
    if ( PpmPerfEppViaPerfControl )
    {
      if ( !v3 || (v28 & 0x4000000000LL) != 0 && v3[4] < *((_DWORD *)v11 + PerfPolicyClass + 16) )
      {
        v33 = *((_DWORD *)v11 + PerfPolicyClass + 16);
        LODWORD(v70) = v33;
        if ( !v3 )
        {
          v34 = (char *)v12 + v64;
LABEL_73:
          LOBYTE(v71) = v34[79];
          goto LABEL_75;
        }
      }
      else
      {
        v33 = v70;
      }
      if ( (v28 & 0x2000000000000000LL) != 0 )
      {
        v34 = (char *)v11 + v64;
        if ( *((_BYTE *)v3 + 24) < *((_BYTE *)v11 + v64 + 79) )
          goto LABEL_73;
      }
    }
    else
    {
      v33 = v70;
    }
LABEL_75:
    if ( PpmFrequencyOverride )
    {
      v35 = (unsigned int)(100 * PpmFrequencyOverride + (*(_DWORD *)(a1 + 440) >> 1)) / *(_DWORD *)(a1 + 440);
      if ( v35 < v30 )
        v30 = (unsigned int)(100 * PpmFrequencyOverride + (*(_DWORD *)(a1 + 440) >> 1)) / *(_DWORD *)(a1 + 440);
      LODWORD(Source2) = v30;
      if ( v35 < v32 )
        v32 = v35;
      DWORD2(Source2) = v32;
    }
    v36 = v64;
    v37 = *(_DWORD *)(a1 + 444);
    v38 = *((_DWORD *)v11 + v64 + 11);
    if ( v38 )
    {
      v36 = v64;
      v39 = (unsigned int)((*(_DWORD *)(a1 + 440) >> 1) + 100 * v38) / *(_DWORD *)(a1 + 440);
      if ( v39 < v37 )
        v37 = v39;
    }
    if ( !v3 || (v28 & 0x40000000000LL) != 0 && v3[1] > v37 )
      DWORD1(Source2) = v37;
    else
      v37 = DWORD1(Source2);
    if ( PpmPerfAutonomousActivityWindowViaPerfControl )
    {
      if ( v3 && (v27 & 0x8000000000LL) == 0 )
      {
LABEL_94:
        if ( (v27 & 0x400) == 0 )
          goto LABEL_100;
        if ( !*((_BYTE *)v3 + 22) )
          goto LABEL_100;
        v40 = v11 + 7;
        if ( *((_DWORD *)v11 + 14) )
          goto LABEL_100;
        goto LABEL_99;
      }
      HIDWORD(Source2) = *((_DWORD *)v11 + 18);
    }
    if ( v3 )
      goto LABEL_94;
    v40 = v12 + 7;
LABEL_99:
    BYTE6(v70) = *v40;
    if ( !v3 )
    {
      v41 = (char *)v12 + v36;
LABEL_104:
      HIBYTE(v70) = v41[77];
      goto LABEL_105;
    }
LABEL_100:
    if ( (v28 & 0x4000) != 0 )
    {
      v41 = (char *)v11 + v36;
      if ( *((_BYTE *)v3 + 23) > (unsigned __int8)v41[77] )
        goto LABEL_104;
    }
LABEL_105:
    v42 = *((_BYTE *)v11 + 16);
    v43 = v42 == 1 || v42 == 2 && *(_BYTE *)(a1 + 484);
    if ( !v3 || (v27 & 0x800) != 0 )
      BYTE5(v70) = v43;
    if ( *(_BYTE *)(a1 + 509) == 2 )
    {
      v44 = 0;
    }
    else if ( !*((_BYTE *)v11 + 76) || (v44 = 0, !*(_BYTE *)(a1 + 508)) )
    {
      v44 = 1;
    }
    if ( !v3 || (v27 & 0x10000000000LL) != 0 )
    {
      v45 = v63;
      if ( v44 )
        v45 = 1;
      BYTE4(v70) = v44;
      v63 = v45;
    }
    if ( v30 < v32 )
      v30 = v32;
    LODWORD(Source2) = v30;
    if ( v37 < v32 )
      v37 = v32;
    DWORD1(Source2) = v37;
    if ( v66 == 4 )
    {
      v46 = *(unsigned __int8 *)(a1 + 631);
      v47 = v37;
      if ( v30 < v37 )
        v47 = v30;
      if ( v47 >= v46 )
      {
        v48 = *(unsigned __int8 *)(a1 + 631);
      }
      else
      {
        v48 = v37;
        if ( v30 < v37 )
          v48 = v30;
      }
      if ( v32 <= v48 )
      {
        v49 = v37;
        if ( v30 < v37 )
          v49 = v30;
        if ( v49 >= v46 )
        {
          DWORD2(Source2) = *(unsigned __int8 *)(a1 + 631);
        }
        else
        {
          if ( v30 < v37 )
            v37 = v30;
          DWORD2(Source2) = v37;
        }
      }
      if ( PpmPerfEppViaPerfControl )
      {
        if ( v33 >= *(unsigned __int8 *)(a1 + 632) )
          v33 = *(unsigned __int8 *)(a1 + 632);
        LODWORD(v70) = v33;
      }
    }
    if ( v44 )
    {
      v50 = v66;
      v51 = PpmHeteroQosBias[v66];
      if ( v51 == 1 )
        goto LABEL_159;
      if ( v51 == 3 )
      {
        if ( *(_BYTE *)(a1 + 300) )
          goto LABEL_159;
      }
      else if ( v51 == 2 && !*(_BYTE *)(a1 + 300) )
      {
LABEL_159:
        BYTE1(v71) = 1;
        goto LABEL_152;
      }
    }
    BYTE1(v71) = 0;
    v50 = v66;
LABEL_152:
    v52 = a1 + 28 * v50;
    v53 = RtlCompareMemory((const void *)(v52 + 524), &Source2, 0x1CuLL);
    v1 = v62;
    v54 = Source2;
    if ( v53 != 28 )
      v1 = 1;
    v55 = v71;
    v56 = v70;
    *(_DWORD *)(a1 + 4 * v50 + 720) = 0;
    v62 = v1;
    *(_OWORD *)(v52 + 524) = v54;
    *(_QWORD *)(v52 + 540) = v56;
    *(_DWORD *)(v52 + 548) = v55;
    if ( v3 && RtlCompareMemory(v3, &Source2, 0x1CuLL) == 28 )
    {
      v26 = v61;
      *(_DWORD *)(a1 + 4 * v50 + 720) = 8;
    }
    else
    {
      v26 = ++v61;
    }
LABEL_161:
    PerfPolicyClass = v64;
    v5 = v68 + 1;
    v4 = v67;
    ++v65;
    ++v68;
  }
  while ( v65 < 7 );
  v57 = (_WORD *)(a1 + 748);
  v58 = 0;
  *(_BYTE *)(a1 + 762) = v26 > 1;
  *(_BYTE *)(a1 + 510) = v63;
  do
  {
    *v57 = 0;
    for ( i = 0; i < 7; ++i )
    {
      if ( v58 == i
        || RtlCompareMemory((const void *)(a1 + 28LL * v58 + 524), (const void *)(28LL * i + a1 + 524), 0x1CuLL) == 28 )
      {
        *v57 |= 1 << i;
      }
    }
    ++v58;
    ++v57;
  }
  while ( v58 < 7 );
  PpmEventQosClassPolicyV1(a1, 0LL);
  return v1;
}
