/*
 * XREFs of AlpcpAllocateBuffer @ 0x1407DC040
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpAllocateBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(256LL, a2, a3);
}
