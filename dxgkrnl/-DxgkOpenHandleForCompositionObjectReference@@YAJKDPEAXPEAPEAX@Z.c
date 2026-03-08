/*
 * XREFs of ?DxgkOpenHandleForCompositionObjectReference@@YAJKDPEAXPEAPEAX@Z @ 0x1C006CAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkOpenHandleForCompositionObjectReference(
        ACCESS_MASK DesiredAccess,
        KPROCESSOR_MODE AccessMode,
        void *a3,
        void **Handle)
{
  return ObOpenObjectByPointer(a3, 0x40u, 0LL, DesiredAccess, g_pDxgkCompositionObjectType, AccessMode, Handle);
}
