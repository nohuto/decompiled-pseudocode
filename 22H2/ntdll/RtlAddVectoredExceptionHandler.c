/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x180082070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return (PVOID)RtlpAddVectoredHandler(First, Handler, 0LL);
}
