/*
 * XREFs of ?CLEANUP_CRIT_RESOURCE@@YAXAEAT_USERCRIT_TYPE@@@Z @ 0x1C008E3E4
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C008D904 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008DC04 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     InitCreateUserCrit @ 0x1C031F55C (InitCreateUserCrit.c)
 * Callees:
 *     <none>
 */

void __fastcall CLEANUP_CRIT_RESOURCE(PERESOURCE *a1)
{
  ExDeleteResourceLite(*a1);
  ExFreePoolWithTag(*a1, 0);
  *a1 = 0LL;
}
