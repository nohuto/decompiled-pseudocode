NTSTATUS __fastcall PiDrvDbLoadNodeWorkerCallback(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  int v3; // ebx
  __int64 *v4; // r14
  _DWORD *v5; // rbx
  NTSTATUS result; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // [rsp+B0h] [rbp+48h] BYREF
  int v12; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v13; // [rsp+C0h] [rbp+58h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+60h] BYREF

  v1 = (unsigned __int16 *)(a1 + 16);
  v11 = 1;
  Handle = 0LL;
  v12 = 0;
  v13 = 0;
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoad_Start, (unsigned __int16 *)(a1 + 16));
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoaded_Start, v1);
  v3 = PiDrvDbLoadHive(a1 + 32, a1 + 48, 0LL, &Handle);
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 || v3 == -1073741766 )
      *(_BYTE *)(a1 + 80) = 1;
    if ( v3 == -1073741431 )
      v3 = -1073741077;
  }
  else
  {
    v4 = (__int64 *)(a1 + 72);
    if ( (int)SysCtxRegOpenKey(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72) < 0 )
    {
      *(_BYTE *)(a1 + 80) = 1;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 480) == 0xFFFFFFFFLL )
      {
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(a1 + 24),
                    7LL,
                    *v4,
                    0LL,
                    (__int64)DEVPKEY_DriverDatabase_UnloadTimeout,
                    (__int64)&v11,
                    (__int64)&v13,
                    4,
                    (__int64)&v12,
                    0) >= 0
          && v11 == 7
          && v12 == 4 )
        {
          v7 = v13;
        }
        else
        {
          v7 = 120000LL;
          v13 = 120000;
        }
        if ( (_DWORD)v7 != -1 )
          *(_QWORD *)(a1 + 480) = -10000 * v7;
      }
      v5 = (_DWORD *)(a1 + 496);
      if ( *(_DWORD *)(a1 + 496) == 259 )
      {
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(a1 + 24),
                    7LL,
                    *v4,
                    0LL,
                    (__int64)DEVPKEY_DriverDatabase_SetupOptions,
                    (__int64)&v11,
                    a1 + 492,
                    4,
                    (__int64)&v12,
                    0) < 0
          || v11 != 7
          || v12 != 4 )
        {
          *(_DWORD *)(a1 + 492) = 51;
        }
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(a1 + 24),
                    7LL,
                    *v4,
                    0LL,
                    (__int64)DEVPKEY_DriverDatabase_SetupStatus,
                    (__int64)&v11,
                    a1 + 496,
                    4,
                    (__int64)&v12,
                    0) < 0
          || v11 != 24
          || v12 != 4 )
        {
          *v5 = 259;
        }
        if ( *v5 == 259 )
        {
          v8 = PiDrvDbSetupNodeHive(a1, *(const WCHAR **)(a1 + 24));
          v9 = *v4;
          v10 = *(_QWORD *)(a1 + 24);
          *v5 = v8;
          PnpSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            v10,
            7u,
            v9,
            0LL,
            (__int64)DEVPKEY_DriverDatabase_SetupStatus,
            24,
            a1 + 496,
            4u,
            0);
        }
      }
    }
    ZwClose(Handle);
    ZwResetEvent(*(_QWORD *)(a1 + 472), 0LL);
    v3 = PiDrvDbUnloadHive(a1 + 32, *(_QWORD *)(a1 + 472));
    if ( v3 == 259 )
    {
      v3 = 0;
    }
    else
    {
      if ( v3 < 0 )
        v3 = 0;
      ZwSetEvent(*(HANDLE *)(a1 + 472), 0LL);
    }
  }
  *(_DWORD *)(a1 + 256) = v3;
  KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
  result = PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoad_Stop, v1, v3);
  if ( v3 < 0 )
    return PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, v1, v3);
  return result;
}
