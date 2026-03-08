/*
 * XREFs of ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00174C8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     IsGetghsemEnableEUDCSupported @ 0x1C001749C (IsGetghsemEnableEUDCSupported.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void DrvAcquireChangeDisplaySettingLocks(void)
{
  int v0; // eax
  HSEMAPHORE v1; // rcx
  HSEMAPHORE *v2; // rbx

  v0 = IsGetghsemEnableEUDCSupported();
  v1 = 0LL;
  if ( v0 >= 0 )
  {
    if ( qword_1C02D5978 )
      v1 = (HSEMAPHORE)qword_1C02D5978(0LL);
    EngAcquireSemaphore(v1);
  }
  v2 = *(HSEMAPHORE **)(SGDGetSessionState(v1) + 24);
  EngAcquireSemaphore(v2[10]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", v2[10], 1LL);
  EngAcquireSemaphore(v2[15]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", v2[15], 2LL);
  EngAcquireSemaphore(v2[11]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", v2[11], 3LL);
}
