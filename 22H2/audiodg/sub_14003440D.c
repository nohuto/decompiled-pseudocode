/*
 * XREFs of sub_14003440D @ 0x14003440D
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_14003440D(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        int a23,
        __int64 a24,
        __int64 a25)
{
  if ( a23 < 0 )
  {
    if ( a25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a25 + 16LL))(a25);
    if ( a22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a22 + 16LL))(a22);
    JUMPOUT(0x1400340B7LL);
  }
  JUMPOUT(0x1400343E0LL);
}
