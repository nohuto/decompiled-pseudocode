/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000C4C8
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000C5C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000C890 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     memcpy_0 @ 0x1400071BC (memcpy_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14000C41C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14000C484 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x14000D838 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  _WORD *v11; // rax
  _WORD *v12; // rbp
  __int64 v14; // rcx

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a2 | 7;
  if ( v9 > 0x7FFFFFFFFFFFFFFELL || (v14 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFELL - (v8 >> 1)) )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v4 = v14 + v8;
    if ( v9 >= v14 + v8 )
      v4 = v9;
    v10 = v4 + 1;
    if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v10);
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 16) = a2;
  v12 = v11;
  memcpy_0(v11, a4, 2 * a2);
  v12[a2] = 0;
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(*(char **)a1, 2 * v8 + 2);
  *(_QWORD *)a1 = v12;
  return a1;
}
