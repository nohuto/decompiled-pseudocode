/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x1C01DD3D4
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DD4F8 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0053FEC (--0CTouchProcessor@@QEAA@XZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  CPTPProcessor *result; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 19) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 384, 0, 0x70uLL);
  *((_BYTE *)this + 496) = 0;
  memset((char *)this + 544, 0, 0x71CuLL);
  *((_WORD *)this + 1182) = 0;
  result = this;
  *((_QWORD *)this + 296) = 0LL;
  *((_QWORD *)this + 297) = 0LL;
  *((_QWORD *)this + 298) = 0LL;
  *((_QWORD *)this + 299) = 0LL;
  *((_DWORD *)this + 93) &= ~2u;
  *((_DWORD *)this + 92) = 0;
  *((_BYTE *)this + 2366) = 0;
  return result;
}
