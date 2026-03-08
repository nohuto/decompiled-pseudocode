/*
 * XREFs of VmUnlockPages @ 0x1405F6860
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14061AFA8 (MmUpdateMdlTrackerForMdlSwitch.c)
 */

void __fastcall VmUnlockPages(PMDL MemoryDescriptorList, unsigned int a2)
{
  CSHORT MdlFlags; // cx
  CSHORT v4; // cx

  if ( a2 > 1 )
    NT_ASSERT("(Operation == IoReadAccess) || (Operation == IoWriteAccess)");
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0xFFF7) != 0 )
    NT_ASSERT("(Mdl->MdlFlags & ~(0x0008)) == 0");
  v4 = MdlFlags | 0x102;
  MemoryDescriptorList->MdlFlags = v4;
  if ( a2 == 1 )
    MemoryDescriptorList->MdlFlags = v4 | 0x80;
  MmUpdateMdlTrackerForMdlSwitch((ULONG_PTR)MemoryDescriptorList);
  MmUnlockPages(MemoryDescriptorList);
}
