void __fastcall PspOneDirectionSecurityDomainCombine(__int64 Object)
{
  void *v2; // rcx
  PEPROCESS v3; // rbx
  __int64 v4; // rax
  signed __int64 v5; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v10[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v10, 0, sizeof(v10));
  v2 = *(void **)(Object + 1344);
  Process = 0LL;
  Handle = 0LL;
  if ( PsLookupProcessByProcessId(v2, &Process) < 0 )
    goto LABEL_16;
  v3 = Process;
  if ( !PspIsParentProcess((__int64)Process, Object) || (HIDWORD(v3[2].Header.WaitListHead.Flink) & 0x400000) == 0 )
    goto LABEL_11;
  _InterlockedOr(v6, 0);
  if ( *(int *)(Object + 2512) < 0 )
  {
LABEL_16:
    v3 = Process;
    goto LABEL_11;
  }
  v3 = Process;
  if ( SLODWORD(Process[2].ReadyListHead.Blink) >= 0
    && (int)SeCreateAccessStateEx(0LL, Process, &PassedAccessState, v10, 40, (_DWORD *)PsProcessType + 19) >= 0 )
  {
    if ( ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
    {
      v4 = *(_QWORD *)&v3[2].ActiveProcessors.Count;
      v3 = Process;
      *(_QWORD *)(Object + 2536) = v4;
      if ( (*(_DWORD *)(Object + 2512) | LODWORD(v3[2].ReadyListHead.Blink)) < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(Object + 2172), 0x200000u);
        v3 = Process;
        v5 = _InterlockedIncrement64(&PsNextSecurityDomain);
        *(_QWORD *)(Object + 2528) = v5;
        *(_QWORD *)(Object + 2536) = v5;
      }
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_11:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v3 )
    ObfDereferenceObject(v3);
}
