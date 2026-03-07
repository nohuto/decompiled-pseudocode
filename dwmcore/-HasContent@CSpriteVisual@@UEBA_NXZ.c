char __fastcall CSpriteVisual::HasContent(CSpriteVisual *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 32) || (**((_DWORD **)this + 29) & 0x10000) != 0 )
    return 1;
  return v1;
}
