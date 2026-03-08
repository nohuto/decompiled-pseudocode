/*
 * XREFs of ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x1C019A510
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003E878 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C001CA1C (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1C00437F4 (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z @ 0x1C0043830 (-vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@K@Z @ 0x1C00A8764 (--0RGNCOREMEMOBJ@@QEAA@K@Z.c)
 */

char __fastcall RGNCOREOBJ::bCopy(RGNCOREOBJ *this, const struct RGNCOREOBJ *a2)
{
  PVOID v4; // rbx
  PVOID v6; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v6) = 0;
  if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion((unsigned int **)this, a2, (unsigned int *)&v6) )
  {
    RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v6, (unsigned int)v6);
    v4 = v6;
    if ( !v6 )
    {
      RGNCOREOBJ::vDeleteRGNCOREOBJ(&v6);
      return 0;
    }
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v6, a2);
    v6 = *(PVOID *)this;
    *(_QWORD *)this = v4;
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v6);
  }
  else
  {
    RGNCOREOBJ::vCopy(this, a2);
  }
  return 1;
}
