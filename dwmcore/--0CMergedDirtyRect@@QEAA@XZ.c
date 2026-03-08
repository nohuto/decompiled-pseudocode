/*
 * XREFs of ??0CMergedDirtyRect@@QEAA@XZ @ 0x1800E1FC4
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800991A8 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x180104860 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

CMergedDirtyRect *__fastcall CMergedDirtyRect::CMergedDirtyRect(CMergedDirtyRect *this)
{
  char *v2; // rdi
  __int64 v3; // rsi
  CMergedDirtyRect *result; // rax

  *(_QWORD *)this = &CMergedRectBase<4>::`vftable';
  v2 = (char *)this + 8;
  v3 = 4LL;
  do
  {
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v2);
    v2 += 16;
    --v3;
  }
  while ( v3 );
  memset_0(this, 0, 0x58uLL);
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)this = &CMergedDirtyRect::`vftable';
  result = this;
  *((_DWORD *)this + 19) = 1;
  return result;
}
