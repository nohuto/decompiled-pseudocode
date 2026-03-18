/*
 * XREFs of DxgkEngResetPointer @ 0x1C01694A0
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C0018F24 (IsUserResetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C0294448;
    if ( qword_1C0294448 )
      return (__int64 (*)(void))qword_1C0294448();
  }
  return result;
}
