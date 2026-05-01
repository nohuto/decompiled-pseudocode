/*
 * XREFs of ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180249AB0
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1800AF90C (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1800AF90C.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x180116D40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180116D40.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180246A40 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@@Z @ 0x180245508 (--$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@-$basic_string@GU-$char_t.c)
 */

void __fastcall std::wstring::reserve(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  void *v4; // rbx

  v2 = (unsigned __int64)a1[2];
  if ( v2 <= a2 && a1[3] != (void *)a2 )
  {
    if ( (unsigned __int64)a1[3] >= a2 )
    {
      if ( a2 < 8 && (unsigned __int64)a1[3] >= 8 )
      {
        v4 = *a1;
        memcpy_0(a1, *a1, 2 * v2 + 2);
        std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(2LL * (_QWORD)a1[3] + 2));
        a1[3] = (void *)7;
      }
    }
    else
    {
      std::wstring::_Reallocate_grow_by<_lambda_7f96eb1dcf99da5daec8c2467d2d5499_,>(a1, a2 - v2);
      a1[2] = (void *)v2;
    }
  }
}
