/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x1C0044F90
 * Callers:
 *     GreDeleteSemaphore @ 0x1C0044F30 (GreDeleteSemaphore.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall MultiUserGreTrackRemoveEngResource(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v3; // rcx

  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore(MultiUserEngAllocListLock);
  result = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v3 = (__int64 *)a1[1], (__int64 *)*v3 != a1) )
    __fastfail(3u);
  *v3 = result;
  *(_QWORD *)(result + 8) = v3;
  if ( MultiUserEngAllocListLock )
  {
    result = EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock", MultiUserEngAllocListLock);
    if ( MultiUserEngAllocListLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
      return PsLeavePriorityRegion();
    }
  }
  return result;
}
