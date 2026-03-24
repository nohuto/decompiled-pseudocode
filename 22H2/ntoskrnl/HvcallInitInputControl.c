/*
 * XREFs of HvcallInitInputControl @ 0x1403656C0
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x14088E7BC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x14088E988 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9FC (HvlpDynamicUpdateMicrocode.c)
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
