/*
 * XREFs of ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00D7CC4
 * Callers:
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C007CDBC (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C007DD9C (GreTransferSpriteStateToDwmState.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C00D7A20 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01288C4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0269B54 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C026B290 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 * Callees:
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C00277FC (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 */

_BOOL8 __fastcall SFMLOGICALSURFACE::SetShape(SFMLOGICALSURFACE *this, _QWORD *a2, struct _SURFOBJ *a3)
{
  SURFOBJ *v3; // rbp
  BOOL v4; // edi
  char v8; // r15
  SURFOBJ *v9; // rax
  int v10; // ecx

  v3 = (SURFOBJ *)*((_QWORD *)this + 23);
  v4 = 0;
  if ( v3 || !a3 )
  {
    v8 = 0;
    if ( v3 && !a3 )
    {
      SURFACE::RemoveLSurf((SURFACE *)&v3[-1].pvScan0, this);
      EngUnlockSurface(v3);
      if ( a2 )
        SpNotifyLSurfaceRedirSurfAssoc(a2, *(HLSURF *)this, *((struct _SURFOBJ **)this + 23), 0);
      v4 = 1;
      EtwLogicalSurfPhysSurfUnbindEvent(*(_QWORD *)this, *(_QWORD *)(*((_QWORD *)this + 23) + 8LL));
    }
  }
  else
  {
    v8 = 1;
  }
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 61) &= ~2u;
  *((_QWORD *)this + 23) = a3;
  if ( v8 )
  {
    v9 = EngLockSurface(a3->hsurf);
    if ( v9 )
      SURFACE::AddLSurf((SURFACE *)&v9[-1].pvScan0, this);
    *((_DWORD *)this + 61) |= 1u;
    v4 = 1;
    if ( a2 )
    {
      v10 = SpNotifyLSurfaceRedirSurfAssoc(a2, *(HLSURF *)this, a3, 1);
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741822 )
        v4 = 0;
    }
    EtwLogicalSurfPhysSurfBindEvent(*(_QWORD *)this, a3->hsurf);
  }
  return v4;
}
