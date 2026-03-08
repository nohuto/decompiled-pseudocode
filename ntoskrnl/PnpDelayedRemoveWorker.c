/*
 * XREFs of PnpDelayedRemoveWorker @ 0x14087CDB0
 * Callers:
 *     PnpChainDereferenceComplete @ 0x14087CAC8 (PnpChainDereferenceComplete.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PnpWatchdogEtwWrite @ 0x14055E670 (PnpWatchdogEtwWrite.c)
 *     PnpEnableWatchdog @ 0x14068A5EC (PnpEnableWatchdog.c)
 *     PnpRecordBlackbox @ 0x14068A980 (PnpRecordBlackbox.c)
 *     PnpWatchdogTimerPause @ 0x14068A9F4 (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x14068AA80 (WdtpCancelTimer.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PipRemoveDevicesInRelationList @ 0x14087CF0C (PipRemoveDevicesInRelationList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDelayedRemoveWorker(_QWORD *P)
{
  PVOID **v2; // rdx
  PVOID *v3; // r8
  PVOID *v4; // rax
  PVOID *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rbx
  void *v13; // rbx
  void *v14; // rcx
  PVOID Pa; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_Pa; // [rsp+28h] [rbp-8h]

  p_Pa = &Pa;
  Pa = &Pa;
  PpDevNodeLockTree(1);
  *(_QWORD *)&PnpDelayedRemoveWorkerThread = KeGetCurrentThread();
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  v2 = (PVOID **)IopPendingSurpriseRemovals;
  if ( IopPendingSurpriseRemovals != &IopPendingSurpriseRemovals )
  {
    do
    {
      v3 = *v2;
      if ( *((_BYTE *)v2 + 104) )
      {
        if ( *((_DWORD *)*v2[8] + 2) == *(_DWORD *)*v2[8] )
        {
          if ( v3[1] != v2 || (v4 = v2[1], *v4 != v2) || (*v4 = v3, v3[1] = v4, v5 = p_Pa, *p_Pa != &Pa) )
LABEL_19:
            __fastfail(3u);
          v2[1] = p_Pa;
          *v2 = &Pa;
          *v5 = v2;
          p_Pa = (PVOID *)v2;
        }
        else
        {
          *((_BYTE *)v2 + 104) = 0;
        }
      }
      v2 = (PVOID **)v3;
    }
    while ( v3 != &IopPendingSurpriseRemovals );
  }
  PnpDelayedRemovePending = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  while ( 1 )
  {
    v6 = Pa;
    if ( Pa == &Pa )
      break;
    if ( *((PVOID **)Pa + 1) != &Pa )
      goto LABEL_19;
    v7 = *(_QWORD *)Pa;
    if ( *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa )
      goto LABEL_19;
    Pa = *(PVOID *)Pa;
    *(_QWORD *)(v7 + 8) = &Pa;
    if ( P )
    {
      P[2] = v6;
      P[1] = v6[7];
      v8 = v6[7];
      v9 = v8 ? *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) : 0LL;
      *P = v9;
      v10 = PnpEnableWatchdog(3, (__int64)P, (const UNICODE_STRING *)((v9 + 56) & -(__int64)(v9 != 0)));
      P[3] = v10;
      if ( v10 )
      {
        v11 = (void *)P[1];
        if ( v11 )
          ObfReferenceObjectWithTag(v11, 0x56706E50u);
      }
    }
    PipRemoveDevicesInRelationList(v6);
    if ( P )
    {
      v12 = P[3];
      if ( v12 )
      {
        PnpWatchdogTimerPause(*(_QWORD *)(v12 + 8));
        PnpRecordBlackbox(0LL, *(_DWORD *)(v12 + 16));
        if ( *(_BYTE *)(v12 + 32) )
        {
          PnpWatchdogEtwWrite(v12, 1);
          if ( !*(_BYTE *)(v12 + 33) )
            PnpWatchdogEtwWrite(v12, 3);
        }
        v13 = *(void **)(v12 + 8);
        WdtpCancelTimer((__int64)v13, 1);
        ExFreePoolWithTag(v13, 0x54645750u);
        v14 = (void *)P[1];
        P[3] = 0LL;
        if ( v14 )
          ObfDereferenceObjectWithTag(v14, 0x56706E50u);
      }
    }
  }
  *(_QWORD *)&PnpDelayedRemoveWorkerThread = 0LL;
  if ( P )
    ExFreePoolWithTag(P, 0x54706E50u);
  PpDevNodeUnlockTree(1);
}
