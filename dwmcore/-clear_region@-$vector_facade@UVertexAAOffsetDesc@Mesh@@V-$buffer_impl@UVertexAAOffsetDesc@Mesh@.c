__int64 __fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v9; // rcx
  __int64 result; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v5 = a2;
  v6 = a3 + a2;
  v7 = (a1[1] - *a1) >> 5;
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v9 = v3 + 32 * v7;
    if ( v6 == v7 )
      goto LABEL_3;
  }
  if ( v5 && (!v3 || v5 < 0 || v7 < v5) )
    _invalid_parameter_noinfo_noreturn();
  v11[2] = v5;
  v11[1] = v7;
  v11[0] = v3;
  result = ((__int64 (__fastcall *)(_BYTE *, unsigned __int64, __int64, _QWORD *))std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>)(
             v12,
             v3 + 32 * v6,
             v9,
             v11);
LABEL_3:
  a1[1] += -32 * a3;
  return result;
}
