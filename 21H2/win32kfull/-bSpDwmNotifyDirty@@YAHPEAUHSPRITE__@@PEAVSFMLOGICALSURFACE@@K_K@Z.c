/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0084ED0
 * Callers:
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0084E3C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreNotifyDirtySprite @ 0x1C0090400 (GreNotifyDirtySprite.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C01547D8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026CCEC (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00208A4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0084F94 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C0084FB8 (DwmAsyncDirtySprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0108254 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, __int64 a3, UINT_PTR a4)
{
  int v6; // r14d
  int v7; // ebp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  unsigned int v14; // esi
  unsigned int v15; // ebx
  void *v16; // rax

  v6 = 0;
  v7 = 0;
  v8 = SFMLOGICALSURFACE::bDeviceBitmap(a2);
  v13 = 1;
  v14 = v11 & 0xFFFFFFFE;
  if ( !v8 )
    v14 = v11;
  v15 = v14;
  if ( (v14 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*(unsigned int *)(v9 + 252), v9, v11, v12) )
  {
    v6 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)a2, 1u, a4);
    v15 = v14 & 0xFFFFFFFE;
  }
  if ( v15 )
  {
    v16 = (void *)UserReferenceDwmApiPort(v10);
    v7 = DwmAsyncDirtySprite(v16, a4);
  }
  if ( v6 < 0 || v7 < 0 )
    return 0;
  return v13;
}
