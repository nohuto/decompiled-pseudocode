/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C008AD94
 * Callers:
 *     InputInitialize @ 0x1C008B0FC (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C01A50DC (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C006CCE4 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C008C18C (--0CSpatialProcessor@@QEAA@XZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  CSpatialProcessor::CSpatialProcessor(this);
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
  CInpLockGuard::Initialize((CTouchProcessor *)((char *)this + 40));
  return this;
}
