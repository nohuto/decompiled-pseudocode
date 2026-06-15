/*
 * XREFs of sub_180052B24 @ 0x180052B24
 * Callers:
 *     sub_180052B8C @ 0x180052B8C (sub_180052B8C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180052B24(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_180146940;
  v3 = a1 + 16;
  *(_QWORD *)(a1 + 72) = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v4 )
    *(_QWORD *)(v3 + 56) = (**v4)(v4, v3);
  return a1;
}
