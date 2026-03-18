/*
 * XREFs of MiGetNextVad @ 0x14021510C
 * Callers:
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiUpdateVadBits @ 0x1406B2E28 (MiUpdateVadBits.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiReturnPageTablePageCommitment @ 0x140764EA0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A436C (MiCommitInitialVadMetadataBits.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A320A8 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x140A37534 (MiHotPatchProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetNextVad(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 i; // rdx
  _QWORD *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
    }
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(_QWORD *)v1 == a1 )
        break;
      a1 = v1;
    }
  }
  return v1;
}
