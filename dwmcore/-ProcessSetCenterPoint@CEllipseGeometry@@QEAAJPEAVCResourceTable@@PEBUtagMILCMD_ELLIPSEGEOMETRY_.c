__int64 __fastcall CEllipseGeometry::ProcessSetCenterPoint(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1900)(
           (char *)this + SDWORD2(xmmword_1803E1900),
           &CEllipseGeometry::sc_CenterPoint,
           (char *)a3 + 8);
}
