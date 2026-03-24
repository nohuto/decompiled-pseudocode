/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E4C4
 * Callers:
 *     GreGetNearestColor @ 0x1C0021710 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x1C003B540 (GreGetClipBox.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003C518 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BE880 (pProcessDfbSurfacesInternal.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z @ 0x1C00C91F0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C013E41C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C0149888 (GreSetMagicColors.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00C8290 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
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
