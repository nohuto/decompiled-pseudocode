/*
 * XREFs of AslPathToNetworkPathNt @ 0x140A5261C
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcscat_s @ 0x1403DA170 (wcscat_s.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     AslpDetermineDosPathNameType @ 0x140A53838 (AslpDetermineDosPathNameType.c)
 */

__int64 __fastcall AslPathToNetworkPathNt(wchar_t **a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdi
  rsize_t v7; // rdi
  wchar_t *v8; // rax
  wchar_t *v9; // rbp

  v2 = 0;
  *a1 = 0LL;
  if ( (unsigned int)AslpDetermineDosPathNameType(a2) == 1 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a2 + 2 * v6) );
    v7 = v6 + 9;
    v8 = (wchar_t *)AslAlloc(v5, 2 * v7);
    v9 = v8;
    if ( v8 )
    {
      wcscpy_s(v8, v7, L"\\??\\UNC\\");
      wcscat_s(v9, v7, (const wchar_t *)(a2 + 4));
      *a1 = v9;
    }
    else
    {
      v2 = -1073741801;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
