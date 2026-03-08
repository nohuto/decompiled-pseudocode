/*
 * XREFs of HvcallInitInputControl @ 0x14036E320
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x14093E334 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14093E4E0 (HvlpLpCpuid.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14093E628 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitInputControl(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *a2 = a1;
  return result;
}
