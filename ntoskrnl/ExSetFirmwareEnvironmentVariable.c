__int64 __fastcall ExSetFirmwareEnvironmentVariable(const void **a1, int a2, __int64 a3, int a4, int a5)
{
  _WORD *v9; // rdi
  unsigned int v10; // ebx

  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  v9 = ExpUnicodeStringToNonpagedWStr(a1);
  if ( !v9 )
    return 3221225626LL;
  v10 = ExpSetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4 & (unsigned int)-(a3 != 0), a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
