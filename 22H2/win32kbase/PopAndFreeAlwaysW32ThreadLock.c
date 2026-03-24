/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C0085CFC
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001E9F0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     xxxCreateThreadInfo @ 0x1C003ED88 (xxxCreateThreadInfo.c)
 *     xxxResetDisplayDevice @ 0x1C0077600 (xxxResetDisplayDevice.c)
 *     NtUserSystemParametersInfo @ 0x1C0135470 (NtUserSystemParametersInfo.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019CA50 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02560E8;
  if ( qword_1C02560E8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02560E8(a1);
  return result;
}
