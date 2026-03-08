/*
 * XREFs of memcpy_0 @ 0x1400071BC
 * Callers:
 *     memcpy_s @ 0x140002A9C (memcpy_s.c)
 *     memcpy_s_0 @ 0x140006C08 (memcpy_s_0.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000C4C8 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z @ 0x14000DF28 (-copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000E02C (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
