/*
 * XREFs of IsNVMeControllerOnFatalError @ 0x1C0005834
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall IsNVMeControllerOnFatalError(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 2) == 0 )
    return 0;
  StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  return 1;
}
