/*
 * XREFs of XilDeviceSlot_ReleaseHardware @ 0x1C00384F4
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0079480 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     XilDeviceSlot_FreeSecureResources @ 0x1C00380A4 (XilDeviceSlot_FreeSecureResources.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0052EE4 (XilCoreDeviceSlot_FreeResources.c)
 */

void __fastcall XilDeviceSlot_ReleaseHardware(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  __int64 *v3; // rcx
  void *v4; // rcx

  v1 = a1 + 16;
  v2 = *(_BYTE *)(a1 + 80) == 0;
  v3 = (__int64 *)(a1 + 16);
  if ( v2 )
  {
    XilCoreDeviceSlot_FreeResources(v3);
  }
  else
  {
    XilDeviceSlot_FreeSecureResources(v3);
    v4 = *(void **)(v1 + 8);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x49434858u);
      *(_QWORD *)(v1 + 8) = 0LL;
    }
  }
}
