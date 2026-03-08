/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0182DE8
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  if ( *(_QWORD *)this && *((_BYTE *)this + 16) )
  {
    *(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u;
    *((_BYTE *)this + 16) = 0;
  }
  XDCOBJ::vUnlockNoNullSet(this);
  *(_QWORD *)this = 0LL;
}
