void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // ebp
  int v5; // esi
  bool v6; // bl
  __int64 v7; // rax
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 v9; // rax
  bool v10; // di
  __int64 v11; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  signed __int32 *v24; // r8
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v28[3]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v29; // [rsp+58h] [rbp-30h]
  int v30; // [rsp+80h] [rbp-8h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h] BYREF

  ProcNumber = 0;
  v4 = (unsigned int)SystemArgument2;
  v32 = 0;
  v5 = (int)SystemArgument1;
  v27 = 0LL;
  v33 = 0LL;
  memset(v28, 0, sizeof(v28));
  v6 = 1;
  v29 = 0LL;
  v7 = PnprContext;
  *DeferredContext = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)SystemArgument1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v6 = (v30 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)SystemArgument1 )
      _mm_pause();
  }
  if ( KeGetProcessorNumberFromIndex((ULONG)SystemArgument2, &ProcNumber) < 0 )
    goto LABEL_65;
  v9 = *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group);
  if ( !_bittest64(&v9, ProcNumber.Number) )
    goto LABEL_33;
  while ( *(int *)(PnprContext + 200) < 1 )
    _mm_pause();
  KeSuspendClockTimerSafe();
  KeSaveIptStateBeforeProcessorGoesOffline();
  v10 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v10 = (int)KeSaveExtendedAndSupervisorState(
                 (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                 (__int64 *)v28) >= 0;
  KeSaveProcessorSpecificFeatures();
  if ( (int)HalGetProcessorIdByNtNumber(v4) < 0 )
LABEL_65:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 33184) & 2) != 0 )
  {
    LOBYTE(v11) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(PnprContext + 33224))(*(_QWORD *)(PnprContext + 33168), v32, v11);
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    ((void (__fastcall *)(_QWORD, __int64 *))off_140C01AF8[0])(*(_QWORD *)(PnprContext + 33160), &v27);
  ((void (__fastcall *)(_QWORD))off_140C01A90[0])(*(_QWORD *)(PnprContext + 33160));
  if ( (*(_DWORD *)(PnprContext + 33184) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(PnprContext + 33224))(*(_QWORD *)(PnprContext + 33168), v32, 0LL);
  KeResumeClockTimerSafe();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      _m_prefetchw(v13);
      v14 = *v13;
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange(v13, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  KeRestoreProcessorSpecificFeatures((__int64)&v33);
  if ( v10 )
    KeRestoreExtendedAndSupervisorState((__int64)v28);
  KeRestoreIptStateAfterProcessorComesOnline(v17, v16, v18);
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
LABEL_33:
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    while ( *(int *)(PnprContext + 200) < 2 )
      _mm_pause();
    if ( (int)PnprMirrorMarkedPages() < 0 )
    {
      v19 = PnprContext;
      v20 = *(_DWORD *)(PnprContext + 33272);
      if ( !v20 )
        v20 = 2266;
      *(_DWORD *)(PnprContext + 33272) = v20;
      v21 = *(_DWORD *)(v19 + 33276);
      if ( !v21 )
        v21 = 1;
      *(_DWORD *)(v19 + 33276) = v21;
    }
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  }
  while ( *(int *)(PnprContext + 200) < 4 )
    _mm_pause();
  PnprGetStackLimits((char **)(PnprContext + 216 + 8LL * v4), PnprContext + 16600 + 8LL * v4);
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    v22 = *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group);
    if ( _bittest64(&v22, ProcNumber.Number) )
    {
      ((void (__fastcall *)(__int64))off_140C01B00[0])(v27);
    }
    else if ( v6 )
    {
      v23 = KeGetCurrentPrcb();
      v24 = (signed __int32 *)v23->SchedulerAssist;
      if ( v24 )
      {
        _m_prefetchw(v24);
        v25 = *v24;
        do
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange(v24, v25 & 0xFFDFFFFF, v25);
        }
        while ( v26 != v25 );
        if ( (v25 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
