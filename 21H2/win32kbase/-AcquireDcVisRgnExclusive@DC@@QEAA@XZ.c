/*
 * XREFs of ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D9320
 * Callers:
 *     GreValidateVisrgn @ 0x1C002BFA8 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C016D964 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C00D9428 (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnExclusive(DC *this, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)Feature_3093221692__private_IsEnabled() )
    CPushLock::AcquireLockExclusive((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
