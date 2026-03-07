__int64 __fastcall CComponentTransform3D::ProcessSetRotationAngle(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E04B0)(
           (char *)this + SDWORD2(xmmword_1803E04B0),
           &CComponentTransform3D::sc_RotationAngle,
           (char *)a3 + 8);
}
