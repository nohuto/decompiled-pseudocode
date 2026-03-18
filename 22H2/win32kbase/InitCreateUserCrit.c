/*
 * XREFs of InitCreateUserCrit @ 0x1C02DD5E0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     CreateKernelSemaphore @ 0x1C0074CE0 (CreateKernelSemaphore.c)
 *     ?InitDomainLocks@@YAJXZ @ 0x1C00B5624 (-InitDomainLocks@@YAJXZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00BC1F4 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C5304 (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_ERESOURCE@@@Z @ 0x1C00D0CEC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_ERESOURCE@@@Z.c)
 *     ?INIT_CRIT_RESOURCE@@YAPEAU_ERESOURCE@@XZ @ 0x1C00D13D4 (-INIT_CRIT_RESOURCE@@YAPEAU_ERESOURCE@@XZ.c)
 */

__int64 InitCreateUserCrit()
{
  bool v0; // dl
  struct _ERESOURCE *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _ERESOURCE *Pool2; // rax
  struct _ERESOURCE *v23; // rax
  struct _ERESOURCE *v24; // rax
  struct _KEVENT *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  PERESOURCE v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  bool v51; // dl

  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      14,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  v1 = INIT_CRIT_RESOURCE();
  *(_QWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 8) = v1;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 8) )
    goto LABEL_46;
  v13 = INIT_CRIT_RESOURCE();
  *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 16) = v13;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 16) )
    goto LABEL_46;
  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  gpresDitTouchInjection = Pool2;
  if ( !Pool2 )
    goto LABEL_49;
  if ( ExInitializeResourceLite(Pool2) < 0 )
  {
LABEL_48:
    ExFreePoolWithTag(gpresDitTouchInjection, 0);
    gpresDitTouchInjection = 0LL;
    goto LABEL_49;
  }
  v23 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  gpresDitMouseInjectionFlush = v23;
  if ( !v23 )
    goto LABEL_46;
  if ( ExInitializeResourceLite(v23) < 0 )
    goto LABEL_51;
  v24 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  gpresDitCompositionInputSinkQuery = v24;
  if ( !v24 )
    goto LABEL_46;
  if ( ExInitializeResourceLite(v24) < 0 )
    goto LABEL_54;
  v25 = (struct _KEVENT *)ExAllocatePool2(64LL, 56LL, 1716220757LL);
  gpHandleFlagsMutex = v25;
  if ( !v25 )
  {
LABEL_46:
    if ( gpresDitTouchInjection )
    {
      ExDeleteResourceLite(gpresDitTouchInjection);
      goto LABEL_48;
    }
LABEL_49:
    if ( !gpresDitMouseInjectionFlush )
    {
LABEL_52:
      v39 = gpresDitCompositionInputSinkQuery;
      if ( !gpresDitCompositionInputSinkQuery )
      {
LABEL_55:
        if ( *(_QWORD *)(SGDGetUserSessionState(v39, v10, v11, v12) + 16) )
        {
          v44 = SGDGetUserSessionState(v41, v40, v42, v43);
          CLEANUP_CRIT_RESOURCE((struct _ERESOURCE **)(v44 + 16));
        }
        if ( *(_QWORD *)(SGDGetUserSessionState(v41, v40, v42, v43) + 8) )
        {
          v49 = SGDGetUserSessionState(v46, v45, v47, v48);
          CLEANUP_CRIT_RESOURCE((struct _ERESOURCE **)(v49 + 8));
        }
        UserSetLastError(8);
        return 0LL;
      }
      ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
LABEL_54:
      ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
      gpresDitCompositionInputSinkQuery = 0LL;
      goto LABEL_55;
    }
    ExDeleteResourceLite(gpresDitMouseInjectionFlush);
LABEL_51:
    ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
    gpresDitMouseInjectionFlush = 0LL;
    goto LABEL_52;
  }
  v25->Header.WaitListHead.Flink = 0LL;
  LODWORD(v25->Header.WaitListHead.Blink) = 0;
  v25->Header.LockNV = 1;
  KeInitializeEvent(v25 + 1, SynchronizationEvent, 0);
  LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v26,
      v27,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      15,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids,
      (char)gpHandleFlagsMutex);
  v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = SGDGetUserSessionState(WPP_GLOBAL_Control, v26, v27, v28);
    LOBYTE(v32) = v30;
    LOBYTE(v33) = v29;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v33,
      v32,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      16,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids,
      *(_QWORD *)(v31 + 16));
  }
  v34 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = SGDGetUserSessionState(WPP_GLOBAL_Control, v26, v27, v28);
    LOBYTE(v37) = v35;
    LOBYTE(v38) = v34;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v38,
      v37,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      17,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids,
      *(_QWORD *)(v36 + 8));
  }
  if ( (int)InitDomainLocks() < 0 )
  {
LABEL_45:
    CleanupDomainLocks();
    goto LABEL_46;
  }
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    EnterLeaveCritMitRitHandOffHazard::UnInitialize();
    goto LABEL_45;
  }
  gRotationProcessLock = 0LL;
  v51 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v51,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      18,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  return 1LL;
}
