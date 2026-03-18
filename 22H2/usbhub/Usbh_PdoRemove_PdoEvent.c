/*
 * XREFs of Usbh_PdoRemove_PdoEvent @ 0x1C003BADC
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0057150 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FE00 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036FD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhDisablePort @ 0x1C0038040 (UsbhDisablePort.c)
 *     UsbhFindListPdo @ 0x1C00380F4 (UsbhFindListPdo.c)
 *     UsbhSetPdo_FailIo @ 0x1C0039F80 (UsbhSetPdo_FailIo.c)
 *     UsbhDeletePdo @ 0x1C0054E1C (UsbhDeletePdo.c)
 *     UsbhDeleteUxdSettings @ 0x1C005AA30 (UsbhDeleteUxdSettings.c)
 */

void __fastcall Usbh_PdoRemove_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 PortData; // r15
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  _DWORD *v11; // rax
  _DWORD *v12; // rsi
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rbx
  _DWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  int v20; // eax

  PortData = 0LL;
  Log(a1, 2, 1884441942, 0LL, a3);
  UsbhAcquirePdoStateLock(v7, a3, 6);
  v8 = PdoExt(a2)[281];
  if ( !a1 )
  {
    v9 = v8;
    v10 = 0LL;
LABEL_12:
    UsbhDeletePdo(v10, a2, v9);
    return;
  }
  v11 = PdoExt(a2);
  v12 = v11;
  v13 = v8 - 3;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        v15 = *((_QWORD *)v11 + 148);
        v16 = FdoExt(v15);
        if ( UsbhFindListPdo(v15, a2, (_QWORD *)v16 + 605) )
        {
          v17 = v12 + 330;
          v18 = *((_QWORD *)v12 + 165);
          if ( *(_DWORD **)(v18 + 8) != v12 + 330 || (v19 = (_QWORD *)*((_QWORD *)v12 + 166), (_QWORD *)*v19 != v17) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v17 = 0LL;
          *((_QWORD *)v12 + 166) = 0LL;
        }
        v9 = 5LL;
        v10 = a1;
        goto LABEL_12;
      }
    }
    else
    {
      SET_PDO_HWPNPSTATE(a2, 4, 6);
    }
    *(_DWORD *)(a3 + 136) = 0;
    qword_1C006C500 = 0LL;
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
    return;
  }
  if ( (v11[358] & 0x2000) != 0 )
    PortData = UsbhGetPortData(a1, *((_WORD *)v11 + 714));
  SET_PDO_HWPNPSTATE(a2, 3, 6);
  *(_DWORD *)(a3 + 136) = 0;
  qword_1C006C500 = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
  UsbhDeleteUxdSettings(a1, a2, 1LL);
  if ( PortData )
  {
    UsbhSetPdo_FailIo(a2);
    KeWaitForSingleObject(v12 + 724, Executive, 0, 0, 0LL);
    v20 = v12[355];
    if ( (v20 & 0x8000000) == 0 )
    {
      v12[355] = v20 | 0x8000000;
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, *((_WORD *)v12 + 714), 1, 0);
    }
    KeSetEvent((PRKEVENT)(v12 + 724), 0, 0);
  }
}
