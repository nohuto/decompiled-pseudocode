_QWORD *__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _QWORD *a1,
        __int64 **a2,
        __int64 **a3,
        __int64 a4)
{
  __int64 *v5; // r11
  __int64 v7; // rdx
  __int64 *v8; // r10
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  _OWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *result; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v19; // [rsp+50h] [rbp-18h] BYREF

  v5 = a2[2];
  if ( *a2 )
    v7 = **a2;
  else
    v7 = 0LL;
  v8 = a3[2];
  if ( *a3 )
    v9 = **a3;
  else
    v9 = 0LL;
  v10 = *(__int64 **)a4;
  v11 = *(_QWORD *)(a4 + 16);
  if ( *(_QWORD *)a4 )
    v12 = *v10;
  else
    v12 = 0LL;
  v16[0] = v12;
  v16[1] = v11;
  v17[0] = v9;
  v18[0] = v7;
  v17[1] = v8;
  v18[1] = v5;
  v13 = std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
          &v19,
          v18,
          (__int64)v17,
          v16);
  a1[1] = 0LL;
  v14 = *((_QWORD *)v13 + 1);
  *a1 = *(_QWORD *)a4;
  result = a1;
  *(_QWORD *)(a4 + 16) = v14;
  a1[2] = v14;
  return result;
}
