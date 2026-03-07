char PpmParkCalculateCoreParkingMask()
{
  unsigned int v0; // r15d
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // r14
  unsigned int v5; // eax
  __int64 Prcb; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  unsigned __int8 *v9; // r15
  __int64 v10; // r13
  int v11; // ebx
  __int64 v12; // r14
  unsigned __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int16 v17; // dx
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int8 v22; // al
  unsigned __int64 v23; // r13
  int v24; // r11d
  __int16 v25; // ax
  __int16 v26; // ax
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // r14d
  int v32; // r10d
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  unsigned int v35; // eax
  unsigned int v36; // r12d
  bool v37; // zf
  int v38; // r15d
  char v39; // al
  char v40; // cl
  __int64 v41; // rbx
  int v42; // r9d
  int v43; // r8d
  unsigned int v44; // r14d
  __int64 v45; // rcx
  unsigned int v46; // edx
  unsigned int v47; // eax
  int v48; // eax
  __int128 v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h]
  unsigned __int64 v52; // [rsp+98h] [rbp-68h]
  unsigned __int64 v53; // [rsp+A0h] [rbp-60h]
  unsigned int i; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 *v62[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FAh] [rbp-6h]
  __int16 v65; // [rsp+FEh] [rbp-2h]
  __int64 v66; // [rsp+100h] [rbp+0h]
  __int64 *v67; // [rsp+108h] [rbp+8h]
  unsigned int v68; // [rsp+160h] [rbp+60h] BYREF
  int v69; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v70; // [rsp+170h] [rbp+70h]
  unsigned int v71; // [rsp+178h] [rbp+78h]

  v50 = 0LL;
  v51 = 0LL;
  v68 = 0;
  v55 = 0LL;
  v61 = 0LL;
  v58 = 0LL;
  if ( PpmIsParkingEnabled )
  {
    PpmParkSoftParkCurrentRank = 0;
    PpmParkSoftParkRankListChanged = 0;
    v67 = &PpmCurrentProfile[55 * dword_140C3D48C];
    v0 = 100 * *((unsigned __int8 *)v67 + 164);
    v56 = v0;
    if ( PpmParkNewSoftParkRankList )
      memset(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
    v1 = 0;
    for ( i = 0; v1 < PpmParkNumNodes; i = v1 )
    {
      v2 = PpmParkNodes + 192LL * v1;
      v66 = v2;
      if ( (*(_BYTE *)(v2 + 120) & 1) == 0 )
      {
        v3 = *(unsigned __int8 *)(v2 + 113);
        *(_QWORD *)(v2 + 32) = *(_QWORD *)(v2 + 24);
        v4 = 0LL;
        v5 = *(unsigned __int8 *)(v2 + 115);
        v64 = 0;
        v65 = 0;
        if ( (unsigned __int8)v3 >= (unsigned __int8)v5 )
          v3 = v5;
        v69 = 0;
        v63 = *(_WORD *)(v2 + 4);
        v62[1] = *(unsigned __int16 **)(v2 + 16);
        v71 = v3;
        v60 = 0LL;
        v62[0] = 0LL;
        if ( !(unsigned int)KeEnumerateNextProcessor(&v69, v62) )
        {
          do
          {
            Prcb = KeGetPrcb(v69);
            if ( *(_DWORD *)(Prcb + 34012) >= v0 )
              v4 |= *(_QWORD *)(Prcb + 200);
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&v69, v62) );
          v60 = v4;
        }
        *(_BYTE *)(v2 + 152) = 0;
        if ( PpmHeteroFavoredCoreRotationTimeoutMs )
        {
          v7 = MEMORY[0xFFFFF78000000008]
             / (unsigned __int64)(unsigned int)(10000 * PpmHeteroFavoredCoreRotationTimeoutMs);
          *(_QWORD *)(v2 + 136) = v7;
          if ( v7 != *(_QWORD *)(v2 + 144) )
          {
            *(_BYTE *)(v2 + 152) = 1;
            *(_QWORD *)(v2 + 144) = v7;
          }
        }
        v8 = 0;
        v70 = 0;
        if ( *(_BYTE *)(v2 + 11) )
        {
          do
          {
            v9 = (unsigned __int8 *)(*(_QWORD *)(v2 + 184) + 104LL * v8);
            v53 = (unsigned __int64)v9;
            v10 = *((_QWORD *)v9 + 2);
            v57 = v10;
            if ( !v10 )
              break;
            v11 = 0x100000;
            if ( (unsigned __int8)PpmParkGranularity <= 1u )
            {
              v12 = *((_QWORD *)v9 + 3);
            }
            else
            {
              v12 = 0LL;
              LOWORD(v51) = *(_WORD *)(v2 + 4);
              *((_QWORD *)&v50 + 1) = *((_QWORD *)v9 + 3);
              *(_QWORD *)&v50 = 0LL;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v68, (unsigned __int16 **)&v50) )
                v12 |= *(_QWORD *)(KeGetPrcb(v68) + 34912);
            }
            v13 = v10 & v12;
            v59 = v13;
            if ( v13 )
              v11 = 1114112;
            v69 = v11;
            v14 = v3;
            if ( *v9
               - ((unsigned int)((0x101010101010101LL
                                * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                  + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                    + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) <= v3 )
              v14 = *v9
                  - ((unsigned int)((0x101010101010101LL
                                   * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                     + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                       + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
            LODWORD(v15) = 0;
            v52 = 0LL;
            if ( !KiClockTimerPerCpu )
            {
              v68 = KiClockTimerOwner;
              v16 = KeGetPrcb(KiClockTimerOwner);
              v17 = *(_WORD *)(v2 + 4);
              if ( *(unsigned __int8 *)(v16 + 208) == v17 )
              {
                v18 = *(_QWORD *)(v16 + 200);
                if ( (v18 & v10) != 0 )
                {
                  *(_QWORD *)&v50 = 0LL;
                  LOWORD(v51) = v17;
                  *((_QWORD *)&v50 + 1) = v18;
                  if ( !(unsigned int)KeEnumerateNextProcessor(&v68, (unsigned __int16 **)&v50) )
                  {
                    v19 = v52;
                    do
                    {
                      if ( (unsigned int)v15 >= v14 )
                        break;
                      v20 = KeGetPrcb(v68);
                      v21 = *(_QWORD *)(v20 + 200);
                      if ( (v21 & v13) == 0 )
                      {
                        if ( (unsigned __int8)PpmParkGranularity > 1u )
                          v21 = *(_QWORD *)(v20 + 34912);
                        v11 |= 0x100u;
                        v69 = v11;
                        v19 |= v21;
                        v15 = (0x101010101010101LL
                             * ((((v19 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v19 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v19 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v19 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
                      }
                    }
                    while ( !(unsigned int)KeEnumerateNextProcessor(&v68, (unsigned __int16 **)&v50) );
                    v9 = (unsigned __int8 *)v53;
                    v10 = v57;
                    v52 = v19;
                    v2 = v66;
                  }
                }
              }
            }
            v22 = KeCpuSetQueryUnparkRecommendation(*(unsigned __int16 *)(v2 + 4), v10, &v55);
            v23 = v55;
            v24 = v22;
            v53 = v22;
            if ( v22 )
            {
              if ( (unsigned __int8)PpmParkGranularity > 1u )
              {
                v25 = *(_WORD *)(v2 + 4);
                *(_QWORD *)&v50 = 0LL;
                LOWORD(v51) = v25;
                *((_QWORD *)&v50 + 1) = v55;
                if ( !(unsigned int)KeEnumerateNextProcessor(&v68, (unsigned __int16 **)&v50) )
                {
                  do
                    v23 |= *(_QWORD *)(KeGetPrcb(v68) + 34912);
                  while ( !(unsigned int)KeEnumerateNextProcessor(&v68, (unsigned __int16 **)&v50) );
                  v55 = v23;
                }
                v53 = (0x101010101010101LL
                     * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                       + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                       + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
                v13 = v59;
              }
              v26 = *(_WORD *)(v2 + 4);
              *(_QWORD *)&v50 = 0LL;
              LOWORD(v51) = v26;
              *((_QWORD *)&v50 + 1) = v23;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v68, (unsigned __int16 **)&v50)
                   && (unsigned int)v15 < v14 )
              {
                v27 = KeGetPrcb(v68);
                v28 = *(_QWORD *)(v27 + 200);
                if ( (v28 & v13) == 0 )
                {
                  if ( (unsigned __int8)PpmParkGranularity > 1u )
                    v28 = *(_QWORD *)(v27 + 34912);
                  v11 |= 0x10u;
                  v52 |= v28;
                  v69 = v11;
                  v15 = (0x101010101010101LL
                       * ((((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
                }
              }
              v24 = v53;
            }
            v29 = v9[1];
            if ( (unsigned int)v15 < v29 && (unsigned int)v15 < v14 )
            {
              LODWORD(v15) = v14;
              if ( v29 < v14 )
                LODWORD(v15) = v9[1];
              v11 |= 4u;
              v69 = v11;
            }
            v30 = v9[2];
            v31 = v14;
            if ( v14 > v30 && (unsigned int)v15 < v14 )
            {
              v11 |= 8u;
              v31 = v9[2];
              v69 = v11;
              if ( v30 <= (unsigned int)v15 )
                v31 = v15;
            }
            v32 = *v9;
            if ( PpmPerfMaxOverrideEnabled )
            {
              v11 |= 0x40000u;
              v33 = *v9;
              v69 = v11;
            }
            else
            {
              v34 = v9[3];
              if ( (unsigned __int8)v34 >= (unsigned __int8)v32 )
                v34 = *v9;
              v33 = v34;
              if ( PpmCheckLatencyBoostActive
                && (v32 * (unsigned int)*((unsigned __int8 *)v67 + (v70 != 0) + 121) + 50) / 0x64 > v34 )
              {
                v11 |= 0x40u;
                v33 = (v32 * (unsigned int)*((unsigned __int8 *)v67 + (v70 != 0) + 121) + 50) / 0x64;
                v69 = v11;
              }
              if ( (unsigned __int8)PpmParkGranularity > 1u )
                v33 = (unsigned __int8)PpmParkGranularity
                    - 1
                    + v33
                    - ((unsigned __int8)PpmParkGranularity - 1 + v33) % (unsigned __int8)PpmParkGranularity;
            }
            v35 = v24 + v33;
            v9[4] = v33;
            v36 = v15;
            if ( v24 + v33 >= v31 )
              v35 = v31;
            if ( v35 > (unsigned int)v15 )
              v36 = v35;
            v71 -= v31;
            v37 = PpmParkSoftParkingEnabled == 0;
            v9[5] = v36;
            if ( v37 )
            {
              v31 = v36;
              v69 = v11 | 0x200000;
            }
            v38 = 0;
            v39 = 0;
            v40 = 0;
            if ( PpmHeteroHgsParkingEnabled )
            {
              v38 = *(unsigned __int8 *)(v2 + 160);
              v39 = *(_BYTE *)(v2 + 164);
              v40 = *(_BYTE *)(v2 + 163);
            }
            v41 = v57 & v60;
            PpmParkComputeUnparkMask(
              *(unsigned __int16 *)(v2 + 4),
              v57,
              v57 & *(_DWORD *)(v2 + 32),
              v57 & v60,
              v36,
              v31,
              v59,
              v52,
              (__int64)&v61,
              (__int64)&v58,
              (__int64)&v69,
              v2 + 136,
              v38,
              v40,
              v39,
              v70);
            LOBYTE(v42) = v31;
            LOBYTE(v43) = v36;
            v44 = v70;
            v45 = ~v57;
            v46 = v70;
            *(_QWORD *)(v2 + 24) = v61 | v58 | ~v57 & *(_QWORD *)(v2 + 24);
            *(_QWORD *)(v2 + 40) = v58 | v45 & *(_QWORD *)(v2 + 40);
            PpmEventTraceSoftCoreParkingSelection(v2, v46, v43, v42, v15, v59, v52, v41, v23, v69, v38);
            v47 = *(unsigned __int8 *)(v2 + 11);
            v8 = v44 + 1;
            v3 = v71;
            v70 = v8;
          }
          while ( v8 < v47 );
          v1 = i;
          v0 = v56;
        }
      }
      ++v1;
    }
    PpmParkComputeDiff();
    if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v48 = 0, PpmParkLpiCapChanged) )
      v48 = 1;
    PpmParkLpiEngaged = PpmParkLpiCap != 0;
    PpmParkLpiCapChanged = 0;
    if ( v48 )
      PpmEventLPICoreParking();
  }
  return 1;
}
