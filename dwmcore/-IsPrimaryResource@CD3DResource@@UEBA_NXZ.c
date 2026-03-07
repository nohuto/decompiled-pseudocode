bool __fastcall CD3DResource::IsPrimaryResource(CD3DResource *this)
{
  return *((_BYTE *)this + 68);
}
