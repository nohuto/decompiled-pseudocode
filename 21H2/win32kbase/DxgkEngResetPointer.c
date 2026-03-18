/*
 * XREFs of DxgkEngResetPointer @ 0x1C0176C00
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C006A1D0 (IsUserResetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C029ADB8;
    if ( qword_1C029ADB8 )
      return (__int64 (*)(void))qword_1C029ADB8();
  }
  return result;
}
