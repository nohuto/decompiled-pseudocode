/*
 * XREFs of MiLockNestedVad @ 0x1408D9AC8
 * Callers:
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiFreeVadRange @ 0x140298C44 (MiFreeVadRange.c)
 *     MiUpControlAreaRefs @ 0x14052AAB0 (MiUpControlAreaRefs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockNestedVad(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
}
