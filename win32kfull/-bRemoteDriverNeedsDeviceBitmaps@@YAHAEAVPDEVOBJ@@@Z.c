/*
 * XREFs of ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007CB28
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C007C5E0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0128D34 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bRemoteDriverNeedsDeviceBitmaps(struct PDEVOBJ *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = Gre::Base::Globals(a1);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( *(_QWORD *)(v3 + 3416)
    && (*(_DWORD *)(v3 + 2096) & 0x400) != 0
    && (!*((_QWORD *)v2 + 38) || !(unsigned int)UserIsRemoteAndNotDisconnectConnection()) )
  {
    return 1;
  }
  return v4;
}
