/*
 * XREFs of DeviceSlot_Initialize @ 0x1C0014888
 * Callers:
 *     DeviceSlot_D0Entry @ 0x1C001482C (DeviceSlot_D0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0037BD0 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C001498C (XilCoreDeviceSlot_Initialize.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0038228 (XilDeviceSlot_InitializeSecureResources.c)
 */

__int64 __fastcall DeviceSlot_Initialize(__int64 a1)
{
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 3221225666LL;
  if ( *(_BYTE *)(a1 + 80) )
    return XilDeviceSlot_InitializeSecureResources();
  return XilCoreDeviceSlot_Initialize();
}
