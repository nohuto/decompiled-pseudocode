/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14028D040
 * Callers:
 *     PopRequestPowerIrp @ 0x14028F110 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140AD0BF0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14028CEA4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14045F22A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140AC21D0 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1, ULONG_PTR a2)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver((__int64)a1, a2);
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
