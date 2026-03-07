__int64 __fastcall DrvDbDispatchDriverInfFile(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int ObjectContext; // eax
  int v7; // r10d
  __int64 v8; // r8
  int v9; // r11d
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int DriverInfFileMappedProperty; // eax
  int v20; // r8d
  __int64 v21; // [rsp+20h] [rbp-38h]
  int v22[2]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v22 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  v8 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v8;
  v9 = v22[0];
  v10 = *(unsigned int *)(*(_QWORD *)v22 + 12LL);
  if ( (v10 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v10 )
    {
      LODWORD(v8) = -1073740697;
      return (unsigned int)v8;
    }
    switch ( v7 )
    {
      case 2:
        if ( !*(_BYTE *)(a5 + 4) )
          goto LABEL_28;
        break;
      case 3:
      case 4:
        break;
      case 5:
      case 6:
      case 8:
LABEL_28:
        v10 = (unsigned int)v10 >> 31;
LABEL_14:
        v8 = (_BYTE)v10 == 0 ? 0xC0000022 : 0;
        if ( !(_BYTE)v10 )
          return (unsigned int)v8;
        goto LABEL_3;
      case 9:
        break;
      default:
        LOBYTE(v10) = 1;
        goto LABEL_14;
    }
    v10 = (unsigned int)v10 >> 30;
    LOBYTE(v10) = v10 & 1;
    goto LABEL_14;
  }
LABEL_3:
  v11 = v7 - 1;
  if ( !v11 )
  {
    DriverInfFileMappedProperty = DrvDbValidateDriverInfFileName(v10, a2, v8);
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    DriverInfFileMappedProperty = DrvDbOpenDriverInfFileRegKey(
                                    v22[0],
                                    a2,
                                    *(_DWORD *)a5,
                                    *(_BYTE *)(a5 + 4),
                                    *(_QWORD *)(a5 + 8),
                                    a5 + 16);
LABEL_11:
    LODWORD(v8) = DriverInfFileMappedProperty;
    return (unsigned int)v8;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 != 1 )
            {
              LODWORD(v8) = -1073741811;
              return (unsigned int)v8;
            }
            DriverInfFileMappedProperty = DrvDbSetDriverInfFileMappedProperty(
                                            v22[0],
                                            a2,
                                            *(_QWORD *)a5,
                                            *(_QWORD *)(a5 + 16),
                                            *(_DWORD *)(a5 + 24),
                                            *(_QWORD *)(a5 + 32),
                                            *(_DWORD *)(a5 + 40));
          }
          else
          {
            DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedProperty(
                                            *(__int64 *)v22,
                                            a2,
                                            *(HANDLE *)a5,
                                            *(_QWORD *)(a5 + 16),
                                            *(_DWORD **)(a5 + 24),
                                            *(_QWORD *)(a5 + 32),
                                            *(_DWORD *)(a5 + 40),
                                            *(_DWORD **)(a5 + 48));
          }
        }
        else
        {
          LODWORD(v21) = *(_DWORD *)(a5 + 32);
          DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedPropertyKeys(
                                          v22[0],
                                          a2,
                                          *(_QWORD *)a5,
                                          *(_QWORD *)(a5 + 24),
                                          v21,
                                          *(HANDLE *)(a5 + 40));
        }
      }
      else
      {
        DriverInfFileMappedProperty = DrvDbGetObjectList(
                                        v22[0],
                                        3,
                                        *(_QWORD *)a5,
                                        *(_QWORD *)(a5 + 8),
                                        *(_QWORD *)(a5 + 16),
                                        *(_DWORD *)(a5 + 24),
                                        *(_QWORD *)(a5 + 32),
                                        0);
      }
    }
    else
    {
      DriverInfFileMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v22, 3LL, a2);
    }
    goto LABEL_11;
  }
  v20 = *(_DWORD *)a5;
  v22[0] = 0;
  LODWORD(v8) = DrvDbOpenDriverInfFileRegKey(v9, a2, v20, 1, a5 + 8, (__int64)v22);
  if ( (int)v8 >= 0 )
    *(_BYTE *)(a5 + 16) = v22[0] == 1;
  return (unsigned int)v8;
}
