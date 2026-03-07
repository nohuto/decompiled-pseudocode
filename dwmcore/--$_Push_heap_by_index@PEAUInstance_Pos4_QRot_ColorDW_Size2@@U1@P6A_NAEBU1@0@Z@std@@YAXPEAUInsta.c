__int64 __fastcall std::_Push_heap_by_index<Instance_Pos4_QRot_ColorDW_Size2 *,Instance_Pos4_QRot_ColorDW_Size2,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int8 (__fastcall *a5)(_OWORD *, _OWORD *))
{
  __int64 v7; // rbx
  __int64 v9; // r14
  _OWORD *v10; // r15
  __int64 v11; // rax
  __int64 result; // rax

  v7 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v9 = (v7 - 1) >> 1;
      v10 = (_OWORD *)(a1 + 48 * v9);
      if ( !a5(v10, a4) )
        break;
      v11 = 6 * v7;
      v7 = (v7 - 1) >> 1;
      *(_OWORD *)(a1 + 8 * v11) = *v10;
      *(_OWORD *)(a1 + 8 * v11 + 16) = v10[1];
      *(_OWORD *)(a1 + 8 * v11 + 32) = v10[2];
    }
    while ( a3 < v9 );
  }
  result = 6 * v7;
  *(_OWORD *)(a1 + 8 * result) = *a4;
  *(_OWORD *)(a1 + 8 * result + 16) = a4[1];
  *(_OWORD *)(a1 + 8 * result + 32) = a4[2];
  return result;
}
