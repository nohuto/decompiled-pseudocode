/*
 * XREFs of RtlStringCbCatNW @ 0x14066BE34
 * Callers:
 *     AslPathWildcardFindNext @ 0x140A52E68 (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToAppend)
{
  __int64 v4; // r10
  NTSTRSAFE_PWSTR v5; // rax
  __int64 v6; // r11
  NTSTATUS result; // eax
  size_t v8; // r9
  wchar_t *v9; // rcx
  __int64 v10; // rdx
  char *v11; // r8
  wchar_t v12; // ax
  wchar_t *v13; // rax

  v4 = 260LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (260 - v4) & -(__int64)(v4 != 0);
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v8 = cbToAppend >> 1;
    if ( v8 <= 0x7FFFFFFE )
    {
      v9 = &pszDest[v6];
      v10 = 260 - v6;
      if ( 260 != v6 )
      {
        v11 = (char *)((char *)pszSrc - (char *)v9);
        do
        {
          if ( !v8 )
            break;
          v12 = *(wchar_t *)((char *)v9 + (_QWORD)v11);
          if ( !v12 )
            break;
          *v9 = v12;
          --v8;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      v13 = v9 - 1;
      if ( v10 )
        v13 = v9;
      *v13 = 0;
      return v10 == 0 ? 0x80000005 : 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
