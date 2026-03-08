/*
 * XREFs of ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C001E210
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C001DFD0 (GreUpdateSpriteClipRgn.c)
 * Callees:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C001E500 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 */

void __fastcall vSpDwmFlushSpriteClipRgnChange(struct SFMLOGICALSURFACE *a1)
{
  int v1; // eax
  __int64 v3; // rax
  unsigned __int64 v4; // r9

  v1 = *((_DWORD *)a1 + 63);
  if ( (v1 & 0x20) != 0 )
  {
    if ( (v1 & 4) != 0 )
    {
      v3 = *((_QWORD *)a1 + 23);
      v4 = 0LL;
      if ( v3 )
        v4 = *(_QWORD *)(v3 + 8);
      bSpDwmNotifyDirty(*((HSPRITE *)a1 + 37), a1, 2u, v4);
    }
    *((_DWORD *)a1 + 63) &= ~0x20u;
  }
}
