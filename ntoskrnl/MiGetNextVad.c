/*
 * XREFs of MiGetNextVad @ 0x140350908
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1406B6AF0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407285AC (MiCommitInitialVadMetadataBits.c)
 *     MiUpdateVadBits @ 0x140729534 (MiUpdateVadBits.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x1407D73E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x140A34804 (MiHotPatchProcess.c)
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
