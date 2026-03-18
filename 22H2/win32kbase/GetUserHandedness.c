/*
 * XREFs of GetUserHandedness @ 0x1C0233098
 * Callers:
 *     UnpackPenSettings @ 0x1C01E9A30 (UnpackPenSettings.c)
 *     ApiSetGetUserHandedness @ 0x1C0207DA4 (ApiSetGetUserHandedness.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GetUserHandedness())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02962D0;
  if ( qword_1C02962D0 )
    return (__int64 (*)(void))qword_1C02962D0();
  return result;
}
