/*
 * XREFs of ?v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180422AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1804230A4 (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 */

__int64 __fastcall CGlyphButtonElement::v_InitAccessibleObject(
        CGlyphButtonElement *this,
        struct IWeakReference *a2,
        const struct _GUID *a3,
        void **a4)
{
  return AccessibleElement_CreateInstance(a2, 11LL, 50000LL, a3, a4);
}
