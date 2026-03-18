/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x1406CC2A8
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406C948C (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406CC3C0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x1406CCF40 (_PnpDispatchDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x140787900 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C5A60 (IoGetDeviceInterfaceAlias.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140849F50 (IoOpenDeviceInterfaceRegistryKey.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140880754 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140881418 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14095D4A0 (PiDevCfgConfigureDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A618A0 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140A67254 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406CC3C0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  _QWORD *v17; // [rsp+28h] [rbp-81h]
  _QWORD v18[12]; // [rsp+40h] [rbp-69h] BYREF

  memset(v18, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  LODWORD(v18[3]) = a5;
  v18[2] = a3;
  BYTE4(v18[3]) = a6;
  v18[4] = a7;
  if ( v11 )
  {
    v17 = v18;
    v12 = v11(a1, a2, 3LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
      {
LABEL_12:
        v14 = v18[0];
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v17) = BYTE4(v18[3]);
  v13 = CmOpenDeviceInterfaceRegKeyWorker(a1, a2, LODWORD(v18[2]), HIDWORD(v18[2]), v18[3], v17, v18[4], &v18[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v18[0]) = v13;
    v16 = v11(a1, a2, 3LL);
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        if ( !v16 )
          goto LABEL_5;
        return (unsigned int)-1073741595;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v14 >= 0 && a8 )
    *a8 = v18[5];
  return (unsigned int)v14;
}
