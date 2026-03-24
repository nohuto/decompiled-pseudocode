/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C0089EF4
 * Callers:
 *     InputInitialize @ 0x1C008A25C (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C01A51AC (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C006C234 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C008B2EC (--0CSpatialProcessor@@QEAA@XZ.c)
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
