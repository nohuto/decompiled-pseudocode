/*
 * XREFs of WmiQueryTraceInformation @ 0x140833D80
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140832438 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407968F8 (EtwQueryTraceHandleByLoggerName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // r15
  __int64 v8; // r13
  __int64 v9; // rdx
  _DWORD *v10; // r9
  int v11; // r10d
  struct _LIST_ENTRY *Flink; // r12
  int v13; // r10d
  unsigned int *v14; // rax
  unsigned int v15; // esi
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  __int64 *v21; // rax
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  int v25; // r10d
  int v26; // r10d
  unsigned int v27; // esi
  unsigned int j; // r14d
  unsigned int *v29; // r8
  unsigned __int64 v30; // rdx
  int v31; // ecx
  NTSTATUS result; // eax
  unsigned int *v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  __int16 v39; // cx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned int *v42; // r12
  unsigned int v43; // eax
  unsigned int i; // r15d
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v48; // rax
  NTSTATUS v49; // [rsp+24h] [rbp-44h]
  unsigned int v50; // [rsp+28h] [rbp-40h]
  unsigned int v51; // [rsp+28h] [rbp-40h]
  __int64 v52; // [rsp+38h] [rbp-30h] BYREF
  __int64 v53; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *v54; // [rsp+48h] [rbp-20h]
  unsigned int Buffera; // [rsp+90h] [rbp+28h]

  v6 = TraceInformationLength;
  v8 = 0LL;
  v52 = 0LL;
  v49 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  if ( v10 )
    *v10 = 0;
  if ( v11 > 7 )
  {
    v13 = v11 - 8;
    if ( !v13 )
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v14 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, *(_DWORD *)Buffer, 0);
      if ( !v14 )
        return -1073741275;
      v15 = v14[60];
      EtwpReleaseLoggerContext(v14, 0);
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v15;
      if ( RequiredLength )
        *RequiredLength = 4;
      return v49;
    }
    v16 = v13 - 1;
    if ( !v16 )
    {
      if ( !Buffer )
        return -1073741581;
      if ( !RequiredLength )
        return -1073741582;
      *v10 = 32;
      if ( (unsigned int)v6 < 0x20 )
        return -1073741820;
      if ( !TraceInformation )
        return -1073741584;
      v52 = *(_QWORD *)Buffer;
      v51 = (unsigned __int16)v52;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v48 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v51, 0);
      if ( v48 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v48[1];
        *((_DWORD *)TraceInformation + 2) = v48[56];
        *((_DWORD *)TraceInformation + 3) = v48[59];
        *((_DWORD *)TraceInformation + 4) = v48[3];
        *((_DWORD *)TraceInformation + 5) = v48[52];
        *((_DWORD *)TraceInformation + 7) = v48[50];
        *((_DWORD *)TraceInformation + 6) = v48[53];
        EtwpReleaseLoggerContext(v48, 0);
      }
      else
      {
        v49 = -1073741162;
      }
      KeLeaveCriticalRegion();
      return v49;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( RequiredLength )
          *v10 = 8;
        if ( (unsigned __int8)EtwpBootPhase <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v21 = &EtwpDiskIoNotifyRoutines;
        goto LABEL_24;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( RequiredLength )
          *v10 = 120;
        if ( (unsigned __int8)EtwpBootPhase <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)v9 = *(_OWORD *)EtwpAllNotifyRoutines;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)off_140A78A50;
        *(_OWORD *)(v9 + 32) = *(_OWORD *)&off_140A78A60;
        *(_OWORD *)(v9 + 48) = *(_OWORD *)&off_140A78A70;
        *(_OWORD *)(v9 + 64) = *(_OWORD *)off_140A78A80;
        *(_OWORD *)(v9 + 80) = *(_OWORD *)&off_140A78A90;
        *(_OWORD *)(v9 + 96) = *(_OWORD *)off_140A78AA0;
        *(_QWORD *)(v9 + 112) = EtwpTraceRedirectedIo;
        return 0;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( RequiredLength )
          *v10 = 8;
        if ( (unsigned __int8)EtwpBootPhase <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v21 = (__int64 *)&EtwpFltIoNotifyRoutines;
        goto LABEL_24;
      }
      if ( v20 == 2 )
      {
        if ( RequiredLength )
          *v10 = 8;
        if ( (unsigned __int8)EtwpBootPhase <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v21 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_24:
        *(_QWORD *)v9 = v21;
        return 0;
      }
      return -1073741821;
    }
    v53 = 0LL;
    if ( (_DWORD)v6 != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v50 = *(_DWORD *)Buffer;
    v42 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, *(_DWORD *)Buffer, 0);
    if ( !v42 )
      return -1073741275;
    v43 = KeNumberProcessors_0;
    Buffera = KeNumberProcessors_0;
    for ( i = 0; i < v43; ++i )
    {
      v45 = *((_QWORD *)v42 + 137);
      if ( v45 == EtwpHostSiloState )
        v46 = *(_QWORD *)(KeGetPrcb(i) + 34472) + 320LL;
      else
        v46 = *(_QWORD *)(v45 + 4144) + ((unsigned __int64)i << 6);
      v8 += *(_QWORD *)(*(_QWORD *)(v46 + 8) + 8LL * v50);
      v53 = v8;
      v43 = Buffera;
    }
    EtwpReleaseLoggerContext(v42, 0);
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v8;
    goto LABEL_67;
  }
  if ( v11 != 7 )
  {
    if ( v11 )
    {
      v22 = v11 - 1;
      if ( !v22 )
      {
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v38 = *(_DWORD *)Buffer;
        if ( *(_DWORD *)Buffer >= LODWORD(Flink[1].Flink) )
          return -1073741816;
        v52 = 0LL;
        v39 = v38;
        if ( !v38 )
          v39 = -1;
        LOWORD(v52) = v39;
        if ( TraceInformation )
          *(_QWORD *)v9 = v52;
        if ( RequiredLength )
          *v10 = 8;
        return v49;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( !v26 )
              return -1073741821;
            if ( v26 == 1 )
            {
              if ( (unsigned int)v6 < 8 || !TraceInformation )
                return -1073741820;
              v27 = 0;
              for ( j = 1; j < LODWORD(Flink[1].Flink); ++j )
              {
                v29 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, j, 0);
                if ( v29 )
                {
                  if ( 8 * (unsigned __int64)(v27 + 1) <= v6 )
                    *((_QWORD *)TraceInformation + v27) = j;
                  EtwpReleaseLoggerContext(v29, 0);
                  ++v27;
                }
              }
              v30 = 8LL * v27;
              v31 = 0;
              if ( v30 > v6 )
                v31 = 261;
              v49 = v31;
              if ( RequiredLength )
                *RequiredLength = v30;
              return v49;
            }
            return -1073741821;
          }
          if ( (_DWORD)v6 != 8 )
            return -1073741820;
          v33 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, 1u, 0);
          if ( !v33 )
            return -1073741275;
          v34 = *v33;
          v52 = v34;
          EtwpReleaseLoggerContext(v33, 0);
          if ( TraceInformation )
            *(_QWORD *)TraceInformation = v34;
LABEL_67:
          if ( RequiredLength )
            *RequiredLength = 8;
          return v49;
        }
        if ( (unsigned int)v6 < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v35 = *((_QWORD *)Buffer + 1);
        v52 = v35;
        if ( !v35 || v35 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)v9 = BYTE2(v35);
LABEL_109:
        if ( RequiredLength )
          *v10 = 4;
        return v49;
      }
      if ( (unsigned int)v6 < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v36 = *((_QWORD *)Buffer + 1);
      v52 = v36;
      if ( !v36 || v36 == 0xFFFFFFFF )
        return -1073741816;
      v37 = HIDWORD(v36);
    }
    else
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v37 = *((_QWORD *)Buffer + 1);
      v52 = v37;
      if ( !v37 || v37 == 0xFFFFFFFF )
        return -1073741816;
      LODWORD(v37) = (unsigned __int16)v37;
      if ( (unsigned int)(unsigned __int16)v37 >= LODWORD(Flink[1].Flink) )
        return -1073741816;
    }
    if ( TraceInformation )
      *(_DWORD *)v9 = v37;
    goto LABEL_109;
  }
  v54 = KeGetCurrentThread();
  if ( v54->PreviousMode )
  {
    v40 = *(unsigned __int16 *)Buffer;
    if ( (_WORD)v40 )
    {
      v41 = *((_QWORD *)Buffer + 1);
      if ( (v41 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v41 + v40 > 0x7FFFFFFF0000LL || v41 + v40 < v41 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (_DWORD)v6 != 8 )
    return -1073741820;
  v52 = 0LL;
  result = EtwQueryTraceHandleByLoggerName((__int64)Buffer, &v52);
  v49 = result;
  if ( result >= 0 )
  {
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v52;
    goto LABEL_67;
  }
  return result;
}
