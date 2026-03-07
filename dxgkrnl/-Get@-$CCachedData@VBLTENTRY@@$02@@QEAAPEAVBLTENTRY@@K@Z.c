BLTENTRY *__fastcall CCachedData<BLTENTRY,3>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  BLTENTRY *result; // rax
  BLTENTRY *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  v2 = a2;
  if ( a2 <= 3 )
    return (BLTENTRY *)a1;
  v5 = *(BLTENTRY **)(a1 + 1728);
  if ( a2 <= *(_DWORD *)(a1 + 1736) )
    return v5;
  v6 = 0LL;
  if ( v5 )
    BLTENTRY::`vector deleting destructor'(v5);
  v7 = 576 * v2;
  if ( !is_mul_ok(v2, 0x240uLL) )
    v7 = -1LL;
  v8 = __CFADD__(v7, 8LL);
  v9 = v7 + 8;
  if ( v8 )
    v9 = -1LL;
  v10 = operator new[](v9, 0x4B677844u, 256LL);
  if ( v10 )
  {
    v6 = v10 + 8;
    *(_QWORD *)v10 = v2;
    `vector constructor iterator'((char *)(v10 + 8), 576LL, v2, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  }
  *(_QWORD *)(a1 + 1728) = v6;
  result = (BLTENTRY *)v6;
  *(_DWORD *)(a1 + 1736) = v6 != 0 ? v2 : 0;
  return result;
}
