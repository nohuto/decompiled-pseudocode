bool __fastcall DirectComposition::CMatrixTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CMatrixTransform3DMarshaler *this)
{
  return *((float *)this + 18) != 1.0
      || *((float *)this + 19) != 0.0
      || *((float *)this + 20) != 0.0
      || *((float *)this + 21) != 0.0
      || *((float *)this + 22) != 0.0
      || *((float *)this + 23) != 1.0
      || *((float *)this + 24) != 0.0
      || *((float *)this + 25) != 0.0
      || *((float *)this + 26) != 0.0
      || *((float *)this + 27) != 0.0
      || *((float *)this + 28) != 1.0
      || *((float *)this + 29) != 0.0
      || *((float *)this + 30) != 0.0
      || *((float *)this + 31) != 0.0
      || *((float *)this + 32) != 0.0
      || *((float *)this + 33) != 1.0;
}
