/*
 * XREFs of ??1HANDLELOCK@@QEAA@XZ @ 0x1C0022D20
 * Callers:
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgFree @ 0x1C0087080 (HmgFree.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB8C8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBAC4 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBBCC (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

void __fastcall HANDLELOCK::~HANDLELOCK(HANDLELOCK *this)
{
  if ( *((_DWORD *)this + 2) )
    HANDLELOCK::vUnlock(this);
}
