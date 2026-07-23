/*
 * XREFs of SmKmStoreDeleteWhenEmptyWorker @ 0x14024E3A0
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     SmKmStoreDelete @ 0x14061CC70 (SmKmStoreDelete.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmptyWorker(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 64);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  v5 = SmKmStoreRefFromStoreIndex(v1, v2, v3, v4);
  return SmKmStoreDelete(v6, *(unsigned int *)(*(_QWORD *)v5 + 6016LL), 0LL);
}
