/*
 * XREFs of ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z @ 0x1800149F0
 * Callers:
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015300 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068408 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

_QWORD *__fastcall std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  _BYTE *v20; // rcx
  const struct std::nothrow_t *v22; // rdx
  size_t v23; // rcx
  void *v24; // rax
  unsigned __int64 v25; // [rsp+50h] [rbp+8h] BYREF
  void *v26; // [rsp+58h] [rbp+10h] BYREF

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v26 = (void *)v11;
  v12 = v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v13 = -1LL;
  }
  else if ( v13 < 0x1000 )
  {
    if ( v13 )
    {
      v14 = operator new(8 * v11);
      goto LABEL_9;
    }
    goto LABEL_24;
  }
  v23 = v13 + 39;
  if ( v13 + 39 < v13 )
    v23 = -1LL;
  v24 = operator new(v23);
  if ( v24 )
  {
    v14 = (_QWORD *)(((unsigned __int64)v24 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v14 - 1) = v24;
    goto LABEL_9;
  }
  _o__invalid_parameter_noinfo_noreturn();
  __debugbreak();
LABEL_24:
  v14 = 0LL;
LABEL_9:
  v25 = (unsigned __int64)v14;
  v15 = &v14[v6];
  *v15 = *a3;
  v16 = a1[1];
  v17 = *a1;
  v18 = v14;
  if ( a2 == v16 )
  {
    v19 = v16 - v17;
  }
  else
  {
    memmove_0(v14, v17, a2 - v17);
    v18 = v15 + 1;
    v19 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v18, v17, v19);
  v20 = *a1;
  if ( *a1 )
  {
    v22 = (const struct std::nothrow_t *)(((_BYTE *)a1[2] - v20) & 0xFFFFFFFFFFFFFFF8uLL);
    v25 = (unsigned __int64)v22;
    v26 = v20;
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, &v25);
      v22 = (const struct std::nothrow_t *)v25;
      v20 = v26;
    }
    operator delete(v20, v22);
  }
  *a1 = v14;
  a1[1] = &v14[v8];
  a1[2] = &v14[v12];
  return v15;
}
