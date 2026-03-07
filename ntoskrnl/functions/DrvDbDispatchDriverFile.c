__int64 __fastcall DrvDbDispatchDriverFile(__int64 a1, wchar_t *a2, int a3, __int64 a4, __int64 a5)
{
  signed int ObjectContext; // r8d
  int v7; // r10d
  __int64 *v8; // r11
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v18; // r8d
  __int64 v20; // [rsp+20h] [rbp-38h]
  int v21[2]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v21 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v21);
  if ( ObjectContext < 0 )
    return (unsigned int)ObjectContext;
  v8 = *(__int64 **)v21;
  v9 = *(unsigned int *)(*(_QWORD *)v21 + 12LL);
  if ( (v9 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v9 )
      return (unsigned int)-1073740697;
    switch ( v7 )
    {
      case 2:
        if ( !*(_BYTE *)(a5 + 4) )
          goto LABEL_15;
        break;
      case 3:
      case 4:
        break;
      case 5:
      case 6:
      case 8:
LABEL_15:
        v9 = (unsigned int)v9 >> 31;
LABEL_16:
        ObjectContext = (_BYTE)v9 == 0 ? 0xC0000022 : 0;
        if ( !(_BYTE)v9 )
          return (unsigned int)ObjectContext;
        goto LABEL_17;
      case 9:
        break;
      default:
        LOBYTE(v9) = 1;
        goto LABEL_16;
    }
    v9 = (unsigned int)v9 >> 30;
    LOBYTE(v9) = v9 & 1;
    goto LABEL_16;
  }
LABEL_17:
  v10 = v7 - 1;
  if ( !v10 )
    return (unsigned int)DrvDbValidateDriverInfFileName(v9, a2);
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)DrvDbOpenDriverFileRegKey(
                           *(__int64 **)v21,
                           (__int64)a2,
                           *(_DWORD *)a5,
                           *(_BYTE *)(a5 + 4),
                           *(_QWORD *)(a5 + 8),
                           a5 + 16);
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            if ( v16 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverFileMappedProperty(
                                   *(__int64 **)v21,
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *(_QWORD *)(a5 + 16),
                                   *(_DWORD *)(a5 + 24),
                                   *(int **)(a5 + 32),
                                   *(_DWORD *)(a5 + 40));
          }
          else
          {
            return (unsigned int)DrvDbGetDriverFileMappedProperty(
                                   *(__int64 *)v21,
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *(_QWORD *)(a5 + 16),
                                   *(_DWORD **)(a5 + 24),
                                   *(_WORD **)(a5 + 32),
                                   *(_DWORD *)(a5 + 40),
                                   *(_DWORD **)(a5 + 48));
          }
        }
        else
        {
          LODWORD(v20) = *(_DWORD *)(a5 + 32);
          return (unsigned int)DrvDbGetDriverFileMappedPropertyKeys(
                                 *(__int64 *)v21,
                                 (int)a2,
                                 *(unsigned int **)a5,
                                 *(_QWORD *)(a5 + 24),
                                 v20,
                                 *(unsigned int **)(a5 + 40));
        }
      }
      else
      {
        return (unsigned int)DrvDbGetObjectList(
                               *(__int64 **)v21,
                               4,
                               *(_QWORD *)a5,
                               *(_QWORD *)(a5 + 8),
                               *(_QWORD *)(a5 + 16),
                               *(_DWORD *)(a5 + 24),
                               *(_DWORD **)(a5 + 32),
                               0);
      }
    }
    else
    {
      return (unsigned int)DrvDbDeleteObjectRegKey(*(__int64 **)v21, 4, a2, 0);
    }
  }
  v18 = *(_DWORD *)a5;
  v21[0] = 0;
  ObjectContext = DrvDbOpenDriverFileRegKey(v8, (__int64)a2, v18, 1, a5 + 8, (__int64)v21);
  if ( ObjectContext >= 0 )
    *(_BYTE *)(a5 + 16) = v21[0] == 1;
  return (unsigned int)ObjectContext;
}
