/*
 * XREFs of UsbhBusIf_ResumeChildHub @ 0x1C0002DF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0002650 (UsbhUnlatchPdo.c)
 *     UsbhClearPdoIdleReady @ 0x1C0004AC0 (UsbhClearPdoIdleReady.c)
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0005CA0 (UsbhSshSetPortsBusyState.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C000F240 (UsbhLatchPdo.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     UsbhSshPropagateResume @ 0x1C001E15C (UsbhSshPropagateResume.c)
 *     UsbhSyncResumePort @ 0x1C0039A30 (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhBusIf_ResumeChildHub(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rbp
  __int64 v14; // rax

  v2 = PdoExt(a1);
  v3 = *(_QWORD *)(v2 + 1184);
  v4 = FdoExt(v3);
  if ( (*(_DWORD *)(v2 + 1420) & 4) != 0 )
  {
    v5 = FdoExt(v3);
    v6 = v5 + 1912;
    v7 = UsbhIncHubBusy(v3, (int)v5 + 1912, v3, 1129476712, 0);
    v8 = Usbh_SSH_Event(v3, 5LL, v6);
    if ( (v8 & 0xC0000000) == 0xC0000000 )
    {
      v9 = FdoExt(v3);
      Usbh_SSH_Event(v3, 6LL, v9 + 1912);
    }
    if ( v8 >= 0 || *(_BYTE *)(v4 + 3416) )
    {
      v13 = UsbhLatchPdo(v3, *(unsigned __int16 *)(v2 + 1428), 0LL, 1213425986LL);
      if ( !v13 )
      {
        v8 = -1073741661;
        goto LABEL_7;
      }
      FdoExt(v3);
      if ( (int)UsbhSyncResumePort(v3) >= 0 )
        UsbhSshSetPortsBusyState(v3, *(unsigned __int16 *)(v2 + 1428), 2LL);
      v14 = FdoExt(v3);
      v8 = UsbhSshPropagateResume(v3, v14 + 1912, v13);
      UsbhUnlatchPdo(v3, v13, 0LL, 0x48536942u);
    }
    v10 = FdoExt(v3);
    UsbhClearPdoIdleReady(v3, a1, v10 + 1912);
LABEL_7:
    UsbhDecHubBusy(v3, v11, v7);
    return (unsigned int)v8;
  }
  return 3221225473LL;
}
