const struct _GUID *__fastcall CMediaType::Subtype(CMediaType *this)
{
  return (const struct _GUID *)((char *)this + 16);
}
