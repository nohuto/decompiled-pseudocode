/*
 * XREFs of sub_18006924C @ 0x18006924C
 * Callers:
 *     sub_18007CF30 @ 0x18007CF30 (sub_18007CF30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_18006924C()
{
  __int64 result; // rax

  if ( byte_18019E550 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_18019E540)(&qword_18019E540, 0LL);
    byte_18019E550 = 0;
  }
  return result;
}
