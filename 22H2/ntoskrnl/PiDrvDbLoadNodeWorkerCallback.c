/*
 * XREFs of PiDrvDbLoadNodeWorkerCallback @ 0x140725C90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     PnpDiagnosticTraceObject @ 0x1403645B8 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364734 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwSetEvent @ 0x1403F9BE0 (ZwSetEvent.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwResetEvent @ 0x1403FC960 (ZwResetEvent.c)
 *     _PnpGetObjectProperty @ 0x1406B095C (_PnpGetObjectProperty.c)
 *     _SysCtxRegOpenKey @ 0x1406BB48C (_SysCtxRegOpenKey.c)
 *     PiDrvDbUnloadHive @ 0x140725F28 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140725F74 (PiDrvDbLoadHive.c)
 *     _PnpSetObjectProperty @ 0x1407420C4 (_PnpSetObjectProperty.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7EB4 (PiDrvDbSetupNodeHive.c)
 */

NTSTATUS __fastcall PiDrvDbLoadNodeWorkerCallback(__int64 a1)
{
  unsigned __int16 *v1; // r14
  int v3; // eax
  int v4; // ebx
  __int64 *v5; // r15
  _DWORD *v6; // rbx
  NTSTATUS result; // eax
  __int64 v8; // rax
  int v9; // eax
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
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 || v3 == -1073741766 )
      *(_BYTE *)(a1 + 80) = 1;
    goto LABEL_35;
  }
  v5 = (__int64 *)(a1 + 72);
  if ( (int)SysCtxRegOpenKey(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72) < 0 )
  {
    *(_BYTE *)(a1 + 80) = 1;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 480) == 0xFFFFFFFFLL )
  {
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 24),
                7LL,
                *v5,
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
      v8 = v13;
    }
    else
    {
      v8 = 120000LL;
      v13 = 120000;
    }
    if ( (_DWORD)v8 != -1 )
      *(_QWORD *)(a1 + 480) = -10000 * v8;
  }
  v6 = (_DWORD *)(a1 + 496);
  if ( *(_DWORD *)(a1 + 496) != 259 )
    goto LABEL_5;
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 24),
              7LL,
              *v5,
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
              *v5,
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
    *v6 = 259;
LABEL_27:
    v9 = PiDrvDbSetupNodeHive(a1, *(_QWORD *)(a1 + 24));
    v10 = *(_QWORD *)(a1 + 24);
    *v6 = v9;
    PnpSetObjectProperty(PiPnpRtlCtx, v10, 7, 0LL, (__int64)DEVPKEY_DriverDatabase_SetupStatus, 24, a1 + 496, 4, 0);
    goto LABEL_5;
  }
  if ( *v6 == 259 )
    goto LABEL_27;
LABEL_5:
  ZwClose(Handle);
  ZwResetEvent(*(HANDLE *)(a1 + 472), 0LL);
  v4 = PiDrvDbUnloadHive(a1 + 32, *(_QWORD *)(a1 + 472));
  if ( v4 == 259 )
  {
    v4 = 0;
    goto LABEL_7;
  }
  if ( v4 < 0 )
    v4 = 0;
  ZwSetEvent(*(HANDLE *)(a1 + 472), 0LL);
LABEL_35:
  if ( v4 == -1073741431 )
    v4 = -1073741077;
LABEL_7:
  *(_DWORD *)(a1 + 256) = v4;
  KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
  result = PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoad_Stop, v1, v4);
  if ( v4 < 0 )
    return PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, v1, v4);
  return result;
}
