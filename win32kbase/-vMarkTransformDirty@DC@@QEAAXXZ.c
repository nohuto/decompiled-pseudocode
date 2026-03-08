/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C017E500
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001ADD0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectBitmap @ 0x1C0043B10 (GreSelectBitmap.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0052A00 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0057600 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  __int64 v1; // rdx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_QWORD *)this + 122);
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    *(_DWORD *)(v1 + 340) |= 0x16090u;
  else
    *(_DWORD *)(v1 + 340) |= 0x6090u;
}
