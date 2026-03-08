/*
 * XREFs of xxxWindowEvent @ 0x1C00D40F8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0082990 (xxxInternalActivateKeyboardLayout.c)
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall xxxWindowEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax

  result = qword_1C02D6710;
  if ( qword_1C02D6710 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_1C02D6710(a1, a2, a3, a4, a5);
  return result;
}
