unsigned __int64 __fastcall RtlpLookupDynamicUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rsi
  signed __int64 *p_UserCetLogging; // rdi
  _DWORD *v7; // r9
  unsigned int v8; // ecx
  int v9; // r11d
  int v10; // r8d
  int v11; // r10d
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  bool v14; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int128 v19; // [rsp+30h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( !*(_QWORD *)&Process[1].PrimaryGroup )
    return 0LL;
  --CurrentThread->SpecialApcDisable;
  p_UserCetLogging = (signed __int64 *)&Process[1].UserCetLogging;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].UserCetLogging, 0LL);
  v7 = *(_DWORD **)&Process[1].PrimaryGroup;
  if ( !v7
    || *v7 == 1
    || ((KiSpeculationFeatures & 0x20000000000LL) == 0 ? (v8 = 0) : (v8 = dword_140C65500 << 12),
        v9 = 1,
        v10 = *v7 - 1,
        v10 < 1) )
  {
LABEL_20:
    if ( _InterlockedCompareExchange64(p_UserCetLogging, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_UserCetLogging);
    KeAbPostRelease((ULONG_PTR)p_UserCetLogging);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  while ( 1 )
  {
    v11 = (v9 + v10) >> 1;
    v12 = *(_QWORD *)&v7[6 * v11 + 6];
    v13 = v12 + (unsigned int)v7[6 * v11 + 8];
    if ( a1 < v12 )
    {
      if ( !v11 )
        goto LABEL_20;
      v10 = v11 - 1;
      goto LABEL_19;
    }
    if ( a1 > 0x7FFFFFFEFFFFLL && v8 )
    {
      if ( a1 < v13 )
        break;
      if ( a1 < v13 + v8 && v12 != PsNtosImageBase && v12 != PsHalImageBase )
      {
        *(_QWORD *)&v19 = &RtlRetpolineStubsFunctionTable;
        goto LABEL_28;
      }
    }
    if ( a1 < v13 )
      break;
    v9 = v11 + 1;
LABEL_19:
    if ( v10 < v9 )
      goto LABEL_20;
  }
  v19 = *(_OWORD *)&v7[6 * v11 + 4];
  v8 = *(_QWORD *)&v7[6 * v11 + 8];
  v13 = *(_QWORD *)&v7[6 * v11 + 6];
LABEL_28:
  *(_QWORD *)(a2 + 8) = v13;
  *(_DWORD *)(a2 + 16) = v8;
  if ( _InterlockedCompareExchange64(p_UserCetLogging, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_UserCetLogging);
  KeAbPostRelease((ULONG_PTR)p_UserCetLogging);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v16 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)a2 = v16;
  v17 = (unsigned int)(12 * *(_DWORD *)(v19 + 84));
  *(_DWORD *)(a2 + 20) = v17;
  if ( (_DWORD)v17 )
  {
    if ( (v16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = v16 + v17;
    if ( v18 > 0x7FFFFFFF0000LL || v18 < v16 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return v16;
}
