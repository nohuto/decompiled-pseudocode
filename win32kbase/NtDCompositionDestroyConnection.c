/*
 * XREFs of NtDCompositionDestroyConnection @ 0x1C02481D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C009AE28 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyConnection(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  return DirectComposition::CConnection::DestroyHandle(a1);
}
