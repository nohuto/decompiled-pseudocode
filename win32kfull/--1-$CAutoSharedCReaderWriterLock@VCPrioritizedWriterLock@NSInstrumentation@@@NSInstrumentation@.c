/*
 * XREFs of ??1?$CAutoSharedCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C0130000
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00C3FAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00D7674 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

void __fastcall NSInstrumentation::CAutoSharedCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoSharedCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(
        NSInstrumentation::CPrioritizedWriterLock **a1)
{
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(*a1);
}
