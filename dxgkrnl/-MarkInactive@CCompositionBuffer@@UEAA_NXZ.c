bool __fastcall CCompositionBuffer::MarkInactive(CCompositionBuffer *this)
{
  bool result; // al

  result = *((_BYTE *)this + 40);
  *((_BYTE *)this + 40) = 0;
  return result;
}
