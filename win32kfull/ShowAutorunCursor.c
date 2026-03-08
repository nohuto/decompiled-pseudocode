/*
 * XREFs of ShowAutorunCursor @ 0x1C01AA2E0
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01B2F60 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C00793E0 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(unsigned int a1)
{
  __int64 v2; // rcx

  EnterCrit(1LL, 0LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (__int64)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v2);
}
