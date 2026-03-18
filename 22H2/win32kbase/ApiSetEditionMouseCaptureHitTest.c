/*
 * XREFs of ApiSetEditionMouseCaptureHitTest @ 0x1C0206DE4
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C0057AD4 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionMouseCaptureHitTest(__int64 a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296880;
  if ( qword_1C0296880 )
  {
    result = (__int64 (*)(void))qword_1C0296880();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296888;
      if ( qword_1C0296888 )
        return (__int64 (*)(void))qword_1C0296888(a1, a2, a3);
    }
  }
  return result;
}
