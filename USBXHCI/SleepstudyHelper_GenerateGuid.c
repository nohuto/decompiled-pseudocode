/*
 * XREFs of SleepstudyHelper_GenerateGuid @ 0x1C0054D38
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_GenerateGuid(__int64 a1, __int64 a2, GUID *a3)
{
  __int64 result; // rax

  if ( !qword_1C0064AF0 || (result = qword_1C0064AF0(), (_DWORD)result == -1073741637) )
  {
    result = 0LL;
    *a3 = GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED;
  }
  return result;
}
