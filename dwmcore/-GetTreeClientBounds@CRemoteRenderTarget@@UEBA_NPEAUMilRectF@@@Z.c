/*
 * XREFs of ?GetTreeClientBounds@CRemoteRenderTarget@@UEBA_NPEAUMilRectF@@@Z @ 0x180105500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteRenderTarget::GetTreeClientBounds(CRemoteRenderTarget *this, struct MilRectF *a2)
{
  bool result; // al

  result = 1;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 136);
  return result;
}
