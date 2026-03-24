/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003B0A8
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C000CA70 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013D1F0 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C014856C (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C01489D0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0148B90 (NtGdiGetGammaRampCapability.c)
 *     GreIntersectVisRect @ 0x1C014BF40 (GreIntersectVisRect.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003B0DC (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E1B4 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  if ( *((_QWORD *)this + 4) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
  PopThreadGuardedObject((_QWORD *)this + 6);
}
