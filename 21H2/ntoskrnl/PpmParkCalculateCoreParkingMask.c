/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x14022C800
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x14051C7F0 (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmEventLPICoreParking @ 0x140579D5C (PpmEventLPICoreParking.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14057B280 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmParkComputeDiff @ 0x14057D244 (PpmParkComputeDiff.c)
 *     PpmParkComputeUnparkMask @ 0x14057D32C (PpmParkComputeUnparkMask.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  unsigned int v1; // ebx
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // r13d
  unsigned int v6; // eax
  __int64 Prcb; // rax
  __int64 *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r12
  int v11; // ebx
  __int64 v12; // r14
  unsigned __int64 v13; // r14
  unsigned int v14; // r15d
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int16 v18; // dx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int8 v22; // al
  unsigned __int64 v23; // r12
  __int16 v24; // ax
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r10
  char v33; // r12
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // r14d
  unsigned int v37; // r8d
  unsigned int v38; // r9d
  int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // r15d
  bool v42; // zf
  char v43; // r13
  __int64 v44; // rbx
  int v45; // r9d
  __int64 v46; // rcx
  int v47; // r8d
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  __int128 v53; // [rsp+68h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h]
  unsigned __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  unsigned int v58; // [rsp+98h] [rbp-68h]
  __int64 v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-30h]
  __int64 *v66; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v67; // [rsp+E0h] [rbp-20h]
  _QWORD v68[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v69; // [rsp+F8h] [rbp-8h]
  int v70; // [rsp+FAh] [rbp-6h]
  __int16 v71; // [rsp+FEh] [rbp-2h]
  unsigned int v72; // [rsp+150h] [rbp+50h] BYREF
  int v73; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v74; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v75; // [rsp+168h] [rbp+68h]

  v53 = 0LL;
  v54 = 0LL;
  v72 = 0;
  v55 = 0LL;
  v64 = 0LL;
  v60 = 0LL;
  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 0;
  v56 = 0;
  v66 = &PpmCurrentProfile[342 * dword_140C2332C];
  v2 = 100 * *((unsigned __int8 *)v66 + 164);
  v58 = v2;
  if ( !PpmParkNumNodes )
    goto LABEL_84;
  do
  {
    v3 = PpmParkNodes + 272LL * v1;
    v62 = v3;
    if ( (*(_BYTE *)(v3 + 146) & 1) != 0 )
      goto LABEL_83;
    v4 = 0LL;
    v5 = *(unsigned __int8 *)(v3 + 135);
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 32);
    v6 = *(unsigned __int8 *)(v3 + 137);
    v70 = 0;
    v71 = 0;
    if ( (unsigned __int8)v5 >= (unsigned __int8)v6 )
      v5 = v6;
    v74 = 0;
    v69 = *(_WORD *)(v3 + 4);
    v68[1] = *(_QWORD *)(v3 + 8);
    v75 = v5;
    v68[0] = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v74, v68) )
    {
      Prcb = KeGetPrcb(v74);
      if ( *(_DWORD *)(Prcb + 33172) >= v2 )
        v4 |= *(_QWORD *)(Prcb + 200);
    }
    v8 = (__int64 *)(v3 + 56);
    v59 = v4;
    v65 = v3 + 56;
    v9 = 0LL;
    v74 = 0;
    v61 = 0LL;
    do
    {
      v10 = *(v8 - 5);
      v57 = v10;
      if ( !v10 )
        break;
      v11 = 0x100000;
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v12 = *v8;
      }
      else
      {
        v12 = 0LL;
        LOWORD(v54) = *(_WORD *)(v3 + 4);
        *((_QWORD *)&v53 + 1) = *v8;
        *(_QWORD *)&v53 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v72, &v53) )
          v12 |= *(_QWORD *)(KeGetPrcb(v72) + 33880);
      }
      v13 = v10 & v12;
      v67 = v13;
      if ( v13 )
        v11 = 1114112;
      v73 = v11;
      v14 = v5;
      if ( *(unsigned __int8 *)(v3 + v9 + 128)
         - ((unsigned int)((0x101010101010101LL
                          * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) <= v5 )
        v14 = *(unsigned __int8 *)(v3 + v9 + 128)
            - ((unsigned int)((0x101010101010101LL
                             * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      v15 = 0LL;
      LODWORD(v16) = 0;
      v51 = 0LL;
      if ( !KiClockTimerPerCpu )
      {
        v72 = KiClockTimerOwner;
        v17 = KeGetPrcb((unsigned int)KiClockTimerOwner);
        v18 = *(_WORD *)(v3 + 4);
        if ( *(unsigned __int8 *)(v17 + 208) == v18 )
        {
          v19 = *(_QWORD *)(v17 + 200);
          if ( (v19 & v10) != 0 )
          {
            *(_QWORD *)&v53 = 0LL;
            LOWORD(v54) = v18;
            *((_QWORD *)&v53 + 1) = v19;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v72, &v53) && (unsigned int)v16 < v14 )
            {
              v20 = KeGetPrcb(v72);
              v21 = *(_QWORD *)(v20 + 200);
              if ( (v21 & v13) == 0 )
              {
                if ( (unsigned __int8)PpmParkGranularity > 1u )
                  v21 = *(_QWORD *)(v20 + 33880);
                v11 |= 0x100u;
                v73 = v11;
                v15 |= v21;
                v16 = (0x101010101010101LL
                     * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                       + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                       + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
              }
            }
            v3 = v62;
            v10 = v57;
            v51 = v15;
          }
        }
      }
      v22 = KeCpuSetQueryUnparkRecommendation(*(unsigned __int16 *)(v3 + 4), v10, &v55);
      v63 = v22;
      if ( v22 )
      {
        v23 = v55;
        if ( (unsigned __int8)PpmParkGranularity > 1u )
        {
          v24 = *(_WORD *)(v3 + 4);
          *(_QWORD *)&v53 = 0LL;
          LOWORD(v54) = v24;
          *((_QWORD *)&v53 + 1) = v55;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v72, &v53) )
            v23 |= *(_QWORD *)(KeGetPrcb(v72) + 33880);
          v55 = v23;
          v63 = (0x101010101010101LL
               * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
        v25 = *(_WORD *)(v3 + 4);
        *(_QWORD *)&v53 = 0LL;
        LOWORD(v54) = v25;
        *((_QWORD *)&v53 + 1) = v23;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v72, &v53) && (unsigned int)v16 < v14 )
        {
          v26 = KeGetPrcb(v72);
          v27 = *(_QWORD *)(v26 + 200);
          if ( (v27 & v13) == 0 )
          {
            if ( (unsigned __int8)PpmParkGranularity > 1u )
              v27 = *(_QWORD *)(v26 + 33880);
            v11 |= 0x10u;
            v51 |= v27;
            v73 = v11;
            v16 = (0x101010101010101LL
                 * ((((v51 - ((v51 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v51 - ((v51 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + ((((v51 - ((v51 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v51 - ((v51 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          }
        }
      }
      LOWORD(v54) = *(_WORD *)(v3 + 4);
      v28 = v57 & v59 & *(_QWORD *)(v3 + 40);
      *(_QWORD *)&v53 = 0LL;
      v29 = v51;
      *((_QWORD *)&v53 + 1) = v28;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v72, &v53) && (unsigned int)v16 < v14 )
      {
        v30 = KeGetPrcb(v72);
        v31 = *(_QWORD *)(v30 + 200);
        if ( (v31 & v13) == 0 )
        {
          if ( (unsigned __int8)PpmParkGranularity > 1u )
            v31 = *(_QWORD *)(v30 + 33880);
          v11 |= 0x20000u;
          v73 = v11;
          v29 |= v31;
          v16 = (0x101010101010101LL
               * ((((v29 - ((v29 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v29 - ((v29 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v29 - ((v29 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v29 - ((v29 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
      }
      v32 = v61;
      v33 = v55;
      v52 = v29;
      v3 = v62;
      v34 = *(unsigned __int8 *)(v61 + v62 + 130);
      if ( (unsigned int)v16 < v34 && (unsigned int)v16 < v14 )
      {
        v11 |= 4u;
        v73 = v11;
        if ( v34 >= v14 )
          v34 = v14;
        LODWORD(v16) = v34;
      }
      v35 = *(unsigned __int8 *)(v61 + v62 + 132);
      v36 = v14;
      if ( v14 > v35 && (unsigned int)v16 < v14 )
      {
        v11 |= 8u;
        v36 = *(unsigned __int8 *)(v61 + v62 + 132);
        v73 = v11;
        if ( v35 <= (unsigned int)v16 )
          v36 = v16;
      }
      if ( PpmPerfMaxOverrideEnabled )
      {
        v37 = *(unsigned __int8 *)(v62 + v61 + 128);
        v11 |= 0x40000u;
      }
      else
      {
        if ( v74 || !*(_BYTE *)(v62 + 139) )
        {
          v38 = *(unsigned __int8 *)(v61 + v62 + 138);
          v39 = *(unsigned __int8 *)(v62 + v61 + 128);
          if ( (unsigned __int8)v38 >= (unsigned __int8)v39 )
            v38 = *(unsigned __int8 *)(v62 + v61 + 128);
          v37 = v38;
          if ( PpmCheckLatencyBoostActive
            && (v39 * (unsigned int)*((unsigned __int8 *)v66 + v61 + 119) + 50) / 0x64 > v38 )
          {
            v11 |= 0x40u;
            v37 = (v39 * (unsigned int)*((unsigned __int8 *)v66 + v61 + 119) + 50) / 0x64;
            v73 = v11;
          }
          if ( (unsigned __int8)PpmParkGranularity > 1u )
            v37 = (unsigned __int8)PpmParkGranularity
                - 1
                + v37
                - ((unsigned __int8)PpmParkGranularity - 1 + v37) % (unsigned __int8)PpmParkGranularity;
          goto LABEL_75;
        }
        v37 = *(unsigned __int8 *)(v62 + 128);
        v11 |= 0x80u;
      }
      v73 = v11;
LABEL_75:
      v40 = v37 + v63;
      *(_BYTE *)(v61 + v62 + 138) = v37;
      v41 = v16;
      if ( v40 >= v36 )
        v40 = v36;
      if ( v40 > (unsigned int)v16 )
        v41 = v40;
      v75 -= v36;
      v42 = PpmParkSoftParkingEnabled == 0;
      *(_BYTE *)(v32 + v3 + 143) = v41;
      if ( v42 )
      {
        v36 = v41;
        v73 = v11 | 0x200000;
      }
      v43 = v67;
      v44 = v57 & v59;
      PpmParkComputeUnparkMask(
        *(unsigned __int16 *)(v3 + 4),
        v57,
        v57 & *(_DWORD *)(v3 + 40),
        v57 & v59,
        v41,
        v36,
        v67,
        v52,
        (__int64)&v64,
        (__int64)&v60,
        (__int64)&v73);
      LOBYTE(v45) = v36;
      v46 = ~v57;
      LOBYTE(v47) = v41;
      v48 = v64 | v60 | *(_QWORD *)(v3 + 32) & ~v57;
      *(_QWORD *)(v3 + 32) = v48;
      *(_QWORD *)(v3 + 48) = v60 | v46 & v48;
      v50 = v44;
      LODWORD(v44) = v74;
      PpmEventTraceSoftCoreParkingSelection(v3, v74, v47, v45, v16, v43, v52, v50, v33, v73);
      v8 = (__int64 *)(v65 + 8);
      v5 = v75;
      v9 = v61 + 1;
      v74 = v44 + 1;
      ++v61;
      v65 += 8LL;
    }
    while ( (unsigned int)(v44 + 1) < 2 );
    v1 = v56;
    v2 = v58;
LABEL_83:
    v56 = ++v1;
  }
  while ( v1 < PpmParkNumNodes );
LABEL_84:
  PpmParkComputeDiff();
  if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v49 = 0, PpmParkLpiCapChanged) )
    v49 = 1;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  PpmParkLpiCapChanged = 0;
  if ( v49 )
    PpmEventLPICoreParking();
  return 1;
}
