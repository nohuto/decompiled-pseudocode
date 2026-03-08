/*
 * XREFs of InitCreateUserCrit @ 0x1C031F55C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x1C0035610 (CreateKernelSemaphore.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAT_USERCRIT_TYPE@@@Z @ 0x1C008E3E4 (-CLEANUP_CRIT_RESOURCE@@YAXAEAT_USERCRIT_TYPE@@@Z.c)
 *     ?INIT_CRIT_RESOURCE@@YA?AT_USERCRIT_TYPE@@XZ @ 0x1C00C30B4 (-INIT_CRIT_RESOURCE@@YA-AT_USERCRIT_TYPE@@XZ.c)
 *     ?InitDomainLocks@@YAJXZ @ 0x1C00C310C (-InitDomainLocks@@YAJXZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00CB204 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00D46DC (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 */

__int64 InitCreateUserCrit()
{
  bool v0; // dl
  PVOID v1; // rbx
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
  PVOID v13; // rbx
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
  bool v39; // dl
  PERESOURCE v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  PVOID v52; // [rsp+70h] [rbp+8h] BYREF

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
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  v1 = *INIT_CRIT_RESOURCE(&v52);
  *(_QWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 8) = v1;
  if ( *(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 8) )
  {
    v13 = *INIT_CRIT_RESOURCE(&v52);
    *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 16) = v13;
    if ( *(_QWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 16) )
    {
      Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
      gpresDitTouchInjection = Pool2;
      if ( !Pool2 )
        goto LABEL_56;
      if ( ExInitializeResourceLite(Pool2) < 0 )
      {
LABEL_55:
        ExFreePoolWithTag(gpresDitTouchInjection, 0);
        gpresDitTouchInjection = 0LL;
        goto LABEL_56;
      }
      v23 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
      gpresDitMouseInjectionFlush = v23;
      if ( v23 )
      {
        if ( ExInitializeResourceLite(v23) < 0 )
          goto LABEL_58;
        v24 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
        gpresDitCompositionInputSinkQuery = v24;
        if ( v24 )
        {
          if ( ExInitializeResourceLite(v24) < 0 )
          {
LABEL_61:
            ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
            gpresDitCompositionInputSinkQuery = 0LL;
            goto LABEL_62;
          }
          v25 = (struct _KEVENT *)ExAllocatePool2(64LL, 56LL, 1716220757LL);
          gpHandleFlagsMutex = v25;
          if ( v25 )
          {
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
                (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids,
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
                (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids,
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
                (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids,
                *(_QWORD *)(v36 + 8));
            }
            if ( (int)InitDomainLocks() >= 0 )
            {
              WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)CreateKernelSemaphore(0, 0x7FFFFFFF);
              if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
              {
                gRotationProcessLock = 0LL;
                v39 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v39,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    4,
                    14,
                    18,
                    (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
                return 1LL;
              }
              EnterLeaveCritMitRitHandOffHazard::UnInitialize();
            }
            CleanupDomainLocks();
          }
        }
      }
    }
  }
  if ( gpresDitTouchInjection )
  {
    ExDeleteResourceLite(gpresDitTouchInjection);
    goto LABEL_55;
  }
LABEL_56:
  if ( !gpresDitMouseInjectionFlush )
    goto LABEL_59;
  ExDeleteResourceLite(gpresDitMouseInjectionFlush);
LABEL_58:
  ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
  gpresDitMouseInjectionFlush = 0LL;
LABEL_59:
  v41 = gpresDitCompositionInputSinkQuery;
  if ( gpresDitCompositionInputSinkQuery )
  {
    ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
    goto LABEL_61;
  }
LABEL_62:
  if ( *(_QWORD *)(SGDGetUserSessionState(v41, v10, v11, v12) + 16) )
  {
    v46 = SGDGetUserSessionState(v43, v42, v44, v45);
    CLEANUP_CRIT_RESOURCE((PERESOURCE *)(v46 + 16));
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v43, v42, v44, v45) + 8) )
  {
    v51 = SGDGetUserSessionState(v48, v47, v49, v50);
    CLEANUP_CRIT_RESOURCE((PERESOURCE *)(v51 + 8));
  }
  UserSetLastError(8);
  return 0LL;
}
