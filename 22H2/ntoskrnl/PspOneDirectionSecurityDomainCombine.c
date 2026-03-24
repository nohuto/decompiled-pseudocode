/*
 * XREFs of PspOneDirectionSecurityDomainCombine @ 0x140607670
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1406C068C (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     PspIsParentProcess @ 0x140251BF0 (PspIsParentProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     SepDeleteAccessState @ 0x140345670 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     PsLookupProcessByProcessId @ 0x140625CA0 (PsLookupProcessByProcessId.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCreateAccessStateEx @ 0x1406DA6C0 (SeCreateAccessStateEx.c)
 */

void __fastcall PspOneDirectionSecurityDomainCombine(__int64 Object)
{
  void *v2; // rcx
  PEPROCESS v3; // rbx
  signed __int64 v4; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[224]; // [rsp+F0h] [rbp-10h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v9, 0, sizeof(v9));
  v2 = *(void **)(Object + 1344);
  Process = 0LL;
  Handle = 0LL;
  if ( PsLookupProcessByProcessId(v2, &Process) < 0 )
    goto LABEL_17;
  v3 = Process;
  if ( !PspIsParentProcess((__int64)Process, Object) || (HIDWORD(v3[2].Header.WaitListHead.Flink) & 0x400000) == 0 )
    goto LABEL_12;
  _InterlockedOr(v5, 0);
  if ( *(int *)(Object + 2512) < 0 )
  {
LABEL_17:
    v3 = Process;
    goto LABEL_12;
  }
  v3 = Process;
  if ( SLODWORD(Process[2].ReadyListHead.Blink) >= 0
    && (int)SeCreateAccessStateEx(
              0,
              (_DWORD)Process,
              (unsigned int)&PassedAccessState,
              (unsigned int)v9,
              40,
              (__int64)PsProcessType + 76) >= 0 )
  {
    if ( ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
    {
      *(_QWORD *)(Object + 2536) = *(_QWORD *)&v3[2].ActiveProcessors.Count;
      if ( (LODWORD(v3[2].ReadyListHead.Blink) | *(_DWORD *)(Object + 2512)) < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(Object + 2172), 0x200000u);
        v4 = _InterlockedIncrement64(&PsNextSecurityDomain);
        *(_QWORD *)(Object + 2528) = v4;
        *(_QWORD *)(Object + 2536) = v4;
      }
      v3 = Process;
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_12:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v3 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v3);
}
