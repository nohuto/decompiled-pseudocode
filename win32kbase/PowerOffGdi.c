/*
 * XREFs of PowerOffGdi @ 0x1C00D49F4
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00B3E28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*PowerOffGdi())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D6AB0;
  if ( qword_1C02D6AB0 )
    return (__int64 (*)(void))qword_1C02D6AB0();
  return result;
}
