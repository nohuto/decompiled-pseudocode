/*
 * XREFs of ulCharsetToCodePage @ 0x1C0179690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(int a1)
{
  __int64 v1; // rax
  char *i; // rdx

  if ( a1 == 255 )
    return 1LL;
  v1 = 0LL;
  for ( i = charsets; *(_DWORD *)i != a1; i += 4 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x11 )
      return gbDBCSCodePage != 0 ? 0x4E4 : 0;
  }
  return codepages[v1];
}
