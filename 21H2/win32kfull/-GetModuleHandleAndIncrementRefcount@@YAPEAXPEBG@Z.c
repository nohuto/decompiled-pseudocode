/*
 * XREFs of ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x1C0289514
 * Callers:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C02895DC (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall GetModuleHandleAndIncrementRefcount(wchar_t *Str1)
{
  if ( GreEngLoadModuleAllocListLock )
  {
    GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
    EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
    GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
  }
  return 0LL;
}
