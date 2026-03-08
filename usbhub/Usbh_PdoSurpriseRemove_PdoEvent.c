/*
 * XREFs of Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003B488
 * Callers:
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056AC0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     UsbhSetPdoPowerState @ 0x1C0003960 (UsbhSetPdoPowerState.c)
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C001A1D0 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C001AB8C (UsbhAcquireFdoPwrLock.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C001BEDC (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0031CB0 (UsbhAcquirePdoStateLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0034CA4 (UsbhPCE_SoftDisconnect.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036750 (SET_PDO_HWPNPSTATE.c)
 *     UsbhFindListPdo @ 0x1C0037880 (UsbhFindListPdo.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C003A2F8 (UsbhSyncResumeDeviceInternal.c)
 */

void __fastcall Usbh_PdoSurpriseRemove_PdoEvent(__int64 a1, struct _DEVICE_OBJECT *a2, KSPIN_LOCK a3)
{
  _DWORD *v6; // rbp
  _DWORD *v7; // r13
  int v8; // r9d
  int v9; // r12d
  __int64 v10; // rcx
  _DWORD *v11; // rax
  int v12; // ecx
  __int64 v13; // rbx
  _DWORD *v14; // rax
  _QWORD *v15; // rbp
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  _DWORD *v18; // rax
  __int64 v19; // rbx
  _DWORD *v20; // rax
  __int64 v21; // rbx
  _DWORD *v22; // rax
  int v23; // edx
  int v24; // r8d
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 PortData; // rax
  struct _KEVENT *v32; // rbx

  v6 = PdoExt((__int64)a2);
  v7 = FdoExt(a1);
  Log(a1, 2, 1884509473, 0LL, a3);
  v9 = v8 + 1;
  UsbhAcquirePdoStateLock(v10, a3, v8 + 1);
  v11 = PdoExt((__int64)a2);
  if ( v11[281] != 3 )
  {
    v12 = v11[281] - 3 - v9;
    if ( v12 )
    {
      if ( v12 != v9 )
        goto LABEL_4;
      SET_PDO_HWPNPSTATE((__int64)a2, 5, v9);
      v13 = *((_QWORD *)v6 + 148);
      v14 = FdoExt(v13);
      if ( UsbhFindListPdo(v13, (__int64)a2, (_QWORD *)v14 + 605) )
        goto LABEL_4;
      v15 = v6 + 330;
      v16 = (_QWORD *)*((_QWORD *)v7 + 606);
      if ( (_DWORD *)*v16 == v7 + 1210 )
      {
        *v15 = v7 + 1210;
        v15[1] = v16;
        *v16 = v15;
        *((_QWORD *)v7 + 606) = v15;
LABEL_4:
        *(_DWORD *)(a3 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        return;
      }
LABEL_17:
      __fastfail(3u);
    }
    Log(a1, 4, 1936879666, (__int64)a2, 4LL);
    v17 = *((_QWORD *)v6 + 148);
    v18 = FdoExt(v17);
    if ( UsbhFindListPdo(v17, (__int64)a2, (_QWORD *)v18 + 601)
      || (v19 = *((_QWORD *)v6 + 148), v20 = FdoExt(v19), UsbhFindListPdo(v19, (__int64)a2, (_QWORD *)v20 + 603)) )
    {
      v21 = *((_QWORD *)v6 + 148);
      v22 = FdoExt(v21);
      if ( UsbhFindListPdo(v21, (__int64)a2, (_QWORD *)v22 + 603) )
      {
        v23 = 4;
        v24 = 18;
LABEL_16:
        SET_PDO_HWPNPSTATE((__int64)a2, v23, v24);
        *(_DWORD *)(a3 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        UsbhUnlinkPdoDeviceHandle(a1, (__int64)a2, 2017740850, v9);
        Log(a1, 4, 1682457650, (__int64)a2, 0LL);
        return;
      }
      v25 = v6 + 330;
      v26 = *((_QWORD *)v6 + 165);
      if ( *(_DWORD **)(v26 + 8) != v6 + 330 )
        goto LABEL_17;
      v27 = (_QWORD *)*((_QWORD *)v6 + 166);
      if ( (_QWORD *)*v27 != v25 )
        goto LABEL_17;
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      *v25 = 0LL;
      *((_QWORD *)v6 + 166) = 0LL;
    }
    v24 = v9;
    v23 = 5;
    goto LABEL_16;
  }
  *(_DWORD *)(a3 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
  if ( PdoExt((__int64)a2)[197] != v9 )
  {
    v28 = (_QWORD *)UsbhIncHubBusy(a1, a3, (__int64)a2, 1381200755, v9);
    UsbhSyncResumeDeviceInternal(*((_QWORD *)v6 + 148), a3, a2);
    UsbhDecHubBusy(a1, v29, v28);
    UsbhAcquireFdoPwrLock(a1, a3, 136, 1835356755);
    UsbhSetPdoPowerState(a3, (__int64)a2, v30, v9, 14);
    UsbhReleaseFdoPwrLock(a1, a3);
  }
  UsbhPdoAbortAllDevicePipes(a1, (__int64)a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v6 + 714));
  if ( PortData )
  {
    v32 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_SoftDisconnect(a1, *((_WORD *)v6 + 714), a3);
    KeSetEvent(v32, 0, 0);
  }
}
