__int64 __fastcall GetNextWchar(unsigned __int16 *a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // eax
  WCHAR v6; // r10
  int v11; // eax
  WCHAR Char; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  v5 = *a1;
  v6 = 0;
  while ( v4 < v5 >> 1 )
  {
    v6 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v4);
    *a2 = v4 + 1;
    Char = v6;
    if ( v6 <= 0x20u )
      goto LABEL_13;
    if ( v6 >= 0x7Fu )
    {
      if ( !a4 || !RtlIsValidOemCharacter(&Char) )
        goto LABEL_13;
      v6 = Char;
    }
    if ( v6 != 46 )
    {
      if ( v6 < 0x80u )
      {
LABEL_7:
        v11 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)v6 >> 5));
        if ( _bittest(&v11, v6 & 0x1F) )
          v6 = 95;
      }
      if ( (unsigned __int16)(v6 - 97) <= 0x19u )
        v6 -= 32;
      return v6;
    }
    if ( !a3 )
      goto LABEL_7;
LABEL_13:
    v5 = *a1;
    v6 = 0;
    v4 = *a2;
  }
  return v6;
}
