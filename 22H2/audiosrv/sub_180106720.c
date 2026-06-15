/*
 * XREFs of sub_180106720 @ 0x180106720
 * Callers:
 *     sub_18010826C @ 0x18010826C (sub_18010826C.c)
 *     sub_18010845C @ 0x18010845C (sub_18010845C.c)
 * Callees:
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180107EE4 @ 0x180107EE4 (sub_180107EE4.c)
 *     sub_18010B9A0 @ 0x18010B9A0 (sub_18010B9A0.c)
 */

__int64 __fastcall sub_180106720(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // eax

  if ( !a2 )
    sub_1800B8610(-2147467259);
  sub_18010B9A0(a2 + 8);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  result = v5;
  *(_QWORD *)(a1 + 8) = v5;
  if ( v5 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v7 = sub_1800CF858(a1, v5);
    sub_180107EE4(a1, v7);
    result = *(_QWORD *)(a1 + 8);
  }
  if ( !result )
    return sub_18005248C(a1);
  return result;
}
