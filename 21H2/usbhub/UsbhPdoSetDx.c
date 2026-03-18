/*
 * XREFs of UsbhPdoSetDx @ 0x1C0001178
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C0005200 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001330 (UsbhCompletePdoIdleIrp.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C00029DC (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSetPdoPowerState @ 0x1C0002CC0 (UsbhSetPdoPowerState.c)
 *     UsbhSetPdoIdleReady @ 0x1C0004C18 (UsbhSetPdoIdleReady.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000EC40 (UsbhSyncSuspendPdoPort.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C000F058 (UsbhCompletePdoWakeIrp.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 */

__int64 __fastcall UsbhPdoSetDx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r8
  int v10; // ebx
  int v11; // ecx
  int v12; // r8d
  int v13; // r8d
  int v14; // r9d
  bool v15; // r13
  __int64 v16; // rbx
  KIRQL v17; // dl
  __int64 v18; // r8
  unsigned int v19; // ebx
  int v21; // [rsp+70h] [rbp+8h]
  int v23; // [rsp+88h] [rbp+20h]

  v6 = PdoExt(a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  FdoExt(v7);
  v9 = *(_QWORD *)(a3 + 184);
  v10 = *(_DWORD *)(v9 + 24);
  v23 = v10;
  v21 = *(_DWORD *)(v9 + 8);
  FdoExt(*(_QWORD *)(a1 + 8));
  Log(v7, 16, 1346651256, a3, a2);
  *(_DWORD *)(v8 + 1420) &= ~0x2000000u;
  FdoExt(*(_QWORD *)(a1 + 8));
  v11 = *(_DWORD *)(FdoExt(*(_QWORD *)(a1 + 8)) + 4172);
  if ( v11 == 201 )
  {
    v14 = *(_DWORD *)(PdoExt(a2) + 1128);
    if ( v14 == 1 )
    {
      UsbhSetPdoPowerState(a1, a2, v13, 4, 4);
      v15 = v10 == 4;
      v16 = FdoExt(v7);
      FdoExt(*(_QWORD *)(a1 + 8));
      *(_DWORD *)(a1 + 32) = 1734964085;
      v17 = *(_BYTE *)(v16 + 5064);
      *(_QWORD *)(v16 + 1344) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 5056), v17);
      UsbhPdoAbortAllDevicePipes(v7, a2);
      if ( !*(_DWORD *)(v8 + 2800) || (v21 & 0xF000) != 0x5000 )
      {
        LOBYTE(v18) = v15;
        UsbhSyncSuspendPdoPort(a1, a2, v18);
      }
      *(_DWORD *)(v8 + 2384) = v23 != 4;
LABEL_6:
      UsbhSetPdoIdleReady(v7, a2, a3);
      v19 = 0;
      if ( !v15 )
        return v19;
      goto LABEL_7;
    }
    if ( v14 > 1 )
    {
      if ( v14 <= 3 )
        goto LABEL_28;
      if ( v14 <= 5 )
      {
        v15 = v10 == 4;
        *(_DWORD *)(v8 + 2384) = v10 != 4;
        UsbhSetPdoPowerState(a1, a2, v13, v14, 4);
        UsbhReleaseFdoPwrLock(v7, a1);
        goto LABEL_6;
      }
      if ( v14 == 6 )
LABEL_28:
        UsbhSetPdoPowerState(a1, a2, v13, v14, 5);
    }
    UsbhReleaseFdoPwrLock(v7, a1);
    v19 = -1073741101;
LABEL_7:
    UsbhCompletePdoWakeIrp(v7, *(_QWORD *)(v8 + 840), 3221226195LL);
    if ( (*(_DWORD *)(v8 + 1420) & 0x100000) == 0 )
      UsbhCompletePdoIdleIrp(v7, *(_QWORD *)(v8 + 840), 3221226195LL);
    return v19;
  }
  if ( v11 <= 201 )
    goto LABEL_23;
  if ( v11 <= 206 )
    goto LABEL_15;
  if ( v11 <= 208 )
  {
LABEL_23:
    UsbhReleaseFdoPwrLock(v7, a1);
    return (unsigned int)-1073741823;
  }
  if ( v11 > 211 )
  {
    if ( v11 == 212 )
    {
LABEL_15:
      v19 = -1073741101;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          19,
          (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
          *(_WORD *)(v8 + 1428));
      UsbhSetPdoPowerState(a1, a2, v12, 4, 5);
      UsbhReleaseFdoPwrLock(v7, a1);
      return v19;
    }
    goto LABEL_23;
  }
  UsbhSetPdoPowerState(a1, a2, v12, 5, 4);
  Log(v7, 16, 1349862520, a3, a2);
  UsbhReleaseFdoPwrLock(v7, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *(_WORD *)(v8 + 1428));
  return 0;
}
