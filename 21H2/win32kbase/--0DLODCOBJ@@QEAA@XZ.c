/*
 * XREFs of ??0DLODCOBJ@@QEAA@XZ @ 0x1C003B054
 * Callers:
 *     GreGetClipBox @ 0x1C003A0D0 (GreGetClipBox.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C003AF78 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BE530 (pProcessDfbSurfacesInternal.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C013D1B4 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C013E10C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C0149538 (GreSetMagicColors.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C002CCA0 (PushThreadGuardedObject.c)
 */

DLODCOBJ *__fastcall DLODCOBJ::DLODCOBJ(DLODCOBJ *this)
{
  DLODCOBJ *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)this + 2,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 16) >> 64),
    (__int64)UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  result = this;
  *((_WORD *)this + 24) = 256;
  return result;
}
