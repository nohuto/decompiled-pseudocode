/*
 * XREFs of PpDevCfgInit @ 0x140B5ACF8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PipOpenServiceEnumKeys @ 0x1406C1280 (PipOpenServiceEnumKeys.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406CE130 (PiDmEnumObjectsWithCallback.c)
 *     RtlIsStateSeparationEnabled @ 0x140792EC0 (RtlIsStateSeparationEnabled.c)
 *     _PnpCtxRegOpenKey @ 0x14081D410 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x14086617C (_PnpCtxRegQueryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetObjectProperty @ 0x140874858 (PiDevCfgSetObjectProperty.c)
 *     PpDevCfgRequestDeviceInstall @ 0x140960740 (PpDevCfgRequestDeviceInstall.c)
 *     PiDrvDbEnumNodes @ 0x14096CF60 (PiDrvDbEnumNodes.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14096DD70 (PiDrvDbQuerySyncNodesUpdated.c)
 */

__int64 PpDevCfgInit()
{
  char v0; // r14
  __int64 v1; // rcx
  int ObjectProperties; // edi
  int v3; // eax
  char v4; // al
  int v5; // esi
  int v6; // ebx
  __int64 v7; // rcx
  int SyncNodesUpdated; // eax
  int v10; // [rsp+30h] [rbp-D8h]
  int v11; // [rsp+68h] [rbp-A0h] BYREF
  int v12; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v13; // [rsp+70h] [rbp-98h] BYREF
  int v14; // [rsp+74h] [rbp-94h] BYREF
  int v15; // [rsp+78h] [rbp-90h] BYREF
  int v16; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v17; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v19; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v20; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v21[16]; // [rsp+A8h] [rbp-60h] BYREF

  v12 = 0;
  v15 = 0;
  v0 = 0;
  LOWORD(v11) = 0;
  *(_DWORD *)(&v20.MaximumLength + 1) = 0;
  v19 = 0LL;
  Handle = 0LL;
  v14 = 0;
  memset(v21, 0, 0x78uLL);
  LODWORD(v21[1]) = 7;
  v21[0] = DEVPKEY_DriverDatabase_ConfigMode;
  LODWORD(v21[3]) = 4;
  v21[2] = &v12;
  v21[5] = DEVPKEY_DriverDatabase_ConfigOptions;
  LODWORD(v21[6]) = 7;
  v21[7] = &v15;
  LODWORD(v21[8]) = 4;
  v21[12] = &v11;
  v21[10] = DEVPKEY_DriverDatabase_Updated;
  LODWORD(v21[11]) = 17;
  LODWORD(v21[13]) = 1;
  ObjectProperties = PiDevCfgQueryObjectProperties(v1, (__int64)L"SYSTEM", 7u, 0LL, (__int64)v21, 3u);
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v21[4]) >= 0 )
      v12 = (v12 & 3) != 0 ? v12 : 0;
    else
      v12 = 3;
    v3 = v15;
    *(_DWORD *)&v20.Length = 1835034;
    if ( SLODWORD(v21[9]) < 0 )
      v3 = 0;
    v15 = v3;
    v4 = v11;
    if ( SLODWORD(v21[14]) < 0 )
      v4 = 0;
    LOBYTE(v11) = v4;
    v20.Buffer = L"DeviceInstall";
    if ( PipOpenServiceEnumKeys(&v20, 0x20019u, &v19, 0LL, 0) >= 0 )
    {
      v5 = 1;
      v6 = 0;
      v16 = 1;
      v17 = 0;
      if ( (int)PnpCtxRegOpenKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v19,
                  (__int64)L"Parameters",
                  0,
                  0x20019u,
                  (__int64)&Handle) >= 0 )
      {
        if ( RtlIsStateSeparationEnabled() )
        {
          v13 = 4;
          if ( (int)PnpCtxRegQueryValue(v7, Handle, L"DeviceInstallMode", &v14, &v16, &v13) < 0
            || v14 != 4
            || (v5 = v16, v13 != 4) )
          {
            v5 = 0;
          }
        }
        v13 = 4;
        if ( (int)PnpCtxRegQueryValue(v7, Handle, L"DriverUpdatesPending", &v14, &v17, &v13) >= 0
          && v14 == 4
          && v13 == 4 )
        {
          v6 = v17;
        }
        ZwClose(Handle);
      }
      ZwClose(v19);
      if ( v5 )
      {
        PiDevCfgFlags |= 2u;
        if ( v6 )
          PpDevCfgRequestDeviceInstall();
      }
    }
    PiDevCfgMode = v12;
    PiDevCfgOptions = v15;
    if ( v12 )
    {
      if ( (PiDevCfgFlags & 2) == 0 || (v15 & 0x20) != 0 )
      {
        SyncNodesUpdated = PiDrvDbQuerySyncNodesUpdated(0, (char *)&v11 + 1);
        v0 = BYTE1(v11);
        if ( SyncNodesUpdated >= 0 )
        {
          if ( BYTE1(v11) )
            PiDevCfgFlags |= 1u;
        }
      }
      if ( (_BYTE)v11 == 0xFF )
        PiDevCfgFlags |= 1u;
    }
    if ( (PiDevCfgFlags & 1) != 0 )
    {
      if ( !RtlIsStateSeparationEnabled() || (ObjectProperties = PiDrvDbEnumNodes(), ObjectProperties >= 0) )
      {
        ObjectProperties = PiDmEnumObjectsWithCallback(
                             1u,
                             (__int64 (__fastcall *)(void *, __int64, _BYTE *))PiDevCfgInitDeviceCallback,
                             0LL);
        if ( ObjectProperties >= 0 )
        {
          if ( (_BYTE)v11 == 0xFF )
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              0LL,
              L"SYSTEM",
              7,
              0LL,
              v10,
              (__int64)DEVPKEY_DriverDatabase_Updated,
              0,
              0LL,
              0,
              0);
          if ( v0 )
            PiDrvDbQuerySyncNodesUpdated(1, 0LL);
        }
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
