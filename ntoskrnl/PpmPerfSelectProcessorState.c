char __fastcall PpmPerfSelectProcessorState(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  unsigned int v3; // r15d
  __int64 v4; // r13
  __int64 v6; // r8
  __int64 *v7; // rbp
  __int64 PerfPolicyClass; // rsi
  __int64 v9; // r8
  int v10; // r9d
  char v11; // r10
  unsigned int v12; // r12d
  char v13; // dl
  char v14; // r11
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  unsigned __int8 v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // esi
  unsigned int v22; // r9d
  unsigned int v23; // r12d
  unsigned int v24; // eax
  bool v25; // al
  unsigned int v26; // r10d
  char v27; // cl
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // ecx
  int v31; // eax
  unsigned int v33; // eax
  char v34; // al
  unsigned int v35; // eax
  char v36; // dl
  unsigned int v37; // r10d
  unsigned __int8 v38; // al
  bool v39; // cc
  unsigned __int8 v40; // al
  char v41; // al
  char v42; // al
  unsigned int v43; // eax
  bool v44; // cf
  unsigned __int8 v45; // [rsp+50h] [rbp-68h]
  unsigned int v46; // [rsp+54h] [rbp-64h]
  int v47; // [rsp+58h] [rbp-60h]
  unsigned int v48; // [rsp+5Ch] [rbp-5Ch]
  __int64 v49; // [rsp+60h] [rbp-58h]
  __int64 v50; // [rsp+68h] [rbp-50h]
  char v51; // [rsp+C0h] [rbp+8h]
  char v52; // [rsp+C8h] [rbp+10h]
  char v53; // [rsp+D0h] [rbp+18h]
  unsigned int v54; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = (unsigned int)PpmMfBufferingThreshold;
  v3 = 0;
  v4 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 16);
  v50 = *(_QWORD *)(v1 + 8);
  v53 = 0;
  v47 = 1;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    LOBYTE(v2) = 100;
  v7 = &PpmCurrentProfile[55 * dword_140C3D48C + 5];
  if ( v6
    && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile
    && byte_140C3D4CC
    && *(_BYTE *)(v6 + 233) < (unsigned __int8)v2 )
  {
    v7 = (__int64 *)((char *)&unk_140C390C8 + 440 * dword_140C3D48C);
    v53 = 0;
  }
  PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(a1, v2, v6, *((unsigned int *)v7 + 14));
  v49 = PerfPolicyClass;
  v12 = *((unsigned __int8 *)v7 + PerfPolicyClass + 40);
  v13 = *((_BYTE *)v7 + PerfPolicyClass + 34);
  v14 = *((_BYTE *)v7 + PerfPolicyClass + 121);
  v46 = *((unsigned __int8 *)v7 + PerfPolicyClass + 30);
  v54 = *((unsigned __int8 *)v7 + PerfPolicyClass + 32);
  v52 = *((_BYTE *)v7 + PerfPolicyClass + 36);
  v51 = v13;
  v48 = *((unsigned __int8 *)v7 + PerfPolicyClass + 38);
  v15 = (v48 + v12) >> 1;
  v45 = v15;
  if ( v9 )
  {
    v16 = *((_DWORD *)v7 + PerfPolicyClass + 23);
    v17 = *((_DWORD *)v7 + PerfPolicyClass + 21);
    if ( v16 == v17 )
    {
      *(_BYTE *)(v1 + 60) = 0;
LABEL_8:
      LOBYTE(v15) = v45;
      goto LABEL_9;
    }
    v36 = *(_BYTE *)(v1 + 60);
    v37 = *(_DWORD *)(v9 + 240);
    if ( v36 )
    {
      v39 = v37 <= v17;
      v11 = 0;
      if ( !v39 )
      {
        *(_BYTE *)(v1 + 61) = 0;
        goto LABEL_63;
      }
      v11 = 0;
      v40 = *(_BYTE *)(v1 + 61) + 1;
      *(_BYTE *)(v1 + 61) = v40;
      if ( v40 >= *((_BYTE *)v7 + PerfPolicyClass + 100) )
      {
        *(_WORD *)(v1 + 60) = 0;
        v36 = 0;
      }
    }
    else
    {
      v44 = v37 < v16;
      v11 = 0;
      if ( v44 )
      {
        *(_BYTE *)(v1 + 61) = 0;
      }
      else
      {
        v11 = 0;
        v38 = *(_BYTE *)(v1 + 61) + 1;
        *(_BYTE *)(v1 + 61) = v38;
        if ( v38 >= *((_BYTE *)v7 + PerfPolicyClass + 102) )
        {
          *(_WORD *)(v1 + 60) = 1;
          v36 = 1;
        }
      }
    }
    if ( !v36 )
    {
LABEL_50:
      v13 = v51;
      goto LABEL_8;
    }
LABEL_63:
    v53 = 0;
    goto LABEL_50;
  }
LABEL_9:
  if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v10 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v18 = *(_DWORD *)(v1 + 24);
    else
      v18 = 100;
  }
  else
  {
    v18 = *(_DWORD *)(v4 + 444);
  }
  if ( !*(_BYTE *)(v4 + 510) )
  {
    v30 = 5;
    v53 = v11;
    v21 = v18;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a1 + 68) && *(_BYTE *)(a1 + 92) && v14 )
  {
    v53 = v11 | 1;
    v21 = v18;
    v30 = 1;
    if ( v14 == 1 )
      v21 = 1;
    goto LABEL_33;
  }
  v19 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v19 = 100;
  if ( !(_BYTE)v15 )
  {
    v41 = v52;
    if ( !v52 )
      v41 = 2;
    v52 = v41;
    v42 = v13;
    if ( !v13 )
      v42 = 2;
    v51 = v42;
  }
  v20 = *(_DWORD *)(a1 + 40);
  v21 = *(_DWORD *)(v1 + 56);
  if ( PpmPerfCalculateActualUtilization )
  {
    v3 = v20 / *(unsigned __int16 *)(a1 + 62);
    if ( PpmPerfCalculateActualUtilization == 2 )
      v21 = *(_DWORD *)(v1 + 72);
  }
  else
  {
    v3 = v20 / v21;
  }
  v22 = v21;
  if ( v3 > v12 )
  {
    v23 = v54;
    v24 = *(_DWORD *)(v1 + 136) + 1;
    *(_QWORD *)(v1 + 136) = v24;
    v25 = v24 >= v54 || !PpmPerfCheckCountVersion;
    if ( v21 >= v18 || !v25 )
    {
LABEL_26:
      v26 = v46;
LABEL_27:
      v27 = v53;
      goto LABEL_28;
    }
    *(_DWORD *)(v1 + 136) = 0;
    switch ( v52 )
    {
      case 0:
        v35 = v20 / v45;
        v53 = 16;
LABEL_45:
        v21 = v35;
        break;
      case 1:
        v21 += PpmPerfSingleStepSize;
        v53 = 32;
        break;
      case 2:
        v53 = 64;
        v21 = v18;
        break;
      case 3:
        if ( v3 < v19 )
          v35 = v20 / v45;
        else
          v35 = v20 / v48;
        v53 = 0x80;
        goto LABEL_45;
    }
    if ( v21 >= v18 )
      v21 = v18;
    goto LABEL_26;
  }
  v26 = v46;
  if ( v3 >= v48
    || ((v33 = *(_DWORD *)(v1 + 140) + 1, *(_DWORD *)(v1 + 136) = 0, *(_DWORD *)(v1 + 140) = v33, v33 >= v46)
     || !PpmPerfCheckCountVersion
      ? (v34 = 1)
      : (v34 = 0),
        v21 <= 1 || !v34) )
  {
    v23 = v54;
    goto LABEL_27;
  }
  *(_DWORD *)(v1 + 140) = 0;
  v47 = 3;
  if ( v51 )
  {
    if ( v51 == 1 )
    {
      v27 = 0;
      if ( v21 > PpmPerfSingleStepSize )
      {
        v23 = v54;
        v21 -= PpmPerfSingleStepSize;
        goto LABEL_28;
      }
    }
    else
    {
      v27 = 0;
      if ( v51 != 2 )
      {
        v23 = v54;
        goto LABEL_28;
      }
    }
    v23 = v54;
    v53 = 0;
    v21 = 1;
    goto LABEL_28;
  }
  v23 = v54;
  v27 = 0;
  v21 = v20 / v45;
LABEL_28:
  if ( PpmPerfCheckCountVersion || PpmCheckCurrentPipelineId == 5 )
    goto LABEL_29;
  v43 = *(_DWORD *)(v4 + 1056);
  v44 = v21 < v22;
  if ( v21 <= v22 )
  {
LABEL_100:
    if ( !v44 || v43 >= v26 )
      goto LABEL_29;
    goto LABEL_102;
  }
  if ( v43 >= v23 )
  {
    v44 = v21 < v22;
    goto LABEL_100;
  }
LABEL_102:
  v21 = v22;
  v53 = v27;
LABEL_29:
  if ( v9 )
  {
    v28 = *(unsigned __int8 *)(v9 + 238);
    if ( (_BYTE)v28 )
    {
      *(_BYTE *)(v9 + 238) = 0;
      v53 = v27;
      if ( v21 <= v28 )
        v21 = v28;
    }
    v29 = *(unsigned __int8 *)(v9 + 239);
    if ( (_BYTE)v29 )
    {
      *(_BYTE *)(v9 + 239) = 0;
      v53 = v27;
      if ( v21 <= v29 )
        v21 = v29;
    }
  }
  v30 = v47;
LABEL_33:
  v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, _QWORD, _QWORD))(v4 + 376))(
          v50,
          v21,
          *(unsigned int *)(v4 + 452),
          v18,
          *((_DWORD *)v7 + v49 + 16),
          *((_DWORD *)v7 + 18),
          v30,
          0LL,
          0LL);
  *(_DWORD *)(v1 + 56) = v31;
  return PpmEventPerfSelectProcessorState(a1, v3, v21, v31, v53);
}
