/*
 * XREFs of PpmParkApplyPolicy @ 0x1403C20B4
 * Callers:
 *     PpmParkRegisterParking @ 0x1403C1890 (PpmParkRegisterParking.c)
 *     PpmParkSetLpiCap @ 0x14057DC54 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408F9404 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F9504 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     PpmEventParkNodeCapChange @ 0x140579E1C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeParkHintChanged @ 0x14057A028 (PpmEventParkNodeParkHintChanged.c)
 */

ULONGLONG PpmParkApplyPolicy()
{
  ULONGLONG result; // rax
  int v1; // ebx
  __int64 *v2; // r13
  __int64 v3; // r15
  unsigned int v4; // r8d
  int v5; // esi
  int v6; // r14d
  unsigned int v7; // ett
  __int64 v8; // r9
  unsigned __int16 v9; // cx
  unsigned int v10; // r10d
  int v11; // edx
  __int64 v12; // rdi
  char v13; // r9
  unsigned __int8 v14; // cl
  int v15; // r8d
  unsigned __int8 v16; // dl
  __int64 v17; // r8
  _QWORD *v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // r13
  int v23; // r9d
  unsigned int v24; // r11d
  unsigned __int8 v25; // r11
  unsigned int v26; // r12d
  unsigned __int8 v27; // r12
  char v28; // cl
  unsigned __int8 v29; // cl
  __int16 v30; // ax
  __int64 Prcb; // rax
  unsigned __int16 v32; // si
  __int64 v33; // rdi
  __int64 v34; // r8
  char v35; // cl
  unsigned __int8 v36; // cl
  unsigned __int8 v37; // cl
  char v38; // cl
  char v39; // al
  char v40; // cl
  char v41; // al
  char v42; // cl
  char v43; // al
  char v44; // cl
  char v45; // al
  unsigned __int16 v46; // dx
  __int64 v47; // rcx
  unsigned __int8 v48; // r9
  int v49; // r10d
  unsigned __int8 v50; // al
  unsigned __int16 v51; // dx
  __int64 v52; // rcx
  unsigned __int8 v53; // r9
  int v54; // r10d
  unsigned __int8 v55; // al
  char v56; // al
  struct _KPRCB *CurrentPrcb; // rax
  ULONGLONG v58; // r8
  unsigned __int16 v59; // [rsp+20h] [rbp-49h]
  unsigned int v60; // [rsp+24h] [rbp-45h]
  unsigned int v61; // [rsp+28h] [rbp-41h] BYREF
  int v62; // [rsp+2Ch] [rbp-3Dh]
  unsigned int v63; // [rsp+30h] [rbp-39h]
  unsigned int v64; // [rsp+34h] [rbp-35h]
  __int64 v65; // [rsp+38h] [rbp-31h]
  __int64 v66; // [rsp+48h] [rbp-21h]
  _QWORD *v67; // [rsp+50h] [rbp-19h]
  __int64 v68; // [rsp+58h] [rbp-11h]
  __int64 *v69; // [rsp+60h] [rbp-9h]
  __int128 v70; // [rsp+68h] [rbp-1h] BYREF
  __int64 v71; // [rsp+78h] [rbp+Fh]
  char v72; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v73; // [rsp+D8h] [rbp+6Fh]
  __int16 v74; // [rsp+E0h] [rbp+77h] BYREF
  __int16 v75; // [rsp+E8h] [rbp+7Fh]

  result = 0LL;
  v1 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v61 = 0;
  if ( PpmParkNodes )
  {
    v2 = &PpmCurrentProfile[342 * dword_140C2332C];
    v69 = v2;
    v75 = *((_WORD *)v2 + 90);
    v74 = *((_WORD *)v2 + 91);
    LODWORD(v3) = 64;
    if ( !*(_QWORD *)(KeGetPrcb(0) + 33128) )
    {
      v35 = PpmParkInitialClass1UnParkCount;
      if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
        v35 = 64;
      HIBYTE(v75) = 0;
      LOBYTE(v3) = v35;
    }
    v4 = PpmParkNumNodes;
    v5 = PpmParkLpiCap;
    v6 = PpmParkThermalCap;
    v62 = v3;
    v59 = 0;
    v7 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes;
    v8 = v7 - v7 % (unsigned __int8)PpmParkGranularity;
    v64 = v7 - v7 % (unsigned __int8)PpmParkGranularity;
    result = PpmParkThermalCap / (unsigned int)PpmParkNumNodes / (unsigned __int8)PpmParkGranularity;
    v9 = 0;
    v10 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
        - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    v63 = v10;
    if ( PpmParkNumNodes )
    {
      do
      {
        v11 = (unsigned __int8)v8;
        v12 = PpmParkNodes + 272LL * v9;
        v13 = PpmParkGranularity;
        v14 = *(_BYTE *)(v12 + 6);
        v15 = v14 - (unsigned __int8)PpmParkGranularity;
        if ( v11 > v15 )
          LOBYTE(v11) = v14 - PpmParkGranularity;
        *(_BYTE *)(v12 + 134) = v11;
        v5 -= (unsigned __int8)v11;
        v16 = v10;
        if ( (unsigned __int8)v10 > v15 )
          v16 = v14 - v13;
        v6 -= v16;
        *(_BYTE *)(v12 + 136) = v16;
        v72 = 0;
        v17 = v12 - (_QWORD)&v74;
        v65 = 0LL;
        v18 = (_QWORD *)(v12 + 56);
        v68 = v12 - (_QWORD)&v74;
        v19 = 0LL;
        v66 = 0LL;
        v20 = 0LL;
        v60 = 0;
        v21 = 0;
        v67 = (_QWORD *)(v12 + 56);
        v22 = 0LL;
        do
        {
          v23 = *((unsigned __int8 *)&v74 + v22 + v17 + 128);
          if ( (_BYTE)v23 )
          {
            v24 = (v23 * (unsigned int)*((unsigned __int8 *)&v74 + v22) + 50) / 0x64;
            v25 = (v23 - (unsigned __int8)v24) % (unsigned __int8)PpmParkGranularity + v24;
            v26 = (v23 * (unsigned int)*((unsigned __int8 *)&v75 + v22) + 50) / 0x64;
            v27 = (v23 - (unsigned __int8)v26) % (unsigned __int8)PpmParkGranularity + v26;
            if ( v60 )
            {
              v36 = v25;
              if ( v25 >= (unsigned __int8)v3 )
                v36 = v3;
              v25 = v36;
            }
            if ( v27 )
            {
              v28 = v27;
              if ( (unsigned __int8)PpmParkGranularity > v27 )
                v28 = PpmParkGranularity;
              v27 = v28;
            }
            v29 = v27;
            v3 = 0LL;
            *(_QWORD *)&v70 = 0LL;
            if ( v25 >= v27 )
              v29 = v25;
            v30 = *(_WORD *)(v12 + 4);
            v73 = v29;
            *((_QWORD *)&v70 + 1) = *(v18 - 5);
            LOWORD(v71) = v30;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v61, (unsigned __int16 **)&v70) )
            {
              Prcb = KeGetPrcb(v61);
              if ( *(_BYTE *)(Prcb + 33276) )
                v3 |= *(_QWORD *)(Prcb + 200);
            }
            v18 = v67;
            v20 = v3 | v66;
            v19 = *v67 | v65;
            v72 += v27;
            v17 = v68;
            *v67 = v3;
            LOBYTE(v3) = v62;
            *(_BYTE *)(v12 + v22 + 132) = v73;
            v21 = v60;
            *(_BYTE *)(v12 + v22 + 130) = v27;
            v65 = v19;
            v66 = v20;
          }
          ++v21;
          ++v18;
          ++v22;
          v60 = v21;
          v67 = v18;
        }
        while ( v21 < 2 );
        if ( v19 != v20 )
          PpmEventParkNodeParkHintChanged(*(unsigned __int16 *)(v12 + 4), *(_QWORD *)(v12 + 8), v20);
        if ( !v72 )
        {
          v37 = PpmParkGranularity;
          *(_BYTE *)(v12 + 130) = PpmParkGranularity;
          if ( v37 <= *(_BYTE *)(v12 + 132) )
            v37 = *(_BYTE *)(v12 + 132);
          *(_BYTE *)(v12 + 132) = v37;
        }
        if ( PpmHeteroPolicy == 2 )
        {
          v38 = *(_BYTE *)(v12 + 130);
          v39 = 1;
          *(_BYTE *)(v12 + 139) = 0;
          *(_BYTE *)(v12 + 131) = 0;
          if ( (unsigned __int8)v38 > 1u )
            v39 = v38;
          *(_BYTE *)(v12 + 133) = 0;
          v40 = *(_BYTE *)(v12 + 132);
          *(_BYTE *)(v12 + 130) = v39;
          v41 = 1;
          if ( (unsigned __int8)v40 > 1u )
            v41 = v40;
          *(_BYTE *)(v12 + 132) = v41;
          *(_BYTE *)(v12 + 146) |= 4u;
        }
        else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v12 + 129) )
        {
          v42 = *(_BYTE *)(v12 + 131);
          v43 = 1;
          *(_BYTE *)(v12 + 138) = 0;
          *(_BYTE *)(v12 + 130) = 0;
          if ( (unsigned __int8)v42 > 1u )
            v43 = v42;
          *(_BYTE *)(v12 + 132) = 0;
          v44 = *(_BYTE *)(v12 + 133);
          *(_BYTE *)(v12 + 131) = v43;
          v45 = 1;
          if ( (unsigned __int8)v44 > 1u )
            v45 = v44;
          *(_BYTE *)(v12 + 146) |= 2u;
          *(_BYTE *)(v12 + 133) = v45;
        }
        v4 = PpmParkNumNodes;
        v9 = v59 + 1;
        LOBYTE(v10) = v63;
        v8 = v64;
        result = ++v59;
      }
      while ( v59 < (unsigned int)PpmParkNumNodes );
      v2 = v69;
    }
    do
    {
LABEL_30:
      if ( !v5 )
        goto LABEL_31;
      v46 = 0;
    }
    while ( !v4 );
    while ( v5 )
    {
      v47 = PpmParkNodes + 272LL * v46;
      v48 = *(_BYTE *)(v47 + 6);
      if ( v48 )
      {
        v49 = (unsigned __int8)PpmParkGranularity;
        v50 = PpmParkGranularity + *(_BYTE *)(v47 + 134);
        if ( v50 < v48 )
        {
          *(_BYTE *)(v47 + 134) = v50;
          v5 -= v49;
        }
      }
      result = ++v46;
      if ( v46 >= v4 )
        goto LABEL_30;
    }
LABEL_31:
    while ( v6 )
    {
      v51 = 0;
      if ( v4 )
      {
        while ( v6 )
        {
          v52 = PpmParkNodes + 272LL * v51;
          v53 = *(_BYTE *)(v52 + 6);
          if ( v53 )
          {
            v54 = (unsigned __int8)PpmParkGranularity;
            v55 = PpmParkGranularity + *(_BYTE *)(v52 + 136);
            if ( v55 < v53 )
            {
              *(_BYTE *)(v52 + 136) = v55;
              v6 -= v54;
            }
          }
          result = ++v51;
          if ( v51 >= v4 )
            goto LABEL_31;
        }
        break;
      }
    }
    v32 = 0;
    if ( v4 )
    {
      do
      {
        v33 = PpmParkNodes + 272LL * v32;
        v34 = *(unsigned __int8 *)(v33 + 134);
        if ( *(unsigned __int8 *)(v33 + 135) != *(unsigned __int8 *)(v33 + 6) - (_DWORD)v34
          || *(unsigned __int8 *)(v33 + 137) != *(unsigned __int8 *)(v33 + 6) - *(unsigned __int8 *)(v33 + 136) )
        {
          LOBYTE(v8) = *(_BYTE *)(v33 + 136);
          PpmEventParkNodeCapChange(*(unsigned __int16 *)(v33 + 4), *(_QWORD *)(v33 + 8), v34, v8);
          v56 = *(_BYTE *)(v33 + 6) - *(_BYTE *)(v33 + 134);
          *(_BYTE *)(v33 + 137) = *(_BYTE *)(v33 + 6) - *(_BYTE *)(v33 + 136);
          *(_BYTE *)(v33 + 135) = v56;
        }
        result = ++v32;
      }
      while ( v32 < (unsigned int)PpmParkNumNodes );
    }
    if ( *((_DWORD *)v2 + 46) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v58 = *((unsigned int *)v2 + 46);
      PpmParkSoftParkingEnabled = 1;
      result = PpmConvertTime(1000000LL * CurrentPrcb->MHz, 1000000LL, v58);
      v1 = result;
    }
    else
    {
      PpmParkSoftParkingEnabled = 0;
    }
  }
  KeSoftParkedQueueThreshold = v1;
  return result;
}
