/*
 * XREFs of ?AddRef@CLegacySwapChain@@$4PPPPPPPM@BCA@EAAKXZ @ 0x1800F6C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - *(int *)(a1 - 4) - 288));
}
