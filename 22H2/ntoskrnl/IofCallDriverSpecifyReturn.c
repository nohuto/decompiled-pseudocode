/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x140370BC0
 * Callers:
 *     PopRequestPowerIrp @ 0x140370580 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x1409D3870 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x140370BE4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140507C40 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C4CC4 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(struct _DMA_ADAPTER *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
