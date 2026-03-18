/*
 * XREFs of ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D1650
 * Callers:
 *     GreValidateVisrgn @ 0x1C004B7A8 (GreValidateVisrgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00C6CF4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreIntersectVisRect @ 0x1C016AF70 (GreIntersectVisRect.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnExclusive(DC *this, __int64 a2)
{
  __int64 result; // rax

  CPushLock::AcquireLockExclusive((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
