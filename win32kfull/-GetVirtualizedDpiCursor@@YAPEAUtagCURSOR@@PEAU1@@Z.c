struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int DpiForSystem; // eax
  CCursorSizes *v6; // rcx
  int SizeForDpi; // eax
  struct tagCURSOR *DPICursor; // rax

  v1 = a1;
  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    DpiForSystem = GetDpiForSystem(v3, v2);
    SizeForDpi = CCursorSizes::GetSizeForDpi(v6, DpiForSystem);
    DPICursor = FindDPICursor(v1, SizeForDpi);
    if ( DPICursor )
      return DPICursor;
  }
  return v1;
}
