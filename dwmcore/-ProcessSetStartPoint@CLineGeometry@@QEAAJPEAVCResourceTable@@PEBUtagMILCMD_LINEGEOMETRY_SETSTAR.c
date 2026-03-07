__int64 __fastcall CLineGeometry::ProcessSetStartPoint(
        CLineGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEGEOMETRY_SETSTARTPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E19E0)(
           (char *)this + SDWORD2(xmmword_1803E19E0),
           &CLineGeometry::sc_StartPoint,
           (char *)a3 + 8);
}
