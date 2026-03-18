/*
 * XREFs of ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C0123E00
 * Callers:
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B85C (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall DWMSPRITEREF::~DWMSPRITEREF(DWMSPRITEREF *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
  *((_QWORD *)this + 4) = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
