NTSTATUS __fastcall DxgkCompositionObject::AddRef(DxgkCompositionObject *this)
{
  return ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
}
