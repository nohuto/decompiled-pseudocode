/*
 * XREFs of sub_1800848E4 @ 0x1800848E4
 * Callers:
 *     sub_1800848E4 @ 0x1800848E4 (sub_1800848E4.c)
 *     sub_1800872F4 @ 0x1800872F4 (sub_1800872F4.c)
 * Callees:
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_1800848E4 @ 0x1800848E4 (sub_1800848E4.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800848E4(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rsi
  __int64 i; // rbx

  v2 = *a2;
  sub_1800839A4(*a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x18008495ALL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, a2) )
  {
    v7 = *(_QWORD *)(v2 + 40);
    for ( i = *(_QWORD *)(v2 + 32); i != v7; i += 16LL )
    {
      if ( !(unsigned __int8)sub_1800848E4(a1, i) )
        return v6;
    }
    return 1;
  }
  return v6;
}
