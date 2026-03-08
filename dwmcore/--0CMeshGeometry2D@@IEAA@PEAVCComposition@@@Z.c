/*
 * XREFs of ??0CMeshGeometry2D@@IEAA@PEAVCComposition@@@Z @ 0x1801BDEE8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::CMeshGeometry2D(CMeshGeometry2D *this, struct CComposition *a2)
{
  CMeshGeometry2D *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &CMeshGeometry2D::`vftable';
  result = this;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  return result;
}
