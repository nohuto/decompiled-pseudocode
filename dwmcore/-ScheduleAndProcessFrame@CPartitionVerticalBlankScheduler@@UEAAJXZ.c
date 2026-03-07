__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  char *v1; // rbx
  HANDLE CurrentThread; // rax
  __int64 v4; // rsi
  int updated; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // r8
  int v13; // edi
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rcx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v24[2]; // [rsp+D0h] [rbp-28h] BYREF

  v1 = (char *)this + 4640;
  if ( *((_BYTE *)this + 4648) && *((_BYTE *)this + 4649) )
  {
    v15 = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 4640));
    v24[0] = v15;
    if ( v1[10] )
    {
      if ( *(_DWORD *)v1 == -1 )
        *(_QWORD *)v1 = 0LL;
      *((_QWORD *)v1 + 4) = v15;
      *(_OWORD *)&v1[16 * *((unsigned int *)v1 + 1) + 40] = *(_OWORD *)(v1 + 24);
      v16 = *(_DWORD *)v1;
      v17 = *((_DWORD *)v1 + 1);
      if ( *(_DWORD *)v1 != v17 )
      {
        v18 = *(_DWORD *)v1;
        do
        {
          v19 = *(_QWORD *)&v1[16 * v18 + 40];
          if ( v19 >= *((_QWORD *)v1 + 4) - 10000000LL )
            break;
          *((_QWORD *)v1 + 2) += v19 - *(_QWORD *)&v1[16 * v18 + 48];
          *(_QWORD *)&v1[16 * v18 + 48] = 0LL;
          *(_QWORD *)&v1[16 * v18 + 40] = 0LL;
          v16 = (unsigned __int8)(*(_DWORD *)v1 + 1);
          *(_DWORD *)v1 = v16;
          v18 = v16;
          v17 = *((_DWORD *)v1 + 1);
        }
        while ( v16 != v17 );
      }
      v20 = *((_QWORD *)v1 + 2) + *(_QWORD *)&v1[16 * v17 + 48] - *(_QWORD *)&v1[16 * v17 + 40];
      v21 = (unsigned __int8)(v17 + 1);
      *((_QWORD *)v1 + 2) = v20;
      *((_DWORD *)v1 + 1) = v21;
      if ( v16 == v21 )
      {
        v22 = 2LL * v16;
        *((_QWORD *)v1 + 2) = v20 + *(_QWORD *)&v1[16 * v16 + 40] - *(_QWORD *)&v1[16 * v16 + 48];
        *(_QWORD *)&v1[8 * v22 + 48] = 0LL;
        *(_QWORD *)&v1[8 * v22 + 40] = 0LL;
        *(_DWORD *)v1 = (unsigned __int8)(*v1 + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CDebugFrameCounter *)v1, v24);
  }
  CPartitionVerticalBlankScheduler::WaitForWork(this);
  CPartitionVerticalBlankScheduler::WaitForNextFrameStart(this);
  if ( v1[8] )
  {
    *(_WORD *)(v1 + 9) = 1;
    *((_QWORD *)v1 + 4) = 0LL;
    *((_QWORD *)v1 + 3) = 0LL;
    *((_QWORD *)v1 + 3) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v1);
  }
  CurrentThread = GetCurrentThread();
  if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
  {
    qword_1803E2BF0 = CycleTime;
  }
  else
  {
    qword_1803E2BF0 = 0LL;
    CycleTime = 0LL;
  }
  v4 = *((_QWORD *)this + 526);
  updated = CPartitionVerticalBlankScheduler::UpdateTimes(this);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x250u, 0LL);
  }
  else
  {
    CPartitionVerticalBlankScheduler::ProcessFrame(this);
    v8 = *((_QWORD *)this + 526);
    if ( *(_BYTE *)(v8 + 169) || *(_BYTE *)(v8 + 171) )
      CPartitionVerticalBlankScheduler::UpdateFrameIndices(this);
  }
  v9 = *((_QWORD *)g_pComposition + 27);
  if ( *(_BYTE *)(v9 + 581) && !*(_BYTE *)(v9 + 582) )
    dword_1803E2A10 |= 0x200u;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), 4LL);
  v13 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x269u, 0LL);
  if ( !v7 || v7 >= 0 && v13 < 0 )
    v7 = v13;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v12,
      1LL,
      v24);
  if ( v4 )
    CTelemetryFrames::FrameEnded(*(_BYTE *)(v4 + 169), *(_BYTE *)(v4 + 224), *(_QWORD *)(v4 + 88));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start,
      v12,
      1LL,
      v24);
  if ( v7 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedError(v7, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v7;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v7);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (unsigned int)v7;
}
