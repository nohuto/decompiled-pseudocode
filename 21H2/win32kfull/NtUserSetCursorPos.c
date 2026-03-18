/*
 * XREFs of NtUserSetCursorPos @ 0x1C009BCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C009BDD0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 */

_BOOL8 __fastcall NtUserSetCursorPos(int a1, int a2)
{
  char v4; // bl
  char v5; // dl
  bool v6; // al
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BOOL8 v11; // rsi
  bool v13; // di
  char LastError; // al
  int v15; // r8d
  int v16; // edx
  __int64 *v17; // [rsp+80h] [rbp+18h] BYREF

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0x14u,
      0x1Eu,
      (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
      a1,
      a2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v17, "SetCursorPos", 0LL);
  EnterCrit(0LL, 0LL);
  v6 = zzzSetCursorPos(a1, a2);
  v11 = v6;
  if ( !v6 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v7, v9, v10);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v4;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        20,
        31,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
        LastError);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v17);
  return v11;
}
