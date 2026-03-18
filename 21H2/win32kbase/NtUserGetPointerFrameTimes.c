/*
 * XREFs of NtUserGetPointerFrameTimes @ 0x1C00E5C60
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01CACF4 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 */

__int64 __fastcall NtUserGetPointerFrameTimes(unsigned int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagTHREADINFO *v9; // r15
  int PointerFrameTimesInternal; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v4 = a2;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  PointerFrameTimesInternal = 0;
  if ( !a1 || (v8 = HIWORD(a1), HIWORD(a1)) || (v7 = (unsigned int)(v4 - 1), (unsigned int)v7 > 0x63) || !a3 || a1 == 1 )
  {
    UserSetLastError(87LL, v6, v7, v8);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 144 * v4, CurrentProcessWow64Process != 0 ? 1 : 4);
    PointerFrameTimesInternal = CTouchProcessor::GetPointerFrameTimesInternal(
                                  v12,
                                  v9,
                                  a1,
                                  v4,
                                  (struct TELEMETRY_POINTER_FRAME_TIMES *)a3);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return PointerFrameTimesInternal;
}
