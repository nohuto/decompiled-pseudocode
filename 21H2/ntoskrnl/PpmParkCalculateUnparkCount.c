/*
 * XREFs of PpmParkCalculateUnparkCount @ 0x140234500
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140577E50 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

char PpmParkCalculateUnparkCount()
{
  __int64 v1; // rcx
  unsigned __int8 v2; // r9
  unsigned int v3; // r13d
  unsigned int v4; // r12d
  unsigned __int16 v5; // di
  __int64 v6; // r10
  unsigned __int8 v7; // r14
  unsigned int v8; // edi
  __int64 v9; // rsi
  unsigned int v10; // ebx
  char v11; // r15
  int v12; // ebp
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r11
  unsigned int v15; // r9d
  bool v16; // cc
  int v17; // ecx
  unsigned int v18; // r8d
  int v19; // edx
  char v20; // cl
  char v21; // [rsp+48h] [rbp+8h]
  char v22; // [rsp+50h] [rbp+10h]
  unsigned __int8 v23; // [rsp+58h] [rbp+18h]
  __int16 v24; // [rsp+60h] [rbp+20h]

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 342LL * dword_140C2332C;
  v2 = BYTE6(PpmCurrentProfile[v1 + 20]);
  v3 = PpmCurrentProfile[v1 + 22];
  v4 = HIDWORD(PpmCurrentProfile[v1 + 21]);
  v21 = BYTE1(PpmCurrentProfile[v1 + 21]);
  v22 = PpmCurrentProfile[v1 + 21];
  v23 = v2;
  if ( PpmCheckCurrentPipelineId == 5 )
  {
    v4 = 0;
    v3 = 0;
  }
  v5 = 0;
  v24 = 0;
  if ( !PpmParkNumNodes )
    return 1;
  do
  {
    v6 = PpmParkNodes + 272LL * v5;
    if ( (*(_BYTE *)(v6 + 146) & 1) != 0 )
      goto LABEL_50;
    ++*(_DWORD *)v6;
    v7 = 0;
    v8 = *(_DWORD *)v6;
    v9 = 0LL;
    do
    {
      v10 = *(unsigned __int8 *)(v9 + v6 + 128);
      if ( !(_BYTE)v10 || ((unsigned __int8)(1 << (v7 + 1)) & *(_BYTE *)(v6 + 146)) != 0 )
        goto LABEL_48;
      v11 = PpmParkUnparkCores;
      v12 = (unsigned __int8)PpmParkGranularity;
      v13 = *(_BYTE *)(v6 + 140);
      v14 = PpmParkGranularity;
      if ( !PpmParkUnparkCores || (v14 = 1, PpmParkGranularity == 1) )
      {
        if ( v13 < (unsigned __int8)v10 && *(_BYTE *)(v6 + 141) > v2 )
          ++v13;
      }
      v15 = *(unsigned __int8 *)(v9 + v6 + 138);
      if ( PpmParkUnparkCores )
        v15 /= (unsigned __int8)PpmParkGranularity;
      v16 = (unsigned __int8)v15 <= v13;
      if ( (unsigned __int8)v15 < v13 )
      {
        if ( (unsigned __int8)v15 < (unsigned __int8)v10 && v8 >= v3 )
        {
          *(_DWORD *)v6 = 0;
          if ( v21 )
          {
            switch ( v21 )
            {
              case 1:
                LOBYTE(v15) = v14 + v15;
                break;
              case 2:
                LOBYTE(v15) = v10;
                break;
              case 3:
                v17 = *(unsigned __int8 *)(v6 + 145);
                v18 = v17 + (unsigned __int8)v15;
                LOBYTE(v15) = v15 + v17;
                if ( v18 >= v10 )
                  LOBYTE(v15) = v10;
                break;
            }
            goto LABEL_43;
          }
          goto LABEL_42;
        }
        v16 = (unsigned __int8)v15 <= v13;
      }
      if ( v16 || (unsigned __int8)v15 <= v14 || v8 < v4 )
        goto LABEL_43;
      *(_DWORD *)v6 = 0;
      if ( v22 )
      {
        switch ( v22 )
        {
          case 1:
            LOBYTE(v15) = v15 - v14;
            break;
          case 2:
            LOBYTE(v15) = v14;
            break;
          case 3:
            v19 = *(unsigned __int8 *)(v6 + 145);
            if ( (unsigned __int8)v15 <= (unsigned int)(v19 + v12) )
              LOBYTE(v15) = v12;
            else
              LOBYTE(v15) = v15 - v19;
            break;
        }
        goto LABEL_43;
      }
LABEL_42:
      LOBYTE(v15) = v13;
LABEL_43:
      v20 = v15;
      if ( (unsigned __int8)v15 >= (unsigned __int8)v10 )
        v20 = v10;
      if ( v11 )
        v20 *= (_BYTE)v12;
      v2 = v23;
      *(_BYTE *)(v9 + v6 + 138) = v20;
LABEL_48:
      ++v7;
      ++v9;
    }
    while ( v7 < 2u );
    v5 = v24;
LABEL_50:
    v24 = ++v5;
  }
  while ( v5 < (unsigned int)PpmParkNumNodes );
  return 1;
}
