/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180007E60
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180017C80 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?_Winerror_map@std@@YAPEBDH@Z @ 0x1800B2770 (-_Winerror_map@std@@YAPEBDH@Z.c)
 */

_QWORD *__fastcall std::_System_error_category::message(__int64 a1, _QWORD *a2, int a3)
{
  const char *v4; // rax
  size_t v5; // r8
  char *v6; // rdx
  __int64 v7; // rax

  v4 = std::_Winerror_map(a3);
  v5 = 0LL;
  a2[3] = 15LL;
  a2[2] = 0LL;
  v6 = "unknown error";
  *(_BYTE *)a2 = 0;
  if ( v4 )
    v6 = (char *)v4;
  if ( *v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v5 = v7;
  }
  std::string::assign(a2, v6, v5);
  return a2;
}
