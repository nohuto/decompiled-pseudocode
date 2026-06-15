/*
 * XREFs of sub_180069210 @ 0x180069210
 * Callers:
 *     sub_18007CF20 @ 0x18007CF20 (sub_18007CF20.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_180069210()
{
  __int64 result; // rax

  if ( byte_18019F888 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_18019F870)(&qword_18019F870, 0LL);
    byte_18019F888 = 0;
  }
  return result;
}
