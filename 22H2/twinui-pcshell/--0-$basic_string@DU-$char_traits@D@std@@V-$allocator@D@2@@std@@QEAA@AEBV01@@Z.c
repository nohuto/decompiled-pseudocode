/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x18011A27C
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011A7EC (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x18011A930 (--0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::string::string(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rax

  v2 = (_OWORD *)a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 0x10uLL )
    v2 = *(_OWORD **)a2;
  v5 = 15LL;
  if ( v4 >= 0x10 )
  {
    v5 = v4 | 0xF;
    if ( (v4 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5 + 1);
    *a1 = v6;
    memcpy_0(v6, v2, v4 + 1);
  }
  else
  {
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v4;
  a1[3] = v5;
  return a1;
}
