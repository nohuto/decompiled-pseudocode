/*
 * XREFs of _call_matherr @ 0x1403D7D60
 * Callers:
 *     _handle_error @ 0x1403D7EA0 (_handle_error.c)
 *     _handle_errorf @ 0x1403D7FDC (_handle_errorf.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _ctrlfp @ 0x1403D872C (_ctrlfp.c)
 */

double __fastcall call_matherr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)PdcCreateWatchdogAroundClientCall() )
    xHalTimerWatchdogStop();
  return a6;
}
