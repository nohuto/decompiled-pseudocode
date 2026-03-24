/*
 * XREFs of ?AddRef@CGDIBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ @ 0x1800F8280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDIBitmapRealization::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - *(int *)(a1 - 4) - 424));
}
