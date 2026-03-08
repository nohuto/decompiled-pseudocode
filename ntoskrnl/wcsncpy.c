/*
 * XREFs of wcsncpy @ 0x1403D5F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsncpy(wchar_t *Dest, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // r9
  signed __int64 v4; // rdx
  wchar_t v5; // ax
  wchar_t *v6; // rdi
  size_t i; // rcx

  v3 = Dest;
  if ( Count )
  {
    v4 = (char *)Source - (char *)Dest;
    while ( 1 )
    {
      v5 = *(wchar_t *)((char *)Dest + v4);
      *Dest++ = v5;
      --Count;
      if ( !v5 )
        break;
      if ( !Count )
        return v3;
    }
    if ( Count )
    {
      v6 = Dest;
      for ( i = Count; i; --i )
        *v6++ = 0;
    }
  }
  return v3;
}
