char *__fastcall std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // r14
  void *v14; // rcx
  char *v15; // rdi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v5 = 0x276276276276276LL;
  v6 = 0x4EC4EC4EC4EC4EC5LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  v8 = (a2 - (_BYTE *)*a1) / 104;
  if ( v6 == 0x276276276276276LL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = 0x4EC4EC4EC4EC4EC5LL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x276276276276276LL - (v10 >> 1) )
  {
    v5 = v11 + v10;
    if ( v11 + v10 < v9 )
      v5 = v9;
  }
  size_of = std::_Get_size_of_n<104>(v5);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[104 * v8];
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v15 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)v15 + 3) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)v15 + 4) = *(_OWORD *)(a3 + 64);
  *((_OWORD *)v15 + 5) = *(_OWORD *)(a3 + 80);
  *((_QWORD *)v15 + 12) = *(_QWORD *)(a3 + 96);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, a2 - (_BYTE *)*a1);
    v14 = v15 + 104;
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v14, v17, v18);
  std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Change_array(a1, v13, v9, v5);
  return v15;
}
