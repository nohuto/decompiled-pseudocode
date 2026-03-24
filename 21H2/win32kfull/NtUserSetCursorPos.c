/*
 * XREFs of NtUserSetCursorPos @ 0x1C00131C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0013114 (WPP_RECORDER_SF_dd.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0013324 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00C14A4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C14D0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserGetLastError @ 0x1C012D0A8 (UserGetLastError.c)
 *     WPP_RECORDER_SF_D @ 0x1C01D9B90 (WPP_RECORDER_SF_D.c)
 */

_BOOL8 __fastcall NtUserSetCursorPos(int a1, int a2, int a3)
{
  int v3; // ebx
  bool v5; // al
  __int64 v6; // rcx
  _BOOL8 v7; // rbx
  char LastError; // al
  int v10; // edx
  int v11; // ecx
  char v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_dd(a1, a2, a3, 25, (__int64)&WPP_6c283040767a3b01506b934f69f549d7_Traceguids, a1, v12);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v13,
    "SetCursorPos",
    0LL);
  EnterCrit(0LL, 1LL);
  v5 = zzzSetCursorPos(a1, v3);
  v7 = v5;
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_D(v11, v10, 20, 26, (__int64)&WPP_6c283040767a3b01506b934f69f549d7_Traceguids, LastError);
  }
  UserSessionSwitchLeaveCrit(v6);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v13);
  return v7;
}
