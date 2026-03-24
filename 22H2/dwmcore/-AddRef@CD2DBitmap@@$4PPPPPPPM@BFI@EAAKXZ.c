/*
 * XREFs of ?AddRef@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ @ 0x1800F5870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - *(int *)(a1 - 4) - 344));
}
