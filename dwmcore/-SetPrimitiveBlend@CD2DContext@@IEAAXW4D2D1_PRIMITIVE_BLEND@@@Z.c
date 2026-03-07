void __fastcall CD2DContext::SetPrimitiveBlend(CD2DContext *this, enum D2D1_PRIMITIVE_BLEND a2)
{
  if ( a2 != *((_DWORD *)this + 99) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 624LL))(*((_QWORD *)this + 25));
    *((_DWORD *)this + 99) = a2;
  }
}
