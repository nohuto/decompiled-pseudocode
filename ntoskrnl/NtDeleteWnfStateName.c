/*
 * XREFs of NtDeleteWnfStateName @ 0x140778FE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpCaptureWnfStateName @ 0x14071A22C (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14071A330 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14071A508 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x14071A9D4 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14071B5C8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupPermanentName @ 0x14071C320 (ExpWnfLookupPermanentName.c)
 *     ExpWnfDeleteNameInstance @ 0x1407792F0 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14077972C (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x140779838 (ExpWnfDeletePermanentName.c)
 *     ExpWnfDeletePermanentStateData @ 0x140A046AC (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtDeleteWnfStateName(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // r14
  int v3; // esi
  char v4; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  BOOL v9; // r12d
  _KPROCESS *Process; // rax
  int v11; // r13d
  __int64 v12; // r8
  struct _EX_RUNDOWN_REF *v14; // [rsp+38h] [rbp-70h] BYREF
  int v15[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-50h]
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
  v3 = ExpCaptureWnfStateName(a1, &v16, PreviousMode);
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
        v3 = ExpWnfLookupPermanentName(v16, (PSECURITY_DESCRIPTOR **)&P);
        if ( v3 < 0 )
          goto LABEL_19;
        v3 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10000u);
        if ( v3 < 0 )
          goto LABEL_19;
        v9 = 1;
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
      v3 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v15, (__int64)Process, 0LL, v7, 0LL);
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
        v3 = ExpWnfLookupNameInstance((__int64)v2, v5, (__int64 *)&v14);
        if ( v3 >= 0 )
        {
          if ( !v9 )
          {
            v3 = ExpWnfCheckCallerAccess(v14[9].Ptr, 0x10000u);
            if ( v3 < 0 )
              goto LABEL_19;
            v9 = 1;
          }
          if ( v11 == 3LL && (_KPROCESS *)v14[19].Count != v21 )
          {
            v3 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers((__int64)v14, 0x10u, 1, PreviousMode != 0);
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
            ExReleaseRundownProtection_0(v14 + 1);
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
    ExReleaseRundownProtection_0(v14 + 1);
  if ( v2 )
    ExReleaseRundownProtection_0(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
