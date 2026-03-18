/*
 * XREFs of DpiMiracastStopMiracastSessionWork @ 0x1C039FFF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0060B60 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060D90 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DpiMiracastStopMiracastSessionWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  DpiMiracastStopMiracastSessionSync(
    *(char **)Context,
    *((_BYTE *)Context + 8),
    (union _LARGE_INTEGER *)Context + 2,
    0LL,
    *((_DWORD *)Context + 6),
    0);
  DpiMiracastReleaseMiracastDeviceContext(*(int **)Context, (unsigned int)DpiMiracastStopMiracastSessionAsync);
  ExFreePoolWithTag(Context, 0);
}
