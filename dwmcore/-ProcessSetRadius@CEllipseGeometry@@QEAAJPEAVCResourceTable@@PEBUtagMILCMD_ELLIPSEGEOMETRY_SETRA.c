__int64 __fastcall CEllipseGeometry::ProcessSetRadius(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ELLIPSEGEOMETRY_SETRADIUS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1938)(
           (char *)this + SDWORD2(xmmword_1803E1938),
           &CEllipseGeometry::sc_Radius,
           (char *)a3 + 8);
}
