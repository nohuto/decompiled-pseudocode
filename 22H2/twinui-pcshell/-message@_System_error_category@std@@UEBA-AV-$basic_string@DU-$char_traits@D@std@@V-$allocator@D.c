/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180128500
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     ??$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@Z @ 0x1801191DC (--$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@-$basic_string@DU-$char_traits@.c)
 *     ?_Become_small@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180125EB0 (-_Become_small@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x1801274A8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z.c)
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x180128B10 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_KD@Z.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::_System_error_category::message(__int64 a1, char *a2, unsigned int a3)
{
  char *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rbx

  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 15LL;
  *a2 = 0;
  std::string::_Reallocate_for<_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_,char>((__int64)a2);
  v5 = a2;
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v5 = *(char **)a2;
  v6 = std::_Winerror_message(a3, v5, 0x7FFFu);
  if ( v6 )
    std::string::resize(a2, v6);
  else
    std::string::assign(a2, "unknown error", v7);
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
  {
    v8 = *((_QWORD *)a2 + 2);
    if ( v8 >= 0x10 )
    {
      v9 = v8 | 0xF;
      if ( v9 > 0x7FFFFFFFFFFFFFFFLL )
        v9 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v9 < *((_QWORD *)a2 + 3) )
      {
        v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9 + 1);
        memcpy_0(v10, *(const void **)a2, *((_QWORD *)a2 + 2) + 1LL);
        std::_Deallocate<16,0>(*(void **)a2, (const struct std::nothrow_t *)(*((_QWORD *)a2 + 3) + 1LL));
        *(_QWORD *)a2 = v10;
        *((_QWORD *)a2 + 3) = v9;
      }
    }
    else
    {
      std::string::_Become_small((void **)a2);
    }
  }
  return a2;
}
