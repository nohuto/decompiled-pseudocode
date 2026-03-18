/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C016B168
 * Callers:
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z @ 0x1C00DA110 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00D9014 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  bool v2; // zf

  if ( *(_QWORD *)this )
  {
    if ( !*((_BYTE *)this + 48)
      || (*(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u, v2 = *(_QWORD *)this == 0LL, *((_BYTE *)this + 48) = 0, !v2) )
    {
      XDCOBJ::vUnlockFast(this);
    }
  }
  *(_QWORD *)this = 0LL;
}
