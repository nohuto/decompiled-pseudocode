/*
 * XREFs of RtlStringCbCatNW @ 0x1405C0D70
 * Callers:
 *     AslPathWildcardFindNext @ 0x1409692A4 (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToAppend)
{
  __int64 v5; // r10
  NTSTRSAFE_PWSTR v6; // rax
  NTSTATUS result; // eax
  __int64 v8; // r8
  size_t v9; // r9
  wchar_t *v10; // rcx
  __int64 v11; // rdx
  size_t v12; // r8
  char *v13; // r11
  wchar_t v14; // ax
  wchar_t *v15; // rax

  v5 = 260LL;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v8 = 260 - v5;
  else
    v8 = 0LL;
  if ( v5 )
  {
    v9 = cbToAppend >> 1;
    if ( v9 <= 0x7FFFFFFE )
    {
      v10 = &pszDest[v8];
      v11 = 260 - v8;
      if ( 260 != v8 )
      {
        v12 = v9;
        v13 = (char *)((char *)pszSrc - (char *)v10);
        do
        {
          if ( !v12 )
            break;
          v14 = *(wchar_t *)((char *)v10 + (_QWORD)v13);
          if ( !v14 )
            break;
          *v10 = v14;
          --v12;
          ++v10;
          --v11;
        }
        while ( v11 );
      }
      v15 = v10 - 1;
      if ( v11 )
        v15 = v10;
      *v15 = 0;
      return v11 == 0 ? 0x80000005 : 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
