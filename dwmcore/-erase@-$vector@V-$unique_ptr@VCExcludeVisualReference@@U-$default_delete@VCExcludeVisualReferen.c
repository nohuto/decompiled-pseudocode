CExcludeVisualReference ***__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
        __int64 a1,
        CExcludeVisualReference ***a2,
        CExcludeVisualReference **a3)
{
  CExcludeVisualReference **v3; // r15
  CExcludeVisualReference **v4; // rdi
  CExcludeVisualReference **v8; // rsi
  CExcludeVisualReference *v9; // rax
  CExcludeVisualReference *v10; // rcx
  CExcludeVisualReference *v11; // rcx
  CExcludeVisualReference ***result; // rax

  v3 = *(CExcludeVisualReference ***)(a1 + 8);
  v4 = a3 + 1;
  if ( a3 + 1 != v3 )
  {
    v8 = a3;
    do
    {
      if ( v8 != v4 )
      {
        v9 = *v4;
        *v4 = 0LL;
        v10 = *v8;
        *v8 = v9;
        if ( v10 )
          CExcludeVisualReference::`scalar deleting destructor'(v10);
      }
      ++v4;
      ++v8;
    }
    while ( v4 != v3 );
  }
  v11 = *(CExcludeVisualReference **)(*(_QWORD *)(a1 + 8) - 8LL);
  if ( v11 )
    CExcludeVisualReference::`scalar deleting destructor'(v11);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
