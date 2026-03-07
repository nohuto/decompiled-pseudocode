__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashOffset(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1AF8)(
           (char *)this + SDWORD2(xmmword_1803E1AF8),
           &CSpriteVectorShape::sc_StrokeDashOffset,
           (char *)a3 + 8);
}
