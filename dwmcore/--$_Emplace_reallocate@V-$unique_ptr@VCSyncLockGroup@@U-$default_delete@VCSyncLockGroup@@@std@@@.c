_QWORD *__fastcall std::vector<std::unique_ptr<CSyncLockGroup>>::_Emplace_reallocate<std::unique_ptr<CSyncLockGroup>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r14
  SIZE_T size_of; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // r8
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v3 = CSyncLockGroup::g_syncLockGroups;
  v6 = (qword_1803E30A8 - CSyncLockGroup::g_syncLockGroups) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = std::vector<std::unique_ptr<CSyncLockGroup>>::_Calculate_growth(0x1FFFFFFFFFFFFFFFLL, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v8);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = *a3;
  *a3 = 0LL;
  v12 = v10;
  v13 = (_QWORD *)v10;
  v14 = (_QWORD *)(v10 + 8 * ((a2 - v3) >> 3));
  *v14 = v11;
  v15 = qword_1803E30A8;
  v16 = CSyncLockGroup::g_syncLockGroups;
  if ( a2 != qword_1803E30A8 )
  {
    std::_Uninitialized_move<std::unique_ptr<CSyncLockGroup> *,std::allocator<std::unique_ptr<CSyncLockGroup>>>(
      CSyncLockGroup::g_syncLockGroups,
      a2,
      v10);
    v15 = qword_1803E30A8;
    v13 = v14 + 1;
    v16 = a2;
  }
  std::_Uninitialized_move<std::unique_ptr<CSyncLockGroup> *,std::allocator<std::unique_ptr<CSyncLockGroup>>>(
    v16,
    v15,
    v13);
  std::vector<std::unique_ptr<CSyncLockGroup>>::_Change_array(v17, v12, v7, v8);
  return v14;
}
