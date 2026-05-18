/*
 * XREFs of sub_180078918 @ 0x180078918
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 * Callees:
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800759EC @ 0x1800759EC (sub_1800759EC.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180078918(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_1800752B4(a1, 1);
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1 + 64LL))(v1, &unk_180208BA8, 0LL);
  if ( (_BYTE)result )
    sub_1800759EC();
  return result;
}
