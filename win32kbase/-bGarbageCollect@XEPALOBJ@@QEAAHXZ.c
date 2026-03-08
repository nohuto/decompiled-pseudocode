/*
 * XREFs of ?bGarbageCollect@XEPALOBJ@@QEAAHXZ @ 0x1C0184A40
 * Callers:
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198EC0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0019D64 (-bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

__int64 __fastcall XEPALOBJ::bGarbageCollect(XEPALOBJ *this)
{
  unsigned int v2; // ebx
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 40LL);
  EngAcquireSemaphore(v4);
  v2 = 0;
  if ( *(_QWORD *)this )
    v2 = XEPALOBJ::bDeletePaletteInternal(this, 1);
  SEMOBJ::vUnlock((PERESOURCE *)&v4);
  return v2;
}
