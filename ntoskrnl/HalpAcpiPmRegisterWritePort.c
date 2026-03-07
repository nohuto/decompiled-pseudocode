__int64 __fastcall HalpAcpiPmRegisterWritePort(unsigned __int16 a1, int a2, unsigned __int8 *a3)
{
  int v3; // edx
  int v5; // edx

  v3 = a2 - 1;
  if ( !v3 )
  {
    __outbyte(a1, *a3);
    return 0LL;
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    __outword(a1, *(_WORD *)a3);
    return 0LL;
  }
  if ( v5 == 2 )
  {
    __outdword(a1, *(_DWORD *)a3);
    return 0LL;
  }
  return 3221225473LL;
}
