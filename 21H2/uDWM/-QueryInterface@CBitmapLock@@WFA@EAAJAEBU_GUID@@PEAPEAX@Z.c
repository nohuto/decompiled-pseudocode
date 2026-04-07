/*
 * XREFs of ?QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCompoundBitmapLock::QueryInterface((CCompoundBitmapLock *)(a1 - 80), a2, a3);
}
