__int64 __fastcall bIsPathInSystemFontsDir(wchar_t *Str1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  const wchar_t *v4; // rcx
  size_t v5; // rax

  v2 = 0;
  v3 = *(_QWORD *)(SGDGetSessionState(Str1) + 32);
  v4 = *(const wchar_t **)(v3 + 19904);
  if ( v4 )
  {
    v5 = wcsnlen(v4, 0x104uLL);
    return wcsncmp(Str1, *(const wchar_t **)(v3 + 19904), v5) == 0;
  }
  return v2;
}
