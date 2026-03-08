/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026E758
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0272EF8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0052680 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  struct tagSIZE **v2; // rcx
  struct tagSIZE *v3; // r8
  int v4; // edx

  v2 = (struct tagSIZE **)((char *)this + 120);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *((_BYTE *)v2 + 17) )
    {
      v4 = *((_DWORD *)this + 28);
      if ( (v4 & 0x1000) != 0 && (v3[4].cy & 0x4000) != 0 && *(_QWORD *)&v3[59] )
      {
        if ( v3[61].cx )
          GreUpdateSpriteDevLockEnd(v2, v4 & 0x400000);
      }
    }
  }
}
