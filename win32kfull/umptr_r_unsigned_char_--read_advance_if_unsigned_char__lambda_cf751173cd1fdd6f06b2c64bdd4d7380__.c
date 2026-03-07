char __fastcall umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380___(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16)
    || !umptr_r<unsigned char>::read<unsigned char>(a1, a2, 1uLL, 0LL)
    || (*a2 & 0xFE) != 2 )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  if ( (unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v4, 1LL, &v6) && v6 <= *(_QWORD *)(a1 + 8) )
    *(_QWORD *)(a1 + 16) = v6;
  else
    *(_BYTE *)(a1 + 24) = 1;
  return 1;
}
