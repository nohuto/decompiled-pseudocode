/*
 * XREFs of CompletionQueueReInit @ 0x1C00095A4
 * Callers:
 *     NVMeQueuesReInit @ 0x1C00105F8 (NVMeQueuesReInit.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 */

void *__fastcall CompletionQueueReInit(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax

  *(_DWORD *)(a2 + 170) = 0;
  if ( *(_WORD *)(a2 + 168) )
    v2 = *(_WORD *)(a1 + 334);
  else
    v2 = *(_WORD *)(a1 + 332);
  return NVMeZeroMemory(*(void **)a2, 16 * (unsigned int)v2);
}
