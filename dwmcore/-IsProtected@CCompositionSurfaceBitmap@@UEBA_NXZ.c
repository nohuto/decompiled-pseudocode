char __fastcall CCompositionSurfaceBitmap::IsProtected(CCompositionSurfaceBitmap *this)
{
  char v1; // bl
  struct IBitmapRealization *RenderingRealization; // rax

  v1 = 0;
  RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization(this);
  if ( RenderingRealization )
    return (*(__int64 (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)RenderingRealization + 24LL))(RenderingRealization);
  return v1;
}
