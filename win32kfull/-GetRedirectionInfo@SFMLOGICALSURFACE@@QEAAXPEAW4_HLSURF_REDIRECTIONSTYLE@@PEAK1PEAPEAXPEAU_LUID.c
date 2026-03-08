/*
 * XREFs of ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00E8FC0
 * Callers:
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C007DD9C (GreTransferSpriteStateToDwmState.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026821C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0269B54 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026A184 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C026A7F8 (GreProtectSpriteContent.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::GetRedirectionInfo(
        SFMLOGICALSURFACE *this,
        enum _HLSURF_REDIRECTIONSTYLE *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5,
        struct _LUID *a6)
{
  __int64 v6; // r10

  v6 = *((_QWORD *)this + 23);
  if ( v6 )
  {
    *a3 = *(_DWORD *)(v6 + 32);
    *a4 = *(_DWORD *)(v6 + 36);
    if ( (*(_DWORD *)(v6 + 92) & 1) != 0 )
    {
      *(_DWORD *)a2 = 2;
      if ( a5 )
        *a5 = *(void **)(v6 + 544);
      if ( a6 )
        *a6 = *(struct _LUID *)(v6 + 552);
      return;
    }
    if ( (*(_DWORD *)(v6 + 88) & 0x800) == 0 )
      return;
    *(_DWORD *)a2 = 1;
    if ( a5 )
      *a5 = *(void **)(v6 + 8);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *a3 = 0;
    *a4 = 0;
    if ( a5 )
      *a5 = 0LL;
  }
  if ( a6 )
    *a6 = 0LL;
}
