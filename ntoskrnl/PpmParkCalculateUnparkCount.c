char PpmParkCalculateUnparkCount()
{
  __int64 v0; // rcx
  unsigned __int16 v1; // r13
  __int64 v2; // rbx
  unsigned __int8 v3; // r15
  char *v4; // r14
  unsigned int v5; // r12d
  bool v6; // zf
  char v7; // al
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // di
  unsigned __int8 v10; // si
  _BYTE *v11; // rcx
  char IsMultiClassParkingEnabled; // al
  __int64 v13; // r8
  char v14; // si
  char v15; // r10
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  int v18; // ecx
  int v19; // r9d
  int v20; // r8d
  int v21; // edx
  __int16 v23; // [rsp+60h] [rbp-68h]
  unsigned int v24; // [rsp+68h] [rbp-60h]
  unsigned int v25; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v26; // [rsp+70h] [rbp-58h]
  char v27; // [rsp+D0h] [rbp+8h]
  char v28; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v29; // [rsp+E0h] [rbp+18h]
  unsigned __int8 v30; // [rsp+E8h] [rbp+20h]

  if ( PpmIsParkingEnabled )
  {
    v0 = 55LL * dword_140C3D48C;
    v28 = BYTE1(PpmCurrentProfile[v0 + 21]);
    v27 = PpmCurrentProfile[v0 + 21];
    v26 = PpmCurrentProfile[v0 + 22];
    v29 = BYTE6(PpmCurrentProfile[v0 + 20]);
    v25 = HIDWORD(PpmCurrentProfile[v0 + 21]);
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v25 = 0;
      v26 = 0;
    }
    v1 = 0;
    v23 = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v2 = PpmParkNodes + 192LL * v1;
        if ( (*(_BYTE *)(v2 + 120) & 1) == 0 )
        {
          ++*(_DWORD *)v2;
          v3 = 0;
          v24 = *(_DWORD *)v2;
          if ( *(_BYTE *)(v2 + 11) )
            break;
        }
LABEL_66:
        v23 = ++v1;
        if ( v1 >= (unsigned int)PpmParkNumNodes )
          return 1;
      }
      while ( 1 )
      {
        v4 = (char *)(*(_QWORD *)(v2 + 184) + 104LL * v3);
        v5 = (unsigned __int8)*v4;
        if ( ((unsigned __int8)(v3 != 0 ? 4 : 2) & *(_BYTE *)(v2 + 120)) == 0
          || (v6 = (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled() == 0, v7 = 1, !v6) )
        {
          v7 = 0;
        }
        if ( !(_BYTE)v5 || v7 )
          goto LABEL_64;
        v8 = PpmParkGranularity;
        if ( PpmParkUnparkCores )
          v8 = 1;
        if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled() )
        {
          if ( *(_BYTE *)(v2 + 121) )
          {
            v9 = v4[3];
            v10 = v4[98];
            goto LABEL_22;
          }
        }
        else if ( !v3 )
        {
          if ( *(_BYTE *)(v2 + 121) )
          {
            v11 = *(_BYTE **)(v2 + 184);
            if ( v11[107] >= v11[109] )
            {
              v9 = v11[97];
              v10 = v11[98];
              goto LABEL_22;
            }
          }
        }
        v10 = *(_BYTE *)(v2 + 117);
        v9 = *(_BYTE *)(v2 + 116);
LABEL_22:
        v30 = v9;
        IsMultiClassParkingEnabled = PpmHeteroIsMultiClassParkingEnabled();
        v13 = 0LL;
        if ( IsMultiClassParkingEnabled && *(_BYTE *)(v2 + 121)
          || PpmParkUnparkCores && PpmParkGranularity != 1
          || v9 >= (unsigned __int8)v5
          || v10 <= v29 )
        {
          v14 = 0;
        }
        else
        {
          ++v9;
          v14 = 1;
        }
        v15 = PpmParkUnparkCores;
        v16 = (unsigned __int8)v4[4];
        if ( PpmParkUnparkCores )
        {
          v14 |= 2u;
          v16 = (unsigned int)v16 / (unsigned __int8)PpmParkGranularity;
        }
        if ( (unsigned __int8)v16 >= v9 )
        {
          if ( (unsigned __int8)v16 > v9 && (unsigned __int8)v16 >= v8 && v24 >= v25 )
          {
            v14 |= 8u;
            *(_DWORD *)v2 = 0;
            switch ( v27 )
            {
              case 0:
                goto LABEL_54;
              case 1:
                LOBYTE(v16) = v16 - v8;
                break;
              case 2:
                LOBYTE(v16) = v8;
                break;
              case 3:
                v13 = *(unsigned __int8 *)(v2 + 119);
                if ( (unsigned __int8)v16 <= (unsigned int)v13 + (unsigned __int8)PpmParkGranularity )
                  LOBYTE(v16) = PpmParkGranularity;
                else
                  LOBYTE(v16) = v16 - v13;
                break;
            }
          }
        }
        else
        {
          if ( (unsigned __int8)v16 >= (unsigned __int8)v5 )
            goto LABEL_56;
          if ( v24 < v26 )
            goto LABEL_57;
          v14 |= 4u;
          *(_DWORD *)v2 = 0;
          switch ( v28 )
          {
            case 0:
LABEL_54:
              LOBYTE(v16) = v9;
              break;
            case 1:
              LOBYTE(v16) = v8 + v16;
              break;
            case 2:
              goto LABEL_56;
            case 3:
              v13 = *(unsigned __int8 *)(v2 + 119);
              if ( (unsigned int)v13 + (unsigned __int8)v16 >= v5 )
                goto LABEL_56;
              LOBYTE(v16) = v13 + v16;
              break;
            default:
              goto LABEL_57;
          }
        }
        if ( (unsigned __int8)v16 >= (unsigned __int8)v5 )
LABEL_56:
          LOBYTE(v16) = v5;
LABEL_57:
        if ( v15 )
          v16 = (unsigned __int8)PpmParkGranularity * (unsigned int)(unsigned __int8)v16;
        v6 = PpmHeteroHgsParkingEnabled == 0;
        v4[3] = v16;
        if ( !v6 )
        {
          v17 = *(_BYTE *)(v2 + 160);
          *(_BYTE *)(v2 + 162) = v16;
          if ( (unsigned __int8)v16 >= v17 )
          {
            LOBYTE(v16) = v16 - v17;
            *(_BYTE *)(v2 + 161) = v16;
          }
          else
          {
            *(_BYTE *)(v2 + 162) = v17;
            *(_BYTE *)(v2 + 161) = 0;
          }
        }
        PpmEventHgsCoresUnparkedCount(v2, v16, v13);
        LOBYTE(v18) = v3;
        LOBYTE(v19) = v4[3];
        LOBYTE(v20) = v4[4];
        LOBYTE(v21) = v30;
        PpmEventParkingCountSelection(v18, v21, v20, v19, *v4, v14, v28, v27, v26, v25, v24);
LABEL_64:
        if ( ++v3 >= *(_BYTE *)(v2 + 11) )
        {
          v1 = v23;
          goto LABEL_66;
        }
      }
    }
  }
  return 1;
}
