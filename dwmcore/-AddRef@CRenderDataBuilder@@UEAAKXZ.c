/*
 * XREFs of ?AddRef@CRenderDataBuilder@@UEAAKXZ @ 0x180106080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderDataBuilder::AddRef(CRenderDataBuilder *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 3);
}
