/*
 * XREFs of ApiSetEditionPostDwmSpeedHitTest @ 0x1C0058F74
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C0057AD4 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D7A14 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionPostDwmSpeedHitTest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296890;
  if ( qword_1C0296890 )
  {
    result = (__int64 (*)(void))qword_1C0296890();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296898;
      if ( qword_1C0296898 )
        return (__int64 (*)(void))qword_1C0296898(a1, a2, a3, a4, a5, a6);
    }
  }
  return result;
}
