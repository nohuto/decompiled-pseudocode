/*
 * XREFs of EngExpandStackAndCallout @ 0x1C0196D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall EngExpandStackAndCallout(EXPAND_STACK_CALLOUT *a1, void *a2, SIZE_T a3)
{
  return KeExpandKernelStackAndCallout(a1, a2, a3) == 0;
}
