/*
 * XREFs of PnpInitializeBootStartDriver @ 0x140B58AC4
 * Callers:
 *     PipInitializeEarlyLaunchDrivers @ 0x140B57190 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B5780C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x140B6936C (PnpLoadBootFilterDriver.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402B146C (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VfDriverInitStarting @ 0x140AB9E54 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x140ABA5FC (VfDriverInitSuccess.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 *     PnpDoPolicyCheck @ 0x140B5910C (PnpDoPolicyCheck.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140B5916C (PnpNotifyEarlyLaunchImageLoad.c)
 */

__int64 __fastcall PnpInitializeBootStartDriver(
        unsigned __int16 *a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int128 v20; // xmm0
  int inited; // esi
  int v22; // ebx
  _QWORD v24[14]; // [rsp+38h] [rbp-51h] BYREF

  memset(v24, 0, 0x68uLL);
  v14 = 0LL;
  a8 = 0;
  if ( a7 )
  {
    if ( a4 )
    {
      v15 = *(_OWORD *)(a4 + 72);
      v16 = *(_OWORD *)(a4 + 176);
      HIDWORD(v24[0]) = *(_DWORD *)(a4 + 224) & 1;
      LODWORD(v24[11]) = *(_DWORD *)(a4 + 208);
      LODWORD(v24[12]) = *(_DWORD *)(a4 + 216);
      v24[9] = *(_QWORD *)(a4 + 192);
      v17 = *(_DWORD *)(a4 + 212);
      *(_OWORD *)&v24[1] = v15;
      HIDWORD(v24[11]) = v17;
      v18 = *a2;
      HIDWORD(v24[12]) = *(_DWORD *)(a4 + 220);
      v19 = *(_QWORD *)(a4 + 200);
      *(_OWORD *)&v24[3] = v18;
      v24[10] = v19;
      v20 = *(_OWORD *)(a4 + 160);
      *(_OWORD *)&v24[7] = v16;
      *(_OWORD *)&v24[5] = v20;
    }
    else
    {
      *(_OWORD *)&v24[1] = *(_OWORD *)a1;
    }
    PnpNotifyEarlyLaunchImageLoad(v24, &a8);
    v14 = a8;
  }
  LOBYTE(v13) = 1;
  if ( (unsigned __int8)PnpDoPolicyCheck(v14, v13) || !a7 )
  {
    inited = VfDriverInitStarting();
    PnpDiagnosticTraceObject(&KMPnPEvt_BootInit_Start, a1);
    v22 = IopInitializeBuiltinDriver((_DWORD)a1, (_DWORD)a2, a3, a4, a6, a9);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_BootInit_Stop, a1, v22);
    if ( v22 >= 0 )
      VfDriverInitSuccess(inited, a5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v22;
}
