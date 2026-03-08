/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVCProjectedShadowReceiver@@@?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@QEAAPEAPEAVCProjectedShadowReceiver@@QEAPEAV2@AEBQEAV2@@Z @ 0x18001E1F8
 * Callers:
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180003FF0 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

char *__fastcall std::vector<CProjectedShadowReceiver *>::_Emplace_reallocate<CProjectedShadowReceiver * const &>(
        _QWORD *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8
  char *result; // rax

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (__int64)&a2[-*a1] >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[8 * v5];
  *(_QWORD *)v14 = *a3;
  v15 = v13;
  v16 = (_BYTE *)a1[1];
  v17 = (_BYTE *)*a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)&a2[-*a1]);
    v15 = v14 + 8;
    v18 = a1[1] - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = v13;
  result = v14;
  a1[1] = &v13[8 * v9];
  a1[2] = &v13[8 * v3];
  return result;
}
