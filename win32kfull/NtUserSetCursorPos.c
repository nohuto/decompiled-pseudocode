/*
 * XREFs of NtUserSetCursorPos @ 0x1C01DC530
 * Callers:
 *     <none>
 * Callees:
 *     UserGetLastError @ 0x1C0015748 (UserGetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D6A80 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A9CBC (-zzzSetCursorPos@@YA_NHH@Z.c)
 */

__int64 __fastcall NtUserSetCursorPos(unsigned int a1, unsigned int a2)
{
  char v4; // bl
  char v5; // dl
  unsigned __int8 v6; // al
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // rsi
  char v9; // di
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 *v12; // [rsp+80h] [rbp+18h] BYREF

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x14u,
      0x1Fu,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
      a1,
      a2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v12, "SetCursorPos", 0LL);
  EnterCrit(0LL, 0LL);
  v6 = zzzSetCursorPos(a1, a2);
  v8 = v6;
  if ( !v6 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = UserGetLastError();
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v9,
        (__int64)gFullLog,
        2u,
        0x14u,
        0x20u,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
        v11);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v12);
  return v8;
}
