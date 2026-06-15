/*
 * XREFs of sub_18013F474 @ 0x18013F474
 * Callers:
 *     sub_180056BF0 @ 0x180056BF0 (sub_180056BF0.c)
 *     sub_1801402F8 @ 0x1801402F8 (sub_1801402F8.c)
 * Callees:
 *     sub_180056BF0 @ 0x180056BF0 (sub_180056BF0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013F474(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  bool v6; // zf

  v4 = a2[2];
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  a2[2] = 0LL;
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v6 )
    return sub_180056BF0(a1);
  return result;
}
