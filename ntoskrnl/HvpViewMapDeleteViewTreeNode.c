/*
 * XREFs of HvpViewMapDeleteViewTreeNode @ 0x14074C624
 * Callers:
 *     HvpViewMapCleanup @ 0x14078C304 (HvpViewMapCleanup.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x1402C0A9C (CmSiUnmapViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1402C0AC0 (HvcallpNoHypervisorPresent.c)
 */

void __fastcall HvpViewMapDeleteViewTreeNode(PPRIVILEGE_SET Privileges, __int64 a2)
{
  void *v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(void **)&Privileges[2].Privilege[0].Attributes;
  if ( v2 )
  {
    CmSiUnmapViewOfSection((__int64)Privileges, *(HANDLE **)(a2 + 24), v2);
    if ( *(_QWORD *)&Privileges[3].Control )
    {
      v5 = HvcallpNoHypervisorPresent();
      CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a2 + 24), v6 * v5);
    }
  }
  CmSiFreeMemory(Privileges);
}
