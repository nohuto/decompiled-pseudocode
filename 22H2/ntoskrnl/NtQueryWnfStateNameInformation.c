/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1406893C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F748 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14060F7A4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14060F814 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060FD88 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FF00 (ExpWnfCheckCallerAccess.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406F63DC (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfLookupPermanentName @ 0x1406F6488 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _DWORD *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  NTSTATUS v10; // esi
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // r14d
  int v14; // eax
  ACCESS_MASK v15; // r13d
  __int64 v16; // r8
  struct _KTHREAD *v17; // rax
  PEPROCESS Process; // rdx
  int v19; // eax
  void *v20; // rcx
  int v22; // [rsp+3Ch] [rbp-8Ch]
  int v23; // [rsp+40h] [rbp-88h]
  int v24; // [rsp+44h] [rbp-84h]
  __int64 v25; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-78h] BYREF
  int v27; // [rsp+58h] [rbp-70h]
  int v28[2]; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid[4]; // [rsp+70h] [rbp-58h] BYREF
  PVOID v31[7]; // [rsp+90h] [rbp-38h] BYREF

  v5 = InfoBuffer;
  v26 = 0LL;
  Sid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v28 = 0LL;
  v25 = 0LL;
  v23 = 0;
  *(_OWORD *)v31 = 0LL;
  v10 = ExpCaptureWnfStateName((__int64 *)StateName, &v26, PreviousMode);
  if ( v10 >= 0 )
  {
    v12 = v26;
    v27 = (v26 >> 4) & 3;
    v23 = (v26 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId(v23, (char *)ExplicitScope, v11, (__int64)Sid, (__int64)v31);
    if ( v10 >= 0 )
    {
      if ( (unsigned int)NameInfoClass > WnfInfoIsQuiescent )
      {
        v10 = -1073741821;
      }
      else
      {
        if ( InfoBufferSize >= 4 )
        {
          if ( PreviousMode )
            ProbeForWrite(v5, InfoBufferSize, 4u);
          v13 = 1;
          if ( NameInfoClass )
          {
            v24 = 0;
          }
          else
          {
            v24 = 1;
            if ( ExplicitScope )
            {
              v10 = -1073741811;
              goto LABEL_52;
            }
          }
          if ( PreviousMode && NameInfoClass )
          {
            v14 = 0;
            v22 = 0;
            if ( ExplicitScope )
            {
              v10 = ExpWnfCheckCrossScopeAccess(v12);
              if ( v10 < 0 )
                goto LABEL_52;
              v14 = 0;
            }
          }
          else
          {
            v14 = 1;
            v22 = 1;
          }
          v15 = 0;
          if ( !v14 && (unsigned int)(NameInfoClass - 1) <= 1 )
            v15 = 2;
          v16 = 0LL;
          if ( PreviousMode )
          {
            v17 = KeGetCurrentThread();
            Process = v17->ApcState.Process;
            v12 = v26;
            if ( !v24 )
              v16 = (__int64)v17;
          }
          else
          {
            Process = PsInitialSystemProcess;
          }
          v10 = ExpWnfResolveScopeInstance(
                  (struct _EX_RUNDOWN_REF **)v28,
                  (__int64)Process,
                  v16,
                  v23,
                  (__int64 *)Sid[0]);
          if ( v10 < 0 )
            goto LABEL_52;
          v19 = ExpWnfLookupNameInstance(*(__int64 *)v28, v12, &v25);
          v10 = v19;
          if ( v19 != -1073741772 || v27 == 3 )
          {
            if ( v19 < 0 )
              goto LABEL_52;
            if ( v22 )
              goto LABEL_29;
            v20 = *(void **)(v25 + 72);
          }
          else
          {
            v10 = ExpWnfLookupPermanentName(v12, &P);
            if ( v10 < 0 )
              goto LABEL_52;
            if ( v22 )
            {
LABEL_29:
              if ( NameInfoClass )
              {
                if ( NameInfoClass == WnfInfoSubscribersPresent )
                {
                  if ( v25 && *(_DWORD *)(v25 + 160) )
                    goto LABEL_36;
                }
                else if ( !v25 || !*(_DWORD *)(v25 + 164) )
                {
                  goto LABEL_36;
                }
                v13 = 0;
              }
LABEL_36:
              *(_DWORD *)InfoBuffer = v13;
              v10 = 0;
              v5 = InfoBuffer;
              goto LABEL_37;
            }
            v20 = (void *)*((_QWORD *)P + 2);
          }
          v10 = ExpWnfCheckCallerAccess(v20, v15);
          if ( v10 >= 0 )
            goto LABEL_29;
LABEL_52:
          v5 = InfoBuffer;
          goto LABEL_37;
        }
        v10 = -1073741811;
      }
    }
  }
LABEL_37:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *v5 = 0;
    v10 = 0;
  }
  if ( v25 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v25 + 8));
  if ( *(_QWORD *)v28 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v28 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  ExpWnfReleaseCapturedScopeInstanceId(v23, v31, PreviousMode);
  return v10;
}
