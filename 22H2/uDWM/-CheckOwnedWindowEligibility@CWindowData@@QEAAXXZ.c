/*
 * XREFs of ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180016360
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180016238 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180016538 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180028B64 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013558 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18003F390 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibility(CWindowData *this)
{
  __int64 v1; // rax
  bool ShouldBeIncludedInOwnerSWR; // bl

  v1 = *((_QWORD *)this + 67);
  ShouldBeIncludedInOwnerSWR = 0;
  if ( v1 && (*(_BYTE *)(v1 + 610) & 1) != 0 )
    ShouldBeIncludedInOwnerSWR = CWindowData::ShouldBeIncludedInOwnerSWR(this);
  if ( ((*((_BYTE *)this + 610) & 2) != 0) != ShouldBeIncludedInOwnerSWR )
    CWindowData::UpdateOwnerLists(this, (*((_BYTE *)this + 610) & 2) == 0);
}
