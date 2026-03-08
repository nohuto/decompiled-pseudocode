/*
 * XREFs of NtUserGetPointerFrameTimes @ 0x1C00EEAD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01F8064 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 */

__int64 __fastcall NtUserGetPointerFrameTimes(__int64 a1, __int64 a2, volatile void *a3, __int64 a4)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // r15
  int PointerFrameTimesInternal; // ebx
  __int64 v11; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v5 = (unsigned int)a2;
  v6 = a1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  PointerFrameTimesInternal = 0;
  if ( !v6 || HIWORD(v6) || (v11 = (unsigned int)(v5 - 1), (unsigned int)v11 > 0x63) || !a3 || v6 == 1 )
  {
    UserSetLastError(87);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, v7, v11, HIWORD(v6));
    ProbeForWrite(a3, 144 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    v17 = SGDGetUserSessionState(v14, v13, v15, v16);
    PointerFrameTimesInternal = CTouchProcessor::GetPointerFrameTimesInternal(
                                  *(CTouchProcessor **)(v17 + 3424),
                                  v9,
                                  v6,
                                  v5,
                                  (struct TELEMETRY_POINTER_FRAME_TIMES *)a3);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return PointerFrameTimesInternal;
}
