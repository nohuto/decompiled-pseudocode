/*
 * XREFs of ?QueryInterface@CBitmapLock@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18027EC80
 * Callers:
 *     ?QueryInterface@CBitmapLock@@$4PPPPPPPM@IA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A830 (-QueryInterface@CBitmapLock@@$4PPPPPPPM@IA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A870 (-QueryInterface@CBitmapLock@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::QueryInterface(CBitmapLock *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapLock>::InternalQueryInterface((_QWORD *)this - 3, a2, (__int64 *)a3);
}
