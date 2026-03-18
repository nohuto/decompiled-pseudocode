/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0078BB0
 * Callers:
 *     GreNotifyDirtySprite @ 0x1C000B1A0 (GreNotifyDirtySprite.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00597AC (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00780E4 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0133EB8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C015982A (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     DwmAsyncDirtySprite @ 0x1C0078024 (DwmAsyncDirtySprite.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C007AD98 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BB50C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00BE0AC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(__int64 a1, struct SFMLOGICALSURFACE *a2, __int64 a3, __int64 a4)
{
  int v7; // r14d
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // edi
  unsigned int v14; // esi
  unsigned int v15; // ebx
  void *v16; // rax
  __int64 v17; // r8

  v7 = 0;
  v8 = 0;
  v9 = SFMLOGICALSURFACE::bDeviceBitmap(a2);
  v13 = 1;
  v14 = v12 & 0xFFFFFFFE;
  if ( !v9 )
    v14 = v12;
  v15 = v14;
  if ( (v14 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*(unsigned int *)(v10 + 252)) )
  {
    v7 = GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)a2);
    v15 = v14 & 0xFFFFFFFE;
  }
  if ( v15 )
  {
    v16 = (void *)UserReferenceDwmApiPort(v11);
    v8 = DwmAsyncDirtySprite(v16, a1, v17, v15, a4);
  }
  if ( v7 < 0 || v8 < 0 )
    return 0;
  return v13;
}
