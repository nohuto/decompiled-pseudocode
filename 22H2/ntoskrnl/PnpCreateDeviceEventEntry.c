/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14071B5A8
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036F458 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140370FDC (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037DFC8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpInsertNoopEvent @ 0x1405CEEA0 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14071A048 (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x140745E0C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x140747488 (PnpSetPlugPlayEvent.c)
 *     PnpShutdownDevices @ 0x14089B99C (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1408ABE84 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408ABEF4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1408AC000 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408AC09C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408AC154 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PnpCreateDeviceEventEntry(size_t Size)
{
  unsigned int v1; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  v1 = Size;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B706E50u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v1);
    v3[16] = 1;
  }
  return v3;
}
