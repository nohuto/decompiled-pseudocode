/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x1C01A50DC
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A51F4 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C008AD94 (--0CTouchProcessor@@QEAA@XZ.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 20) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 448, 0, 0x6ECuLL);
  *((_DWORD *)this + 95) &= ~2u;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_BYTE *)this + 2220) = 0;
  *((_QWORD *)this + 278) = 0LL;
  *((_QWORD *)this + 279) = 0LL;
  *((_QWORD *)this + 280) = 0LL;
  *((_QWORD *)this + 281) = 0LL;
  return this;
}
