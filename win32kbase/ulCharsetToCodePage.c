__int64 __fastcall ulCharsetToCodePage(__int64 a1)
{
  __int64 v1; // rax
  const unsigned int near *const *i; // rdx

  if ( (_DWORD)a1 == 255 )
    return 1LL;
  v1 = 0LL;
  for ( i = &charsets; *(_DWORD *)i != (_DWORD)a1; i = (const unsigned int near *const *)((char *)i + 4) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x11 )
      return *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 156LL) != 0 ? 0x4E4 : 0;
  }
  return codepages[v1];
}
