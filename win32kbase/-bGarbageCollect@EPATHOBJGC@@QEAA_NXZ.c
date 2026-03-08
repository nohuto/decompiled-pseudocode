/*
 * XREFs of ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00DE138
 * Callers:
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DED6C (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     FreeObject @ 0x1C00597F0 (FreeObject.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C01816C0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 */

char __fastcall EPATHOBJGC::bGarbageCollect(EPATHOBJGC *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 84) & 1) != 0 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)v2, 0, 1, 2, 7, 0LL) )
    return 0;
  EPATHOBJ::vFreeBlocks(this);
  FreeObject(*((void **)this + 1), 7u);
  *((_QWORD *)this + 1) = 0LL;
  return 1;
}
