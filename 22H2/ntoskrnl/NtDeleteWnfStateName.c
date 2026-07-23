/*
 * XREFs of NtDeleteWnfStateName @ 0x14060D820
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExpCaptureWnfStateName @ 0x14060F7A4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14060F814 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FF00 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140610CEC (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteNameInstance @ 0x140611230 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406A3528 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfLookupPermanentName @ 0x1406F6488 (ExpWnfLookupPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x1406F88EC (ExpWnfDeletePermanentName.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CB64 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // r14
  NTSTATUS v3; // esi
  char v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r15
  _BOOL8 v9; // r12
  _KPROCESS *Process; // rax
  int v11; // r13d
  __int64 v12; // r8
  struct _EX_RUNDOWN_REF *v14; // [rsp+38h] [rbp-70h] BYREF
  int v15[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+58h] [rbp-50h]
  char PreviousMode; // [rsp+B8h] [rbp+10h]
  int v20; // [rsp+C0h] [rbp+18h]
  _KPROCESS *v21; // [rsp+C8h] [rbp+20h]

  v16 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = 0;
  P = 0LL;
  v2 = 0LL;
  *(_QWORD *)v15 = 0LL;
  v14 = 0LL;
  v3 = ExpCaptureWnfStateName(StateName, &v16);
  if ( v3 >= 0 )
  {
    v5 = v16;
    v6 = v16 >> 4;
    v7 = (v16 >> 6) & 0xF;
    v18 = v7;
    v8 = (v16 >> 4) & 3;
    if ( ((v16 >> 4) & 3) == 0 )
    {
      v3 = -1073741811;
      goto LABEL_19;
    }
    v9 = v4 == 0;
    if ( (_DWORD)v8 != 3 )
    {
      if ( v4 )
      {
        v3 = ExpWnfLookupPermanentName(v16, &P);
        if ( v3 < 0 )
          goto LABEL_19;
        v3 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10000u);
        if ( v3 < 0 )
          goto LABEL_19;
        LODWORD(v9) = 1;
      }
      v3 = ExpWnfDeletePermanentName(v5);
      if ( v3 < 0 )
        goto LABEL_19;
      v20 = 1;
      v7 = v18;
      v4 = PreviousMode;
    }
    if ( v4 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v5 = v16;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v21 = Process;
    if ( (_DWORD)v8 == 3 )
    {
      v3 = ExpWnfResolveScopeInstance((int)v15, (int)Process, 0, v7, 0LL);
      v2 = *(struct _EX_RUNDOWN_REF **)v15;
      if ( v3 < 0 )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
      v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances(v7, 0LL);
    }
    if ( v2 )
    {
      v11 = v6 & 3;
      while ( 1 )
      {
        v3 = ExpWnfLookupNameInstance(v2, v5, &v14);
        if ( v3 >= 0 )
        {
          if ( !v9 )
          {
            v3 = ExpWnfCheckCallerAccess(v14[9].Ptr, 0x10000u);
            if ( v3 < 0 )
              goto LABEL_19;
            LODWORD(v9) = 1;
          }
          if ( v11 == 3LL && (_KPROCESS *)v14[19].Count != v21 )
          {
            v3 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers(v14, 16LL, 1LL, PreviousMode != 0);
          LOBYTE(v12) = 1;
          if ( (unsigned int)ExpWnfDeleteNameInstance(v2, v14, v12) )
            v14 = 0LL;
          else
            v3 = -1073741772;
        }
        if ( v11 != 3LL )
        {
          if ( v14 )
          {
            ExReleaseRundownProtection(v14 + 1);
            v14 = 0LL;
          }
          v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v18, v2);
          if ( v2 )
            continue;
        }
        break;
      }
    }
    if ( (v5 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v5);
  }
LABEL_19:
  if ( v20 )
    v3 = 0;
  if ( v14 )
    ExReleaseRundownProtection(v14 + 1);
  if ( v2 )
    ExReleaseRundownProtection(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
