/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x1C02082D0
 * Callers:
 *     RIMApplyTransforms @ 0x1C018F430 (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0190788 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetTransformForInputMagnification(__int64 a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296308;
  if ( qword_1C0296308 )
  {
    result = (__int64 (*)(void))qword_1C0296308();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296310;
      if ( qword_1C0296310 )
        return (__int64 (*)(void))qword_1C0296310(a1, a2, a3);
    }
  }
  return result;
}
