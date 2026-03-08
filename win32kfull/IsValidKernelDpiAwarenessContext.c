/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x1C01CDB90
 * Callers:
 *     NtUserTransformPoint @ 0x1C01E01A0 (NtUserTransformPoint.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0x7FFFFFFF;
  return v1 == 24592
      || v1 == 1073766416
      || v1 == 18
      || v1 == 34
      || (((v1 & 0xFFFE00FF) - 17) & 0xFFFFFFFD) == 0 && ((v1 >> 8) & 0x1FF) != 0;
}
