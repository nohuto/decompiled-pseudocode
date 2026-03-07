__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,4>::AllocateElements(__int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 result; // rax
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx

  v2 = a2;
  if ( (unsigned int)a2 <= 4 )
  {
    *a1 = (__int64)(a1 + 1);
    if ( (_DWORD)a2 )
    {
      v10 = 0LL;
      a2 = (unsigned int)a2;
      do
      {
        *(_QWORD *)(v10 + *a1) = 0LL;
        v10 += 8LL;
        --a2;
      }
      while ( a2 );
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 < 8 )
      return 0LL;
    v5 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 8uLL) )
      v5 = -1LL;
    v6 = __CFADD__(v5, 8LL);
    v7 = v5 + 8;
    if ( v6 )
      v7 = -1LL;
    v8 = operator new[](v7, 0x4B677844u, 256LL);
    v9 = 0LL;
    if ( v8 )
    {
      v9 = v8 + 8;
      *(_QWORD *)v8 = v2;
      `vector constructor iterator'(
        (char *)(v8 + 8),
        8LL,
        v2,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    *a1 = v9;
  }
  result = *a1;
  *((_DWORD *)a1 + 10) = v2;
  return result;
}
