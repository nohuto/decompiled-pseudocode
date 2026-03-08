/*
 * XREFs of CmSiRWLockInitialize @ 0x14080BCF0
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x140374BD0 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x140375288 (RtlpHpHeapCreate.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1403A0434 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     DbgkpInitializePhase0 @ 0x140B44E78 (DbgkpInitializePhase0.c)
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 *     CmFcManagerInitialize @ 0x140B536B4 (CmFcManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140B6437C (SshpAlpcInitialize.c)
 *     SshpSessionManagerInitialize @ 0x140B71F74 (SshpSessionManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
