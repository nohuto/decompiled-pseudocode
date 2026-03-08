/*
 * XREFs of SmKmStoreDeleteWhenEmptyWorker @ 0x140358810
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SmKmStoreDelete @ 0x1407DD27C (SmKmStoreDelete.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmptyWorker(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 64);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  v3 = SmKmStoreRefFromStoreIndex(v1, v2);
  SmKmStoreDelete(v4, *(unsigned int *)(*(_QWORD *)v3 + 6016LL), 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v1 + 256))(v1, 0LL, 9LL);
}
