__int64 __fastcall VisWindow(struct tagWND *a1)
{
  int v1; // eax
  int v2; // r8d
  unsigned int v3; // ecx

  v1 = IsTopLevelWindow(a1);
  v3 = 0;
  if ( v1 )
    return (v2 & 0x30000000) == 0x10000000;
  return v3;
}
