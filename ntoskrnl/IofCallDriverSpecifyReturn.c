/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x1402B91D0
 * Callers:
 *     PopRequestPowerIrp @ 0x1402BA570 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140ACCBF0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1402B903C (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14045728A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140ABE1D0 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1, ULONG_PTR a2)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver((__int64)a1, a2);
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
