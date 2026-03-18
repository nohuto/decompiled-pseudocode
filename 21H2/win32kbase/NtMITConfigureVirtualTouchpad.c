/*
 * XREFs of NtMITConfigureVirtualTouchpad @ 0x1C0154140
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F30A0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1C01F3934 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITConfigureVirtualTouchpad(int *a1, ULONG64 a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // al
  __int64 v11; // rcx
  struct tagKERNELHANDLETABLEENTRY *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  ULONG64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int *v21; // rdx
  struct _LIST_ENTRY *Instance; // rax
  NTSTATUS v23; // eax
  _OWORD v25[10]; // [rsp+50h] [rbp-148h] BYREF
  __int128 v26; // [rsp+F0h] [rbp-A8h]
  __int128 v27; // [rsp+100h] [rbp-98h]
  __int128 v28; // [rsp+110h] [rbp-88h]
  __int128 v29; // [rsp+120h] [rbp-78h]
  __int128 v30; // [rsp+130h] [rbp-68h]
  __int128 v31; // [rsp+140h] [rbp-58h]
  __int128 v32; // [rsp+150h] [rbp-48h]
  __int128 v33; // [rsp+160h] [rbp-38h]
  __int128 v34; // [rsp+170h] [rbp-28h]
  __int64 v35; // [rsp+180h] [rbp-18h]
  int v36; // [rsp+1B0h] [rbp+18h] BYREF

  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v4;
  v6 = 0;
  if ( v4 )
  {
    *((_DWORD *)v4 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v10 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v10 = 0;
        }
        if ( v10 )
        {
          while ( 1 )
          {
            v12 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v12 + 2) = 0LL;
            v11 = *(_QWORD *)v12;
            if ( !*(_DWORD *)(*(_QWORD *)v12 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v9);
              v11 = *(_QWORD *)v12;
            }
            HMUnlockObject(v11);
          }
        }
      }
    }
  }
  v36 = 0;
  memset(v25, 0, 0x98uLL);
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
  {
    v16 = 5LL;
LABEL_15:
    UserSetLastError(v16, v13, v14, v15);
    goto LABEL_29;
  }
  v21 = a1;
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    v21 = (int *)MmUserProbeAddress;
  v36 = *v21;
  if ( a2 + 152 < a2 || a2 + 152 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v26 = *(_OWORD *)a2;
  v27 = *(_OWORD *)(a2 + 16);
  v28 = *(_OWORD *)(a2 + 32);
  v29 = *(_OWORD *)(a2 + 48);
  v30 = *(_OWORD *)(a2 + 64);
  v31 = *(_OWORD *)(a2 + 80);
  v32 = *(_OWORD *)(a2 + 96);
  v33 = *(_OWORD *)(a2 + 112);
  v34 = *(_OWORD *)(a2 + 128);
  v35 = *(_QWORD *)(a2 + 144);
  v25[0] = v26;
  v25[1] = v27;
  v25[2] = v28;
  v25[3] = v29;
  v25[4] = v30;
  v25[5] = v31;
  v25[6] = v32;
  v25[7] = v33;
  v25[8] = v34;
  *(_QWORD *)&v25[9] = v35;
  Instance = (struct _LIST_ENTRY *)VirtualTouchpadProcessor::GetInstance(1);
  if ( !Instance )
  {
    v23 = -1073741801;
LABEL_25:
    v16 = RtlNtStatusToDosError(v23);
    goto LABEL_15;
  }
  v23 = VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
          Instance,
          (struct VPTP_ID *)&v36,
          (const struct tagVIRTUAL_PTP_CONFIG *)v25);
  if ( v23 < 0 )
    goto LABEL_25;
  v18 = MmUserProbeAddress;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (int *)MmUserProbeAddress;
  *a1 = v36;
  v6 = 1;
LABEL_29:
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v6;
}
