/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0206B8C
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1C0174BF0 (NtRIMAreSiblingDevices.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0174E60 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMSetTestModeStatus @ 0x1C0175650 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionIsUsermodeRIMAccessAllowed()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C0296368 && (int)qword_1C0296368() >= 0 && qword_1C0296370 )
    return (unsigned int)qword_1C0296370();
  return v0;
}
