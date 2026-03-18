/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C014B660
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D358C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(
        unsigned int a1,
        void *a2,
        unsigned int a3,
        NSInstrumentation::CLeakTrackingAllocator *a4,
        unsigned __int64 a5,
        int a6)
{
  __int64 v7; // r12
  void *QuotaZInit; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 CurrentProcessWin32Process; // rax
  char v19; // al
  __int64 *v20; // rdi
  __int64 CurrentProcess; // rax
  __int64 v22; // r8
  BOOL v23; // ecx
  int v24; // ecx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int128 *v30; // rcx
  ULONG64 v31; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int128 v41; // [rsp+70h] [rbp-188h] BYREF
  __int64 v42; // [rsp+80h] [rbp-178h]
  __int128 v43; // [rsp+90h] [rbp-168h]
  __int128 v44; // [rsp+A0h] [rbp-158h]
  __int128 v45; // [rsp+B0h] [rbp-148h]
  __int128 v46; // [rsp+C0h] [rbp-138h]
  __int128 v47; // [rsp+D0h] [rbp-128h]
  __int128 v48; // [rsp+E0h] [rbp-118h]
  __int128 v49; // [rsp+F0h] [rbp-108h]
  __int128 v50; // [rsp+100h] [rbp-F8h]
  __int128 v51; // [rsp+110h] [rbp-E8h]
  _OWORD v52[9]; // [rsp+120h] [rbp-D8h] BYREF

  v7 = a3;
  QuotaZInit = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  memset(v52, 0, sizeof(v52));
  LOBYTE(v10) = 1;
  v14 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v10, v11, v12, v13);
  gptiCurrent = v14;
  if ( v14 )
  {
    *((_DWORD *)v14 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v15 = v16 & CurrentProcessWin32Process;
    }
    if ( v15 && (*(_DWORD *)(v15 + 12) & 0x8000) != 0 )
    {
      v16 = (__int64)gptiCurrent;
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v19 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v19 = 0;
      if ( v19 )
      {
        while ( 1 )
        {
          v20 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v20[2] = 0LL;
          if ( !*(_DWORD *)(*v20 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v20);
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v16, v15, v17);
  v23 = 0;
  if ( CurrentProcess )
    v23 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( !v23 )
  {
    v24 = 5;
LABEL_18:
    v25 = 0;
    UserSetLastError(v24);
    goto LABEL_35;
  }
  if ( !(_DWORD)v7 )
  {
    v24 = 87;
    goto LABEL_18;
  }
  v30 = (__int128 *)a5;
  v31 = a5 + 144;
  if ( a5 + 144 < a5 || v31 > MmUserProbeAddress )
    v30 = (__int128 *)MmUserProbeAddress;
  v43 = *v30;
  v44 = v30[1];
  v45 = v30[2];
  v46 = v30[3];
  v47 = v30[4];
  v48 = v30[5];
  v49 = v30[6];
  v50 = v30[7];
  v51 = v30[8];
  v32 = (NSInstrumentation::CLeakTrackingAllocator *)v52;
  v52[0] = v43;
  v52[1] = v44;
  v52[2] = v45;
  v52[3] = v46;
  v52[4] = v47;
  v52[5] = v48;
  v52[6] = v49;
  v52[7] = v50;
  v52[8] = v51;
  v33 = 4 * v7;
  if ( 4 * v7 )
  {
    if ( ((unsigned __int8)a4 & (PsGetCurrentProcessWow64Process(v52, v31, v22) == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v32 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a4 + v33);
    v31 = MmUserProbeAddress;
    if ( (unsigned __int64)a4 + v33 > MmUserProbeAddress || v32 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v32, v31, 4 * v7, 0x6E616D55u);
  if ( QuotaZInit )
  {
    if ( qword_1C0295450 )
      qword_1C0295450(QuotaZInit, &v41, Win32FreePool);
    memmove(QuotaZInit, a4, 4 * v7);
    v38 = SGDGetUserSessionState(v35, v34, v36, v37);
    v25 = CTouchProcessor::SetManipulationInputTarget(
            *(CTouchProcessor **)(v38 + 3424),
            a1,
            v7,
            (unsigned int *)QuotaZInit,
            a2,
            (struct TELEMETRY_POINTER_FRAME_TIMES *)v52,
            a6);
  }
  else
  {
    v25 = 0;
    UserSetLastError(8);
  }
LABEL_35:
  if ( QuotaZInit && qword_1C0295558 )
    qword_1C0295558(&v41);
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return v25;
}
