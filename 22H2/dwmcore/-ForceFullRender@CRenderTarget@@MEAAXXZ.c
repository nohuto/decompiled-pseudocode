/*
 * XREFs of ?ForceFullRender@CRenderTarget@@MEAAXXZ @ 0x180105A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::ForceFullRender(CRenderTarget *this)
{
  *((_BYTE *)this + 141) = 1;
}
