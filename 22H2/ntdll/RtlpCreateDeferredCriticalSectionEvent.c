/*
 * XREFs of RtlpCreateDeferredCriticalSectionEvent @ 0x180065000
 * Callers:
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlpWaitOnCriticalSection @ 0x180064940 (RtlpWaitOnCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E92D0 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwCreateEvent @ 0x18009DDE0 (ZwCreateEvent.c)
 */

HANDLE __fastcall RtlpCreateDeferredCriticalSectionEvent(__int64 a1)
{
  signed __int64 v1; // rdi
  signed __int64 v3; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  v1 = -1LL;
  Handle = (HANDLE)-1LL;
  if ( RtlpForceCSToUseEvents )
  {
    v5 = ZwCreateEvent(&Handle, 0x100003u, 0LL, SynchronizationEvent, 0);
    v6 = (__int64)Handle;
    if ( v5 < 0 )
      v6 = -1LL;
    v1 = v6;
    Handle = (HANDLE)v6;
  }
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1, 0LL);
  if ( !v3 )
    return Handle;
  if ( Handle != (HANDLE)-1LL )
    NtClose(Handle);
  return (HANDLE)v3;
}
