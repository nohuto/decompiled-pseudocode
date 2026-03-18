/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C01618F0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(
        unsigned int a1,
        void *a2,
        unsigned int a3,
        char *a4,
        unsigned __int64 a5,
        int a6)
{
  __int64 v7; // r12
  __int64 Pool2; // rbx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  struct tagKERNELHANDLETABLEENTRY *v18; // rdi
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  BOOL v23; // ecx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int128 *v30; // rcx
  ULONG64 v31; // rdx
  unsigned __int64 v32; // r15
  PVOID v33; // rdi
  __int64 v34; // rdx
  unsigned __int64 i; // rcx
  char v36; // si
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _DWORD v41[6]; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-288h]
  __int128 v43; // [rsp+70h] [rbp-278h]
  __int64 v44; // [rsp+88h] [rbp-260h] BYREF
  __int64 v45; // [rsp+90h] [rbp-258h]
  unsigned __int64 v46; // [rsp+98h] [rbp-250h]
  void *v47; // [rsp+A0h] [rbp-248h]
  __int128 v48; // [rsp+B0h] [rbp-238h]
  __int128 v49; // [rsp+C0h] [rbp-228h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-218h]
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-208h] BYREF
  __int128 v52; // [rsp+180h] [rbp-168h]
  __int128 v53; // [rsp+190h] [rbp-158h]
  __int128 v54; // [rsp+1A0h] [rbp-148h]
  __int128 v55; // [rsp+1B0h] [rbp-138h]
  __int128 v56; // [rsp+1C0h] [rbp-128h]
  __int128 v57; // [rsp+1D0h] [rbp-118h]
  __int128 v58; // [rsp+1E0h] [rbp-108h]
  __int128 v59; // [rsp+1F0h] [rbp-F8h]
  __int128 v60; // [rsp+200h] [rbp-E8h]
  _OWORD v61[9]; // [rsp+210h] [rbp-D8h] BYREF

  v7 = a3;
  v47 = a2;
  Pool2 = 0LL;
  v42 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  memset(v61, 0, sizeof(v61));
  v41[4] = 0;
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        v12 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80) == 0 )
        {
          while ( 1 )
          {
            v18 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v18 + 2) = 0LL;
            v17 = *(_QWORD *)v18;
            if ( !*(_DWORD *)(*(_QWORD *)v18 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v11, v13);
              v17 = *(_QWORD *)v18;
            }
            HMUnlockObject(v17);
          }
        }
      }
    }
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11, v13, v14);
  v23 = 0;
  if ( CurrentProcess )
    v23 = CurrentProcess == g_pepDwm;
  if ( !v23 )
  {
    v24 = 5LL;
LABEL_18:
    v25 = 0;
    UserSetLastError(v24, v20, v21, v22);
    goto LABEL_53;
  }
  if ( !(_DWORD)v7 )
  {
    v24 = 87LL;
    goto LABEL_18;
  }
  v30 = (__int128 *)a5;
  v31 = a5 + 144;
  if ( a5 + 144 < a5 || v31 > MmUserProbeAddress )
    v30 = (__int128 *)MmUserProbeAddress;
  v52 = *v30;
  v53 = v30[1];
  v54 = v30[2];
  v55 = v30[3];
  v56 = v30[4];
  v57 = v30[5];
  v58 = v30[6];
  v59 = v30[7];
  v60 = v30[8];
  v61[0] = v52;
  v61[1] = v53;
  v61[2] = v54;
  v61[3] = v55;
  v61[4] = v56;
  v61[5] = v57;
  v61[6] = v58;
  v61[7] = v59;
  v61[8] = v60;
  v32 = 4 * v7;
  if ( 4 * v7 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v61, v31, v21) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a4[v32] > MmUserProbeAddress || &a4[v32] < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v41[0] = 1851878741;
  v44 = 260LL;
  v33 = gpLeakTrackingAllocator;
  *(_QWORD *)&v48 = &v44;
  *((_QWORD *)&v48 + 1) = v41;
  v43 = v48;
  v34 = 4 * v7;
  v45 = 4 * v7;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6E616D55) == 0x6E616D55 )
  {
    for ( i = 0LL; ; ++i )
    {
      v46 = i;
      if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_47;
      if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1851878741 )
        break;
    }
    v36 = 0;
    if ( v32 < 0x1000 || (v32 & 0xFFF) != 0 )
    {
      v36 = 1;
      v34 = v32 + 16;
      v45 = v32 + 16;
    }
    Pool2 = ExAllocatePool2(*(_QWORD *)v43 & 0xFFFFFFFFFFFFFFFCuLL | 1, v34);
    if ( !Pool2 )
    {
LABEL_38:
      Pool2 = 0LL;
      goto LABEL_48;
    }
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v36 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v33,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_48;
      }
LABEL_45:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_38;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v33,
                             Pool2,
                             BackTrace) )
      goto LABEL_45;
  }
  else
  {
LABEL_47:
    Pool2 = ExAllocatePool2(*(_QWORD *)v43 & 0xFFFFFFFFFFFFFFFCuLL | 1, v34);
  }
LABEL_48:
  v42 = Pool2;
  if ( Pool2 )
  {
    if ( qword_1C029BD10 )
      qword_1C029BD10(Pool2, &v49, Win32FreePool);
    memmove((void *)Pool2, a4, 4 * v7);
    v25 = CTouchProcessor::SetManipulationInputTarget(
            gpTouchProcessor,
            a1,
            v7,
            (unsigned int *)Pool2,
            v47,
            (struct TELEMETRY_POINTER_FRAME_TIMES *)v61,
            a6);
  }
  else
  {
    v25 = 0;
    v41[5] = 0;
    UserSetLastError(8LL, v37, v38, v39);
  }
LABEL_53:
  if ( Pool2 && qword_1C029BE28 )
    qword_1C029BE28(&v49);
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return v25;
}
