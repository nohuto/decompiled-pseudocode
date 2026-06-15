/*
 * XREFs of sub_18009212D @ 0x18009212D
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18009212D(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        __int64 a26,
        int a27,
        int a28,
        __int64 a29)
{
  sub_1800461B8(&a29);
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  JUMPOUT(0x18002C39CLL);
}
