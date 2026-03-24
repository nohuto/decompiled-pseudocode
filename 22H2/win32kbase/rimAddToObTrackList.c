/*
 * XREFs of rimAddToObTrackList @ 0x1C005915C
 * Callers:
 *     RawInputManagerObjectCreate @ 0x1C0057E28 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C0058CE8 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C01661E0 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rdx
  struct _LIST_ENTRY *v8; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == 1 )
  {
    Blink = gObRimList.Blink;
    v6 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimList.Blink->Flink == &gObRimList )
    {
      v6->Flink = &gObRimList;
      *(_QWORD *)(a1 + 24) = Blink;
      Blink->Flink = v6;
      gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
      goto LABEL_6;
    }
LABEL_4:
    __fastfail(3u);
  }
  if ( v2 != 2 )
  {
    if ( v2 != 3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 339LL);
    v7 = gObRimInputObserverList.Blink;
    v8 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimInputObserverList.Blink->Flink == &gObRimInputObserverList )
    {
      v8->Flink = &gObRimInputObserverList;
      *(_QWORD *)(a1 + 24) = v7;
      v7->Flink = v8;
      gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  v3 = (_QWORD *)qword_1C0254488;
  v4 = (_QWORD *)(a1 + 16);
  if ( *(__int64 **)qword_1C0254488 != &gObRimDevList )
    goto LABEL_4;
  *v4 = &gObRimDevList;
  *(_QWORD *)(a1 + 24) = v3;
  *v3 = v4;
  qword_1C0254488 = a1 + 16;
LABEL_6:
  *(_BYTE *)(a1 + 8) = 1;
  qword_1C0254458 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
