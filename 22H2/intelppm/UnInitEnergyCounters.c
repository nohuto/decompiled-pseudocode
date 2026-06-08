/*
 * XREFs of UnInitEnergyCounters @ 0x1C002BE20
 * Callers:
 *     <none>
 * Callees:
 *     DeactivateFixedFunctionCounters @ 0x1C00065EC (DeactivateFixedFunctionCounters.c)
 */

_DWORD *UnInitEnergyCounters()
{
  _DWORD *result; // rax

  result = (_DWORD *)LODWORD(WPP_MAIN_CB.Dpc.DeferredContext);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 )
    return DeactivateFixedFunctionCounters();
  return result;
}
