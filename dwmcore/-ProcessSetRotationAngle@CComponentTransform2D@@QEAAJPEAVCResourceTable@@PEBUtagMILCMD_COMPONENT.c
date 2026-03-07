__int64 __fastcall CComponentTransform2D::ProcessSetRotationAngle(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E0600)(
           (char *)this + SDWORD2(xmmword_1803E0600),
           &CComponentTransform2D::sc_RotationAngle,
           (char *)a3 + 8);
}
