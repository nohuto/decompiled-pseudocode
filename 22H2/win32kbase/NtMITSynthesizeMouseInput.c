/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C012C170
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0042830 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0042964 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0043604 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0043E8C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0128A10 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BF960 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  CInputThread *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 MouseProcessor; // rax
  __int64 *v14; // [rsp+30h] [rbp-78h] BYREF
  __int128 v15; // [rsp+38h] [rbp-70h] BYREF
  __int128 v16; // [rsp+48h] [rbp-60h]
  __int64 v17; // [rsp+58h] [rbp-50h]
  __int128 v18; // [rsp+68h] [rbp-40h]
  __int128 v19; // [rsp+78h] [rbp-30h]
  __int64 v20; // [rsp+88h] [rbp-20h]
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v14, "MITSynthesizeMouseInput", 0LL, a4);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v7 = 0;
  LODWORD(v8) = 0;
  v21 = 0LL;
  EnterCrit(0, 1);
  if ( CInputThread::IsInputThread(v9) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v18 = *(_OWORD *)a1;
    v19 = *(_OWORD *)(a1 + 16);
    v20 = *(_QWORD *)(a1 + 32);
    v15 = v18;
    v16 = v19;
    v17 = v20;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v8 = *a3;
      v21 = *a3;
    }
    InputTraceLogging::Mouse::InjectInput();
    v11 = (unsigned __int64)&v21 & -(__int64)((_DWORD)v8 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
      v7 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, &v15, a2, v11);
  }
  else
  {
    UserSetLastError(5LL, v10);
  }
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v14);
  return v7;
}
