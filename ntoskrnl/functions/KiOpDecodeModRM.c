__int64 __fastcall KiOpDecodeModRM(__int64 a1)
{
  bool v1; // zf
  _BYTE *v2; // rdi
  __int64 result; // rax
  char v5; // al
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 80) == 0;
  v2 = (_BYTE *)(a1 + 65);
  v6 = 0;
  if ( v1 )
  {
    result = KiOpFetchNextByte(a1, a1 + 65);
    if ( (int)result < 0 )
      return result;
    *(_BYTE *)(a1 + 80) = 1;
  }
  if ( (*v2 & 0xC0) == 0xC0 || (*v2 & 7) != 4 || (result = KiOpFetchNextByte(a1, a1 + 66), (int)result >= 0) )
  {
    v5 = *v2 >> 6;
    if ( !v5 && (*v2 & 7) == 5 || v5 == 2 )
    {
      result = KiOpFetchBytes(a1, 4LL, a1 + 68);
      if ( (int)result < 0 )
        return result;
      return 0LL;
    }
    if ( v5 != 1 )
      return 0LL;
    result = KiOpFetchBytes(a1, 1LL, &v6);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 68) = v6;
      return 0LL;
    }
  }
  return result;
}
