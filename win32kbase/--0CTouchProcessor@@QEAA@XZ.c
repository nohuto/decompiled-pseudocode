/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C0097188
 * Callers:
 *     ?Initialize@CTouchProcessor@@SAJXZ @ 0x1C00970E8 (-Initialize@CTouchProcessor@@SAJXZ.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C020CBAC (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0097318 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_WORD *)this + 52) = 2;
  if ( isChildPartition() )
    *((_WORD *)this + 52) = 0x4000;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  CInpLockGuard::Initialize((CTouchProcessor *)((char *)this + 32));
  return this;
}
