/*
 * XREFs of sub_1800C2B3C @ 0x1800C2B3C
 * Callers:
 *     sub_1800C2DF0 @ 0x1800C2DF0 (sub_1800C2DF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C2B3C(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = &off_180154E48;
  if ( *(_QWORD *)(a1 + 304) )
  {
    if ( qword_18019E640 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E640 + 16LL))(qword_18019E640);
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
  v2 = *(_QWORD *)(a1 + 248);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_1800BEF90(a1);
}
