__int64 __fastcall CComponentTransform2D::ProcessSetTransformMatrix(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E0638)(
           (char *)this + SDWORD2(xmmword_1803E0638),
           &CComponentTransform2D::sc_TransformMatrix,
           (char *)a3 + 8);
}
