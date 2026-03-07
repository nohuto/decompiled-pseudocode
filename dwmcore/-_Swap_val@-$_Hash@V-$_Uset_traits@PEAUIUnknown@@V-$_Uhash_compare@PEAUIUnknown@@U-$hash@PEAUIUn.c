__int64 __fastcall std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Swap_val(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx

  v2 = a1[1];
  a1[1] = a2[1];
  v4 = a2[2];
  a2[1] = v2;
  v5 = a1[2];
  a1[2] = v4;
  v6 = a2[3];
  a2[2] = v5;
  v7 = a1[3];
  a1[3] = v6;
  v8 = a2[4];
  a2[3] = v7;
  v9 = a1[4];
  a1[4] = v8;
  v10 = a2[5];
  a2[4] = v9;
  v11 = a1[5];
  a1[5] = v10;
  v12 = a2[6];
  a2[5] = v11;
  v13 = a1[6];
  a1[6] = v12;
  result = a2[7];
  a2[6] = v13;
  v15 = a1[7];
  a1[7] = result;
  a2[7] = v15;
  return result;
}
