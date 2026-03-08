/*
 * XREFs of PopEtInternerAllocate @ 0x1407992F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopEtInternerAllocate(__int64 a1, __int64 a2)
{
  return ExAllocatePool2(256LL, a2, 1413836624LL);
}
