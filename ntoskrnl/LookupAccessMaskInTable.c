/*
 * XREFs of LookupAccessMaskInTable @ 0x14075060C
 * Callers:
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     LocalConvertAclToString @ 0x14074FD70 (LocalConvertAclToString.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAccessMaskInTable(wchar_t *Str1, int a2, int a3)
{
  __int64 v3; // rdi
  const wchar_t **v4; // rsi
  unsigned int i; // ebx

  v3 = 0LL;
  v4 = (const wchar_t **)&unk_140C03068;
  for ( i = 0; i < 0x1C; ++i )
  {
    if ( (a3 & (_DWORD)v4[1]) == a3
      && (Str1 ? wcsnicmp(Str1, *(v4 - 1), *(unsigned int *)v4) == 0 : a2 == *((_DWORD *)v4 + 1)) )
    {
      break;
    }
    v4 += 3;
  }
  if ( i < 0x1C )
    return &(&off_140C03060)[3 * i];
  return (wchar_t **)v3;
}
