/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C016BFB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0169070 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C022C888 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  char v13; // al
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 MouseProcessor; // rax
  __int64 v26; // [rsp+28h] [rbp-90h] BYREF
  __int64 *v27; // [rsp+38h] [rbp-80h] BYREF
  __int128 v28; // [rsp+40h] [rbp-78h] BYREF
  __int128 v29; // [rsp+50h] [rbp-68h]
  __int64 v30; // [rsp+60h] [rbp-58h]
  __int128 v31; // [rsp+70h] [rbp-48h]
  __int128 v32; // [rsp+80h] [rbp-38h]
  __int64 v33; // [rsp+90h] [rbp-28h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v27, "MITSynthesizeMouseInput", 0LL);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v6 = 0;
  LODWORD(v7) = 0;
  v26 = 0LL;
  LOBYTE(v8) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v8);
  gptiCurrent = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v12 && (*(_DWORD *)(v12 + 12) & 0x8000) != 0 )
    {
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v13 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v13 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v14[2] = 0LL;
          if ( !*(_DWORD *)(*v14 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v14);
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v31 = *(_OWORD *)a1;
    v32 = *(_OWORD *)(a1 + 16);
    v33 = *(_QWORD *)(a1 + 32);
    v28 = v31;
    v29 = v32;
    v30 = v33;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v7 = *a3;
      v26 = *a3;
    }
    InputTraceLogging::Mouse::InjectInput();
    v19 = (unsigned __int64)&v26 & -(__int64)((_DWORD)v7 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v21, v20, v22, v23);
    if ( MouseProcessor )
      v6 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, &v28, a2, v19);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v27);
  return v6;
}
