/*
 * XREFs of KeStackAttachProcess @ 0x14034D950
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  KiStackAttachProcess(PROCESS, 0, (__int64)ApcState);
}
