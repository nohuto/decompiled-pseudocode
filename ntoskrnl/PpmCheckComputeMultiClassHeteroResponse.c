/*
 * XREFs of PpmCheckComputeMultiClassHeteroResponse @ 0x140594418
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140593FE0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     PpmParkCalculateUnparkCount @ 0x1402EBC70 (PpmParkCalculateUnparkCount.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140594838 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140594A00 (PpmHeteroComputeMultiClassUnparkCount.c)
 *     PpmHeteroComputeUnparkCount @ 0x140594CD0 (PpmHeteroComputeUnparkCount.c)
 *     PpmEventTraceHeteroResponse @ 0x14059945C (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x140599908 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 */

char PpmCheckComputeMultiClassHeteroResponse()
{
  unsigned int v0; // ebx
  unsigned int v1; // r15d
  __int64 *v2; // r13
  char v3; // si
  __int64 v4; // rdi
  __int16 v5; // ax
  unsigned int v6; // edx
  int v7; // r13d
  unsigned __int8 v8; // r14
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // r12
  int v20; // r8d
  char v21; // r9
  unsigned __int8 v22; // al
  unsigned int v23; // ecx
  char v24; // dl
  int v25; // r14d
  char v26; // si
  __int64 v27; // r9
  __int64 v28; // r10
  unsigned int v29; // eax
  unsigned int v30; // r8d
  __int64 v31; // rdx
  unsigned __int8 *v32; // rcx
  int v33; // eax
  unsigned int v34; // edx
  char v35; // cl
  unsigned __int8 v36; // dl
  unsigned __int8 *v37; // rcx
  unsigned __int8 v38; // r8
  bool v39; // zf
  unsigned int v40; // edx
  __int64 v41; // r11
  __int64 v42; // rcx
  unsigned __int8 v43; // al
  int v45; // [rsp+40h] [rbp-C8h]
  int v46; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v47; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+70h] [rbp-98h] BYREF
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v50; // [rsp+80h] [rbp-88h]
  _BYTE v51[256]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v52[256]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v53[64]; // [rsp+288h] [rbp+180h] BYREF

  v0 = 0;
  v47 = 0LL;
  v49 = 0LL;
  v1 = 0;
  v2 = &PpmCurrentProfile[55 * dword_140C3D48C + 5];
  v48 = 0LL;
  v50 = v2;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = PpmParkNodes + 192LL * v1;
      if ( PpmHeteroHgsParkingEnabled || *(_BYTE *)(v4 + 121) )
        break;
LABEL_30:
      if ( ++v1 >= PpmParkNumNodes )
        goto LABEL_31;
    }
    v5 = *(_WORD *)(v4 + 4);
    v6 = *(unsigned __int8 *)(v4 + 11);
    v7 = 0;
    v8 = 0;
    v47 = 0LL;
    WORD4(v47) = v5;
    *(_QWORD *)&v47 = *(_QWORD *)(v4 + 16);
    if ( v6 > 1 )
    {
      v9 = (_BYTE *)(*(_QWORD *)(v4 + 184) + 104LL);
      v10 = v6 - 1;
      do
      {
        v8 += *v9;
        v7 += (unsigned __int8)v9[4];
        v9 += 104;
        --v10;
      }
      while ( v10 );
    }
    PpmHeteroComputeCoreParkingUtilities(0LL, &v47, v51, v52, &v48, &v49);
    v11 = *(unsigned __int8 *)(v4 + 10);
    v12 = 0LL;
    v13 = *(_QWORD *)(v4 + 72);
    v14 = 0LL;
    *(_QWORD *)&v47 = 0LL;
    v46 = v11;
    if ( (_DWORD)v11 )
    {
      v15 = (unsigned int)v11;
      v16 = (_QWORD *)(v13 + 8 * v11);
      do
      {
        v14 += *v16 * v48;
        v17 = v15;
        v11 = (unsigned int)(v11 - 1);
        --v15;
        v46 = v11;
        v53[v11] = v14;
        v18 = *v16-- * v17;
        v12 += v18;
      }
      while ( (_DWORD)v11 );
      *(_QWORD *)&v47 = v12;
    }
    v19 = PpmHeteroHgsParkingEnabled;
    if ( PpmHeteroHgsParkingEnabled )
      v8 = *(_BYTE *)(v4 + 10);
    v45 = v7;
    v2 = v50;
    v20 = PpmHeteroComputeUnparkCount(
            0,
            (_DWORD)v50,
            v12,
            (unsigned int)v51,
            (__int64)v53,
            (__int64)v52,
            v49,
            v45,
            v8,
            (__int64)&v46);
    v21 = 0;
    if ( *(char *)(v4 + 124) == v20 )
    {
      v22 = *(_BYTE *)(v4 + 122) + 1;
      v23 = v22;
      *(_BYTE *)(v4 + 122) = v22;
    }
    else
    {
      v23 = 1;
      *(_BYTE *)(v4 + 124) = v20;
      *(_BYTE *)(v4 + 122) = 1;
      v21 = 1;
      v3 = 4;
    }
    v24 = 0;
    v25 = v46;
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v3 |= 0x10u;
    }
    else if ( v20 == 2 )
    {
      if ( v23 < *((unsigned __int8 *)v2 + 160) )
      {
LABEL_25:
        *(_BYTE *)(v4 + 120) = *(_BYTE *)(v4 + 120) & 0xF9 | 4;
        if ( v19 )
        {
          v3 |= 0x80u;
          *(_BYTE *)(*(_QWORD *)(v4 + 184) + 108LL) = *(_BYTE *)(*(_QWORD *)(v4 + 184) + 107LL);
          *(_BYTE *)(v4 + 160) = *(_BYTE *)(*(_QWORD *)(v4 + 184) + 107LL);
        }
        v26 = v3 | 1;
        if ( !v19 )
          PpmHeteroComputeMultiClassUnparkCount(v4, (_DWORD)v2, (unsigned int)v51, (unsigned int)v52, v25, v24, v21);
        PpmEventTraceHeteroResponse(v4, (unsigned int)v51, (unsigned int)v53, v47, v25, v26);
        goto LABEL_30;
      }
      v3 |= 0x20u;
    }
    else
    {
      if ( v20 != 1 || v23 < *((unsigned __int8 *)v2 + 159) )
        goto LABEL_25;
      v3 |= 0x40u;
    }
    v24 = 1;
    *(_BYTE *)(*(_QWORD *)(v4 + 184) + 107LL) = v46;
    goto LABEL_25;
  }
LABEL_31:
  PpmParkCalculateUnparkCount();
  if ( PpmParkNumNodes )
  {
    v28 = (unsigned int)PpmParkNumNodes;
    v27 = PpmParkNodes + 117;
    do
    {
      if ( *(_BYTE *)(v27 + 4) )
      {
        v29 = *(unsigned __int8 *)(v27 - 106);
        v30 = 0;
        if ( v29 > 1 )
        {
          v31 = v29 - 1;
          v32 = (unsigned __int8 *)(*(_QWORD *)(v27 + 67) + 107LL);
          do
          {
            v33 = *v32;
            v32 += 104;
            v30 += v33;
            --v31;
          }
          while ( v31 );
        }
        v34 = *(unsigned __int8 *)(v27 - 1);
        v35 = *(_BYTE *)(v27 - 1);
        if ( v30 < v34 )
          v35 = v30;
        v36 = v34 - v35;
        v37 = *(unsigned __int8 **)(v27 + 67);
        v38 = v36;
        if ( v36 >= *v37 )
          v38 = *v37;
        v39 = PpmParkUnparkCores == 0;
        v37[3] = v38;
        if ( v39 || PpmParkGranularity == 1 && *(_BYTE *)v27 > *((_BYTE *)v2 + 126) )
        {
          v40 = 0;
          if ( *(_BYTE *)(v27 - 106) )
          {
            v41 = *(_QWORD *)(v27 + 67);
            while ( 1 )
            {
              v42 = 104LL * v40;
              v43 = *(_BYTE *)(v42 + v41 + 3);
              if ( v43 < *(_BYTE *)(v42 + v41) )
                break;
              if ( ++v40 >= *(unsigned __int8 *)(v27 - 106) )
                goto LABEL_50;
            }
            *(_BYTE *)(v42 + v41 + 3) = v43 + 1;
          }
        }
      }
LABEL_50:
      v27 += 192LL;
      --v28;
    }
    while ( v28 );
  }
  if ( PpmParkNumNodes )
  {
    do
    {
      PpmEventTraceMultiClassHeteroResponseUpdate(
        0LL,
        *(_QWORD *)(PpmParkNodes + 192LL * v0 + 184),
        *(_QWORD *)(PpmParkNodes + 192LL * v0 + 128),
        v27);
      ++v0;
    }
    while ( v0 < PpmParkNumNodes );
  }
  return 1;
}
