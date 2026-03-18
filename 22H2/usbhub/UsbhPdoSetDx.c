/*
 * XREFs of UsbhPdoSetDx @ 0x1C0018BE0
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhSetPdoIdleReady @ 0x1C0012EFC (UsbhSetPdoIdleReady.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0014C0C (UsbhSyncSuspendPdoPort.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C001507C (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0016EC0 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSetPdoPowerState @ 0x1C0017660 (UsbhSetPdoPowerState.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0018364 (UsbhReleaseFdoPwrLock.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0018D98 (UsbhCompletePdoIdleIrp.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoSetDx(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rbp
  _DWORD *v8; // r15
  __int64 v9; // r8
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // r9d
  char v15; // r13
  _DWORD *v16; // rbx
  KIRQL v17; // dl
  unsigned int v18; // ebx
  int v20; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+88h] [rbp+20h]

  v6 = PdoExt(a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  FdoExt(v7);
  v9 = *(_QWORD *)(a3 + 184);
  v10 = *(_DWORD *)(v9 + 24);
  v22 = v10;
  v20 = *(_DWORD *)(v9 + 8);
  FdoExt(*(_QWORD *)(a1 + 8));
  Log(v7, 16, 1346651256, a3, a2);
  v8[355] &= ~0x2000000u;
  FdoExt(*(_QWORD *)(a1 + 8));
  v11 = FdoExt(*(_QWORD *)(a1 + 8))[1043];
  if ( v11 == 201 )
  {
    v14 = PdoExt(a2)[282];
    if ( v14 == 1 )
    {
      UsbhSetPdoPowerState(a1, a2, v13, 4, 4);
      v15 = v10 == 4;
      v16 = FdoExt(v7);
      FdoExt(*(_QWORD *)(a1 + 8));
      *(_DWORD *)(a1 + 32) = 1734964085;
      v17 = *((_BYTE *)v16 + 5064);
      *((_QWORD *)v16 + 168) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)v16 + 632, v17);
      UsbhPdoAbortAllDevicePipes(v7, a2);
      if ( !v8[700] || (v20 & 0xF000) != 0x5000 )
        UsbhSyncSuspendPdoPort(a1, a2, v15);
      v8[596] = v22 != 4;
LABEL_6:
      UsbhSetPdoIdleReady(v7, a2, a3);
      v18 = 0;
      if ( !v15 )
        return v18;
      goto LABEL_7;
    }
    if ( v14 > 1 )
    {
      if ( v14 <= 3 )
        goto LABEL_28;
      if ( v14 <= 5 )
      {
        v15 = v10 == 4;
        v8[596] = v10 != 4;
        UsbhSetPdoPowerState(a1, a2, v13, v14, 4);
        UsbhReleaseFdoPwrLock(v7, a1);
        goto LABEL_6;
      }
      if ( v14 == 6 )
LABEL_28:
        UsbhSetPdoPowerState(a1, a2, v13, v14, 5);
    }
    UsbhReleaseFdoPwrLock(v7, a1);
    v18 = -1073741101;
LABEL_7:
    UsbhCompletePdoWakeIrp(v7, *((_QWORD *)v8 + 105), -1073741101);
    if ( (v8[355] & 0x100000) == 0 )
      UsbhCompletePdoIdleIrp(v7, *((_QWORD *)v8 + 105), 3221226195LL);
    return v18;
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
      UsbhReleaseFdoPwrLock(v7, a1);
      return v18;
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
      *((_WORD *)v8 + 714));
  return 0;
}
