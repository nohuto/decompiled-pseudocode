/*
 * XREFs of NtDCompositionDestroyConnection @ 0x1C0211590
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00953E0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyConnection(
        struct HDCOMPOSITIONCONNECTION__ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return DirectComposition::CConnection::DestroyHandle(a1, a2, a3, a4);
}
