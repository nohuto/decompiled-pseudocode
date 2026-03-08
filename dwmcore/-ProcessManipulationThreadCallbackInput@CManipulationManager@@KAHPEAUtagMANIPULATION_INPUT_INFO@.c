/*
 * XREFs of ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019C918
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801291A0 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18019AD14 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18019B88C (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x18019CC04 (-QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18019CCAC (-QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18019D43C (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x18019FA84 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180278ADC (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall CManipulationManager::ProcessManipulationThreadCallbackInput(
        struct tagMANIPULATION_INPUT_INFO *a1,
        CManipulationManager *this)
{
  int *v4; // r15
  unsigned __int64 v5; // rbx
  unsigned int v6; // r12d
  int v7; // eax
  __int64 v8; // rcx
  struct CManipulationFrame *v9; // rbx
  LARGE_INTEGER v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-10h] BYREF
  struct CManipulationFrame *v19; // [rsp+80h] [rbp+40h] BYREF
  struct CManipulationFrame *v20; // [rsp+90h] [rbp+50h] BYREF
  struct CManipulationFrame *v21; // [rsp+98h] [rbp+58h] BYREF

  v19 = 0LL;
  if ( !a1 )
    goto LABEL_22;
  v4 = (int *)((char *)a1 + 148);
  v5 = *((_QWORD *)a1 + 30);
  v6 = *((_DWORD *)a1 + 42);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&MANIPULATION_FRAME_RECEIVED,
      v6,
      *v4);
  InputTraceLogging::GestureTargeting::QueueFrame(v5, *(_QWORD *)a1, v6, *v4);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v19);
  v7 = CManipulationFrame::Create(a1, &v19);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x15Cu, 0LL);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v9 = v19;
    v10 = PerformanceCount;
    *(LARGE_INTEGER *)((char *)v9 + (IsVailContainer() ? 0x48 : 0) + 72) = v10;
    InputTraceLogging::TelemetryDebug::GestureTargeting::QueueFrame((struct CManipulationFrame *)((char *)v9 + 32));
    v21 = v9;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v21);
    v20 = v9;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v20);
    v13 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v12, v11, (__int64 *)&v20);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v21);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x164u, 0LL);
    }
    else
    {
      if ( GetCurrentThreadId() == CManipulationManager::s_dwManipulationThreadId && this )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&MANIPULATION_FRAME_QUEUED,
            v6,
            *v4);
        CManipulationManager::OnInput(this);
        goto LABEL_22;
      }
      if ( SetEvent(qword_1803E2918) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&MANIPULATION_FRAME_QUEUED,
            v6,
            *v4);
        goto LABEL_22;
      }
      CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(&CManipulationManager::s_InputQueue, &v20, 0LL, 0LL);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v20);
    }
  }
  AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
  dword_1803E6EA0 = GetCurrentThreadId();
  v15 = 0LL;
  v16 = (unsigned int)*v4;
  if ( (_DWORD)v16 )
  {
    do
    {
      CManipulationManager::s_rgPointerIds[v15] = *((_DWORD *)a1 + 60 * (unsigned int)v15 + 41);
      v15 = (unsigned int)(v15 + 1);
      v16 = (unsigned int)*v4;
    }
    while ( (unsigned int)v15 < (unsigned int)v16 );
  }
  if ( (*((_DWORD *)a1 + 43) & 0x180000) == 0 )
    SetManipulationInputTarget(*((unsigned int *)a1 + 42), 0LL, v16, CManipulationManager::s_rgPointerIds, a1);
  dword_1803E6EA0 = 0;
  ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
LABEL_22:
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v19);
  return 1LL;
}
