/*
 * XREFs of EndPointerDeviceContacts @ 0x1C012E2F8
 * Callers:
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C0078E18 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00DB6BC (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x1C012E290 (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 */

void __noreturn EndPointerDeviceContacts()
{
  ResetPointerDevices(0LL);
}
