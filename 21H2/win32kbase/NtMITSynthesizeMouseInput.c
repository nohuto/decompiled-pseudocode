/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C0155C20
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C015315C (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01FA0CC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // rcx
  struct tagKERNELHANDLETABLEENTRY *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rbx
  __int64 MouseProcessor; // rax
  __int64 *v26; // [rsp+30h] [rbp-78h] BYREF
  __int128 v27; // [rsp+38h] [rbp-70h] BYREF
  __int128 v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  __int128 v30; // [rsp+68h] [rbp-40h]
  __int128 v31; // [rsp+78h] [rbp-30h]
  __int64 v32; // [rsp+88h] [rbp-20h]
  __int64 v33; // [rsp+C8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v26, "MITSynthesizeMouseInput", 0LL);
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v6 = 0;
  LODWORD(v7) = 0;
  v33 = 0LL;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v13 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v13 = 0;
        }
        if ( v13 )
        {
          while ( 1 )
          {
            v15 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v15 + 2) = 0LL;
            v14 = *(_QWORD *)v15;
            if ( !*(_DWORD *)(*(_QWORD *)v15 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v12);
              v14 = *(_QWORD *)v15;
            }
            HMUnlockObject(v14);
          }
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v30 = *(_OWORD *)a1;
    v31 = *(_OWORD *)(a1 + 16);
    v32 = *(_QWORD *)(a1 + 32);
    v27 = v30;
    v28 = v31;
    v29 = v32;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v7 = *a3;
      v33 = *a3;
    }
    InputTraceLogging::Mouse::InjectInput();
    v23 = (unsigned __int64)&v33 & -(__int64)((_DWORD)v7 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
      v6 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, &v27, a2, v23);
  }
  else
  {
    UserSetLastError(5LL, v16, v17, v18);
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v26);
  return v6;
}
