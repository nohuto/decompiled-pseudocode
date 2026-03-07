const struct CDrawListBitmap *__fastcall CWARPDrawListEntry::GetBitmap(CWARPDrawListEntry *this, int a2)
{
  const struct CDrawListBitmap *result; // rax

  result = (CWARPDrawListEntry *)((char *)this + 128);
  if ( a2 != 1 )
    return (CWARPDrawListEntry *)((char *)this + 48);
  return result;
}
