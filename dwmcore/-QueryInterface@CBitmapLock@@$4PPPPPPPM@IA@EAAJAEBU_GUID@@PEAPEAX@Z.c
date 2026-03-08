/*
 * XREFs of ?QueryInterface@CBitmapLock@@$4PPPPPPPM@IA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CBitmapLock::QueryInterface((CBitmapLock *)(a1 - *(int *)(a1 - 4) - 128), a2, a3);
}
