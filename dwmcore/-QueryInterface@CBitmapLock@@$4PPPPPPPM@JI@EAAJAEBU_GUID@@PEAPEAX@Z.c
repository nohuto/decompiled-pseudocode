/*
 * XREFs of ?QueryInterface@CBitmapLock@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CBitmapLock::QueryInterface((CBitmapLock *)(a1 - *(int *)(a1 - 4) - 152), a2, a3);
}
