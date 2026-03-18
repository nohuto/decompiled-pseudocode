/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01D7A9C
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1C0162C20 (NtUserStopAndEndInertia.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E11D4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E15B0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(CTouchProcessor *this, int a2, void *a3)
{
  CTouchProcessor *v3; // rbx
  int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rbx
  struct tagPOINT v11; // rdi
  struct tagPOINT v12; // rbx
  int v13; // edx
  CInertiaManager *v14; // rcx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  PERESOURCE *v19[8]; // [rsp+50h] [rbp-58h] BYREF

  v3 = gpTouchProcessor;
  v4 = a2;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      7,
      301,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
      v4);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v19,
    (CTouchProcessor *)((char *)v3 + 32),
    0LL);
  v8 = *((_QWORD *)v3 + 7);
  v9 = (__int64)v3 + 48;
  while ( 1 )
  {
    if ( v8 == v9 )
      goto LABEL_14;
    v7 = *(unsigned int *)(v8 + 40);
    v6 = 0LL;
    if ( (_DWORD)v7 )
      break;
LABEL_12:
    v8 = *(_QWORD *)(v8 + 8);
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(v8 + 232) + 480LL * (unsigned int)v6;
    if ( *(unsigned __int16 *)(v10 + 172) == v4 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= (unsigned int)v7 )
      goto LABEL_12;
  }
  if ( !v10 )
  {
LABEL_14:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        302,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    UserSetLastError(1168LL, v6, v7, v9);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v5) = 0;
    if ( (_BYTE)v16 || (_BYTE)v5 )
    {
      LOBYTE(v17) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        303,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
LABEL_41:
    v5 = 0;
    goto LABEL_42;
  }
  v11 = *(struct tagPOINT *)(v10 + 208);
  v12 = *(struct tagPOINT *)(v10 + 200);
  if ( !((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(&qword_1C029A5D0, v12, 3LL)
    || !CInertiaManager::PostInertiaMessage(v14, 0x23Cu, (const struct INERTIA_INFO_INTERNAL *)&unk_1C029A5D8, v12, v11) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = v5;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        304,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    goto LABEL_41;
  }
LABEL_42:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v19);
  return v5;
}
