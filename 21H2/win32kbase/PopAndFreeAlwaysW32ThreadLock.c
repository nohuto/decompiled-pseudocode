/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C009771C
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C029BE28;
  if ( qword_1C029BE28 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C029BE28(a1);
  return result;
}
