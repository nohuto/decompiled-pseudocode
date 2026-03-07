struct D2D_SIZE_U __fastcall CSectionBitmapRealization::GetSize(CSectionBitmapRealization *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 10);
  a2[1] = *((_DWORD *)this + 11);
  return (struct D2D_SIZE_U)a2;
}
