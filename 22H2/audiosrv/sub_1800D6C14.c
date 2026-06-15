/*
 * XREFs of sub_1800D6C14 @ 0x1800D6C14
 * Callers:
 *     sub_18007A3E5 @ 0x18007A3E5 (sub_18007A3E5.c)
 *     sub_1800D4E60 @ 0x1800D4E60 (sub_1800D4E60.c)
 *     sub_1800D5060 @ 0x1800D5060 (sub_1800D5060.c)
 *     sub_1800D569C @ 0x1800D569C (sub_1800D569C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D6C14(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
