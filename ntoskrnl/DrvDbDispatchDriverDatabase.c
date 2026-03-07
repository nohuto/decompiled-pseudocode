__int64 __fastcall DrvDbDispatchDriverDatabase(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int ObjectContext; // eax
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r10d
  const wchar_t *v9; // r11
  int DatabaseNode; // r8d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v18; // r10d
  int v19; // r10d
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v21; // [rsp+48h] [rbp-8h] BYREF

  v21 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, &v21);
  DatabaseNode = ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)DatabaseNode;
  v11 = v8 - 1;
  if ( !v11 )
    return (unsigned int)DrvDbValidateDriverDatabaseName(v6, v9, (unsigned int)ObjectContext);
  v12 = v11 - 1;
  if ( !v12 )
    return (unsigned int)DrvDbOpenDriverDatabaseRegKey(
                           v21,
                           v9,
                           *(_DWORD *)a5,
                           *(_BYTE *)(a5 + 4),
                           *(_QWORD *)(a5 + 8),
                           (_DWORD *)(a5 + 16));
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v18 = v15 - 1;
        if ( v18 )
        {
          v19 = v18 - 2;
          if ( v19 )
          {
            if ( v19 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverDatabaseMappedProperty(
                                   (__int64)v21,
                                   v9,
                                   *(void **)a5,
                                   *(_QWORD *)(a5 + 16),
                                   *(_DWORD *)(a5 + 24),
                                   *(const WCHAR **)(a5 + 32),
                                   *(_DWORD *)(a5 + 40));
          }
          else
          {
            return (unsigned int)DrvDbGetDriverDatabaseMappedProperty(
                                   (__int64)v21,
                                   v9,
                                   *(void **)a5,
                                   *(_QWORD *)(a5 + 16),
                                   *(_DWORD **)(a5 + 24),
                                   *(_BYTE **)(a5 + 32),
                                   *(_DWORD *)(a5 + 40),
                                   *(unsigned int **)(a5 + 48));
          }
        }
        else
        {
          return (unsigned int)DrvDbGetDriverDatabaseMappedPropertyKeys(
                                 (_DWORD)v21,
                                 (_DWORD)v9,
                                 *(_QWORD *)a5,
                                 *(_QWORD *)(a5 + 24),
                                 *(_DWORD *)(a5 + 32),
                                 *(_QWORD *)(a5 + 40));
        }
      }
      else
      {
        return (unsigned int)DrvDbGetDriverDatabaseList(
                               (_DWORD)v21,
                               *(_QWORD *)a5,
                               *(_QWORD *)(a5 + 8),
                               *(_QWORD *)(a5 + 16),
                               *(_DWORD *)(a5 + 24),
                               *(_QWORD *)(a5 + 32));
      }
    }
    else
    {
      v20 = 0LL;
      DatabaseNode = DrvDbFindDatabaseNode(v21, v9, &v20, v7);
      if ( DatabaseNode < 0 )
        return (unsigned int)DatabaseNode;
      if ( (*(_DWORD *)(v20 + 64) & 0x10) == 0 )
        return (unsigned int)-1073741790;
      return (unsigned int)DrvDbDestroyDatabaseNode(v21, v20);
    }
  }
  LODWORD(v20) = 0;
  DatabaseNode = DrvDbOpenDriverDatabaseRegKey(v21, v9, *(_DWORD *)a5, 1, a5 + 8, &v20);
  if ( DatabaseNode >= 0 )
    *(_BYTE *)(a5 + 16) = (_DWORD)v20 == 1;
  return (unsigned int)DatabaseNode;
}
