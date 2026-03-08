/*
 * XREFs of DxgkEngResetPointer @ 0x1C0196230
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C00CCC4C (IsUserResetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C02D55B8;
    if ( qword_1C02D55B8 )
      return (__int64 (*)(void))qword_1C02D55B8();
  }
  return result;
}
