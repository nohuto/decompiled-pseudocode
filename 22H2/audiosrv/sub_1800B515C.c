/*
 * XREFs of sub_1800B515C @ 0x1800B515C
 * Callers:
 *     sub_1800B522B @ 0x1800B522B (sub_1800B522B.c)
 *     sub_1800B55A1 @ 0x1800B55A1 (sub_1800B55A1.c)
 *     sub_1800B5653 @ 0x1800B5653 (sub_1800B5653.c)
 *     sub_1800B5683 @ 0x1800B5683 (sub_1800B5683.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800B515C(__int64 a1, char *a2, __int64 a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    sub_18000E660(a2, a3, (const char *)L"std::exception: %hs", v5);
  }
}
