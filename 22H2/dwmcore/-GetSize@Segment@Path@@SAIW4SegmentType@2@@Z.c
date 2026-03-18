/*
 * XREFs of ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800F2B48
 * Callers:
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x180015858 (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FB80 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800D4924 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1802801B4 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802AF58C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Path::Segment::GetSize(char a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( a1 )
  {
    case 0:
      return 16LL;
    case 1:
      return 8LL;
    case 2:
      return 16LL;
    case 3:
      return 28LL;
    case 4:
      return 24LL;
  }
  if ( a1 != 5 )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  return 32LL;
}
