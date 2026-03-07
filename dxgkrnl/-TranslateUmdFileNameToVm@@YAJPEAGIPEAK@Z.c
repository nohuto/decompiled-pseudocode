__int64 __fastcall TranslateUmdFileNameToVm(size_t *a1, unsigned int a2, unsigned int *a3)
{
  size_t *v6; // rax
  const unsigned __int16 *v7; // rdx
  signed int UmdFileName; // ebx
  __int64 v9; // rax
  wchar_t String[264]; // [rsp+30h] [rbp-458h] BYREF
  unsigned __int16 v12[4]; // [rsp+240h] [rbp-248h] BYREF
  size_t v13[65]; // [rsp+248h] [rbp-240h] BYREF

  RtlStringCbCopyW(String, 0x104uLL, a1);
  _wcslwr(String);
  v6 = (size_t *)wcsstr(String, L"\\filerepository\\");
  UmdFileName = 0;
  if ( !v6 )
    return (unsigned int)UmdFileName;
  UmdFileName = GenerateUmdFileName(v12, v7, v6);
  if ( UmdFileName < 0 )
    goto LABEL_10;
  UmdFileName = RtlStringCbCopyW((unsigned __int16 *)a1, 2LL * a2, v13);
  if ( UmdFileName >= 0 )
  {
    if ( !a3 )
      return (unsigned int)UmdFileName;
    goto LABEL_7;
  }
  if ( !a3 )
  {
LABEL_10:
    WdLogSingleEntry1(3LL, UmdFileName);
    return (unsigned int)UmdFileName;
  }
  UmdFileName = -2147483643;
LABEL_7:
  v9 = -1LL;
  do
    ++v9;
  while ( v12[v9] );
  *a3 = 2 * v9 + 2;
  if ( UmdFileName < 0 )
    goto LABEL_10;
  return (unsigned int)UmdFileName;
}
