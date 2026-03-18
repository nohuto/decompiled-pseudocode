/*
 * XREFs of CmSiRWLockInitialize @ 0x1408106D0
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x140396FB0 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x140397668 (RtlpHpHeapCreate.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1403A5954 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 *     CmFcManagerInitialize @ 0x140B3BCA0 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140B4DF94 (PspInitPhase0.c)
 *     SshInitialize @ 0x140B51AA0 (SshInitialize.c)
 *     SshpAlpcInitialize @ 0x140B680A4 (SshpAlpcInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140B6C29C (DbgkpInitializePhase0.c)
 *     SshpSessionManagerInitialize @ 0x140B76400 (SshpSessionManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
