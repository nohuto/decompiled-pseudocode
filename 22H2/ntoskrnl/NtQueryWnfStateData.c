/*
 * XREFs of NtQueryWnfStateData @ 0x14060F2E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ExpWnfCreateNameInstance @ 0x14060DE94 (ExpWnfCreateNameInstance.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F748 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14060F7A4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14060F814 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060FD88 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14060FE80 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReadStateData @ 0x14060FFA4 (ExpWnfReadStateData.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406F63DC (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfLookupPermanentName @ 0x1406F6488 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  __int64 v9; // r14
  NTSTATUS StateData; // edi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned int *v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // r15
  int v20; // r13d
  struct _KTHREAD *v21; // r8
  struct _KPROCESS *Process; // rcx
  int v23; // eax
  PULONG v24; // rax
  __int64 v25; // r8
  int v27; // [rsp+3Ch] [rbp-CCh]
  unsigned int v28; // [rsp+40h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  int v31[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KPROCESS *v32; // [rsp+60h] [rbp-A8h]
  int v33; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  PCWNF_TYPE_ID v35; // [rsp+78h] [rbp-90h]
  PSID Sid; // [rsp+80h] [rbp-88h] BYREF
  PULONG v37; // [rsp+88h] [rbp-80h]
  PWNF_CHANGE_STAMP v38; // [rsp+90h] [rbp-78h]
  PVOID v39; // [rsp+98h] [rbp-70h]
  __int128 v40; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-48h] BYREF

  v38 = ChangeStamp;
  v32 = (struct _KPROCESS *)ExplicitScope;
  v39 = Buffer;
  v37 = BufferSize;
  v34 = 0LL;
  v41 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v31 = 0LL;
  v29 = 0LL;
  LODWORD(v9) = 0;
  v40 = 0LL;
  v35 = TypeId;
  StateData = ExpCaptureWnfStateName(StateName, &v34);
  if ( StateData >= 0 )
  {
    if ( PreviousMode )
    {
      if ( v12 )
      {
        if ( v12 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        v41 = *(_OWORD *)v12;
        v35 = (PCWNF_TYPE_ID)&v41;
      }
      v15 = v14;
      if ( v14 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
      v16 = (__int64)v13;
      if ( (unsigned __int64)v13 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      v11 = *(unsigned int *)v16;
      v28 = *(_DWORD *)v16;
      v17 = (__int64)v13;
      if ( (unsigned __int64)v13 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
      if ( (_DWORD)v11 )
        ProbeForWrite(Buffer, (unsigned int)v11, 1u);
    }
    else
    {
      v28 = *v13;
    }
    v18 = v34;
    v19 = (v34 >> 4) & 3;
    v33 = (v34 >> 4) & 3;
    v9 = (v34 >> 6) & 0xF;
    v27 = (v34 >> 6) & 0xF;
    LOBYTE(v11) = PreviousMode;
    StateData = ExpWnfCaptureScopeInstanceId(v9, ExplicitScope, v11, &Sid, &v40);
    if ( StateData >= 0 )
    {
      if ( PreviousMode )
      {
        v20 = 0;
        if ( v32 )
        {
          StateData = ExpWnfCheckCrossScopeAccess(v18);
          if ( StateData < 0 )
            goto LABEL_31;
        }
      }
      else
      {
        v20 = 1;
      }
      if ( PreviousMode )
      {
        v21 = KeGetCurrentThread();
        Process = v21->ApcState.Process;
        v18 = v34;
        LODWORD(v19) = v33;
        LODWORD(v9) = v27;
      }
      else
      {
        LODWORD(v21) = 0;
        Process = PsInitialSystemProcess;
      }
      v32 = Process;
      StateData = ExpWnfResolveScopeInstance((int)v31, (int)Process, (int)v21, v9, Sid);
      if ( StateData >= 0 )
      {
        v23 = ExpWnfLookupNameInstance(*(_QWORD *)v31, v18, &v29);
        StateData = v23;
        if ( v23 != -1073741772 || (_DWORD)v19 == 3 )
        {
          if ( v23 < 0 )
            goto LABEL_31;
          StateData = ExpWnfValidatePubSubPreconditions(1u, v20);
          if ( StateData < 0 )
            goto LABEL_31;
        }
        else
        {
          StateData = ExpWnfLookupPermanentName(v18, &P);
          if ( StateData < 0 )
            goto LABEL_31;
          StateData = ExpWnfValidatePubSubPreconditions(1u, v20);
          if ( StateData < 0 )
            goto LABEL_31;
          if ( (_DWORD)v9 == 5 || (v18 & 0x400) != 0 )
          {
            StateData = ExpWnfCreateNameInstance(*(unsigned __int64 *)v31, v18, (__int64)P, v32, &v29);
            ExFreePoolWithTag(P, 0x20666E57u);
            P = 0LL;
            if ( StateData < 0 )
              goto LABEL_31;
          }
        }
        v24 = v37;
        if ( v29 )
        {
          StateData = ExpWnfReadStateData(v29, v38, v39, v28, v37);
        }
        else
        {
          *v38 = 0;
          *v24 = 0;
          StateData = 0;
        }
      }
    }
  }
LABEL_31:
  if ( v29 )
    ExReleaseRundownProtection(v29 + 1);
  if ( *(_QWORD *)v31 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v31 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v25) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v9, &v40, v25);
  return StateData;
}
