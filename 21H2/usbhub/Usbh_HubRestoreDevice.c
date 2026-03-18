/*
 * XREFs of Usbh_HubRestoreDevice @ 0x1C0001800
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     Usbh_HubGetUsbDescriptors @ 0x1C003A714 (Usbh_HubGetUsbDescriptors.c)
 */

__int64 __fastcall Usbh_HubRestoreDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  void *v8; // rbx
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+34h] [rbp-14h] BYREF

  if ( (*(_DWORD *)(PdoExt(a2) + 1432) & 0x4000) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 27LL, 1112885333LL);
    v8 = (void *)Pool2;
    if ( Pool2 )
    {
      v12 = 18;
      v11 = 9;
      Usbh_HubGetUsbDescriptors(a1, a4, Pool2, (unsigned int)&v12, Pool2 + 18, (__int64)&v11);
      ExFreePoolWithTag(v8, 0);
    }
  }
  v9 = FdoExt(a1);
  if ( *(_QWORD *)(v9 + 4288) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v9 + 4288))(*(_QWORD *)(v9 + 4232), a3, a4);
  else
    return 3221225474LL;
}
