/*
 * XREFs of UsbhUnlinkPdoDeviceHandle @ 0x1C0018990
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhInitializeDevice @ 0x1C001C46C (UsbhInitializeDevice.c)
 *     UsbhDeregisterPdo @ 0x1C0037DEC (UsbhDeregisterPdo.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003B290 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003BD38 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPortDisconnect @ 0x1C004E1B0 (UsbhPortDisconnect.c)
 *     UsbhReset2Timeout @ 0x1C004F200 (UsbhReset2Timeout.c)
 *     UsbhDeletePdo @ 0x1C0054E1C (UsbhDeletePdo.c)
 *     UsbhPdoPnp_StopDevice @ 0x1C00577B0 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1C003BA9C (Usbh_HubRemoveUsbDevice.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C004CCA8 (UsbhBusIf_SetClearRootPortResumeTime.c)
 */

void __fastcall UsbhUnlinkPdoDeviceHandle(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rbp
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r13
  _DWORD *v11; // rdi
  int v12; // r10d
  int v13; // r10d
  int v14; // eax
  _DWORD *v15; // rax

  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = PdoExt(a2);
  Log(a1, 256, 1970032708, 0LL, 0LL);
  Log(a1, v12, a3, a2, 0LL);
  v14 = v11[288];
  if ( v14 >= 0 )
  {
    if ( v14 <= 1 )
    {
      Log(a1, v13, 1970032689, 0LL, (int)v11[288]);
    }
    else if ( v14 == 2 )
    {
      if ( (v11[355] & 0x20000000) != 0 )
      {
        UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v11 + 145), 0LL, 0LL);
        v11[355] &= ~0x20000000u;
        v13 = 256;
      }
      v8 = *((_QWORD *)v11 + 145);
      *((_QWORD *)v11 + 145) = 0xFEFEFEFEFEFEFEFEuLL;
      v11[288] = 1;
      Log(a1, v13, 1970032690, 0LL, v8);
      v15 = FdoExt(a1);
      if ( *((_QWORD *)v15 + 559) )
        (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v15 + 559))(
          *((_QWORD *)v15 + 529),
          v8,
          a2,
          1212441712LL);
    }
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( a4 )
      Usbh_HubRemoveUsbDevice(a1, v8);
  }
}
