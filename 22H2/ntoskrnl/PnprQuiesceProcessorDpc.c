/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x1409AE4D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSaveExtendedAndSupervisorState @ 0x14031A61C (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x14031C008 (KeRestoreExtendedAndSupervisorState.c)
 *     KeGetProcessorNumberFromIndex @ 0x14033E500 (KeGetProcessorNumberFromIndex.c)
 *     HalGetProcessorIdByNtNumber @ 0x140376FC0 (HalGetProcessorIdByNtNumber.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x140383644 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x140383D38 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x140383DBC (KeRestoreProcessorSpecificFeatures.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PnprGetStackLimits @ 0x14050F4B8 (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x140513C54 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x140513D30 (KeSuspendClockTimerSafe.c)
 *     PnprMirrorMarkedPages @ 0x1409AE16C (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG v4; // r14d
  int v5; // esi
  bool v6; // bl
  __int64 v7; // rax
  __int64 Group; // r15
  __int64 v9; // rbp
  bool v10; // di
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  _OWORD v15[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+90h] [rbp-8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+20h] BYREF

  ProcNumber = 0;
  v4 = (unsigned int)SystemArgument2;
  v19 = 0;
  v5 = (int)SystemArgument1;
  v20 = 0LL;
  memset(v15, 0, sizeof(v15));
  v6 = 1;
  v16 = 0LL;
  v7 = PnprContext;
  *DeferredContext = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)SystemArgument1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _disable();
    v6 = (v17 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)SystemArgument1 )
      _mm_pause();
  }
  if ( KeGetProcessorNumberFromIndex((ULONG)SystemArgument2, &ProcNumber) < 0 )
    goto LABEL_53;
  Group = ProcNumber.Group;
  v9 = 1LL << ProcNumber.Number;
  if ( ((1LL << ProcNumber.Number) & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group)) == 0 )
    goto LABEL_26;
  while ( *(int *)(PnprContext + 200) < 1 )
    _mm_pause();
  KeSuspendClockTimerSafe();
  KeSaveIptStateBeforeProcessorGoesOffline();
  v10 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v10 = (int)KeSaveExtendedAndSupervisorState(
                 (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                 (PVOID *)v15) >= 0;
  if ( HalGetProcessorIdByNtNumber(v4, &v19) < 0 )
LABEL_53:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 20896) & 2) != 0 )
  {
    LOBYTE(v11) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(PnprContext + 20936))(*(_QWORD *)(PnprContext + 20880), v19, v11);
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    ((void (__fastcall *)(_QWORD, __int64 *))off_140C006E8[0])(*(_QWORD *)(PnprContext + 20872), &v20);
  ((void (__fastcall *)(_QWORD))off_140C00680[0])(*(_QWORD *)(PnprContext + 20872));
  if ( (*(_DWORD *)(PnprContext + 20896) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(PnprContext + 20936))(*(_QWORD *)(PnprContext + 20880), v19, 0LL);
  KeResumeClockTimerSafe();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v6 )
    _enable();
  KeRestoreProcessorSpecificFeatures();
  if ( v10 )
    KeRestoreExtendedAndSupervisorState((__int64)v15);
  KeRestoreIptStateAfterProcessorComesOnline();
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
LABEL_26:
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    while ( *(int *)(PnprContext + 200) < 2 )
      _mm_pause();
    if ( (int)PnprMirrorMarkedPages() < 0 )
    {
      v12 = PnprContext;
      v13 = *(_DWORD *)(PnprContext + 20984);
      if ( !v13 )
        v13 = 2258;
      *(_DWORD *)(PnprContext + 20984) = v13;
      v14 = *(_DWORD *)(v12 + 20988);
      if ( !v14 )
        v14 = 1;
      *(_DWORD *)(v12 + 20988) = v14;
    }
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  }
  while ( *(int *)(PnprContext + 200) < 4 )
    _mm_pause();
  PnprGetStackLimits((char **)(PnprContext + 216 + 8LL * v4), (unsigned __int64 *)(PnprContext + 10456 + 8LL * v4));
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    if ( (v9 & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8 * Group)) != 0 )
    {
      ((void (__fastcall *)(__int64))off_140C006F0[0])(v20);
    }
    else if ( v6 )
    {
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
