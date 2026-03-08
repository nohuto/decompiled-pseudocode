/*
 * XREFs of WmipWaitForCollectionEnabled @ 0x1409DEE58
 * Callers:
 *     WmipSendEnableRequest @ 0x140786FAC (WmipSendEnableRequest.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall WmipWaitForCollectionEnabled(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 16) & 8) == 0 )
  {
    KeInitializeEvent(*(PRKEVENT *)(a1 + 96), NotificationEvent, 0);
    *(_DWORD *)(a1 + 16) |= 8u;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  KeWaitForSingleObject(*(PVOID *)(a1 + 96), Executive, 0, 0, 0LL);
  return KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
}
