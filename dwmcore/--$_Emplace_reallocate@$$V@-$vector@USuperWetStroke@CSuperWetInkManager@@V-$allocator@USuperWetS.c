__int64 __fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(__int64 *a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  SIZE_T size_of; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - *a1) >> 3);
  v4 = 0x276276276276276LL;
  v6 = (a2 - *a1) / 104;
  if ( v3 == 0x276276276276276LL )
    std::_Xlength_error("vector too long");
  v7 = v3 + 1;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a1[2] - *a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
  {
    v4 = v9 + v8;
    if ( v9 + v8 < v7 )
      v4 = v7;
  }
  size_of = std::_Get_size_of_n<104>(v4);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11 + 104 * v6;
  memset_0((void *)v12, 0, 0x68uLL);
  v13 = v11;
  *(_QWORD *)(v12 + 72) = 0LL;
  *(_QWORD *)(v12 + 80) = 0LL;
  *(_QWORD *)(v12 + 88) = 0LL;
  *(_BYTE *)(v12 + 96) = 0;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<CSuperWetInkManager::SuperWetStroke *>(v15, a2, v11);
    v14 = a1[1];
    v13 = v12 + 104;
    v15 = a2;
  }
  std::_Uninitialized_move<CSuperWetInkManager::SuperWetStroke *>(v15, v14, v13);
  std::vector<CSuperWetInkManager::SuperWetStroke>::_Change_array(a1, v11, v7, v4);
  return v12;
}
