/*
 * XREFs of MiStoreDecrementOutstandingWrites @ 0x14065C070
 * Callers:
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     MiStoreRundownWritesApc @ 0x14065C950 (MiStoreRundownWritesApc.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
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
