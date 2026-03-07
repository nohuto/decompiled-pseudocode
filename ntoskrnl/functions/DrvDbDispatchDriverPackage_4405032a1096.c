__int64 __fastcall DrvDbDispatchDriverPackage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  int v7; // r9d
  int v8; // r10d
  __int64 v9; // r8
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int DriverPackageMappedProperty; // eax
  int v21; // r8d
  int v22[6]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v22 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = v22[0];
  v11 = *(unsigned int *)(*(_QWORD *)v22 + 12LL);
  if ( (v11 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v11 )
    {
      LODWORD(v9) = -1073740697;
      return (unsigned int)v9;
    }
    switch ( v8 )
    {
      case 2:
        if ( !*((_BYTE *)a5 + 4) )
          goto LABEL_28;
        break;
      case 3:
      case 4:
        break;
      case 5:
      case 6:
      case 8:
LABEL_28:
        v11 = (unsigned int)v11 >> 31;
LABEL_14:
        v9 = (_BYTE)v11 == 0 ? 0xC0000022 : 0;
        if ( !(_BYTE)v11 )
          return (unsigned int)v9;
        goto LABEL_3;
      case 9:
        break;
      default:
        LOBYTE(v11) = 1;
        goto LABEL_14;
    }
    v11 = (unsigned int)v11 >> 30;
    LOBYTE(v11) = v11 & 1;
    goto LABEL_14;
  }
LABEL_3:
  v12 = v8 - 1;
  if ( !v12 )
  {
    DriverPackageMappedProperty = DrvDbValidateDriverInfFileName(v11, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    LOBYTE(v7) = *((_BYTE *)a5 + 4);
    DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(v22[0], a2, *(_DWORD *)a5, v7, a5[1], (__int64)(a5 + 2));
LABEL_11:
    LODWORD(v9) = DriverPackageMappedProperty;
    return (unsigned int)v9;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            DriverPackageMappedProperty = DrvDbSetDriverPackageMappedProperty(
                                            v22[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            *((_DWORD *)a5 + 6),
                                            (void *)a5[4],
                                            *((_DWORD *)a5 + 10));
          }
          else
          {
            DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                            v22[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            a5[3],
                                            (NTSTRSAFE_PWSTR)a5[4],
                                            *((_DWORD *)a5 + 10),
                                            a5[6]);
          }
        }
        else
        {
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedPropertyKeys(
                                          *(_QWORD *)v22,
                                          a2,
                                          *a5,
                                          a5[3],
                                          *((_DWORD *)a5 + 8),
                                          a5[5]);
        }
      }
      else
      {
        DriverPackageMappedProperty = DrvDbGetObjectList(v22[0], 2, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      DriverPackageMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v22, 2LL, a2);
    }
    goto LABEL_11;
  }
  v21 = *(_DWORD *)a5;
  v22[0] = 0;
  LOBYTE(v7) = 1;
  LODWORD(v9) = DrvDbOpenDriverPackageRegKey(v10, a2, v21, v7, (__int64)(a5 + 1), (__int64)v22);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = v22[0] == 1;
  return (unsigned int)v9;
}
