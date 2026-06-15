/*
 * XREFs of sub_1801128E0 @ 0x1801128E0
 * Callers:
 *     sub_180074C90 @ 0x180074C90 (sub_180074C90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801128E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *a2 - 0x43CED61D950F62CALL;
  if ( *a2 == 0x43CED61D950F62CALL )
    v4 = a2[1] + 0xC04A9010924C177LL;
  if ( !v4 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  return sub_1800CA2A0(a1 + 8, a2, a3);
}
