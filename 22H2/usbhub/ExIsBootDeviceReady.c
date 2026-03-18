/*
 * XREFs of ExIsBootDeviceReady @ 0x1C005CEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExIsBootDeviceReady(__int64 a1, __int64 (*a2)(void))
{
  return a2();
}
