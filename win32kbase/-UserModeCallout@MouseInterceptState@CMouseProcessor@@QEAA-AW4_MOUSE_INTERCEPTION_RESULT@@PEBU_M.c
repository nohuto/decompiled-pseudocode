/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C02318B8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C022B2E4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C022E838 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C020B3C0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::UserModeCallout(__int64 a1, __int128 *a2, int *a3)
{
  __int128 v6; // xmm0
  PKDPC BufferChainingDpc; // rdi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // xmm1_8
  unsigned int v21; // ebx
  __int64 *v23[4]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v24[20]; // [rsp+40h] [rbp-69h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v23, "MouseInterceptionCallout", 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  memset(v24, 0, sizeof(v24));
  v6 = *a2;
  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  v8 = a2[1];
  v24[0] = 0x100000000LL;
  *(_OWORD *)&v24[1] = v6;
  v23[3] = 0LL;
  v9 = a2[2];
  p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
  *(_OWORD *)&v24[3] = v8;
  *(_OWORD *)&v24[5] = v9;
  memset(&v24[7], 0, 24);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
  LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine;
  ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)BufferChainingDpc == 2 && *(_QWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 16048) )
  {
    v19 = SGDGetUserSessionState(v16, v15, v17, v18);
    InputExtensibilityCallout::CallUserModeLockFree(
      *(InputExtensibilityCallout **)(v19 + 16048),
      (struct _CLIENT_DEVICE_NOTIFICATION *)v24);
  }
  v20 = v24[9];
  *(_OWORD *)a3 = *(_OWORD *)&v24[7];
  *((_QWORD *)a3 + 2) = v20;
  v21 = *a3;
  RIMLockExclusive(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v23);
  return v21;
}
