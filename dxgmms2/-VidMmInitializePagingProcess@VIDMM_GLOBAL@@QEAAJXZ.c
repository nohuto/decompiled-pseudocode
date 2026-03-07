__int64 __fastcall VIDMM_GLOBAL::VidMmInitializePagingProcess(VIDMM_GLOBAL *this)
{
  int inited; // ebx
  unsigned int v3; // esi
  __int64 v5; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  inited = VIDMM_PAGING_PROCESS::InitPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384), this);
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22786LL);
LABEL_16:
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    goto LABEL_9;
  }
  inited = VidSchCreateSystemDevices(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL));
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22797LL);
    goto LABEL_16;
  }
  inited = VIDMM_GLOBAL::InitDmaPools(this);
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22809LL);
    goto LABEL_16;
  }
  inited = VIDMM_GLOBAL::CreatePagingFenceObjects(this);
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22820LL);
    goto LABEL_16;
  }
  v3 = 0;
  if ( *((_DWORD *)this + 1754) )
  {
    while ( 1 )
    {
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, v3, 0);
      if ( inited < 0 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 1754) )
        goto LABEL_8;
    }
    WdLogSingleEntry1(1LL, 22832LL);
    goto LABEL_16;
  }
LABEL_8:
  inited = VidSchCreateSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL));
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22840LL);
    goto LABEL_16;
  }
LABEL_9:
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inited;
}
