/*
 * XREFs of IopMcTryUnlockMdl @ 0x14055D00C
 * Callers:
 *     IoTryReleasePage @ 0x14055C684 (IoTryReleasePage.c)
 *     IopMcDereferenceMdl @ 0x14055CB10 (IopMcDereferenceMdl.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14055D068 (IopMcWaitAndCleanupBufferEntry.c)
 * Callees:
 *     IopUnlockAndFreeMdl @ 0x1402F9CA8 (IopUnlockAndFreeMdl.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14055CE20 (IopMcRemoveMdlPagesFromTable.c)
 */

char __fastcall IopMcTryUnlockMdl(__int64 a1, signed __int64 a2)
{
  __int64 v3; // rax
  struct _MDL *v4; // rdi

  if ( !a2 )
    return 0;
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), 0LL, a2);
  v4 = (struct _MDL *)v3;
  if ( a2 != v3 )
    return 0;
  IopMcRemoveMdlPagesFromTable(a1, v3);
  if ( (*(_DWORD *)(a1 + 12) & 1) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFE);
  IopUnlockAndFreeMdl(v4);
  return 1;
}
