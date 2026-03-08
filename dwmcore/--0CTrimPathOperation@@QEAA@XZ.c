/*
 * XREFs of ??0CTrimPathOperation@@QEAA@XZ @ 0x18001527C
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18001514C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x1800158B8 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FA90 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CTrimPathOperation *__fastcall CTrimPathOperation::CTrimPathOperation(CTrimPathOperation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  Path::Segment::Segment((char *)this + 48, 0LL);
  LOBYTE(v2) = 2;
  Path::Segment::Segment((char *)this + 64, v2);
  LOBYTE(v3) = 5;
  Path::Segment::Segment((char *)this + 80, v3);
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>((char *)this + 112);
  `vector constructor iterator'((char *)this + 204, 8uLL, 0x10uLL, (void *(*)(void *))CMilPoint2F::CMilPoint2F);
  return this;
}
