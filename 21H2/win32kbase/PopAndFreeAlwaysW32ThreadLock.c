/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C0084DFC
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001D580 (NtUserDisplayConfigGetDeviceInfo.c)
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 *     NtUserSystemParametersInfo @ 0x1C01351A0 (NtUserSystemParametersInfo.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019CB20 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02570E8;
  if ( qword_1C02570E8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02570E8(a1);
  return result;
}
