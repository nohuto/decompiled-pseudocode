/*
 * XREFs of CarLoggingExit @ 0x1405D3500
 * Callers:
 *     CarCleanup @ 0x1405D37C8 (CarCleanup.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1405D369C (McGenEventUnregister_EtwUnregister.c)
 *     EtwUnregister @ 0x1407C1390 (EtwUnregister.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 CarLoggingExit()
{
  __int64 result; // rax
  REGHANDLE v1; // rcx

  result = (unsigned int)CarLogInitialized;
  if ( CarLogInitialized )
  {
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_140C09368 = 0;
    EtwUnregister(v1);
    if ( CarEtwEventBook )
    {
      ExFreePoolWithTag(CarEtwEventBook, 0);
      CarEtwEventBook = 0LL;
    }
    _InterlockedExchange(&CarLogInitialized, 0);
    return McGenEventUnregister_EtwUnregister();
  }
  return result;
}
