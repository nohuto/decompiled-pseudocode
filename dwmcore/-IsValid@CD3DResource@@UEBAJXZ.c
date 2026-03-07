__int64 __fastcall CD3DResource::IsValid(CD3DResource *this)
{
  return *((_BYTE *)this + 70) == 0 ? 0x8898008D : 0;
}
