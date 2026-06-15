/*
 * XREFs of sub_180141244 @ 0x180141244
 * Callers:
 *     sub_1801427B4 @ 0x1801427B4 (sub_1801427B4.c)
 *     sub_1801428AC @ 0x1801428AC (sub_1801428AC.c)
 * Callees:
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180139FC0 @ 0x180139FC0 (sub_180139FC0.c)
 */

__int64 __fastcall sub_180141244(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // eax

  if ( !a2 )
    sub_1800B8610(-2147467259);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  result = v5;
  *(_QWORD *)(a1 + 8) = v5;
  if ( v5 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v7 = sub_1800CF858(a1, v5);
    sub_180139FC0(a1, v7);
    result = *(_QWORD *)(a1 + 8);
  }
  if ( !result )
    return sub_18005248C(a1);
  return result;
}
