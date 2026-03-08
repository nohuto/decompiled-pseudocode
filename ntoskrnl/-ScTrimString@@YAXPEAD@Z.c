/*
 * XREFs of ?ScTrimString@@YAXPEAD@Z @ 0x140672CCC
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140672B68 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     isspace @ 0x1403D4560 (isspace.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void __fastcall ScTrimString(char *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  char *v4; // rdi
  int v5; // ebp
  __int64 v6; // rdi

  v1 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  if ( (_DWORD)v3 )
  {
    if ( (int)v3 - 1LL >= 0 )
    {
      v4 = &a1[(int)v3 - 1];
      do
      {
        if ( !isspace(*v4) )
          break;
        *v4-- = 0;
      }
      while ( v4 - a1 >= 0 );
    }
    do
      ++v1;
    while ( a1[v1] );
    if ( (_DWORD)v1 )
    {
      v5 = 0;
      if ( (int)v1 > 0 )
      {
        v6 = 0LL;
        do
        {
          if ( !isspace(a1[v6]) )
            break;
          ++v5;
          ++v6;
        }
        while ( v6 < (int)v1 );
      }
      memmove(a1, &a1[v5], (int)v1 - v5 + 1);
    }
  }
}
