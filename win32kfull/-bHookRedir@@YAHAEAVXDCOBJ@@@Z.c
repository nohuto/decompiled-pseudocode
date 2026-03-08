/*
 * XREFs of ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00D2120
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002180 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C005C780 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00DEB30 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0122FB8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0123AF4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8D54 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookRedir(struct XDCOBJ *a1)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdi
  _DWORD *v5; // rdi
  __int64 v7; // rbx
  struct RFONT *v8; // rdx
  signed __int32 v9; // ett
  _QWORD *v10; // rax
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( *(_DWORD *)(v3 + 23384) )
    return 0LL;
  v4 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 36) & 0x4000) == 0 )
    return 0LL;
  v5 = *(_DWORD **)(v4 + 48);
  if ( !v5 || (v5[10] & 0x20000000) == 0 )
    return 0LL;
  Gre::Base::Globals(v2);
  if ( !*(_QWORD *)(v3 + 23376) )
    *(_QWORD *)(v3 + 23376) = PDEV::Allocate(0);
  v7 = *(_QWORD *)(v3 + 23376);
  if ( !v7 || *(_QWORD *)(*(_QWORD *)a1 + 48LL) == v7 )
    return 0LL;
  v11 = *(void **)(v3 + 23376);
  memmove(v11, v5, 0xDA8uLL);
  PDEVOBJ::prfntActive((PDEVOBJ *)&v11, 0LL);
  PDEVOBJ::prfntInactive((PDEVOBJ *)&v11, v8);
  if ( (*(_DWORD *)(v7 + 40) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(v7 + 3496) + 1528LL) = 0;
  else
    *(_DWORD *)(v7 + 1528) = 0;
  _m_prefetchw((const void *)(v7 + 40));
  do
    v9 = *(_DWORD *)(v7 + 40);
  while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 40), v9 | 0x800000, v9) );
  v10 = v11;
  *((_QWORD *)v11 + 437) = v5;
  v10[10] = v10;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2848LL) = RedirTextOut;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2776LL) = RedirStrokePath;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2816LL) = RedirCopyBits;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2808LL) = RedirBitBlt;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2912LL) = RedirLineTo;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2784LL) = RedirFillPath;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2792LL) = RedirStrokeAndFillPath;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2824LL) = RedirStretchBlt;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 3232LL) = RedirAlphaBlend;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 3256LL) = RedirTransparentBlt;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 3208LL) = RedirGradientFill;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 3384LL) = RedirDrawStream;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 3392LL) = RedirNineGrid;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 3224LL) = RedirPlgBlt;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 3216LL) = RedirStretchBltROP;
  *(_QWORD *)(*(_QWORD *)(v3 + 23376) + 2864LL) = RedirDrawEscape;
  bMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 496LL));
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = *(_QWORD *)(v3 + 23376);
  return 1LL;
}
