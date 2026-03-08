/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x140414BB0
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x140A025D0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPssCaptureVaSpaceBulk(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
