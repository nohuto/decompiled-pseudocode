__int64 __fastcall x86BiosWriteMemory(unsigned __int16 a1, unsigned __int16 a2, char *a3, int a4)
{
  int v5; // ebx
  unsigned __int16 v6; // di
  _BYTE *v8; // rax
  char v9; // cl

  v5 = a4;
  v6 = a2;
  if ( a2 + a4 + 16 * (unsigned int)a1 > 0x100000 )
    return 3221225485LL;
  if ( a4 )
  {
    do
    {
      v8 = (_BYTE *)x86BiosTranslateAddress(a1, v6);
      v9 = *a3;
      ++v6;
      ++a3;
      *v8 = v9;
      --v5;
    }
    while ( v5 );
  }
  return 0LL;
}
