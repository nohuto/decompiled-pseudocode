/*
 * XREFs of VmUnlockPages @ 0x1405A2D40
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1405315D8 (MmUpdateMdlTrackerForMdlSwitch.c)
 */

void __fastcall VmUnlockPages(struct _MDL *BugCheckParameter3, unsigned int a2)
{
  CSHORT MdlFlags; // ax
  CSHORT v4; // ax

  if ( a2 > 1 )
    NT_ASSERT("(Operation == IoReadAccess) || (Operation == IoWriteAccess)");
  MdlFlags = BugCheckParameter3->MdlFlags;
  if ( (MdlFlags & 0xFFF7) != 0 )
    NT_ASSERT("(Mdl->MdlFlags & ~(0x0008)) == 0");
  v4 = MdlFlags | 0x102;
  BugCheckParameter3->MdlFlags = v4;
  if ( a2 == 1 )
    BugCheckParameter3->MdlFlags = v4 | 0x80;
  MmUpdateMdlTrackerForMdlSwitch((ULONG_PTR)BugCheckParameter3, 0);
  MmUnlockPages(BugCheckParameter3);
}
