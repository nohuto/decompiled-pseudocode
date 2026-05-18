/*
 * XREFs of sub_180043C34 @ 0x180043C34
 * Callers:
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180010AE4 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

const void **__fastcall sub_180043C34(
        const void **Src,
        unsigned __int64 a2,
        __int64 a3,
        size_t a4,
        const void *a5,
        size_t Size)
{
  __int64 v6; // rdi
  char *v7; // r14
  unsigned __int64 v10; // rbp
  char *v11; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  void *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  size_t v20; // r13
  _QWORD *v21; // rdi

  v6 = 0x7FFFFFFFFFFFFFFFLL;
  v7 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v7 < a2 )
    std::vector<void *>::_Xlen();
  v10 = (unsigned __int64)Src[3];
  v11 = &v7[a2];
  v12 = (unsigned __int64)&v7[a2] | 0xF;
  if ( v12 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v13 = v10 >> 1;
    if ( v10 <= 0x7FFFFFFFFFFFFFFFLL - (v10 >> 1) )
    {
      v6 = v12;
      if ( v12 < v13 + v10 )
        v6 = v13 + v10;
    }
  }
  v14 = v6 + 1;
  if ( v6 == -1 )
    v14 = -1LL;
  if ( v14 < 0x1000 )
  {
    v19 = 0LL;
    if ( v14 )
      v19 = operator new(v14);
  }
  else
  {
    v15 = v14 + 39;
    if ( v14 + 39 < v14 )
      v15 = -1LL;
    v16 = operator new(v15);
    if ( !v16 )
      goto LABEL_20;
    v19 = (_QWORD *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v19 - 1) = v16;
  }
  Src[2] = v11;
  Src[3] = (const void *)v6;
  v20 = (size_t)&v7[-a4 + 1];
  if ( v10 < 0x10 )
  {
    memcpy(v19, Src, a4);
    memcpy((char *)v19 + a4, a5, Size);
    memcpy((char *)v19 + a4 + Size, (char *)Src + a4, v20);
    goto LABEL_22;
  }
  v21 = *Src;
  memcpy(v19, *Src, a4);
  memcpy((char *)v19 + a4, a5, Size);
  memcpy((char *)v19 + a4 + Size, (char *)v21 + a4, v20);
  if ( v10 + 1 >= 0x1000 )
  {
    v18 = *(v21 - 1);
    v17 = v10 + 40;
    if ( (unsigned __int64)v21 - v18 - 8 <= 0x1F )
    {
      v21 = (_QWORD *)*(v21 - 1);
      goto LABEL_19;
    }
LABEL_20:
    o__invalid_parameter_noinfo_noreturn(v18, v17);
    __debugbreak();
  }
LABEL_19:
  j_j__o_free(v21);
LABEL_22:
  *Src = v19;
  return Src;
}
