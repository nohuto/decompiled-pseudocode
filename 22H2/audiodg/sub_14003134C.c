/*
 * XREFs of sub_14003134C @ 0x14003134C
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_14003134C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        __int64 a21,
        int a22,
        int a23,
        int a24,
        void (__fastcall ***a25)(_QWORD, __int64))
{
  if ( (int)a8 < 0 )
  {
    if ( a13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a13 + 16LL))(a13);
    if ( a11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a11 + 16LL))(a11);
    if ( a25 )
      (**a25)(a25, 1LL);
    JUMPOUT(0x14000670DLL);
  }
  JUMPOUT(0x1400064A7LL);
}
