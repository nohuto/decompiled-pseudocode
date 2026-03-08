/*
 * XREFs of ?IsOfType@CAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F7880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 2) & 0xFFFFFFF7) == 0;
}
