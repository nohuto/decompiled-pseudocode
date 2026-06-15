/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18000E890
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000E560 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18002FB9C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18002FB9C.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180030814 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>::_Reallocate_exactly(
        char **a1,
        unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  SIZE_T v5; // rcx
  _QWORD *v6; // rdi
  char *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  char *v11; // rcx
  const struct std::nothrow_t *v12; // rdx
  char *v13; // r8
  char *v14; // rcx
  _QWORD *result; // rax

  v3 = (a1[1] - *a1) >> 3;
  v4 = a2;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = *a1;
  v8 = v6;
  v9 = 0LL;
  v10 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > a1[1] )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      *v8++ = *(_QWORD *)v7;
      v7 += 8;
      ++v9;
    }
    while ( v9 != v10 );
  }
  v11 = *a1;
  if ( *a1 )
  {
    v12 = (const struct std::nothrow_t *)((a1[2] - v11) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v12 >= 0x1000 )
    {
      v12 = (const struct std::nothrow_t *)((char *)v12 + 39);
      v13 = (char *)*((_QWORD *)v11 - 1);
      v14 = (char *)(v11 - v13);
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v14, v12);
        __debugbreak();
        JUMPOUT(0x18000E982LL);
      }
      v11 = v13;
    }
    operator delete(v11, v12);
  }
  *a1 = (char *)v6;
  a1[1] = (char *)&v6[v3];
  result = &v6[v4];
  a1[2] = (char *)&v6[v4];
  return result;
}
