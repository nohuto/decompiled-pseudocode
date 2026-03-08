/*
 * XREFs of CarLoggingExit @ 0x1405D1050
 * Callers:
 *     CarCleanup @ 0x1405D1318 (CarCleanup.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1405D11EC (McGenEventUnregister_EtwUnregister.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
    dword_140C09378 = 0;
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
