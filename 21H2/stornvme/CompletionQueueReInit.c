/*
 * XREFs of CompletionQueueReInit @ 0x1C0017D4C
 * Callers:
 *     NVMeQueuesReInit @ 0x1C0019CD8 (NVMeQueuesReInit.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 */

void *__fastcall CompletionQueueReInit(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax

  *(_DWORD *)(a2 + 170) = 0;
  if ( *(_WORD *)(a2 + 168) )
    v2 = *(_WORD *)(a1 + 302);
  else
    v2 = *(_WORD *)(a1 + 300);
  return NVMeZeroMemory(*(void **)a2, 16 * (unsigned int)v2);
}
