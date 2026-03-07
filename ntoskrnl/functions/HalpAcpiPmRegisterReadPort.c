__int64 __fastcall HalpAcpiPmRegisterReadPort(unsigned __int16 a1, int a2, _BYTE *a3)
{
  int v3; // edx
  unsigned __int8 v4; // al
  int v6; // edx
  unsigned __int16 v7; // ax
  unsigned __int32 v8; // eax

  v3 = a2 - 1;
  if ( !v3 )
  {
    v4 = __inbyte(a1);
    *a3 = v4;
    return 0LL;
  }
  v6 = v3 - 1;
  if ( !v6 )
  {
    v7 = __inword(a1);
    *(_WORD *)a3 = v7;
    return 0LL;
  }
  if ( v6 == 2 )
  {
    v8 = __indword(a1);
    *(_DWORD *)a3 = v8;
    return 0LL;
  }
  return 3221225473LL;
}
