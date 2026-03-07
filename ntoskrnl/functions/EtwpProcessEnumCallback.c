__int64 __fastcall EtwpProcessEnumCallback(PRKPROCESS PROCESS, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r12
  int *v5; // rbx
  char v7; // r13
  char v8; // r15
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  int v11; // ecx
  char v12; // bp
  unsigned int v14; // r15d
  unsigned int i; // ebp
  __int64 Prcb; // rax
  unsigned int v17; // ebp
  unsigned int j; // r15d
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v22; // rdx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_BYTE *)(a2 + 64);
  v5 = *(int **)a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)PROCESS);
  if ( *(_QWORD *)(v2 + 1096) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[108] != v22 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( !(unsigned int)EtwpIsProcessZombie(PROCESS) )
  {
    v12 = 1;
    if ( PROCESS == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == PROCESS )
      {
LABEL_7:
        *(_BYTE *)(a2 + 65) = v12;
        *(_BYTE *)(a2 + 67) = v8;
        if ( v5 )
        {
          if ( v3 )
          {
            if ( (*v5 & 1) != 0 )
              EtwpTraceProcessRundown((int)PROCESS);
            if ( (*v5 & 2) != 0 && (PROCESS->SecureState.SecureHandle & 1) == 0 )
            {
              if ( PROCESS == PsIdleProcess )
              {
                v14 = KeNumberProcessors_0;
                for ( i = 0; i < v14; ++i )
                {
                  Prcb = KeGetPrcb(i);
                  EtwpThreadEnumCallback((__int64)PROCESS, *(_QWORD *)(Prcb + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(PROCESS, EtwpThreadEnumCallback, a2);
              }
            }
            if ( (*v5 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(PROCESS, a2, v5);
            if ( (*v5 & 4) != 0 && PROCESS == PsInitialSystemProcess )
            {
              LOBYTE(v10) = v3;
              EtwpSysModuleRunDown(v2, v10);
            }
            if ( (v5[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(PROCESS, a2);
          }
          else
          {
            if ( (v5[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(PROCESS, a2);
            if ( (*v5 & 4) != 0 && PROCESS == PsInitialSystemProcess )
              EtwpSysModuleRunDown(v2, 0LL);
            if ( (*v5 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(PROCESS, a2, v5);
            if ( (v5[4] & 0x40) != 0 && PROCESS != PsIdleProcess )
              EtwpObjectHandleRundown(PROCESS);
            if ( (*v5 & 2) != 0 )
            {
              if ( PROCESS == PsIdleProcess )
              {
                v17 = KeNumberProcessors_0;
                for ( j = 0; j < v17; ++j )
                {
                  v19 = KeGetPrcb(j);
                  EtwpThreadEnumCallback((__int64)PROCESS, *(_QWORD *)(v19 + 24), a2);
                  v20 = KeGetPrcb(j);
                  EtwpThreadEnumCallback((__int64)PROCESS, *(_QWORD *)(v20 + 13112), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(PROCESS, EtwpThreadEnumCallback, a2);
              }
            }
            if ( (*v5 & 8) != 0 )
              EtwpProcessPerfCtrsRundown(PROCESS, v2);
            if ( (*v5 & 1) != 0 )
              EtwpTraceProcessRundown((int)PROCESS);
          }
        }
        if ( v7 )
        {
          KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v7 = 1;
        goto LABEL_7;
      }
    }
    v12 = 0;
    goto LABEL_7;
  }
  if ( v5 && (*v5 & 1) != 0 && !v3 )
    EtwpTraceProcessRundown(v11);
  return 0LL;
}
