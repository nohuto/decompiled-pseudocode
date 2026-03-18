/*
 * XREFs of PowerOffGdi @ 0x1C00C5684
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*PowerOffGdi())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295938;
  if ( qword_1C0295938 )
    return (__int64 (*)(void))qword_1C0295938();
  return result;
}
