/*
 * XREFs of LookupAceFlagsInTable @ 0x14083F7B0
 * Callers:
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     LocalConvertAclToString @ 0x14074FD70 (LocalConvertAclToString.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAceFlagsInTable(wchar_t *Str1, int a2, int a3, char a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  unsigned int i; // esi
  unsigned int v13; // ecx

  v4 = 0LL;
  v5 = (char *)&unk_140C06574;
  for ( i = 0; i < 9; ++i )
  {
    if ( (a3 & *((_DWORD *)v5 - 1)) == a3 )
    {
      if ( *(_DWORD *)v5 )
      {
        v13 = 0;
        while ( *(_BYTE *)(v13 + *(_QWORD *)(v5 + 4)) != a4 )
        {
          if ( ++v13 >= *(_DWORD *)v5 )
            goto LABEL_10;
        }
      }
      if ( Str1
         ? wcsnicmp(Str1, *(const wchar_t **)(v5 - 20), *((unsigned int *)v5 - 3)) == 0
         : a2 == *((_DWORD *)v5 - 2) )
      {
        break;
      }
    }
LABEL_10:
    v5 += 32;
  }
  if ( i < 9 )
    return &(&off_140C06560)[4 * i];
  return (wchar_t **)v4;
}
