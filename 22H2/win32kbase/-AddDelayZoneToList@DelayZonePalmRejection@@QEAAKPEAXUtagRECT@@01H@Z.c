/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01AC608
 * Callers:
 *     AddPalmRejectionDelayZone @ 0x1C01ADCD4 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0083A80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01BD460 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  __int64 v10; // r8
  struct CompositionInputObject *v11; // rbp
  struct CompositionInputObject *v12; // rsi
  unsigned int v13; // r14d
  int v14; // eax
  int v15; // edx
  char *v16; // rbx
  __int64 v17; // r8
  struct tagRECT *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct tagRECT v28; // [rsp+40h] [rbp-78h] BYREF
  CInpLockGuard *v29[8]; // [rsp+50h] [rbp-68h] BYREF
  struct CompositionInputObject *v30; // [rsp+C0h] [rbp+8h] BYREF
  struct CompositionInputObject *v31; // [rsp+C8h] [rbp+10h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v29,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v30 = 0LL;
  v31 = 0LL;
  if ( a2 )
  {
    LOBYTE(v10) = 1;
    v14 = CompositionInputObject::ResolveHandle(a2, 1LL, v10, &v30);
    if ( v14 < 0 )
      goto LABEL_9;
    v11 = v30;
  }
  if ( a4 )
  {
    LOBYTE(v10) = 1;
    v14 = CompositionInputObject::ResolveHandle(a4, 1LL, v10, &v31);
    if ( v14 < 0 )
      goto LABEL_9;
    v12 = v31;
  }
  v16 = (char *)Win32AllocPoolZInit(0x68uLL, 2053403477LL);
  if ( !v16 )
  {
    v14 = -1073741801;
LABEL_9:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        8,
        25,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v14);
    }
    goto LABEL_26;
  }
  if ( v11 )
    ObReferenceObjectByPointer(v11, 3u, ExCompositionObjectType, 0);
  if ( v12 )
    ObReferenceObjectByPointer(v12, 3u, ExCompositionObjectType, 0);
  v18 = a5;
  *(struct tagRECT *)(v16 + 24) = *a3;
  *((_QWORD *)v16 + 9) = v11;
  *(struct tagRECT *)(v16 + 40) = *v18;
  *((_QWORD *)v16 + 10) = v12;
  *((_QWORD *)v16 + 2) = KeGetCurrentThread();
  if ( a6 )
    v19 = *(_DWORD *)(*((_QWORD *)gptiCurrent + 53) + 56LL);
  else
    v19 = 0;
  *((_DWORD *)v16 + 16) = v19;
  v13 = *((_DWORD *)this + 22);
  v20 = v13 + 1;
  if ( v13 == -1 )
    v20 = 1;
  *((_DWORD *)this + 22) = v20;
  *((_DWORD *)v16 + 14) = v13;
  *((_DWORD *)v16 + 23) = 3;
  v21 = *((_DWORD *)this + 26);
  *((_QWORD *)v16 + 12) = 0LL;
  *((_DWORD *)v16 + 22) = v21;
  v22 = (_QWORD *)((char *)this + 72);
  v16[60] = 0;
  v23 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v23 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *((_QWORD *)v16 + 1) = v22;
  *(_QWORD *)v16 = v23;
  *(_QWORD *)(v23 + 8) = v16;
  *v22 = v16;
  v24 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      8u,
      0x18u,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
      v13,
      v24);
  v25 = *((_QWORD *)this + 16);
  if ( v25 )
  {
    v26 = *((unsigned int *)this + 1);
    v28 = *a3;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v25, v26, v17, 3LL, &v28);
  }
LABEL_26:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v29);
  return v13;
}
