/*
 * XREFs of ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011EA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 472), a2, a3);
}
