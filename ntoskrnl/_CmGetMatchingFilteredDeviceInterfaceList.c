/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceList @ 0x1406C42E4
 * Callers:
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406874DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x14085C60C (_CmGetMatchingDeviceInterfaceList.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140876D34 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PnpDisableDeviceInterfaces @ 0x14087E3BC (PnpDisableDeviceInterfaces.c)
 *     PnpDeleteDeviceInterfaces @ 0x1409534E4 (PnpDeleteDeviceInterfaces.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140A60258 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140823FCC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // r10
  int v14; // eax
  unsigned int v15; // ebx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // rdi
  unsigned int MatchingFilteredDeviceInterfaceListWorker; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  __int64 (__fastcall *v23)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // [rsp+58h] [rbp-79h]
  _QWORD v24[12]; // [rsp+60h] [rbp-71h] BYREF

  memset(v24, 0, 0x58uLL);
  v24[2] = a2;
  v24[3] = a3;
  LODWORD(v24[4]) = a4;
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, _QWORD *))(a1 + 504);
  LODWORD(v24[8]) = a8;
  v24[5] = a5;
  v24[9] = a9;
  LODWORD(v24[10]) = a10;
  v23 = v13;
  v24[6] = a6;
  v24[7] = a7;
  if ( v13 )
  {
    v14 = v13(a1, 0LL, 3LL, 17LL, 1, v24);
    if ( v14 == -1073741822 )
    {
      v17 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        return LODWORD(v24[0]);
      if ( v14 )
        return (unsigned int)-1073741595;
      v17 = v23;
    }
  }
  else
  {
    v17 = 0LL;
  }
  MatchingFilteredDeviceInterfaceListWorker = CmGetMatchingFilteredDeviceInterfaceListWorker(
                                                a1,
                                                v24[2],
                                                v24[3],
                                                LODWORD(v24[4]),
                                                v24[5],
                                                v24[6],
                                                v24[7],
                                                v24[8],
                                                v24[9],
                                                v24[10]);
  v15 = MatchingFilteredDeviceInterfaceListWorker;
  if ( v17 )
  {
    LODWORD(v24[0]) = MatchingFilteredDeviceInterfaceListWorker;
    v19 = v17(a1, 0LL, 3LL, 17LL, 2, v24);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(v24[0]);
      v21 = v15;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v15;
}
