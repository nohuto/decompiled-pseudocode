/*
 * XREFs of rimAddToObTrackList @ 0x1C0044220
 * Callers:
 *     RawInputManagerDeviceObjectCreate @ 0x1C0045228 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerObjectCreate @ 0x1C005ECC4 (RawInputManagerObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C019A090 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // rdx
  struct _LIST_ENTRY *v11; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    Blink = gObRimList.Blink;
    v9 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimList.Blink->Flink == &gObRimList )
    {
      v9->Flink = &gObRimList;
      *(_QWORD *)(a1 + 24) = Blink;
      Blink->Flink = v9;
      gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
      goto LABEL_5;
    }
LABEL_6:
    __fastfail(3u);
  }
  if ( v5 != 2 )
  {
    if ( v5 != 3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v10 = gObRimInputObserverList.Blink;
    v11 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimInputObserverList.Blink->Flink == &gObRimInputObserverList )
    {
      v11->Flink = &gObRimInputObserverList;
      *(_QWORD *)(a1 + 24) = v10;
      v10->Flink = v11;
      gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
      goto LABEL_5;
    }
    goto LABEL_6;
  }
  v6 = (_QWORD *)qword_1C029A128;
  v7 = (_QWORD *)(a1 + 16);
  if ( *(__int64 **)qword_1C029A128 != &gObRimDevList )
    goto LABEL_6;
  *v7 = &gObRimDevList;
  *(_QWORD *)(a1 + 24) = v6;
  *v6 = v7;
  qword_1C029A128 = a1 + 16;
LABEL_5:
  *(_BYTE *)(a1 + 8) = 1;
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
