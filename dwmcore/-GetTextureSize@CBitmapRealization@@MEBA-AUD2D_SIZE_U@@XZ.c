struct D2D_SIZE_U __fastcall CBitmapRealization::GetTextureSize(CBitmapRealization *this, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = (void (__fastcall ***)(_QWORD))((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16);
  (**v3)(v3);
  return (struct D2D_SIZE_U)a2;
}
