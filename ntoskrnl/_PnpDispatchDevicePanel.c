__int64 __fastcall PnpDispatchDevicePanel(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v5)(); // r8
  __int128 *v6; // r10
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int128 v16; // [rsp+50h] [rbp-18h] BYREF

  v5 = a2;
  LODWORD(a2) = 0;
  LODWORD(v6) = 0;
  v16 = 0LL;
  v7 = a4 - 1;
  if ( !v7 )
    return CmValidateDevicePanelName(a1, v5);
  v8 = v7 - 1;
  if ( !v8 )
    return CmOpenDevicePanelRegKey(
             a1,
             (_DWORD)v5,
             (_DWORD)v5,
             0,
             *(_DWORD *)a5,
             *(_BYTE *)(a5 + 4),
             *(_QWORD *)(a5 + 8),
             a5 + 16);
  v9 = v8 - 1;
  if ( !v9 )
    return 3221225474LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 3221225474LL;
  v11 = v10 - 1;
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            return CmSetDevicePanelMappedProperty(a1, 0, (_DWORD)v5, *(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16));
          else
            return 3221225485LL;
        }
        else
        {
          return CmGetDevicePanelMappedProperty(
                   a1,
                   v5,
                   v5,
                   *(_QWORD *)(a5 + 8),
                   *(_QWORD *)(a5 + 16),
                   *(_QWORD *)(a5 + 24),
                   *(_QWORD *)(a5 + 32),
                   *(_DWORD *)(a5 + 40),
                   *(_QWORD *)(a5 + 48));
        }
      }
      else
      {
        return CmGetDevicePanelMappedPropertyLocales(
                 a1,
                 0,
                 (_DWORD)v5,
                 *(_QWORD *)(a5 + 8),
                 *(_QWORD *)(a5 + 16),
                 *(_DWORD *)(a5 + 24),
                 *(_QWORD *)(a5 + 32));
      }
    }
    else
    {
      return CmGetDevicePanelMappedPropertyKeys(
               a5,
               0,
               (_DWORD)v5,
               0,
               *(_QWORD *)(a5 + 24),
               *(_DWORD *)(a5 + 32),
               *(_QWORD *)(a5 + 40));
    }
  }
  else
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)a5;
      a2 = PnpCmMatchCallbackRoutine;
      v6 = &v16;
      *((_QWORD *)&v16 + 1) = *(_QWORD *)(a5 + 8);
    }
    return CmGetMatchingDevicePanelList(
             a1,
             (_DWORD)a2,
             (_DWORD)v6,
             *(_QWORD *)(a5 + 16),
             *(_DWORD *)(a5 + 24),
             *(_QWORD *)(a5 + 32),
             *(_DWORD *)(a5 + 40) & 0xFFFF0000);
  }
}
