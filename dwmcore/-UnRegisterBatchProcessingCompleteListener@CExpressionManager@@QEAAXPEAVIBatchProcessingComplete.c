void __fastcall CExpressionManager::UnRegisterBatchProcessingCompleteListener(
        CExpressionManager *this,
        struct IBatchProcessingCompleteListener *a2)
{
  char *v3; // rbx
  unsigned __int64 appended; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  struct IBatchProcessingCompleteListener *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = (char *)this + 592;
  appended = std::_Fnv1a_append_bytes((unsigned __int64)this, (const unsigned __int8 *const)&v14, 8uLL);
  v6 = *(_QWORD *)(std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::_Find_last<IBatchProcessingCompleteListener *>(
                     v3,
                     v13,
                     &v14,
                     appended)
                 + 8);
  if ( !v6 )
    v6 = *((_QWORD *)v3 + 1);
  v7 = *((_QWORD *)this + 75);
  if ( v6 != v7 )
  {
    v8 = std::_Fnv1a_append_bytes(v5, (const unsigned __int8 *const)(v6 + 16), 8uLL);
    v10 = *((_QWORD *)this + 77);
    v11 = 2 * (*((_QWORD *)this + 80) & v8);
    if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 80) & v8) + 8) == v9 )
    {
      if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 80) & v8)) == v9 )
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 80) & v8)) = v7;
      else
        v7 = v9[1];
      *(_QWORD *)(v10 + 8 * v11 + 8) = v7;
    }
    else if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 80) & v8)) == v9 )
    {
      *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 80) & v8)) = *v9;
    }
    v12 = *v9;
    --*((_QWORD *)this + 76);
    *(_QWORD *)v9[1] = v12;
    *(_QWORD *)(v12 + 8) = v9[1];
    std::_Deallocate<16,0>(v9, 24LL);
  }
}
