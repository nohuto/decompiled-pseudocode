/*
 * XREFs of KdAllocateDynamicMemory @ 0x140A565F8
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     KdSetDbgPrintBufferSize @ 0x140511624 (KdSetDbgPrintBufferSize.c)
 */

__int64 KdAllocateDynamicMemory()
{
  __int64 result; // rax

  result = 0LL;
  if ( (_DWORD)KdPrintBufferAllocateSize )
    return KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
  return result;
}
