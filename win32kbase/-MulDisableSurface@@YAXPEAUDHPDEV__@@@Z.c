/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C018B1D0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C018BB00 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C0029640 (bDeleteSurface.c)
 *     EngUnlockSurface @ 0x1C00449E0 (EngUnlockSurface.c)
 *     EngDeleteClip @ 0x1C0197C00 (EngDeleteClip.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EngDeleteClip(*((CLIPOBJ **)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  v3 = *((_QWORD *)a1 + 3);
  if ( v3 )
    bDeleteSurface(v3, v2);
}
