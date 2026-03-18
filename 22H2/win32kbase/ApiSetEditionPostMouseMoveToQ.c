/*
 * XREFs of ApiSetEditionPostMouseMoveToQ @ 0x1C009BB54
 * Callers:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C009B9E8 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionPostMouseMoveToQ(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( qword_1C02963D8 && (int)qword_1C02963D8() >= 0 && qword_1C02963E0 )
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, __int64))qword_1C02963E0)(
                           a1,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6);
  return v6;
}
