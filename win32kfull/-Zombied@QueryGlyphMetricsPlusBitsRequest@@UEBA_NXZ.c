bool __fastcall QueryGlyphMetricsPlusBitsRequest::Zombied(QueryGlyphMetricsPlusBitsRequest *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 7) + 24LL) + 12LL);
}
