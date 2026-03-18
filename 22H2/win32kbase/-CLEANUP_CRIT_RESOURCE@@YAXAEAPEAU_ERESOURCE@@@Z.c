/*
 * XREFs of ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_ERESOURCE@@@Z @ 0x1C00D0CEC
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B1DA0 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     InitCreateUserCrit @ 0x1C02DD5E0 (InitCreateUserCrit.c)
 * Callees:
 *     <none>
 */

void __fastcall CLEANUP_CRIT_RESOURCE(struct _ERESOURCE **a1)
{
  ExDeleteResourceLite(*a1);
  ExFreePoolWithTag(*a1, 0);
  *a1 = 0LL;
}
