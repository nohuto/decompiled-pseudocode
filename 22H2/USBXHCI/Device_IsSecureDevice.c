/*
 * XREFs of Device_IsSecureDevice @ 0x1C001A4C8
 * Callers:
 *     Controller_CreateWdfDevice @ 0x1C006EFFC (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FAA0 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_Create @ 0x1C0071304 (Controller_Create.c)
 * Callees:
 *     <none>
 */

bool __fastcall Device_IsSecureDevice(__int64 a1)
{
  return (*(_DWORD *)(a1 + 28) & 0x100000) != 0;
}
