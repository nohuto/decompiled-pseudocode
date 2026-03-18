/*
 * XREFs of ApiSetEditionRimDeviceReadNotification @ 0x1C0207758
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2DA0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionRimDeviceReadNotification(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296358;
  if ( qword_1C0296358 )
  {
    result = (__int64 (*)(void))qword_1C0296358();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296360;
      if ( qword_1C0296360 )
        return (__int64 (*)(void))qword_1C0296360(a1, a2, a3, a4);
    }
  }
  return result;
}
