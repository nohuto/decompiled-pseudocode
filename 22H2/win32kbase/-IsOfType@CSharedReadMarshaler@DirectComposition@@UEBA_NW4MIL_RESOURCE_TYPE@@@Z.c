/*
 * XREFs of ?IsOfType@CSharedReadMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00A9420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSharedReadMarshaler::IsOfType(__int64 a1, int a2)
{
  return a2 == *(_DWORD *)(a1 + 64);
}
