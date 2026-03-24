/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E1B4
 * Callers:
 *     GreGetNearestColor @ 0x1C00202A0 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x1C003A0D0 (GreGetClipBox.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003B0A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BE530 (pProcessDfbSurfacesInternal.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z @ 0x1C00C8F00 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C013E10C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C0149538 (GreSetMagicColors.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00C7F00 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *((_BYTE *)this + 48) )
    {
      *(_DWORD *)(v1 + 40) &= ~2u;
      v1 = *(_QWORD *)this;
      *((_BYTE *)this + 48) = 0;
    }
    if ( v1 )
      XDCOBJ::vUnlockFast(this);
  }
  *(_QWORD *)this = 0LL;
}
