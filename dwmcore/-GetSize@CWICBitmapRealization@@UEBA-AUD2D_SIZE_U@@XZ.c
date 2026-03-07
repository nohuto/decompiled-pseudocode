struct D2D_SIZE_U __fastcall CWICBitmapRealization::GetSize(CWICBitmapRealization *this, _DWORD *a2)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this - 7);
  if ( v2 )
  {
    (**v2)(v2);
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
  }
  return (struct D2D_SIZE_U)a2;
}
