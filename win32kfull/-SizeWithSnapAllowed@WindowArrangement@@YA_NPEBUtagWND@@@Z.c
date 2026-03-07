bool __fastcall WindowArrangement::SizeWithSnapAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl

  v2 = 0;
  if ( (dword_1C035C1FC & 4) != 0 )
    return WindowArrangement::IsSupported(this, a2) != 0;
  return v2;
}
