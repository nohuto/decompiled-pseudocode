struct QDC_CACHE::QDC_CACHE_ENTRY *__fastcall QDC_CACHE::FindCacheEntry(QDC_CACHE *this, char a2, int a3)
{
  struct QDC_CACHE::QDC_CACHE_ENTRY *result; // rax
  unsigned int i; // ecx
  char v5; // r9
  bool v6; // zf

  result = (QDC_CACHE *)((char *)this + 56);
  for ( i = 0; i < 0x12; ++i )
  {
    v5 = *(_BYTE *)result;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_5;
      v6 = *((_DWORD *)result + 1) == a3;
    }
    else
    {
      v6 = v5 == 0;
    }
    if ( v6 )
      return result;
LABEL_5:
    result = (struct QDC_CACHE::QDC_CACHE_ENTRY *)((char *)result + 32);
  }
  return 0LL;
}
