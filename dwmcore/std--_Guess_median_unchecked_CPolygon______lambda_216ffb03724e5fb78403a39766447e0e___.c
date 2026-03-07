__int64 __fastcall std::_Guess_median_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx

  v3 = a3;
  v4 = a2;
  v5 = (a3 - a1) >> 3;
  if ( v5 > 40 )
  {
    v6 = (v5 + 1) >> 3;
    v7 = 16 * v6;
    v8 = 8 * v6;
    v9 = 8 * v6 + a1;
    std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(a1, v9, 16 * v6 + a1);
    std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v4 - v8, v4, v8 + v4);
    std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v3 - v7, v3 - v8, v3);
    a3 = v10;
    a1 = v9;
    a2 = v4;
  }
  return std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(a1, a2, a3);
}
