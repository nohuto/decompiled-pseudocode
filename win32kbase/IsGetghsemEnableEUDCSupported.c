/*
 * XREFs of IsGetghsemEnableEUDCSupported @ 0x1C001749C
 * Callers:
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00174C8 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0017570 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetghsemEnableEUDCSupported()
{
  if ( qword_1C02D5970 )
    return qword_1C02D5970();
  else
    return 3221225659LL;
}
