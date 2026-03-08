/*
 * XREFs of ?dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z @ 0x1C00A4010
 * Callers:
 *     EngAssociateSurface @ 0x1C00A3DA0 (EngAssociateSurface.c)
 *     EngModifySurface @ 0x1C00A3E40 (EngModifySurface.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall SURFACE::dhpdev(SURFACE *this, struct DHPDEV__ *a2)
{
  *((_QWORD *)this + 90) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6088LL);
  memset((char *)this + 792, 0, 0x40uLL);
  RtlCaptureStackBackTrace(0, 8u, (PVOID *)this + 99, 0LL);
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 88) = a2;
}
