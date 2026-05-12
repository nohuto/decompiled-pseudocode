/*
 * XREFs of RaidUnitAbortSrbCompletion @ 0x1C004A4E0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C000B5D0 (RaUnitReleaseRemoveLock.c)
 *     RaidAdapterRequestComplete @ 0x1C000F2F0 (RaidAdapterRequestComplete.c)
 *     RaidDriverGetName @ 0x1C0012468 (RaidDriverGetName.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001CD08 (StorFreeSynchronousScsiRequest.c)
 *     StorEtwMiniportBugAbortBrokenEvent @ 0x1C004FE24 (StorEtwMiniportBugAbortBrokenEvent.c)
 */

__int64 __fastcall RaidUnitAbortSrbCompletion(__int64 a1, IRP *a2, ULONG_PTR a3)
{
  __int64 DeviceExtension; // r14
  ULONG_PTR *v6; // rsi
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v8; // rdi
  void *v9; // rcx
  __int64 v10; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-28h] BYREF

  DeviceExtension = (__int64)a2->Tail.Overlay.CurrentStackLocation[-1].DeviceObject->DeviceExtension;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(ULONG_PTR **)(a3 + 64);
  else
    v6 = *(ULONG_PTR **)(a3 + 24);
  BugCheckParameter4 = *v6;
  if ( *(_BYTE *)(BugCheckParameter4 + 2) == 40 )
    v8 = *(_QWORD *)(BugCheckParameter4 + 96);
  else
    v8 = *(_QWORD *)(BugCheckParameter4 + 48);
  *(_BYTE *)(v8 + 17) &= ~4u;
  if ( a2->IoStatus.Status < 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 3, 1) != 4 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 2, 1) == 4 )
  {
LABEL_9:
    RaidAdapterRequestComplete(*(_QWORD *)(DeviceExtension + 24), v8, 1);
    goto LABEL_10;
  }
  v10 = *(_QWORD *)(DeviceExtension + 24);
  *(_OWORD *)BugCheckParameter2 = 0LL;
  RaidDriverGetName(*(_QWORD *)(v10 + 16), (__int64)BugCheckParameter2);
  if ( MiniportBugActionPolicy == 1 )
  {
    StorEtwMiniportBugAbortBrokenEvent(v8, BugCheckParameter2);
  }
  else if ( MiniportBugActionPolicy == 2 )
  {
    KeBugCheckEx(0xF0u, 2uLL, BugCheckParameter2[1], a3, BugCheckParameter4);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 3, 2);
LABEL_10:
  RaUnitReleaseRemoveLock(DeviceExtension);
  StorFreeSynchronousScsiRequest(a2);
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v9 = *(void **)(a3 + 64);
  else
    v9 = *(void **)(a3 + 24);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72536152u);
  ExFreePoolWithTag((PVOID)a3, 0x72536152u);
  return 3221225494LL;
}
