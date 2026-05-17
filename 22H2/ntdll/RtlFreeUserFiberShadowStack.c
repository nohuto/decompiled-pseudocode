/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800E18C0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D860 (NtSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return NtSetInformationProcess();
}
