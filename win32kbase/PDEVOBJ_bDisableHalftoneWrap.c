/*
 * XREFs of PDEVOBJ_bDisableHalftoneWrap @ 0x1C0271688
 * Callers:
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PDEVOBJ_bDisableHalftoneWrap(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D5C60;
  if ( qword_1C02D5C60 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D5C60(a1);
  return result;
}
