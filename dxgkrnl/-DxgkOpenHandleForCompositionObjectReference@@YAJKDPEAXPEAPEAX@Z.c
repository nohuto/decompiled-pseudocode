NTSTATUS __fastcall DxgkOpenHandleForCompositionObjectReference(
        ACCESS_MASK DesiredAccess,
        KPROCESSOR_MODE AccessMode,
        void *a3,
        void **Handle)
{
  return ObOpenObjectByPointer(a3, 0x40u, 0LL, DesiredAccess, g_pDxgkCompositionObjectType, AccessMode, Handle);
}
