__int64 __fastcall CLineGeometry::ProcessSetEndPoint(
        CLineGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEGEOMETRY_SETENDPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1A18)(
           (char *)this + SDWORD2(xmmword_1803E1A18),
           &CLineGeometry::sc_EndPoint,
           (char *)a3 + 8);
}
