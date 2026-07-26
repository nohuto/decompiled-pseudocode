/*
 * XREFs of ndisCompareProcNumInit @ 0x1C0144540
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0027050 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 */

__int64 __fastcall ndisCompareProcNumInit(struct _PROCESSOR_NUMBER *a1, struct _PROCESSOR_NUMBER *a2)
{
  return ndisCompareProcNum(*a1, *a2);
}
