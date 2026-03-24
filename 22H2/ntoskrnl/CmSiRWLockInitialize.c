/*
 * XREFs of CmSiRWLockInitialize @ 0x1407905A0
 * Callers:
 *     RtlpHpHeapCreate @ 0x14037A994 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x14039D63C (RtlHpHeapManagerInitialize.c)
 *     CmFcManagerInitialize @ 0x140A38D64 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 *     SshInitialize @ 0x140A3F9B4 (SshInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140A6D4E0 (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
