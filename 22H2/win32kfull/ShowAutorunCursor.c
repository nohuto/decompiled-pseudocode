/*
 * XREFs of ShowAutorunCursor @ 0x1C01A90E0
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01B1DA0 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C003CE70 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(1LL, 0LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (int)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
}
