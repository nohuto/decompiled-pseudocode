/*
 * XREFs of ?dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z @ 0x1C0047980
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngModifySurface @ 0x1C00ABA10 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00B09D0 (EngAssociateSurface.c)
 * Callees:
 *     memset @ 0x1C00D6A00 (memset.c)
 */

void __fastcall SURFACE::dhpdev(SURFACE *this, struct DHPDEV__ *a2)
{
  *((_QWORD *)this + 90) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6088LL);
  memset((char *)this + 792, 0, 0x40uLL);
  RtlCaptureStackBackTrace(0, 8u, (PVOID *)this + 99, 0LL);
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 88) = a2;
}
