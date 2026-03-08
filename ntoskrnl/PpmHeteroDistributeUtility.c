/*
 * XREFs of PpmHeteroDistributeUtility @ 0x140594ED0
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x140234820 (PpmParkDistributeUtility.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140599360 (PpmEventTraceHeteroDistributeUtility.c)
 */

char PpmHeteroDistributeUtility()
{
  bool v0; // zf
  unsigned int v1; // ecx
  char v2; // r10
  __int64 v3; // rbx
  unsigned int v4; // esi
  _QWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE *v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // esi
  unsigned int v12; // r9d
  unsigned int v13; // esi
  unsigned int v14; // r14d
  __int64 v15; // r15
  __int16 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 *v20; // rbx
  __int64 v21; // rsi
  unsigned __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  char v26; // r14
  __int64 v27; // rax
  __int64 *v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v35; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-25h]
  __int64 *v37; // [rsp+48h] [rbp-21h]
  unsigned __int64 v38; // [rsp+50h] [rbp-19h]
  __int64 v39; // [rsp+58h] [rbp-11h]
  __int64 v40; // [rsp+60h] [rbp-9h]
  __int128 v41; // [rsp+68h] [rbp-1h] BYREF
  __int64 v42; // [rsp+78h] [rbp+Fh]
  bool v43; // [rsp+D0h] [rbp+67h]
  unsigned int v44; // [rsp+D8h] [rbp+6Fh] BYREF
  char v45; // [rsp+E0h] [rbp+77h]
  __int16 v46; // [rsp+E8h] [rbp+7Fh]

  v42 = 0LL;
  v41 = 0LL;
  v37 = PpmCurrentProfile;
  v38 = 440LL * dword_140C3D48C;
  v0 = BYTE3(PpmCurrentProfile[v38 / 8 + 20]) == 0;
  v1 = 0;
  v36 = 0;
  v2 = !v0;
  v43 = !v0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v3 = PpmParkNodes + 192LL * v1;
      v39 = v3;
      if ( PpmHeteroPolicy == 4 )
        break;
      PpmParkDistributeUtility(
        *(_QWORD *)(v3 + 16),
        *(_QWORD *)(v3 + 24),
        *(_WORD *)(v3 + 4),
        *(_BYTE *)(v3 + 118),
        v2,
        0,
        0LL);
LABEL_47:
      v2 = v43;
      v1 = ++v36;
      if ( v36 >= PpmParkNumNodes )
        return 1;
    }
    v4 = *(unsigned __int8 *)(v3 + 11);
    v5 = (_QWORD *)(v3 + 184);
    LODWORD(v6) = 0;
    if ( !(_BYTE)v4 )
      goto LABEL_24;
    v7 = *(unsigned __int8 *)(v3 + 11);
    v8 = (_BYTE *)(*v5 + 5LL);
    do
    {
      v0 = *v8 == 0;
      v9 = v6 + 1;
      v8 += 104;
      if ( v0 )
        v9 = v6;
      v6 = v9;
      --v7;
    }
    while ( v7 );
    if ( v9 <= 1 )
      goto LABEL_24;
    if ( !PpmHeteroImplementationGeneration )
      goto LABEL_25;
    if ( PpmHeteroParkBias )
    {
      if ( PpmHeteroParkBias == 1 )
        goto LABEL_24;
      if ( PpmHeteroParkBias != 2 )
      {
        if ( PpmHeteroParkBias == 3 )
        {
          v10 = 0;
          v44 = 0;
          v11 = 0;
          while ( 1 )
          {
            PpmParkDistributeUtility(
              *(_QWORD *)(*v5 + 104LL * v11 + 16),
              *(_QWORD *)(v3 + 24) & *(_QWORD *)(*v5 + 104LL * v11 + 16),
              *(_WORD *)(v3 + 4),
              *(_BYTE *)(*v5 + 104LL * v11 + 96),
              v2,
              v10,
              &v44);
            if ( ++v11 >= *(unsigned __int8 *)(v3 + 11) )
              break;
            v10 = v44;
            v2 = v43;
          }
          goto LABEL_25;
        }
LABEL_24:
        PpmParkDistributeUtility(
          *(_QWORD *)(v3 + 16),
          *(_QWORD *)(v3 + 24),
          *(_WORD *)(v3 + 4),
          *(_BYTE *)(v3 + 118),
          v2,
          0,
          0LL);
        goto LABEL_25;
      }
      v12 = 0;
      v44 = 0;
      while ( 1 )
      {
        --v4;
        PpmParkDistributeUtility(
          *(_QWORD *)(*v5 + 104LL * v4 + 16),
          *(_QWORD *)(v3 + 24) & *(_QWORD *)(*v5 + 104LL * v4 + 16),
          *(_WORD *)(v3 + 4),
          *(_BYTE *)(*v5 + 104LL * v4 + 96),
          v2,
          v12,
          &v44);
        if ( !v4 )
          break;
        v12 = v44;
        v2 = v43;
      }
    }
    else
    {
      v13 = 0;
      do
      {
        PpmParkDistributeUtility(
          *(_QWORD *)(*v5 + 104LL * v13 + 16),
          *(_QWORD *)(v3 + 24) & *(_QWORD *)(*v5 + 104LL * v13 + 16),
          *(_WORD *)(v3 + 4),
          *(_BYTE *)(*v5 + 104LL * v13 + 96),
          v2,
          0,
          0LL);
        ++v13;
        v2 = v43;
      }
      while ( v13 < *(unsigned __int8 *)(v3 + 11) );
    }
LABEL_25:
    v14 = 1;
    v15 = ~*(_QWORD *)(v3 + 24);
    v16 = *(_WORD *)(v3 + 4);
    v40 = v15;
    LOBYTE(v44) = 0;
    v46 = v16;
    v45 = 0;
    if ( *(_BYTE *)(v3 + 11) > 1u )
    {
      do
      {
        v17 = 104LL * v14;
        v18 = *(_QWORD *)(*v5 + v17 + 16);
        if ( (v18 & v15) != 0 )
        {
          v19 = *(_QWORD *)(v3 + 32);
          v35 = 0;
          v20 = v37;
          v21 = v15 & v18 & v19;
          *(_QWORD *)&v41 = 0LL;
          LOWORD(v42) = v16;
          v22 = v38;
          *((_QWORD *)&v41 + 1) = v21;
          v45 = 1;
          LOBYTE(v44) = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v41) )
          {
            v23 = *(_QWORD *)(KeGetPrcb(v35) + 33984);
            if ( v23 )
            {
              LOBYTE(v44) = *((_BYTE *)v20 + v22 + 458);
              *(_BYTE *)(v23 + 239) = v44;
            }
          }
          v16 = v46;
          v3 = v39;
          v15 = v40;
          v24 = *(_QWORD *)(*v5 + v17 + 16) ^ v21;
          LOWORD(v42) = v46;
          *(_QWORD *)&v41 = 0LL;
          *((_QWORD *)&v41 + 1) = v24;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v41) )
          {
            v25 = *(_QWORD *)(KeGetPrcb(v35) + 33984);
            if ( v25 )
              *(_BYTE *)(v25 + 239) = 0;
          }
        }
        ++v14;
      }
      while ( v14 < *(unsigned __int8 *)(v3 + 11) );
      if ( v45 )
      {
        v26 = 0;
        if ( !PpmPerfQosEnabled )
        {
          v27 = *v5;
          v28 = v37;
          LOWORD(v42) = v16;
          v29 = v38;
          v30 = v15 & *(_QWORD *)(v27 + 16);
          v35 = 0;
          *((_QWORD *)&v41 + 1) = v30;
          *(_QWORD *)&v41 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v41) )
          {
            v31 = *(_QWORD *)(KeGetPrcb(v35) + 33984);
            if ( v31 )
            {
              v26 = *((_BYTE *)v28 + v29 + 457);
              *(_BYTE *)(v31 + 238) = v26;
            }
          }
          v32 = *v5;
          v3 = v39;
          LOWORD(v42) = v46;
          *((_QWORD *)&v41 + 1) = *(_QWORD *)(v32 + 16) ^ v30;
          *(_QWORD *)&v41 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v41) )
          {
            v33 = *(_QWORD *)(KeGetPrcb(v35) + 33984);
            if ( v33 )
              *(_BYTE *)(v33 + 238) = 0;
          }
        }
        LOBYTE(v6) = v44;
        LOBYTE(v8) = v26;
        PpmEventTraceHeteroDistributeUtility(v3, v8, v6);
      }
    }
    goto LABEL_47;
  }
  return 1;
}
