__int64 __fastcall KiOpLocateDecodeEntry(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // rbx
  unsigned __int8 v4; // cl
  int v5; // ecx
  __int64 result; // rax
  _BYTE *v7; // rsi
  char v8; // cl
  char v9; // cl
  char v10; // cl

  if ( *(_BYTE *)(a1 + 57) )
  {
    v2 = &qword_140001A08;
    v3 = KiOpTwoByteTable;
  }
  else
  {
    v2 = &qword_1400054A8;
    v3 = KiOpOneByteTable;
  }
  while ( 1 )
  {
    v4 = *(_BYTE *)(a1 + 56);
    if ( v4 < *(_BYTE *)v3 )
      goto LABEL_5;
    if ( v4 > (unsigned __int8)(*((_BYTE *)v3 + 1) + *(_BYTE *)v3 - 1) )
      goto LABEL_5;
    v5 = *((_DWORD *)v3 + 1);
    if ( v5 )
    {
      if ( (v5 & *(_DWORD *)(a1 + 48)) == 0 )
        goto LABEL_5;
    }
    if ( *((_BYTE *)v3 + 8) == 0xFF && *((_BYTE *)v3 + 9) == 0xFF && *((_BYTE *)v3 + 10) == 0xFF )
      break;
    v7 = (_BYTE *)(a1 + 65);
    if ( !*(_BYTE *)(a1 + 80) )
    {
      result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 65));
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 80) = 1;
    }
    v8 = *((_BYTE *)v3 + 8);
    if ( v8 != -1 && v8 != ((*v7 >> 3) & 7) )
      goto LABEL_5;
    v9 = *((_BYTE *)v3 + 10);
    if ( v9 != -1 && v9 != (*v7 & 7) )
      goto LABEL_5;
    v10 = *((_BYTE *)v3 + 9);
    if ( v10 == -1 )
      break;
    if ( (*v7 & 0xC0) == 0xC0 )
    {
      if ( v10 == 3 )
        break;
    }
    else if ( v10 != 3 )
    {
      break;
    }
LABEL_5:
    v3 += 3;
    if ( v3 == v2 )
      return 0LL;
  }
  if ( (*((_DWORD *)v3 + 3) & 0xF4000000) != 0 && (*((_DWORD *)v3 + 3) & 0xF4000000 & *(_DWORD *)(a1 + 60)) == 0 )
    goto LABEL_5;
  *(_QWORD *)(a1 + 88) = v3;
  return 0LL;
}
