/*
 * XREFs of PspOneDirectionSecurityDomainCombine @ 0x140607210
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1406478CC (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     PspIsParentProcess @ 0x140252390 (PspIsParentProcess.c)
 *     SepDeleteAccessState @ 0x14027C660 (SepDeleteAccessState.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     PsLookupProcessByProcessId @ 0x140625880 (PsLookupProcessByProcessId.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SeCreateAccessStateEx @ 0x1406618D0 (SeCreateAccessStateEx.c)
 *     ObOpenObjectByPointer @ 0x140706880 (ObOpenObjectByPointer.c)
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
