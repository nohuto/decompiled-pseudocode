/*
 * XREFs of UsbhEtwGetActivityId @ 0x1C005B53C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhEtwGetActivityId(__int64 a1, __int64 a2)
{
  if ( a1 && g_IoGetActivityIdIrp )
    return g_IoGetActivityIdIrp(a1, a2);
  else
    return 3221225473LL;
}
