/*
 * XREFs of MiDereferenceVad @ 0x1402DC3A4
 * Callers:
 *     MiFinishVadDeletion @ 0x140248200 (MiFinishVadDeletion.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14065E63C (MiUnlockAndDereferenceNestedVad.c)
 *     NtAreMappedFilesTheSame @ 0x14086F640 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDereferenceVad(__int64 a1)
{
  signed __int32 v1; // eax

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 36));
  if ( v1 == -1 )
    __fastfail(0xEu);
  return !v1 && (*(_DWORD *)(a1 + 48) & 4) != 0;
}
