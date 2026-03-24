/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01AC960
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x1C01ADD50 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013705C (WPP_RECORDER_SF_Dd.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  char *v8; // rax
  unsigned int v9; // ebx
  char *v10; // r10
  int v11; // esi
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  CInpLockGuard *v17[8]; // [rsp+40h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v17,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v8 = (char *)Win32AllocPoolZInit(0x68uLL, 2053403477LL);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    *(struct tagRECT *)(v8 + 24) = *a4;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    *(_OWORD *)(v8 + 40) = 0LL;
    *((_QWORD *)v8 + 2) = KeGetCurrentThread();
    *((_DWORD *)v8 + 16) = 0;
    v11 = *((_DWORD *)this + 22);
    v12 = v11 + 1;
    if ( v11 == -1 )
      v12 = 1;
    *((_DWORD *)this + 22) = v12;
    v13 = (_QWORD *)((char *)this + 72);
    *((_DWORD *)v10 + 14) = v11;
    *((_DWORD *)v10 + 23) = a3;
    *((_DWORD *)v10 + 22) = 0;
    *((_QWORD *)v10 + 12) = a2;
    v10[60] = 1;
    v14 = *((_QWORD *)this + 9);
    if ( *(DelayZonePalmRejection **)(v14 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
      __fastfail(3u);
    *((_QWORD *)v10 + 1) = v13;
    *(_QWORD *)v10 = v14;
    *(_QWORD *)(v14 + 8) = v10;
    *v13 = v10;
    v15 = *((_DWORD *)this + 23) + 1;
    *((_DWORD *)this + 23) = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        (__int64)gBaseLog,
        4u,
        8u,
        0x1Au,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v11,
        v15);
    v9 = v11;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v17);
  return v9;
}
