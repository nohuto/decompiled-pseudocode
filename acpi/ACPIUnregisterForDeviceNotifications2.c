/*
 * XREFs of ACPIUnregisterForDeviceNotifications2 @ 0x1C00398E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIUnregisterForDeviceNotifications @ 0x1C0039880 (ACPIUnregisterForDeviceNotifications.c)
 */

void __fastcall ACPIUnregisterForDeviceNotifications2(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 768));
}
