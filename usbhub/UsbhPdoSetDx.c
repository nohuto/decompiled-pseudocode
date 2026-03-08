/*
 * XREFs of UsbhPdoSetDx @ 0x1C001ACC4
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C000A4C0 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhSetPdoPowerState @ 0x1C0003960 (UsbhSetPdoPowerState.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0009B88 (UsbhSyncSuspendPdoPort.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhSetPdoIdleReady @ 0x1C000A364 (UsbhSetPdoIdleReady.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C001A1D0 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C001BB3C (UsbhCompletePdoWakeIrp.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C001BD28 (UsbhCompletePdoIdleIrp.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 */

__int64 __fastcall UsbhPdoSetDx(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rbp
  _DWORD *v8; // r13
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // rbx
  KIRQL v27; // dl
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  char v33; // [rsp+70h] [rbp+8h]
  int v34; // [rsp+80h] [rbp+18h]
  int v35; // [rsp+88h] [rbp+20h]

  v6 = PdoExt(a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  FdoExt(v7);
  v9 = *(_QWORD *)(a3 + 184);
  v10 = *(_DWORD *)(v9 + 24);
  v35 = v10;
  v34 = *(_DWORD *)(v9 + 8);
  FdoExt(*(_QWORD *)(a1 + 8));
  Log(v7, 16, 1346651256, a3, a2);
  v8[355] &= ~0x2000000u;
  FdoExt(*(_QWORD *)(a1 + 8));
  v11 = FdoExt(*(_QWORD *)(a1 + 8))[1043];
  if ( v11 <= 206 )
  {
    if ( v11 == 206 )
    {
LABEL_7:
      v18 = -1073741101;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          19,
          (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
          *((_WORD *)v8 + 714));
      UsbhSetPdoPowerState(a1, a2, v12, 4, 5);
      UsbhReleaseFdoPwrLock(v7, a1, v19, v20);
      return v18;
    }
    v14 = v11 - 201;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_7;
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_7;
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_7;
LABEL_30:
      if ( v17 != 1 )
      {
        UsbhReleaseFdoPwrLock(v7, a1, v12, v13);
        return (unsigned int)-1073741823;
      }
      goto LABEL_7;
    }
    v21 = PdoExt(a2);
    v23 = (unsigned int)v21[282];
    switch ( v21[282] )
    {
      case 1:
        UsbhSetPdoPowerState(a1, a2, v22, 4, 4);
        v33 = v10 == 4;
        v26 = FdoExt(v7);
        FdoExt(*(_QWORD *)(a1 + 8));
        *(_DWORD *)(a1 + 32) = 1734964085;
        v27 = *((_BYTE *)v26 + 5064);
        *((_QWORD *)v26 + 168) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v26 + 632, v27);
        UsbhPdoAbortAllDevicePipes(v7, a2);
        if ( !v8[700] || (v34 & 0xF000) != 0x5000 )
          UsbhSyncSuspendPdoPort(a1, a2, v33);
        v8[596] = v35 != 4;
        break;
      case 2:
      case 3:
        goto LABEL_19;
      case 4:
      case 5:
        v33 = v10 == 4;
        v8[596] = v10 != 4;
        UsbhSetPdoPowerState(a1, a2, v22, v23, 4);
        UsbhReleaseFdoPwrLock(v7, a1, v24, v25);
        break;
      case 6:
LABEL_19:
        UsbhSetPdoPowerState(a1, a2, v22, v23, 5);
        goto LABEL_17;
      default:
LABEL_17:
        UsbhReleaseFdoPwrLock(v7, a1, v22, v23);
        v18 = -1073741101;
LABEL_25:
        UsbhCompletePdoWakeIrp(v7, *((_QWORD *)v8 + 105), 3221226195LL);
        if ( (v8[355] & 0x100000) == 0 )
          UsbhCompletePdoIdleIrp(v7, *((_QWORD *)v8 + 105), 3221226195LL);
        return v18;
    }
    v18 = 0;
    UsbhSetPdoIdleReady(v7, a2, a3);
    if ( !v33 )
      return v18;
    goto LABEL_25;
  }
  v28 = v11 - 209;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( v29 )
    {
      v17 = v29 - 1;
      if ( v17 )
        goto LABEL_30;
    }
  }
  UsbhSetPdoPowerState(a1, a2, v12, 5, 4);
  Log(v7, 16, 1349862520, a3, a2);
  UsbhReleaseFdoPwrLock(v7, a1, v30, v31);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *((_WORD *)v8 + 714));
  return 0;
}
