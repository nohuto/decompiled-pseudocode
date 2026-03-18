/*
 * XREFs of NtSetShellCursorState @ 0x1C0156AA0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     IsShellProcess @ 0x1C00AF700 (IsShellProcess.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DBAB4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     CheckCapability @ 0x1C01E77C0 (CheckCapability.c)
 *     SetContentOrientation @ 0x1C01E85D8 (SetContentOrientation.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtSetShellCursorState(unsigned int a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v6; // r14d
  __int64 Pool2; // rdi
  int v8; // eax
  __int64 v9; // rcx
  NTSTATUS v10; // ecx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rsi
  size_t v16; // r12
  PVOID v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  char v20; // r12
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  CCursorClip *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v28; // rcx
  struct tagKERNELHANDLETABLEENTRY *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // r8
  __int64 v34; // r9
  PVOID BackTrace[20]; // [rsp+50h] [rbp-C8h] BYREF

  v4 = (unsigned int)a3;
  v6 = a1;
  Pool2 = 0LL;
  if ( !gbOSTestSigningEnabled )
  {
    v8 = CheckCapability(L"shellExperienceComposer");
    if ( v8 < 0 )
    {
      v10 = v8;
LABEL_60:
      v13 = 0;
      v14 = RtlNtStatusToDosError(v10);
      goto LABEL_61;
    }
    v11 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v9) + 820);
    if ( (v11 & 0x30) == 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( !(unsigned int)IsShellProcess(CurrentProcessWin32Process) )
      {
        v13 = 0;
        v14 = 5LL;
LABEL_61:
        UserSetLastError(v14, (__int64)a2, a3, a4);
        goto LABEL_62;
      }
    }
  }
  if ( v6 - 1 > 3 )
  {
LABEL_8:
    v13 = 0;
    v14 = 87LL;
    goto LABEL_61;
  }
  if ( !(_DWORD)v4 )
  {
    if ( a2 )
      goto LABEL_8;
    v13 = 1;
    goto LABEL_43;
  }
  v15 = 16 * v4;
  if ( (unsigned __int64)(16 * v4) > 0xFFFFFFFF )
    goto LABEL_8;
  if ( (unsigned int)v15 >= 0x2710000 )
  {
LABEL_12:
    v13 = 0;
    v14 = 8LL;
    goto LABEL_61;
  }
  v16 = (unsigned int)v15;
  v17 = gpLeakTrackingAllocator;
  v18 = (unsigned int)v15;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63736355) != 0x63736355
    || (v19 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    v13 = 1;
LABEL_32:
    Pool2 = ExAllocatePool2(261LL, (unsigned int)v15);
    goto LABEL_33;
  }
  v13 = 1;
  while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != 1668506453 )
  {
    if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_32;
  }
  v20 = 0;
  if ( (unsigned int)v15 < 0x1000uLL || (v15 & 0xFFF) != 0 )
  {
    v20 = 1;
    v18 = (unsigned int)v15 + 16LL;
  }
  Pool2 = ExAllocatePool2(261LL, v18);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v20 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v17,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_24;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v17,
                                 Pool2,
                                 BackTrace) )
    {
      goto LABEL_24;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  Pool2 = 0LL;
LABEL_24:
  v16 = (unsigned int)v15;
LABEL_33:
  if ( !Pool2 )
    goto LABEL_12;
  if ( v15 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v21, a2, a3) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v15] > MmUserProbeAddress || &a2[v15] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove((void *)Pool2, a2, v16);
  v6 = a1;
LABEL_43:
  v22 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0);
  gptiCurrent = v22;
  if ( v22 )
  {
    *((_DWORD *)v22 + 377) = 1;
    v24 = PsGetCurrentProcessWin32Process(v23);
    if ( v24 )
    {
      if ( (*(_DWORD *)(v24 + 12) & 0x8000) != 0 )
      {
        v23 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v29 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v29 + 2) = 0LL;
            v28 = *(_QWORD *)v29;
            if ( !*(_DWORD *)(*(_QWORD *)v29 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v26);
              v28 = *(_QWORD *)v29;
            }
            HMUnlockObject(v28);
          }
        }
      }
    }
  }
  v32 = CCursorClip::SetShellClip(v23, (struct tagRECT *)Pool2, v4);
  if ( v32 >= 0 )
    SetContentOrientation(v6);
  UserSessionSwitchLeaveCrit(v31, v30, v33, v34);
  if ( v32 < 0 )
  {
    v10 = v32;
    goto LABEL_60;
  }
LABEL_62:
  if ( !v13 && Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  return v13;
}
