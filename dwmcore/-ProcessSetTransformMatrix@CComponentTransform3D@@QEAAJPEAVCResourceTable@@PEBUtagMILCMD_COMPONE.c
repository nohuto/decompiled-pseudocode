__int64 __fastcall CComponentTransform3D::ProcessSetTransformMatrix(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E04E8)(
           (char *)this + SDWORD2(xmmword_1803E04E8),
           &CComponentTransform3D::sc_TransformMatrix,
           (char *)a3 + 8);
}
