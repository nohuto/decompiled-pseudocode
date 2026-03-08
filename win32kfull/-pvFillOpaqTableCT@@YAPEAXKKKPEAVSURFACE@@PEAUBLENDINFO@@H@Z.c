/*
 * XREFs of ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1C0273D88
 * Callers:
 *     ?vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0274F70 (-vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0275170 (-vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1C027719C (-vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 *     ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0277490 (-vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z @ 0x1C0092030 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z.c)
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1C0092590 (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z.c)
 */

__int64 __fastcall pvFillOpaqTableCT(
        __int64 a1,
        int a2,
        unsigned int a3,
        struct SURFACE *a4,
        struct BLENDINFO *a5,
        int a6)
{
  unsigned int v9; // r15d
  __int64 v10; // rbx
  char v11; // di

  v9 = a1;
  v10 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( *(_QWORD *)a4 == *(_QWORD *)(v10 + 464)
    && a3 == *(_DWORD *)(v10 + 476)
    && a2 == *(_DWORD *)(v10 + 472)
    && *(_DWORD *)(v10 + 8584) == *(_DWORD *)(v10 + 484) )
  {
    v11 = 1;
    if ( !a6 )
      return v10;
  }
  else
  {
    v11 = 0;
  }
  vGetBlendInfo(v9, a4, a2, a5);
  if ( !v11 )
    vClearTypeLookupTableLoop(v9, a4, a5, a2, a3);
  return v10;
}
