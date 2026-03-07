char __fastcall HalpVerifySratEntryLengthAndFlag(__int64 a1, char a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  char v6; // dl
  bool v7; // zf

  if ( !*(_BYTE *)a1 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    v5 = 16;
LABEL_11:
    v6 = 1;
    v7 = (v4 & 1) == 0;
    goto LABEL_12;
  }
  if ( *(_BYTE *)a1 != 1 )
  {
    if ( *(_BYTE *)a1 == 2 )
    {
      v4 = *(_DWORD *)(a1 + 12);
      v5 = a2 != 0 ? 24 : 16;
    }
    else
    {
      if ( *(_BYTE *)a1 != 3 )
        return 0;
      v4 = *(_DWORD *)(a1 + 10);
      v5 = 18;
    }
    goto LABEL_11;
  }
  v6 = 1;
  v5 = 40;
  if ( (*(_BYTE *)(a1 + 28) & 1) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 16) == 0LL;
LABEL_12:
    if ( !v7 && *(unsigned __int8 *)(a1 + 1) >= v5 )
      return v6;
  }
  return 0;
}
