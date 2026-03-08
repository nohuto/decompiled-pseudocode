/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x1801D5D94
 * Callers:
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1801D5FA4 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x18010CF00 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1801CAAD4 (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // r14
  unsigned __int64 v8; // r13
  size_t v9; // rdi
  unsigned __int64 v10; // rbx
  char *v11; // r15
  char *v12; // rdi
  void *v13; // rbx

  v5 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::_Xlen_string();
  v8 = (unsigned __int64)Src[3];
  v9 = v5 + a2;
  v10 = std::string::_Calculate_growth((__int64)Src, v5 + a2);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
  Src[2] = (void *)v9;
  Src[3] = (void *)v10;
  v12 = &v11[v5];
  if ( v8 < 0x10 )
  {
    memcpy_0(v11, Src, v5);
    memcpy_0(v12, a4, Size);
    v12[Size] = 0;
  }
  else
  {
    v13 = *Src;
    memcpy_0(v11, *Src, v5);
    memcpy_0(v12, a4, Size);
    v12[Size] = 0;
    std::_Deallocate<16,0>(v13, v8 + 1);
  }
  *Src = v11;
  return Src;
}
