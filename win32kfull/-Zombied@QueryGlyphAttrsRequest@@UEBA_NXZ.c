bool __fastcall QueryGlyphAttrsRequest::Zombied(QueryGlyphAttrsRequest *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 12LL);
}
