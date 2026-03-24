/*
 * XREFs of DxgkEngResetPointer @ 0x1C014AC40
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C000D8C8 (IsUserResetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C0255038;
    if ( qword_1C0255038 )
      return (__int64 (*)(void))qword_1C0255038();
  }
  return result;
}
