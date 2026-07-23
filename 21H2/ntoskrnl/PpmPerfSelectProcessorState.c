/*
 * XREFs of PpmPerfSelectProcessorState @ 0x14020B970
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x14020B8E0 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

int __fastcall PpmPerfSelectProcessorState(__int64 *a1)
{
  __int64 v1; // r14
  int v2; // r10d
  unsigned __int8 v3; // r8
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 *v7; // rsi
  char v8; // al
  bool v9; // al
  int v10; // edx
  _BOOL8 v11; // rdi
  unsigned int v12; // ecx
  char v13; // r8
  char v14; // r11
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  unsigned __int8 v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // r8d
  int v24; // r15d
  int v25; // r10d
  unsigned int v26; // eax
  bool v27; // cf
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  const GUID *ActivityId; // r9
  const EVENT_DESCRIPTOR *v32; // r11
  unsigned int *v33; // rax
  REGHANDLE v34; // r10
  unsigned __int64 Keyword; // r8
  unsigned __int8 v36; // cl
  unsigned int v37; // ecx
  unsigned int v38; // eax
  char v39; // r8
  unsigned int v40; // r10d
  bool v41; // cc
  bool v42; // zf
  char v43; // al
  char v44; // al
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v48; // [rsp+50h] [rbp-69h]
  char v49; // [rsp+54h] [rbp-65h]
  char v50; // [rsp+55h] [rbp-64h]
  unsigned int v51; // [rsp+58h] [rbp-61h] BYREF
  int v52; // [rsp+5Ch] [rbp-5Dh]
  unsigned int v53; // [rsp+60h] [rbp-59h]
  unsigned int v54; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v56; // [rsp+78h] [rbp-41h] BYREF
  __int64 v57; // [rsp+80h] [rbp-39h] BYREF
  __int64 v58; // [rsp+88h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-29h] BYREF
  unsigned int *v60; // [rsp+A0h] [rbp-19h]
  __int64 v61; // [rsp+A8h] [rbp-11h]
  unsigned int *v62; // [rsp+B0h] [rbp-9h]
  __int64 v63; // [rsp+B8h] [rbp-1h]
  unsigned int *v64; // [rsp+C0h] [rbp+7h]
  __int64 v65; // [rsp+C8h] [rbp+Fh]
  __int64 *v66; // [rsp+D0h] [rbp+17h]
  __int64 v67; // [rsp+D8h] [rbp+1Fh]

  v1 = a1[1];
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v5 = *a1;
  v6 = a1[2];
  v58 = *(_QWORD *)(v1 + 8);
  v48 = 0;
  v53 = 0;
  v52 = 1;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v7 = &PpmCurrentProfile[342 * dword_140C2332C + 5];
  if ( v6 && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile && byte_140C2336C && *(_BYTE *)(v6 + 329) < v3 )
  {
    v2 = 4096;
    v7 = (__int64 *)((char *)&unk_140C1EE68 + 2736 * dword_140C2332C);
    v48 = 4096;
  }
  if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses > 1u )
  {
    if ( *a1 )
    {
      v8 = *(_BYTE *)(*a1 + 205);
      goto LABEL_8;
    }
  }
  else if ( *((_BYTE *)a1 + 60) )
  {
    v8 = *((_BYTE *)a1 + 80);
LABEL_8:
    v9 = v8 != 0;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  v10 = *((_DWORD *)v7 + 14);
  v11 = v9;
  v57 = v9;
  v12 = *((unsigned __int8 *)v7 + v9 + 38);
  v13 = *((_BYTE *)v7 + v9 + 34);
  v14 = *((_BYTE *)v7 + v9 + 121);
  v56 = *((unsigned __int8 *)v7 + v9 + 30);
  v55 = *((unsigned __int8 *)v7 + v9 + 32);
  v50 = *((_BYTE *)v7 + v9 + 36);
  v49 = v13;
  v54 = *((unsigned __int8 *)v7 + v9 + 40);
  v51 = v12;
  v15 = (v12 + v54) >> 1;
  if ( !v6 )
    goto LABEL_12;
  v16 = *((_DWORD *)v7 + v9 + 23);
  v17 = *((_DWORD *)v7 + v11 + 21);
  if ( v16 == v17 )
  {
    *(_BYTE *)(v1 + 60) = 0;
    goto LABEL_12;
  }
  v39 = *(_BYTE *)(v1 + 60);
  v40 = *(_DWORD *)(v6 + 336);
  if ( v39 )
  {
    v41 = v40 <= v17;
    v2 = v48;
    if ( v41 )
    {
      ++*(_BYTE *)(v1 + 61);
      v2 = v48 | 0x80000;
      v48 |= 0x80000u;
      if ( *(_BYTE *)(v1 + 61) >= *((_BYTE *)v7 + v11 + 100) )
      {
        *(_WORD *)(v1 + 60) = 0;
        v39 = 0;
      }
      goto LABEL_78;
    }
  }
  else
  {
    v27 = v40 < v16;
    v2 = v48;
    if ( !v27 )
    {
      ++*(_BYTE *)(v1 + 61);
      v2 = v48 | 0x100000;
      v48 |= 0x100000u;
      if ( *(_BYTE *)(v1 + 61) >= *((_BYTE *)v7 + v11 + 102) )
      {
        *(_WORD *)(v1 + 60) = 1;
        v39 = 1;
      }
      goto LABEL_78;
    }
  }
  *(_BYTE *)(v1 + 61) = 0;
LABEL_78:
  v42 = v39 == 0;
  v13 = v49;
  if ( !v42 )
  {
    v2 |= 0x200000u;
    v48 = v2;
  }
LABEL_12:
  if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v10 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v18 = *(_DWORD *)(v1 + 24);
    else
      v18 = 100;
  }
  else
  {
    v18 = *(_DWORD *)(v5 + 320);
  }
  if ( !*(_BYTE *)(v5 + 360) )
  {
    v21 = v18;
    v24 = v2 | 0x40000;
    v25 = v52;
    goto LABEL_35;
  }
  if ( *((_BYTE *)a1 + 60) && *((_BYTE *)a1 + 84) && v14 )
  {
    v21 = v18;
    v24 = v2 | 1;
    v25 = 1;
    if ( v14 == 1 )
      v21 = 1;
    goto LABEL_35;
  }
  v19 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v19 = 100;
  if ( !(_BYTE)v15 )
  {
    v43 = v50;
    if ( !v50 )
      v43 = 2;
    v50 = v43;
    v44 = v13;
    if ( !v13 )
      v44 = 2;
    v49 = v44;
  }
  v20 = *((_DWORD *)a1 + 10);
  v21 = *(_DWORD *)(v1 + 56);
  if ( PpmPerfCalculateActualUtilization )
  {
    v53 = v20 / *((unsigned __int16 *)a1 + 27);
    v22 = v53;
    if ( PpmPerfCalculateActualUtilization == 2 )
      v21 = *(_DWORD *)(v1 + 72);
  }
  else
  {
    v22 = v20 / v21;
    v53 = v20 / v21;
  }
  v23 = v21;
  if ( v22 > v54 )
  {
    if ( v21 < v18 )
    {
      if ( v50 == 2 )
      {
        v24 = v48 | 0x40;
      }
      else
      {
        if ( v50 )
        {
          if ( v50 == 1 )
          {
            v21 += PpmPerfSingleStepSize;
            v24 = v48 | 0x20;
          }
          else if ( v50 == 3 )
          {
            if ( v22 < v19 )
              v45 = v20 / (unsigned __int8)v15;
            else
              v45 = v20 / v51;
            v21 = v45;
            v24 = v48 | 0x80;
          }
          else
          {
            v24 = v48;
          }
        }
        else
        {
          v38 = v20 / (unsigned __int8)v15;
          v24 = v48 | 0x10;
          v21 = v38;
        }
        if ( v21 < v18 )
          goto LABEL_28;
      }
      v21 = v18;
LABEL_28:
      v25 = v52;
      goto LABEL_29;
    }
LABEL_27:
    v24 = v48;
    goto LABEL_28;
  }
  if ( v22 >= v51 || v21 <= 1 )
    goto LABEL_27;
  v25 = 3;
  if ( v49 == 1 )
  {
    v24 = v48 | 0x200;
    if ( v21 > PpmPerfSingleStepSize )
    {
      v21 -= PpmPerfSingleStepSize;
      goto LABEL_29;
    }
LABEL_102:
    v21 = 1;
    v24 |= 0x400u;
    goto LABEL_29;
  }
  if ( !v49 )
  {
    v37 = (unsigned __int8)v15;
    v24 = v48 | 0x100;
    v21 = v20 / v37;
    goto LABEL_29;
  }
  v24 = v48;
  if ( v49 == 2 )
    goto LABEL_102;
LABEL_29:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_32;
  v26 = *(_DWORD *)(v5 + 760);
  v27 = v21 < v23;
  if ( v21 > v23 )
  {
    if ( v26 < v55 )
    {
LABEL_103:
      v24 |= 0x800u;
      v21 = v23;
      goto LABEL_32;
    }
    v27 = v21 < v23;
  }
  if ( v27 && v26 < v56 )
    goto LABEL_103;
LABEL_32:
  if ( v6 )
  {
    v28 = *(unsigned __int8 *)(v6 + 331);
    if ( (_BYTE)v28 )
    {
      v24 |= 0x10000u;
      *(_BYTE *)(v6 + 331) = 0;
      if ( v21 <= v28 )
        v21 = v28;
    }
    v29 = *(unsigned __int8 *)(v6 + 332);
    if ( (_BYTE)v29 )
    {
      v24 |= 0x20000u;
      *(_BYTE *)(v6 + 332) = 0;
      if ( v21 <= v29 )
        v21 = v29;
    }
  }
LABEL_35:
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, _QWORD, _QWORD))(v5 + 280))(
          v58,
          v21,
          *(unsigned int *)(v5 + 328),
          v18,
          *((_DWORD *)v7 + v57 + 16),
          *((_DWORD *)v7 + 18),
          v25,
          0LL,
          0LL);
  ActivityId = 0LL;
  *(_DWORD *)(v1 + 56) = v30;
  v54 = v30;
  LODWORD(v57) = v24;
  v55 = v21;
  v56 = v53;
  v51 = 0;
  if ( *((_BYTE *)a1 + 60) )
  {
    v32 = &PPM_ETW_PERF_SELECT_PROCESSOR_STATE;
    LOWORD(v51) = *((unsigned __int8 *)a1 - 32920);
    BYTE2(v51) = *((_BYTE *)a1 - 32919);
    *(_QWORD *)&UserData.Size = 3LL;
  }
  else
  {
    v32 = (const EVENT_DESCRIPTOR *)PPM_ETW_PERF_SELECT_PROCESSOR_STATE_HV;
    v51 = *(_DWORD *)(a1[1] + 20);
    *(_QWORD *)&UserData.Size = 4LL;
  }
  v33 = &v51;
  UserData.Ptr = (ULONGLONG)&v51;
  if ( PpmEtwRegistered )
  {
    v34 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      if ( (v33 = *(unsigned int **)(PpmEtwHandle + 32), Keyword = v32->Keyword, v33[24])
        && ((v36 = *((_BYTE *)v33 + 100), v32->Level <= v36) || !v36)
        && ((v33[26] & 0x40) != 0 && !Keyword
         || (Keyword & *((_QWORD *)v33 + 14)) != 0
         && (v46 = *((_QWORD *)v33 + 15), LODWORD(v33) = v46 & Keyword, (v46 & Keyword) == v46))
        || *(_BYTE *)(PpmEtwHandle + 101)
        && (LODWORD(v33) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, v32->Level, Keyword),
            (_BYTE)v33) )
      {
        v61 = 4LL;
        v60 = &v56;
        v63 = 4LL;
        v62 = &v55;
        v65 = 4LL;
        v64 = &v54;
        v67 = 4LL;
        v66 = &v57;
        LODWORD(v33) = EtwWriteEx(v34, v32, 0LL, (ULONG)ActivityId, ActivityId, ActivityId, 5u, &UserData);
      }
    }
  }
  return (int)v33;
}
