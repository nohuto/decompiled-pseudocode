struct D2D_SIZE_U __fastcall CSecondarySysmemBitmap::GetSize(CSecondarySysmemBitmap *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 15);
  return (struct D2D_SIZE_U)a2;
}
