/*
 * XREFs of MiStoreDecrementOutstandingWrites @ 0x140659A2C
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiStoreRundownWritesApc @ 0x14065A300 (MiStoreRundownWritesApc.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall MiStoreDecrementOutstandingWrites(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = *(_DWORD *)(a1 + 1212) - 1;
  *(_DWORD *)(a1 + 1212) = result;
  v2 = *(struct _KEVENT **)(a1 + 1216);
  if ( v2 )
  {
    if ( !result )
      return KeSetEvent(v2, 0, 0);
  }
  return result;
}
