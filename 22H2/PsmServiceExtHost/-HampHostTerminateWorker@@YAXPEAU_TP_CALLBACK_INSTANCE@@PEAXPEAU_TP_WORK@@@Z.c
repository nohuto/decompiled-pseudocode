/*
 * XREFs of ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180005500
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180005190 (-HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REAS.c)
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800052A0 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180005818 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180005F08 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180006078 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006460 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800065A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000ED5C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180021FF0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026E74 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029A78 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18002DF84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18007D2AC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$__ea_18007D2AC.c)
 */

void __fastcall HampHostTerminateWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _TP_WORK *a3)
{
  char *v4; // r12
  int v5; // edi
  unsigned __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned int v10; // edx
  int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int IsSuspendWaiter; // eax
  unsigned int v15; // edx
  bool v16; // zf
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  DWORD v20; // ebx
  _BYTE v21[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h]
  _QWORD v25[3]; // [rsp+70h] [rbp-98h] BYREF
  char v26[144]; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+118h] [rbp+10h] BYREF
  __int64 v28; // [rsp+128h] [rbp+20h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0C91, 0, 0, 2u, &v27);
  v4 = (char *)*((_QWORD *)a2 - 4);
  v5 = 0;
  v22 = 0;
  RtlQueryUnbiasedInterruptTime(v25);
  v27 = 0LL;
  v28 = 0LL;
  v6 = v25[0] / 0x2710uLL;
  RmpAcquireGlobalLock();
  v7 = RmHamHostReferenceUnsafe(a2);
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx(a2, 0);
  v8 = *((_QWORD *)a2 + 81) >> 16;
  v9 = (unsigned __int16)*((_DWORD *)a2 + 162);
  LODWORD(v25[0]) = WORD1(*((_QWORD *)a2 + 81)) & 3;
  HampHostStartProcessPresenceChange(a2);
  if ( v7 && HampHostShouldTerminate(a2) )
  {
    v11 = 1;
    if ( (v9 & 0xFFFFFF00) == 0x700 )
      HampHostInvalidateActivities(a2, v9, 0LL, 1LL);
    HampHostReleaseLockExclusiveEx(a2, v10);
    if ( (*((_QWORD *)a2 + 81) & 0x2000000000000LL) == 0
      || (int)RmHamHostGetProcessesInfo(
                (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64),
                0x1000u,
                1u,
                (struct _HAM_PROCESS_SNAPSHOT *)&v27) >= 0
      && (v12 = HampHostQueryAndLogTerminatingProcessCount((__int64)&v27, v9), (unsigned int)v28 <= v12) )
    {
      if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
      {
        v21[0] = *((_BYTE *)a2 + 560);
        LODWORD(v24) = v9;
        v23 = (unsigned __int64)a2 + 24;
        v21[1] = v8 & 3;
        v25[1] = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
          &v23,
          &unk_1800A0DD4);
      }
      v11 = 0;
    }
    HampHostTerminateWithProcessBoost((HANDLE *)a2, (struct _HAM_PROCESS_SNAPSHOT *)&v27);
    RtlQueryUnbiasedInterruptTime(&v23);
    HampHostNotifyZeroProcess(
      a2,
      v11 != 0 ? v25[0] : 0,
      v11 != 0 ? v9 : 0,
      (unsigned int)(v23 / 0x2710) - (unsigned int)v6,
      &v22);
    v5 = v22;
  }
  *((_QWORD *)a2 + 81) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a2 + 680);
  IsSuspendWaiter = HampHostIsSuspendWaiter(a2, v13);
  *((_QWORD *)a2 + 81) &= ~0x800000000uLL;
  HampHostCheckUpdateSuspendWaitState(a2, IsSuspendWaiter);
  HampHostReleaseLockExclusiveEx(a2, v15);
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v27);
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    v16 = (*((_QWORD *)a2 + 74))-- == 1LL;
    if ( v16 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    v16 = (*((_QWORD *)a2 + 74))-- == 1LL;
    if ( v16 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64));
    RmpReleaseGlobalLock();
  }
  RmpObjectRelease((char *)a2 - 64);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
  {
    v21[0] = v7;
    v23 = (unsigned __int64)v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v17,
      (unsigned int)&unk_1800A0D57,
      v18,
      v19,
      (__int64)&v23,
      (__int64)v21);
  }
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v20, 0LL);
  }
}
