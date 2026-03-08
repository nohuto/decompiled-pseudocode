/*
 * XREFs of ClearDelegationCapture @ 0x1C00B9AD0
 * Callers:
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ClearDelegationCapture())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D66F0;
  if ( qword_1C02D66F0 )
    return (__int64 (*)(void))qword_1C02D66F0();
  return result;
}
