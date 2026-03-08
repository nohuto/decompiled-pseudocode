/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C00B3D50
 * Callers:
 *     CleanupPowerRequestList @ 0x1C00B39B0 (CleanupPowerRequestList.c)
 *     xxxUserPowerCalloutWorker @ 0x1C00B3AC0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00EE6B4 (McTemplateK0pq_EtwWriteTransfer.c)
 */

struct tagPOWERREQUEST *__fastcall UnqueuePowerRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = 0LL;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v5 + 696));
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  if ( *(_QWORD *)(v10 + 680) != v10 + 680 )
  {
    v15 = SGDGetUserSessionState(v12, v11, v13, v14) + 680;
    v4 = *(_QWORD **)(v15 + 8);
    if ( *v4 != v15 || (v12 = (__int64 *)v4[1], (_QWORD *)*v12 != v4) )
      __fastfail(3u);
    *(_QWORD *)(v15 + 8) = v12;
    *v12 = v15;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v12, &RemovePowerRequestFromQueue, v13, v4, -1);
  }
  v16 = SGDGetUserSessionState(v12, v11, v13, v14);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v16 + 696));
  return (struct tagPOWERREQUEST *)v4;
}
