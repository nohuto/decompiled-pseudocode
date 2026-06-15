/*
 * XREFs of sub_180094803 @ 0x180094803
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180094803(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // rcx

  v7 = *(_QWORD *)(a7 + 56);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != a7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  JUMPOUT(0x18005B731LL);
}
