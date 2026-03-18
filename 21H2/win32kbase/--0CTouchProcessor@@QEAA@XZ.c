/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C0053FEC
 * Callers:
 *     InputInitialize @ 0x1C0052DC4 (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C01DD3D4 (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0086ABC (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_WORD *)this + 48) = 2;
  if ( isChildPartition() )
    *((_WORD *)this + 48) = 0x4000;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  CInpLockGuard::Initialize((CTouchProcessor *)((char *)this + 32));
  return this;
}
