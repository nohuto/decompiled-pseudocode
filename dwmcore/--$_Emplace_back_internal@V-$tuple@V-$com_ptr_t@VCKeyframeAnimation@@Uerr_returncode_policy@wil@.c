__int64 __fastcall std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Emplace_back_internal<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  SIZE_T size_of; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = v4 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
  {
    size_of = std::_Get_size_of_n<40>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  }
  v7 = a2[2];
  v8 = a2[1];
  v9 = *(_QWORD **)(a1[1] + 8 * v5);
  v10 = *a2;
  a2[2] = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  *v9 = v10;
  v9[1] = v8;
  v9[2] = v7;
  v11 = a2[3];
  a2[3] = 0LL;
  v9[3] = v11;
  result = a2[4];
  a2[4] = 0LL;
  v9[4] = result;
  ++a1[4];
  return result;
}
