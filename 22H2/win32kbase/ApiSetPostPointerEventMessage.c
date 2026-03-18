/*
 * XREFs of ApiSetPostPointerEventMessage @ 0x1C02080FC
 * Callers:
 *     rimNotifyPointerDeviceChangeClients @ 0x1C0190F00 (rimNotifyPointerDeviceChangeClients.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetPostPointerEventMessage(__int64 a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02962E8;
  if ( qword_1C02962E8 )
  {
    result = (__int64 (*)(void))qword_1C02962E8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02962F0;
      if ( qword_1C02962F0 )
        return (__int64 (*)(void))qword_1C02962F0(a1, 568LL, a3, 1LL);
    }
  }
  return result;
}
