/*
 * XREFs of xxxSendMessageBSM @ 0x1C00D3120
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00B3E28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall xxxSendMessageBSM(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax

  result = qword_1C02D6A90;
  if ( qword_1C02D6A90 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_1C02D6A90(
                                                                                     0LL,
                                                                                     a2,
                                                                                     a3,
                                                                                     0LL,
                                                                                     a5,
                                                                                     1);
  return result;
}
