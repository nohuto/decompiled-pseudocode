char __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx
  CursorApiRouter *v2; // rcx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return CursorApiRouter::HidePointer(v2, v1 == 0);
}
