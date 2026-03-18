/*
 * XREFs of IsNVMeControllerOnFatalError @ 0x1C000C0FC
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00028F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerReset @ 0x1C000E580 (NVMeControllerReset.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA70 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall IsNVMeControllerOnFatalError(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL) & 2) == 0 )
    return 0;
  StorPortExtendedFunction(98LL, a1, 0LL);
  return 1;
}
