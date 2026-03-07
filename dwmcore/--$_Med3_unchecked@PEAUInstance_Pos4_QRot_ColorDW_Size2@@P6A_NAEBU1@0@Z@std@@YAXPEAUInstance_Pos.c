__int64 __fastcall std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        __int128 *a1,
        __int128 *a2,
        __int128 *a3,
        unsigned __int8 (__fastcall *a4)(__int128 *, __int128 *))
{
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int64 result; // rax
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4

  if ( a4(a2, a1) )
  {
    v8 = *a2;
    v9 = a2[1];
    v10 = a2[2];
    *a2 = *a1;
    a2[1] = a1[1];
    a2[2] = a1[2];
    *a1 = v8;
    a1[1] = v9;
    a1[2] = v10;
  }
  result = ((__int64 (__fastcall *)(__int128 *, __int128 *))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    v12 = *a3;
    v13 = a3[1];
    v14 = a3[2];
    *a3 = *a2;
    a3[1] = a2[1];
    a3[2] = a2[2];
    *a2 = v12;
    a2[1] = v13;
    a2[2] = v14;
    result = ((__int64 (__fastcall *)(__int128 *, __int128 *))a4)(a2, a1);
    if ( (_BYTE)result )
    {
      v15 = *a2;
      v16 = a2[1];
      v17 = a2[2];
      *a2 = *a1;
      a2[1] = a1[1];
      a2[2] = a1[2];
      *a1 = v15;
      a1[1] = v16;
      a1[2] = v17;
    }
  }
  return result;
}
