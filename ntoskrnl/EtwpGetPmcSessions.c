__int64 __fastcall EtwpGetPmcSessions(__int64 a1, unsigned int *a2)
{
  int v3; // r13d
  unsigned int CurrentSiloMaxLoggers; // ebx
  __int64 v5; // r14
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned __int16 v8; // r15
  __int64 v9; // r8
  struct _LIST_ENTRY *Flink; // r9
  unsigned int v11; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned int v18; // [rsp+68h] [rbp+10h]
  struct _LIST_ENTRY *v19; // [rsp+70h] [rbp+18h]

  v3 = 0;
  CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
  v18 = CurrentSiloMaxLoggers;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  v19 = Flink;
  if ( CurrentSiloMaxLoggers )
  {
    v11 = 0;
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      LOBYTE(v9) = 1;
      --CurrentThread->KernelApcDisable;
      v13 = EtwpAcquireLoggerContextByLoggerId(Flink, v11, v9);
      if ( !v13 )
        goto LABEL_15;
      if ( (int)EtwpCheckLoggerControlAccess(1u) >= 0 )
        break;
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      LOBYTE(v15) = 1;
      EtwpReleaseLoggerContext(v13, v15);
LABEL_16:
      Flink = v19;
      v11 = ++v8;
      if ( v8 >= CurrentSiloMaxLoggers )
        goto LABEL_17;
    }
    if ( *(_QWORD *)(v13 + 1016) )
    {
      if ( v5 )
      {
        if ( v7 > *a2 )
          v6 = -1073741789;
        else
          *(_DWORD *)v5 = v3;
      }
      v5 = a1 + v7;
      v14 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v13 + 1016) + 8LL) + *(_DWORD *)(*(_QWORD *)(v13 + 1016) + 20LL));
      v3 = 4 * v14 + 16;
      v7 += v3;
      if ( v7 > *a2 )
      {
        v6 = -1073741789;
      }
      else
      {
        *(_DWORD *)v5 = 0;
        *(_WORD *)(v5 + 4) = v8;
        *(_DWORD *)(v5 + 8) = *(_DWORD *)(*(_QWORD *)(v13 + 1016) + 20LL);
        *(_DWORD *)(v5 + 12) = *(_DWORD *)(*(_QWORD *)(v13 + 1016) + 8LL);
        memmove(
          (void *)(v5 + 16),
          **(const void ***)(v13 + 1016),
          4LL * *(unsigned int *)(*(_QWORD *)(v13 + 1016) + 20LL));
        memmove(
          (void *)(v5 + 16 + 4LL * *(unsigned int *)(*(_QWORD *)(v13 + 1016) + 20LL)),
          (const void *)(*(_QWORD *)(v13 + 1016) + 12LL),
          2LL * *(unsigned int *)(*(_QWORD *)(v13 + 1016) + 8LL));
        CurrentSiloMaxLoggers = v18;
      }
    }
    LOBYTE(v14) = 1;
    EtwpReleaseLoggerContext(v13, v14);
LABEL_15:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_16;
  }
LABEL_17:
  result = v6;
  *a2 = v7;
  return result;
}
