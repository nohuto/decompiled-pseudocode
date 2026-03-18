/*
 * XREFs of KeUnstackDetachProcess @ 0x14034E780
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)ApcState);
}
