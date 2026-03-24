/*
 * XREFs of IsNVMeControllerOnFatalError @ 0x1C0005E98
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00030F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0017780 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall IsNVMeControllerOnFatalError(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 160) + 28LL) & 2) == 0 )
    return 0;
  StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  return 1;
}
