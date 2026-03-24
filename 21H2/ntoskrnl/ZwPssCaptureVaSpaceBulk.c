/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x1403FCB40
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF40 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPssCaptureVaSpaceBulk(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
