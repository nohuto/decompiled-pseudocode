/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C00E77E2
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 *     rimProcessHidInput @ 0x1C01A4D04 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01A7080 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     IsProcessHidRawInputSupported @ 0x1C0080084 (IsProcessHidRawInputSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetProcessHidRawInput(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))IsProcessHidRawInputSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C02962A0;
    if ( qword_1C02962A0 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02962A0(a1, a2, a3);
  }
  return result;
}
