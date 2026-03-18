/*
 * XREFs of EndPointerDeviceContacts @ 0x1C013B7F4
 * Callers:
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C003C978 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00A467C (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x1C013B78C (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 */

void __noreturn EndPointerDeviceContacts()
{
  ResetPointerDevices(0LL);
}
