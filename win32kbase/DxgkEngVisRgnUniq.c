/*
 * XREFs of DxgkEngVisRgnUniq @ 0x1C000D310
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0047AF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 DxgkEngVisRgnUniq()
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  struct _ERESOURCE *v2; // rcx

  v0 = *(_QWORD *)(SGDGetSessionState() + 24);
  if ( *(_QWORD *)(v0 + 96) )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemVisRgnUniqueness", *(_QWORD *)(v0 + 96));
  v1 = *(_DWORD *)(v0 + 6480) + *(_DWORD *)(v0 + 6516);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemVisRgnUniqueness", *(_QWORD *)(v0 + 96));
  v2 = *(struct _ERESOURCE **)(v0 + 96);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion();
  }
  return v1;
}
