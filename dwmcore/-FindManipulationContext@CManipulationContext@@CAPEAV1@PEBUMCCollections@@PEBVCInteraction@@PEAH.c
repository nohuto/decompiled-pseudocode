struct CManipulationContext *__fastcall CManipulationContext::FindManipulationContext(
        const struct MCCollections *a1,
        __int64 a2,
        int *a3)
{
  __int64 v3; // rbx
  int v5; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbp

  v3 = 0LL;
  v5 = 0;
  if ( *((int *)a1 + 8) > 0 )
  {
    v6 = a2 + 64;
    v7 = 0LL;
    v8 = -a2;
    v9 = v6 & -(__int64)(v8 != 0);
    while ( (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(v7 + *((_QWORD *)a1 + 3)) + 16LL))(
              *(_QWORD *)(v7 + *((_QWORD *)a1 + 3)),
              v8,
              a3) != v9 )
    {
      ++v5;
      v7 += 8LL;
      if ( v5 >= *((_DWORD *)a1 + 8) )
        return (struct CManipulationContext *)v3;
    }
    return *(struct CManipulationContext **)(*((_QWORD *)a1 + 3) + 8LL * v5);
  }
  return (struct CManipulationContext *)v3;
}
