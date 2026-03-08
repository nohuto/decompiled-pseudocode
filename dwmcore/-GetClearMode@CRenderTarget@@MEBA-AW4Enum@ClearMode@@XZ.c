/*
 * XREFs of ?GetClearMode@CRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x18012A350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::GetClearMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 140) != 0 ? 2 : 0;
}
