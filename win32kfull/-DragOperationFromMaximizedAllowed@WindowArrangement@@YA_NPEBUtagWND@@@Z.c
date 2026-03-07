bool __fastcall WindowArrangement::DragOperationFromMaximizedAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl

  v2 = 0;
  if ( (dword_1C035C1FC & 2) != 0 )
    return WindowArrangement::IsSupported(this, a2);
  return v2;
}
