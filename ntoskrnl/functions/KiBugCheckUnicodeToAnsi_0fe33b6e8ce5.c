_BYTE *__fastcall KiBugCheckUnicodeToAnsi(unsigned __int16 *a1, _BYTE *a2)
{
  unsigned int v2; // r8d
  char *v3; // r9
  _BYTE *v4; // rcx
  unsigned int v5; // r8d
  char v6; // al

  v2 = *a1;
  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = a2;
  v5 = v2 >> 1;
  if ( v5 >= 0x80 )
    v5 = 127;
  for ( ; v5; --v5 )
  {
    v6 = *v3;
    v3 += 2;
    *v4++ = v6;
  }
  *v4 = 0;
  return a2;
}
