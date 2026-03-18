/*
 * XREFs of NtConfigureInputSpace @ 0x1C0153670
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C009F928 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C009FFF0 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00A0D30 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01E395C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1C01E3E60 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtConfigureInputSpace(ULONG64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // edi
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v13; // rcx
  struct tagKERNELHANDLETABLEENTRY *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r12d
  __int64 Pool2; // rbx
  __int64 v20; // rdx
  PVOID v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  ULONG64 v24; // rcx
  __int64 v25; // r14
  CInputConfig *v26; // rcx
  unsigned int v27; // r14d
  __int64 v28; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v35; // [rsp+20h] [rbp-9C8h]
  __int64 v36; // [rsp+48h] [rbp-9A0h] BYREF
  int v37; // [rsp+50h] [rbp-998h]
  __int64 v38; // [rsp+58h] [rbp-990h]
  int v39; // [rsp+60h] [rbp-988h]
  __int64 v40; // [rsp+68h] [rbp-980h]
  PVOID BackTrace[20]; // [rsp+80h] [rbp-968h] BYREF
  _OWORD v42[12]; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v43; // [rsp+1E0h] [rbp-808h]
  _BYTE v44[520]; // [rsp+1E8h] [rbp-800h] BYREF
  __int64 v45; // [rsp+3F0h] [rbp-5F8h] BYREF
  int v46; // [rsp+3F8h] [rbp-5F0h]

  v3 = a3;
  v6 = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v14 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v14 + 2) = 0LL;
          v13 = *(_QWORD *)v14;
          if ( !*(_DWORD *)(*(_QWORD *)v14 + 8LL) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v10, v11);
            v13 = *(_QWORD *)v14;
          }
          HMUnlockObject(v13);
        }
      }
    }
  }
  v36 = 0LL;
  v37 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v45, (const struct INPUT_SPACE *)&v36, 0);
  v18 = 0;
  Pool2 = 0LL;
  if ( !(_DWORD)v3 )
    goto LABEL_37;
  v18 = 200 * v3;
  if ( (unsigned __int64)(200 * v3) > 0xFFFFFFFF )
  {
LABEL_34:
    v23 = 87LL;
    goto LABEL_35;
  }
  v20 = v18;
  v40 = 260LL;
  v21 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63736955) != 0x63736955
    || (v22 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_20:
    Pool2 = ExAllocatePool2(261LL, v18);
    goto LABEL_21;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v22) != 1668507989 )
  {
    if ( ++v22 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_20;
  }
  v35 = 0;
  if ( v18 < 0x1000uLL || (v18 & 0xFFF) != 0 )
  {
    v35 = 1;
    v20 = v18 + 16LL;
  }
  Pool2 = ExAllocatePool2(261LL, v20);
  if ( !Pool2 )
    goto LABEL_27;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v35 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v21,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_21;
    }
LABEL_33:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_27:
    Pool2 = 0LL;
    goto LABEL_21;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v21,
                           Pool2,
                           BackTrace) )
    goto LABEL_33;
LABEL_21:
  if ( !Pool2 )
  {
    v23 = 8LL;
LABEL_35:
    v6 = 0;
LABEL_36:
    UserSetLastError(v23, v15, v16, v17);
    goto LABEL_55;
  }
LABEL_37:
  v24 = a1 + 12;
  if ( a1 + 12 < a1 || v24 > MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v38 = *(_QWORD *)a1;
  v39 = *(_DWORD *)(a1 + 8);
  v45 = v38;
  v46 = v39;
  if ( (_DWORD)v3 )
  {
    v25 = 200 * v3;
    if ( 200 * v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v24, v15, v16) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v25] > MmUserProbeAddress || &a2[v25] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove((void *)Pool2, a2, v18);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v45, (const struct INPUT_SPACE_REGION *)Pool2, v3) )
    goto LABEL_34;
  if ( (_DWORD)v3 )
  {
    v27 = 0;
    do
    {
      v28 = Pool2 + 200LL * v27;
      v42[0] = *(_OWORD *)v28;
      v42[1] = *(_OWORD *)(v28 + 16);
      v42[2] = *(_OWORD *)(v28 + 32);
      v42[3] = *(_OWORD *)(v28 + 48);
      v42[4] = *(_OWORD *)(v28 + 64);
      v42[5] = *(_OWORD *)(v28 + 80);
      v42[6] = *(_OWORD *)(v28 + 96);
      v42[7] = *(_OWORD *)(v28 + 112);
      v42[8] = *(_OWORD *)(v28 + 128);
      v42[9] = *(_OWORD *)(v28 + 144);
      v42[10] = *(_OWORD *)(v28 + 160);
      v42[11] = *(_OWORD *)(v28 + 176);
      v43 = *(_QWORD *)(v28 + 192);
      memset(v44, 0, 289);
      memset(&v44[296], 0, 0xD8uLL);
      v29 = CInputSpace::AddRegion((CInputSpace *)&v45, (const struct CInputSpaceRegion *)v42, 0LL);
      if ( v29 < 0 )
        goto LABEL_54;
    }
    while ( ++v27 != (_DWORD)v3 );
  }
  v29 = CInputConfig::ConfigureInputSpace(v26, (struct CInputSpace *)&v45);
  if ( v29 < 0 )
  {
LABEL_54:
    v6 = 0;
    v23 = RtlNtStatusToDosError(v29);
    goto LABEL_36;
  }
LABEL_55:
  CInputSpace::FreeRegions((CInputSpace *)&v45);
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  return v6;
}
