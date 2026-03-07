void __fastcall CGlobalComposition::RegisterCursorVisual(CGlobalComposition *this, struct CCursorVisual *a2)
{
  _BYTE *v3; // rdx
  struct CCursorVisual *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = (_BYTE *)*((_QWORD *)this + 171);
  if ( v3 == *((_BYTE **)this + 172) )
  {
    std::vector<CCursorVisual *>::_Emplace_reallocate<CCursorVisual * const &>((_QWORD *)this + 170, v3, &v4);
  }
  else
  {
    *(_QWORD *)v3 = a2;
    *((_QWORD *)this + 171) += 8LL;
  }
}
