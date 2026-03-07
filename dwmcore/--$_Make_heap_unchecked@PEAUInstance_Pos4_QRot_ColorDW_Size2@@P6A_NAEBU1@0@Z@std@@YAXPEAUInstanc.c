__int64 __fastcall std::_Make_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v5; // ebp
  signed __int64 v6; // rsi
  __int64 v7; // rdi
  _OWORD *v8; // rbx
  __int128 v9; // xmm1
  _OWORD v10[3]; // [rsp+30h] [rbp-38h] BYREF

  result = 0xAAAAAAAAAAAAAAABuLL;
  v5 = a1;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a2 - a1) >> 4);
  v7 = v6 >> 1;
  if ( v6 >> 1 > 0 )
  {
    v8 = (_OWORD *)(a1 + 48 * v7);
    do
    {
      v8 -= 3;
      v9 = v8[1];
      --v7;
      v10[0] = *v8;
      v10[2] = v8[2];
      v10[1] = v9;
      result = std::_Pop_heap_hole_by_index<Instance_Pos4_QRot_ColorDW_Size2 *,Instance_Pos4_QRot_ColorDW_Size2,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
                 v5,
                 v7,
                 v6,
                 (unsigned int)v10,
                 a3);
    }
    while ( v7 > 0 );
  }
  return result;
}
