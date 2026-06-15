/*
 * XREFs of sub_180110F18 @ 0x180110F18
 * Callers:
 *     sub_18011073C @ 0x18011073C (sub_18011073C.c)
 *     sub_18011080C @ 0x18011080C (sub_18011080C.c)
 *     sub_1801108E4 @ 0x1801108E4 (sub_1801108E4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180110F18(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180155AE0;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = &off_180155B68;
  result = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 10;
  return result;
}
