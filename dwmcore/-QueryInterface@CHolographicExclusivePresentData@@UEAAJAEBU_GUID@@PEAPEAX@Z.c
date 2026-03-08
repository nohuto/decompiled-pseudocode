/*
 * XREFs of ?QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ABCC0
 * Callers:
 *     ?QueryInterface@CHolographicExclusivePresentData@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D890 (-QueryInterface@CHolographicExclusivePresentData@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::QueryInterface(
        CHolographicExclusivePresentData *this,
        struct _GUID *a2,
        void **a3)
{
  return CMILCOMBaseT<IUnknown>::InternalQueryInterface((__int64)this + 8, a2, a3);
}
