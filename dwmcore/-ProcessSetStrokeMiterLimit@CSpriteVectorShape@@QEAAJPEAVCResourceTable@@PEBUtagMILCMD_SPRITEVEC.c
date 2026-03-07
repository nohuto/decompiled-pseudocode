__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeMiterLimit(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1B30)(
           (char *)this + SDWORD2(xmmword_1803E1B30),
           &CSpriteVectorShape::sc_StrokeMiterLimit,
           (char *)a3 + 8);
}
