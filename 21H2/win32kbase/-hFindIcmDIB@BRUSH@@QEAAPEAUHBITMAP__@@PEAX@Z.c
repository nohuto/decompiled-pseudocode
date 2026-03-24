/*
 * XREFs of ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C013BCE0
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0066F20 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C013BBF0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     <none>
 */

HBITMAP __fastcall BRUSH::hFindIcmDIB(BRUSH *this, void *a2)
{
  __int64 i; // rbx

  if ( !a2 )
    return (HBITMAP)*((_QWORD *)this + 3);
  KeAcquireGuardedMutex(ghfmMemory);
  for ( i = *((_QWORD *)this + 11); ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
    {
      KeReleaseGuardedMutex(ghfmMemory);
      return 0LL;
    }
    if ( *(void **)i == a2 )
      break;
  }
  KeReleaseGuardedMutex(ghfmMemory);
  return *(HBITMAP *)(i + 8);
}
