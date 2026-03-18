/*
 * XREFs of ApiSetPerformTargetingWithinPwnd @ 0x1C0207F7C
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CC3D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetPerformTargetingWithinPwnd(__int64 a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02969D0;
  if ( qword_1C02969D0 )
  {
    result = (__int64 (*)(void))qword_1C02969D0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02969D8;
      if ( qword_1C02969D8 )
        return (__int64 (*)(void))qword_1C02969D8(a1, a2, a3);
    }
  }
  return result;
}
