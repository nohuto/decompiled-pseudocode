/*
 * XREFs of __report_rangecheckfailure @ 0x1C00DA4C0
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x1C01902C4 (GetMonitorCapabilityFromInf.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
