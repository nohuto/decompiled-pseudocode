/*
 * XREFs of RtlGetDefaultCodePage @ 0x1406E9F80
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetDefaultCodePage()
{
  _WORD *CurrentServerSiloGlobals; // rax
  _WORD *v1; // r9
  __int64 result; // rax
  _WORD *v3; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  *v1 = CurrentServerSiloGlobals[532];
  result = (unsigned __int16)CurrentServerSiloGlobals[564];
  *v3 = result;
  return result;
}
