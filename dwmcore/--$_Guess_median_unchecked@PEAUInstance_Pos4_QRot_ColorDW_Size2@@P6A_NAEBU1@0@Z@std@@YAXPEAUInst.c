__int64 __fastcall std::_Guess_median_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  signed __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbp

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - a1) >> 4);
  if ( v4 <= 40 )
  {
    v9 = a1;
    v10 = a3;
  }
  else
  {
    v6 = (v4 + 1) >> 3;
    v7 = 48 * v6;
    v8 = 96 * v6;
    v9 = 48 * v6 + a1;
    std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      a1,
      v9,
      96 * v6 + a1);
    std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      a2 - v7,
      a2,
      v7 + a2);
    v10 = a3 - v7;
    std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      a3 - v8,
      a3 - v7,
      a3);
  }
  return std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
           v9,
           a2,
           v10);
}
