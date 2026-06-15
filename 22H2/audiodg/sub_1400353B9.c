/*
 * XREFs of sub_1400353B9 @ 0x1400353B9
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1400353B9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        int a20,
        int a21,
        int a22,
        void (__fastcall ***a23)(_QWORD, __int64))
{
  if ( (int)a9 < 0 )
  {
    if ( a10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 16LL))(a10);
    if ( a12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a12 + 16LL))(a12);
    if ( a23 )
      (**a23)(a23, 1LL);
    JUMPOUT(0x14000C28ALL);
  }
  JUMPOUT(0x14000C06ELL);
}
