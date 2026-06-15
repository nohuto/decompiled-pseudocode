/*
 * XREFs of sub_180120A70 @ 0x180120A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006EBD8 @ 0x18006EBD8 (sub_18006EBD8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180120A70(volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = sub_18006EBD8(a1 + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5D8 + 8LL))(qword_18019E5D8);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v2 + 1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5D8 + 16LL))(qword_18019E5D8);
  }
  return v2;
}
