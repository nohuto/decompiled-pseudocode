/*
 * XREFs of ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ @ 0x180251A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B1CC (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 */

void __fastcall CTransform3DGroup::BreakLinksForCycles(CTransform3DGroup *this)
{
  struct CMILMatrix *v2; // rax

  v2 = (struct CMILMatrix *)operator new(0x44uLL);
  if ( v2 )
    *((_DWORD *)v2 + 16) = 0;
  *((_QWORD *)this + 3) = v2;
  if ( v2 )
    CTransform3DGroup::GetRealizationWorker((CTransform3DGroup *)((char *)this - 184), 0LL, v2);
  CCyclicResourceListEntry::BreakLinksForCycles(this);
}
