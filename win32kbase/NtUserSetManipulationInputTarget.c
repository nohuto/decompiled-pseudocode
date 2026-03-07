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
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcessWin32Process; // rax
  char v17; // al
  __int64 *v18; // rdi
  __int64 CurrentProcess; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  BOOL v22; // ecx
  int v23; // ecx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 *v29; // rcx
  ULONG64 v30; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int128 v40; // [rsp+70h] [rbp-188h] BYREF
  __int64 v41; // [rsp+80h] [rbp-178h]
  __int128 v42; // [rsp+90h] [rbp-168h]
  __int128 v43; // [rsp+A0h] [rbp-158h]
  __int128 v44; // [rsp+B0h] [rbp-148h]
  __int128 v45; // [rsp+C0h] [rbp-138h]
  __int128 v46; // [rsp+D0h] [rbp-128h]
  __int128 v47; // [rsp+E0h] [rbp-118h]
  __int128 v48; // [rsp+F0h] [rbp-108h]
  __int128 v49; // [rsp+100h] [rbp-F8h]
  __int128 v50; // [rsp+110h] [rbp-E8h]
  _OWORD v51[9]; // [rsp+120h] [rbp-D8h] BYREF

  v7 = a3;
  QuotaZInit = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset(v51, 0, sizeof(v51));
  LOBYTE(v10) = 1;
  v11 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v10);
  gptiCurrent = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v13 & CurrentProcessWin32Process;
    }
    if ( v12 && (*(_DWORD *)(v12 + 12) & 0x8000) != 0 )
    {
      v13 = (__int64)gptiCurrent;
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v17 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v17 = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v18[2] = 0LL;
          if ( !*(_DWORD *)(*v18 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v18);
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
  v22 = 0;
  if ( CurrentProcess )
    v22 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( !v22 )
  {
    v23 = 5;
LABEL_18:
    v24 = 0;
    UserSetLastError(v23);
    goto LABEL_35;
  }
  if ( !(_DWORD)v7 )
  {
    v23 = 87;
    goto LABEL_18;
  }
  v29 = (__int128 *)a5;
  v30 = a5 + 144;
  if ( a5 + 144 < a5 || v30 > MmUserProbeAddress )
    v29 = (__int128 *)MmUserProbeAddress;
  v42 = *v29;
  v43 = v29[1];
  v44 = v29[2];
  v45 = v29[3];
  v46 = v29[4];
  v47 = v29[5];
  v48 = v29[6];
  v49 = v29[7];
  v50 = v29[8];
  v31 = (NSInstrumentation::CLeakTrackingAllocator *)v51;
  v51[0] = v42;
  v51[1] = v43;
  v51[2] = v44;
  v51[3] = v45;
  v51[4] = v46;
  v51[5] = v47;
  v51[6] = v48;
  v51[7] = v49;
  v51[8] = v50;
  v32 = 4 * v7;
  if ( 4 * v7 )
  {
    if ( ((unsigned __int8)a4 & (PsGetCurrentProcessWow64Process(v51, v30, v20, v21) == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v31 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a4 + v32);
    v30 = MmUserProbeAddress;
    if ( (unsigned __int64)a4 + v32 > MmUserProbeAddress || v31 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v31, v30, 4 * v7, 0x6E616D55u);
  if ( QuotaZInit )
  {
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(QuotaZInit, &v40, Win32FreePool);
    memmove(QuotaZInit, a4, 4 * v7);
    v37 = SGDGetUserSessionState(v34, v33, v35, v36);
    v24 = CTouchProcessor::SetManipulationInputTarget(
            *(CTouchProcessor **)(v37 + 3424),
            a1,
            v7,
            (unsigned int *)QuotaZInit,
            a2,
            (struct TELEMETRY_POINTER_FRAME_TIMES *)v51,
            a6);
  }
  else
  {
    v24 = 0;
    UserSetLastError(8);
  }
LABEL_35:
  if ( QuotaZInit && qword_1C02D66D0 )
    qword_1C02D66D0(&v40);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v24;
}
