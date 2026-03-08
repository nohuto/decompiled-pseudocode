/*
 * XREFs of MiGetFirstVad @ 0x1402A5B0C
 * Callers:
 *     MiCommitInitialVadMetadataBits @ 0x1407285AC (MiCommitInitialVadMetadataBits.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x1407D73E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     MiHotPatchProcess @ 0x140A34804 (MiHotPatchProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiGetFirstVad(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 2008);
  if ( !v1 )
    return 0LL;
  do
  {
    result = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v1 );
  return result;
}
