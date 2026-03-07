__int64 __fastcall PiDrvDbSetupNodes(int a1)
{
  int ObjectProperty; // edi
  const wchar_t *v3; // r14
  __int64 i; // rbx
  int v5; // eax
  int *v6; // rsi
  int v7; // eax
  int v9; // [rsp+90h] [rbp+8h] BYREF
  int v10; // [rsp+98h] [rbp+10h] BYREF

  ObjectProperty = 0;
  v9 = 0;
  v10 = 0;
  if ( a1 )
  {
    if ( a1 != 2 )
      return (unsigned int)ObjectProperty;
    v3 = L"SOFTWARE";
  }
  else
  {
    v3 = L"SYSTEM";
  }
  for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
  {
    v5 = *(_DWORD *)(i + 64);
    if ( (v5 & 4) == 0 )
    {
      if ( a1 )
      {
        v6 = (int *)(i + 496);
      }
      else
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(_QWORD *)(i + 24),
                           7LL,
                           *(_QWORD *)(i + 72),
                           0LL,
                           (__int64)DEVPKEY_DriverDatabase_SetupOptions,
                           (__int64)&v9,
                           i + 492,
                           4,
                           (__int64)&v10,
                           0);
        if ( ObjectProperty < 0 || v9 != 7 || v10 != 4 )
        {
          *(_DWORD *)(i + 492) = 51;
          ObjectProperty = 0;
        }
        v6 = (int *)(i + 496);
        *(_DWORD *)(i + 496) = 0;
        *(_DWORD *)(i + 64) |= 0x20u;
        v5 = *(_DWORD *)(i + 64);
      }
      if ( (v5 & 0x20) != 0 )
      {
        v7 = PiDrvDbSetupNodeHive(i, v3);
        ObjectProperty = v7;
        if ( v7 < 0 )
        {
          if ( *v6 >= 0 )
            *v6 = v7;
          ObjectProperty = 0;
        }
        if ( a1 == 2 )
        {
          PnpSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(i + 24),
            7u,
            *(_QWORD *)(i + 72),
            0LL,
            (__int64)DEVPKEY_DriverDatabase_SetupStatus,
            24,
            (__int64)v6,
            4u,
            0);
          *(_DWORD *)(i + 64) &= ~0x20u;
        }
      }
    }
  }
  return (unsigned int)ObjectProperty;
}
