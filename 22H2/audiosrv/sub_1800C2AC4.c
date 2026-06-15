/*
 * XREFs of sub_1800C2AC4 @ 0x1800C2AC4
 * Callers:
 *     sub_1800C2DB0 @ 0x1800C2DB0 (sub_1800C2DB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C2AC4(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = &off_180154DD0;
  if ( *(_QWORD *)(a1 + 96) )
  {
    if ( qword_18019E640 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E640 + 16LL))(qword_18019E640);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_1800BDAD4((_QWORD *)a1);
}
