NTSTATUS __fastcall Controller_PopulateAcpiDeviceInformation(unsigned __int16 *a1, char *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  void *v8; // rcx

  RtlStringCchPrintfA(a2 + 10, 5uLL, "%04X", a1[13]);
  v4 = a1[4];
  if ( (_WORD)v4 )
  {
    v5 = a1[6];
    if ( (_WORD)v5 )
      v6 = v5 - v4;
    else
      v6 = a1[5];
    memmove(a2, (char *)a1 + v4, v6);
    v7 = a1[6];
    v8 = a2 + 5;
    if ( (_WORD)v7 )
      return (unsigned int)memmove(v8, (char *)a1 + v7, a1[5] - v6);
  }
  else
  {
    RtlStringCchPrintfA(a2, 5uLL, "%s", "UKWN");
    v8 = a2 + 5;
  }
  return RtlStringCchPrintfA((NTSTRSAFE_PSTR)v8, 5uLL, "%s", "FFFF");
}
