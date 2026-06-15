/*
 * XREFs of sub_180045280 @ 0x180045280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180045280(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)qword_18019F850 + 24LL))(
           qword_18019F850,
           a1 + 8,
           *(unsigned int *)(a1 + 368),
           a1 + 352,
           a1 + 376);
}
