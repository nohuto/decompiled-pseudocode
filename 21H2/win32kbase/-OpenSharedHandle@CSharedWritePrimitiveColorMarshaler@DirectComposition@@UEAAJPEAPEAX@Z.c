/*
 * XREFs of ?OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0239A30
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0058820 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

NTSTATUS __fastcall DirectComposition::CSharedWritePrimitiveColorMarshaler::OpenSharedHandle(
        DirectComposition::CSharedWritePrimitiveColorMarshaler *this,
        void **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    return CompositionObject::CreateHandle((CompositionObject *)(v2 - 24), 1u, 0, 1, a2);
  else
    return -1073741790;
}
