/*
 * XREFs of AlpcpAllocateBuffer @ 0x14078CD40
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpAllocateBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(256LL, a2, a3);
}
