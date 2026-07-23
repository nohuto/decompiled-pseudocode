/*
 * XREFs of WmiQueryTraceInformation @ 0x140788C40
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140788964 (WdipSemWriteSemActionsEvent.c)
 *     VslpSkStartProfiling @ 0x140890B80 (VslpSkStartProfiling.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140982DA0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407899DC (EtwQueryTraceHandleByLoggerName.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int32 v11; // ebx
  unsigned int v12; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v14; // rax
  unsigned int v15; // ebx
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int64 *v21; // rax
  __int32 v22; // ebx
  __int32 v23; // ebx
  __int32 v24; // ebx
  __int32 v25; // ebx
  int v26; // ebx
  __int64 v27; // r13
  unsigned int v28; // ebx
  unsigned int j; // r9d
  unsigned int v30; // r14d
  unsigned int *v31; // rax
  unsigned __int64 v32; // rdx
  int v33; // ecx
  NTSTATUS result; // eax
  _QWORD *v35; // rax
  unsigned int *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned int v41; // eax
  __int16 v42; // cx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // r12
  unsigned int v46; // ebx
  _QWORD *v47; // rax
  unsigned int *v48; // r10
  unsigned int i; // r8d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v51; // rax
  unsigned int *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // r8
  NTSTATUS v56; // [rsp+24h] [rbp-44h]
  unsigned int v57; // [rsp+28h] [rbp-40h]
  unsigned int v58; // [rsp+28h] [rbp-40h]
  __int64 v59; // [rsp+38h] [rbp-30h] BYREF
  __int64 v60; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *v61; // [rsp+48h] [rbp-20h]

  v6 = TraceInformationLength;
  v59 = 0LL;
  v56 = 0;
  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals(*(__int64 *)&TraceInformationClass, (__int64)TraceInformation) + 108);
  if ( RequiredLength )
    *RequiredLength = 0;
  if ( TraceInformationClass > TraceHandleByNameClass )
  {
    v11 = TraceInformationClass - 8;
    if ( !v11 )
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v12 = *(_DWORD *)Buffer;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(v10, v9);
      v14 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], v12, 0);
      if ( !v14 )
        return -1073741275;
      v15 = v14[64];
      EtwpReleaseLoggerContext(v14, 0);
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v15;
      goto LABEL_10;
    }
    v16 = v11 - 1;
    if ( !v16 )
    {
      if ( !Buffer )
        return -1073741581;
      if ( !RequiredLength )
        return -1073741582;
      *RequiredLength = 32;
      if ( (unsigned int)v6 < 0x20 )
        return -1073741820;
      if ( !TraceInformation )
        return -1073741584;
      v59 = *(_QWORD *)Buffer;
      v58 = (unsigned __int16)v59;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v51 = PsGetCurrentServerSiloGlobals(v10, v9);
      v52 = EtwpAcquireLoggerContextByLoggerId(v51[108], v58, 0);
      v55 = (__int64)v52;
      if ( v52 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v52[1];
        *((_DWORD *)TraceInformation + 2) = v52[60];
        *((_DWORD *)TraceInformation + 3) = v52[63];
        *((_DWORD *)TraceInformation + 4) = v52[3];
        *((_DWORD *)TraceInformation + 5) = v52[56];
        *((_DWORD *)TraceInformation + 7) = v52[54];
        *((_DWORD *)TraceInformation + 6) = v52[57];
        EtwpReleaseLoggerContext(v52, 0);
      }
      else
      {
        v56 = -1073741162;
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v53, v55, v54);
      return v56;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( !EtwpInitialized )
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
          *RequiredLength = 120;
        if ( !EtwpInitialized )
          return -1073741661;
        if ( (_DWORD)v6 != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)TraceInformation = *(_OWORD *)EtwpAllNotifyRoutines;
        *((_OWORD *)TraceInformation + 1) = *(_OWORD *)off_140986C30;
        *((_OWORD *)TraceInformation + 2) = *(_OWORD *)&off_140986C40;
        *((_OWORD *)TraceInformation + 3) = *(_OWORD *)&off_140986C50;
        *((_OWORD *)TraceInformation + 4) = *(_OWORD *)off_140986C60;
        *((_OWORD *)TraceInformation + 5) = *(_OWORD *)&off_140986C70;
        *((_OWORD *)TraceInformation + 6) = *(_OWORD *)off_140986C80;
        *((_QWORD *)TraceInformation + 14) = EtwpTraceRedirectedIo;
        return 0;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( !EtwpInitialized )
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
          *RequiredLength = 8;
        if ( !EtwpInitialized )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v21 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_24:
        *(_QWORD *)TraceInformation = v21;
        return 0;
      }
      return -1073741821;
    }
    v45 = 0LL;
    v60 = 0LL;
    if ( (_DWORD)v6 != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v46 = *(_DWORD *)Buffer;
    v57 = *(_DWORD *)Buffer;
    v47 = PsGetCurrentServerSiloGlobals(v10, v9);
    v48 = EtwpAcquireLoggerContextByLoggerId(v47[108], v46, 0);
    if ( !v48 )
      return -1073741275;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      v45 += *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v48 + 135) + 4136LL) + ((unsigned __int64)i << 6) + 8)
                       + 8LL * v57);
      v60 = v45;
    }
    EtwpReleaseLoggerContext(v48, 0);
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v45;
    goto LABEL_98;
  }
  if ( TraceInformationClass != TraceHandleByNameClass )
  {
    if ( TraceInformationClass == TraceIdClass )
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v40 = *((_QWORD *)Buffer + 1);
      v59 = v40;
      if ( !v40 || v40 == 0xFFFFFFFF )
        return -1073741816;
      LODWORD(v40) = (unsigned __int16)v40;
      if ( (unsigned int)(unsigned __int16)v40 >= *(_DWORD *)(v9 + 16) )
        return -1073741816;
      goto LABEL_84;
    }
    v22 = TraceInformationClass - 1;
    if ( v22 )
    {
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
              v27 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v10, v9) + 108);
              v28 = 0;
              for ( j = 1; ; j = v30 + 1 )
              {
                v30 = j;
                if ( j >= *(_DWORD *)(v27 + 16) )
                  break;
                v31 = EtwpAcquireLoggerContextByLoggerId(v27, j, 0);
                if ( v31 )
                {
                  if ( 8 * (unsigned __int64)(v28 + 1) <= v6 )
                    *((_QWORD *)TraceInformation + v28) = v30;
                  EtwpReleaseLoggerContext(v31, 0);
                  ++v28;
                }
              }
              v32 = 8LL * v28;
              v33 = 0;
              if ( v32 > v6 )
                v33 = 261;
              v56 = v33;
              if ( RequiredLength )
                *RequiredLength = v32;
              return v56;
            }
            return -1073741821;
          }
          if ( (_DWORD)v6 != 8 )
            return -1073741820;
          v35 = PsGetCurrentServerSiloGlobals(v10, v9);
          v36 = EtwpAcquireLoggerContextByLoggerId(v35[108], 1u, 0);
          if ( !v36 )
            return -1073741275;
          v37 = *v36;
          v59 = v37;
          EtwpReleaseLoggerContext(v36, 0);
          if ( TraceInformation )
            *(_QWORD *)TraceInformation = v37;
LABEL_98:
          if ( RequiredLength )
            *RequiredLength = 8;
          return v56;
        }
        if ( (unsigned int)v6 < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v38 = *((_QWORD *)Buffer + 1);
        v59 = v38;
        if ( !v38 || v38 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)TraceInformation = BYTE2(v38);
LABEL_10:
        if ( RequiredLength )
          *RequiredLength = 4;
        return v56;
      }
      if ( (unsigned int)v6 < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v39 = *((_QWORD *)Buffer + 1);
      v59 = v39;
      if ( !v39 || v39 == 0xFFFFFFFF )
        return -1073741816;
      v40 = HIDWORD(v39);
LABEL_84:
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v40;
      goto LABEL_10;
    }
    if ( (_DWORD)v6 != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v41 = *(_DWORD *)Buffer;
    if ( *(_DWORD *)Buffer >= *(_DWORD *)(v9 + 16) )
      return -1073741816;
    v59 = 0LL;
    v42 = v41;
    if ( !v41 )
      v42 = -1;
    LOWORD(v59) = v42;
LABEL_96:
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v59;
    goto LABEL_98;
  }
  v61 = KeGetCurrentThread();
  if ( v61->PreviousMode )
  {
    v43 = *(unsigned __int16 *)Buffer;
    if ( (_WORD)v43 )
    {
      v44 = *((_QWORD *)Buffer + 1);
      if ( (v44 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v44 + v43 > 0x7FFFFFFF0000LL || v44 + v43 < v44 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (_DWORD)v6 != 8 )
    return -1073741820;
  v59 = 0LL;
  result = EtwQueryTraceHandleByLoggerName(Buffer, &v59);
  v56 = result;
  if ( result >= 0 )
    goto LABEL_96;
  return result;
}
