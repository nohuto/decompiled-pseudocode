/*
 * XREFs of ShowAutorunCursor @ 0x1C01CFBC0
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01D87F0 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C0078D60 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(unsigned int a1)
{
  __int64 v2; // rcx

  EnterCrit(1LL, 0LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (__int64)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v2);
}
