/*
 * XREFs of xxxSendMessageBSM @ 0x1C00C3868
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall xxxSendMessageBSM(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax

  result = qword_1C0295918;
  if ( qword_1C0295918 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_1C0295918(
                                                                                     0LL,
                                                                                     a2,
                                                                                     a3,
                                                                                     0LL,
                                                                                     a5,
                                                                                     1);
  return result;
}
