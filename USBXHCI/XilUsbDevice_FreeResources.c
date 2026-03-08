/*
 * XREFs of XilUsbDevice_FreeResources @ 0x1C004814C
 * Callers:
 *     XilUsbDevice_Create @ 0x1C001BB24 (XilUsbDevice_Create.c)
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0048CB0 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     XilCoreUsbDevice_FreeResources @ 0x1C0052FC4 (XilCoreUsbDevice_FreeResources.c)
 */

void __fastcall XilUsbDevice_FreeResources(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = a1 + 8;
  if ( !*(_BYTE *)(a1 + 49) )
    v2 = a1;
  XilCoreUsbDevice_FreeResources(v2);
  v3 = *(void **)(a1 + 72);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x49434858u);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v4 = *(void **)(a1 + 88);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x49434858u);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
}
