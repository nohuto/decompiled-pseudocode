/*
 * XREFs of ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00DEEA8
 * Callers:
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DED6C (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0181920 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall EPATHOBJGC::~EPATHOBJGC(EPATHOBJGC *this)
{
  if ( *((_QWORD *)this + 1) )
    EPATHOBJ::vUnlock(this);
}
