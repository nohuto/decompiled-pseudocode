__int64 __fastcall PpmParkApplyPolicy(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r15d
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 *v5; // r14
  __int64 v6; // r13
  char v7; // r11
  char v8; // cl
  unsigned int v9; // r8d
  int v10; // edi
  int v11; // ebp
  unsigned int v12; // ett
  __int64 v13; // r9
  unsigned __int16 v14; // cx
  unsigned int v15; // r10d
  unsigned __int8 v16; // dl
  __int64 v17; // rbx
  int v18; // r8d
  unsigned __int8 v19; // dl
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 *v23; // rdi
  unsigned __int8 *v24; // r14
  char *v25; // rax
  int v26; // r8d
  unsigned __int8 v27; // r10
  int v28; // eax
  unsigned __int8 v29; // r11
  unsigned __int8 v30; // r12
  unsigned __int8 v31; // cl
  char v32; // cl
  unsigned __int8 v33; // cl
  __int16 v34; // ax
  __int64 Prcb; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // cl
  char v39; // al
  __int64 v40; // rdx
  char v41; // cl
  char v42; // al
  unsigned int i; // edx
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rax
  char v47; // al
  __int64 v48; // rdx
  char v49; // cl
  char v50; // al
  unsigned __int16 j; // dx
  __int64 v52; // rcx
  unsigned __int8 v53; // r9
  unsigned __int8 v54; // al
  unsigned __int16 v55; // dx
  __int64 v56; // rcx
  unsigned __int8 v57; // r9
  unsigned __int8 v58; // al
  unsigned __int16 v59; // si
  __int64 v60; // rbx
  _BYTE *v61; // rdi
  __int64 v62; // r8
  char v63; // al
  void *v64; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v66; // r8
  unsigned int v67; // [rsp+20h] [rbp-A8h] BYREF
  int v68; // [rsp+24h] [rbp-A4h]
  int v69; // [rsp+28h] [rbp-A0h]
  int v70; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v71; // [rsp+30h] [rbp-98h]
  unsigned int v72; // [rsp+34h] [rbp-94h]
  __int64 v73; // [rsp+38h] [rbp-90h]
  __int64 v74; // [rsp+40h] [rbp-88h]
  __int64 v75; // [rsp+48h] [rbp-80h]
  __int64 v76; // [rsp+50h] [rbp-78h]
  __int64 *v77; // [rsp+58h] [rbp-70h]
  __int128 v78; // [rsp+60h] [rbp-68h] BYREF
  __int64 v79; // [rsp+70h] [rbp-58h]
  __int64 *v80; // [rsp+78h] [rbp-50h]
  char v81; // [rsp+D0h] [rbp+8h]
  char v82; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v83; // [rsp+E0h] [rbp+18h]
  unsigned __int16 v84; // [rsp+E8h] [rbp+20h]

  result = 0LL;
  v2 = 0;
  v78 = 0LL;
  v79 = 0LL;
  v67 = 0;
  if ( !PpmParkNodes )
  {
    KeSoftParkedQueueThreshold = 0;
    return result;
  }
  v3 = PpmCurrentProfile;
  v4 = 55LL * dword_140C3D48C;
  v80 = PpmCurrentProfile;
  v5 = &PpmCurrentProfile[v4 + 5];
  v75 = v4 * 8;
  v77 = v5;
  LOBYTE(a1) = BYTE6(PpmCurrentProfile[v4 + 59]);
  PpmParkEvalualteSmtUnparkPolicy(a1);
  v81 = 0;
  LODWORD(v6) = 64;
  if ( *(_QWORD *)(KeGetPrcb(0) + 33968) )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    v8 = PpmParkInitialClass1UnParkCount;
    v81 = 1;
    if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
      v8 = 64;
    LOBYTE(v6) = v8;
  }
  v9 = PpmParkNumNodes;
  v10 = PpmParkLpiCap;
  v11 = PpmParkThermalCap;
  v68 = v6;
  v12 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes;
  v13 = v12 - v12 % (unsigned __int8)PpmParkGranularity;
  v72 = v12 - v12 % (unsigned __int8)PpmParkGranularity;
  result = PpmParkThermalCap / (unsigned int)PpmParkNumNodes / (unsigned __int8)PpmParkGranularity;
  v14 = 0;
  v15 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
      - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
  v84 = 0;
  v71 = v15;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v16 = v13;
      v17 = PpmParkNodes + 192LL * v14;
      v18 = *(unsigned __int8 *)(v17 + 10);
      if ( (unsigned __int8)v13 > v18 - (unsigned __int8)PpmParkGranularity )
        v16 = v18 - PpmParkGranularity;
      *(_BYTE *)(v17 + 112) = v16;
      v10 -= v16;
      v19 = v15;
      v69 = v10;
      if ( (unsigned __int8)v15 > v18 - (unsigned __int8)PpmParkGranularity )
        v19 = v18 - PpmParkGranularity;
      v20 = v17 + 184;
      v11 -= v19;
      *(_BYTE *)(v17 + 114) = v19;
      v70 = v11;
      v21 = 0LL;
      v82 = 0;
      v76 = 0LL;
      v74 = 0LL;
      if ( *(_BYTE *)(v17 + 11) )
      {
        v22 = v75;
        v23 = v77;
        do
        {
          v24 = (unsigned __int8 *)(*(_QWORD *)v20 + 104LL * v2);
          if ( v2 )
            v25 = (char *)v3 + v22 + 41;
          else
            v25 = (char *)v23;
          v26 = (unsigned __int8)v25[142];
          v27 = *((_BYTE *)v23 + (v2 != 0) + 140);
          if ( v7 && v2 )
            v27 = 0;
          v28 = *v24;
          if ( (_BYTE)v28 )
          {
            v29 = (v28 - (unsigned __int8)((v28 * v26 + 50) / 0x64u)) % (unsigned __int8)PpmParkGranularity
                + (v28 * v26 + 50) / 0x64u;
            v30 = (v28 - (unsigned __int8)((v28 * (unsigned int)v27 + 50) / 0x64)) % (unsigned __int8)PpmParkGranularity
                + (v28 * (unsigned int)v27 + 50) / 0x64;
            if ( v2 )
            {
              v31 = (v28 - (unsigned __int8)((v28 * v26 + 50) / 0x64u)) % (unsigned __int8)PpmParkGranularity
                  + (v28 * v26 + 50) / 0x64u;
              if ( v29 >= (unsigned __int8)v6 )
                v31 = v6;
              v29 = v31;
            }
            if ( v30 )
            {
              v32 = (v28 - (unsigned __int8)((v28 * (unsigned int)v27 + 50) / 0x64))
                  % (unsigned __int8)PpmParkGranularity
                  + (v28 * (unsigned int)v27 + 50) / 0x64;
              if ( (unsigned __int8)PpmParkGranularity > v30 )
                v32 = PpmParkGranularity;
              v30 = v32;
            }
            v33 = v30;
            if ( v29 >= v30 )
              v33 = v29;
            v34 = *(_WORD *)(v17 + 4);
            v73 = 0LL;
            *(_QWORD *)&v78 = 0LL;
            v83 = v33;
            *((_QWORD *)&v78 + 1) = *((_QWORD *)v24 + 2);
            LOWORD(v79) = v34;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v67, (unsigned __int16 **)&v78) )
            {
              v6 = v73;
              do
              {
                Prcb = KeGetPrcb(v67);
                if ( *(_BYTE *)(Prcb + 34124) )
                  v6 |= *(_QWORD *)(Prcb + 200);
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v67, (unsigned __int16 **)&v78) );
              v22 = v75;
              v73 = v6;
              LOBYTE(v6) = v68;
            }
            v21 = *((_QWORD *)v24 + 3) | v76;
            v7 = v81;
            v36 = v73 | v74;
            v82 += v30;
            *((_QWORD *)v24 + 3) = v73;
            v24[1] = v30;
            v3 = v80;
            v24[2] = v83;
            v76 = v21;
            v74 = v36;
          }
          else
          {
            v36 = v74;
          }
          ++v2;
        }
        while ( v2 < *(unsigned __int8 *)(v17 + 11) );
        v10 = v69;
        v11 = v70;
        if ( v21 != v36 )
          PpmEventParkNodeParkHintChanged(*(unsigned __int16 *)(v17 + 4), *(_QWORD *)(v17 + 16), v36, 0LL);
        v2 = 0;
        if ( v82 )
          goto LABEL_49;
      }
      else
      {
        v2 = 0;
      }
      v37 = *(_QWORD *)v20;
      *(_BYTE *)(v37 + 1) = PpmParkGranularity;
      v38 = PpmParkGranularity;
      if ( (unsigned __int8)PpmParkGranularity <= *(_BYTE *)(v37 + 2) )
        v38 = *(_BYTE *)(v37 + 2);
      *(_BYTE *)(v37 + 2) = v38;
LABEL_49:
      if ( PpmHeteroPolicy == 2 )
      {
        *(_BYTE *)(v17 + 120) |= 4u;
        v39 = 1;
        v40 = *(_QWORD *)v20;
        if ( *(_BYTE *)(*(_QWORD *)v20 + 1LL) > 1u )
          v39 = *(_BYTE *)(*(_QWORD *)v20 + 1LL);
        v41 = *(_BYTE *)(v40 + 2);
        *(_BYTE *)(v40 + 1) = v39;
        v42 = 1;
        if ( (unsigned __int8)v41 > 1u )
          v42 = v41;
        *(_BYTE *)(v40 + 2) = v42;
        for ( i = 1; i < *(unsigned __int8 *)(v17 + 11); *(_DWORD *)(*(_QWORD *)v20 + 104 * v44 + 1) = 0 )
          v44 = i++;
      }
      else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v17 + 121) )
      {
        *(_BYTE *)(v17 + 120) |= 2u;
        v45 = 0;
        if ( *(_BYTE *)(v17 + 11) > 1u )
        {
          do
          {
            v46 = v45++;
            *(_DWORD *)(*(_QWORD *)v20 + 104 * v46 + 1) = 0;
          }
          while ( v45 + 1 < *(unsigned __int8 *)(v17 + 11) );
        }
        v47 = 1;
        v48 = *(_QWORD *)v20 + 104LL * v45;
        if ( *(_BYTE *)(v48 + 1) > 1u )
          v47 = *(_BYTE *)(v48 + 1);
        v49 = *(_BYTE *)(v48 + 2);
        *(_BYTE *)(v48 + 1) = v47;
        v50 = 1;
        if ( (unsigned __int8)v49 > 1u )
          v50 = v49;
        *(_BYTE *)(v48 + 2) = v50;
      }
      v9 = PpmParkNumNodes;
      v14 = v84 + 1;
      LOBYTE(v15) = v71;
      v13 = v72;
      v7 = v81;
      result = ++v84;
      if ( v84 >= (unsigned int)PpmParkNumNodes )
      {
        v5 = v77;
        break;
      }
    }
  }
  while ( v10 )
  {
    for ( j = 0; j < v9; result = j )
    {
      if ( !v10 )
        goto LABEL_82;
      v52 = PpmParkNodes + 192LL * j;
      v53 = *(_BYTE *)(v52 + 10);
      if ( v53 )
      {
        v54 = *(_BYTE *)(v52 + 112) + PpmParkGranularity;
        if ( v54 < v53 )
        {
          *(_BYTE *)(v52 + 112) = v54;
          v10 -= (unsigned __int8)PpmParkGranularity;
        }
      }
      ++j;
    }
  }
LABEL_82:
  while ( v11 )
  {
    v55 = 0;
    if ( v9 )
    {
      while ( v11 )
      {
        v56 = PpmParkNodes + 192LL * v55;
        v57 = *(_BYTE *)(v56 + 10);
        if ( v57 )
        {
          v58 = PpmParkGranularity + *(_BYTE *)(v56 + 114);
          if ( v58 < v57 )
          {
            *(_BYTE *)(v56 + 114) = v58;
            v11 -= (unsigned __int8)PpmParkGranularity;
          }
        }
        result = ++v55;
        if ( v55 >= v9 )
          goto LABEL_82;
      }
      break;
    }
  }
  v59 = 0;
  if ( v9 )
  {
    do
    {
      v60 = PpmParkNodes + 192LL * v59;
      v61 = (_BYTE *)(v60 + 114);
      v62 = *(unsigned __int8 *)(v60 + 112);
      if ( *(unsigned __int8 *)(v60 + 113) != *(unsigned __int8 *)(v60 + 10) - (_DWORD)v62
        || *(unsigned __int8 *)(v60 + 115) != *(unsigned __int8 *)(v60 + 10) - (unsigned __int8)*v61 )
      {
        LOBYTE(v13) = *v61;
        PpmEventParkNodeCapChange(*(unsigned __int16 *)(v60 + 4), *(_QWORD *)(v60 + 16), v62, v13);
        v63 = *(_BYTE *)(v60 + 10) - *(_BYTE *)(v60 + 112);
        *(_BYTE *)(v60 + 115) = *(_BYTE *)(v60 + 10) - *v61;
        *(_BYTE *)(v60 + 113) = v63;
      }
      result = ++v59;
    }
    while ( v59 < (unsigned int)PpmParkNumNodes );
  }
  if ( *((_DWORD *)v5 + 36) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v66 = *((unsigned int *)v5 + 36);
    PpmParkSoftParkingEnabled = 1;
    result = PpmConvertTime(1000000LL * CurrentPrcb->MHz, 0xF4240uLL, v66);
    KeSoftParkedQueueThreshold = result;
  }
  else
  {
    PpmParkSoftParkingEnabled = 0;
    KeSoftParkedQueueThreshold = 0;
    if ( PpmParkNewSoftParkRankList )
    {
      v64 = PpmParkOldSoftParkRankList;
      if ( PpmParkOldSoftParkRankList )
      {
        memset(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
        memset(v64, 255, 4LL * (unsigned int)KeMaximumProcessors);
        KeUpdateSoftParkRankList();
        return PpmEventSoftParkRankListChanged();
      }
    }
  }
  return result;
}
