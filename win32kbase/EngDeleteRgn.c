/*
 * XREFs of EngDeleteRgn @ 0x1C0019A50
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0019970 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0019C74 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C0019E80 (GreGetObjectOwner.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005173C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

void __stdcall EngDeleteRgn(HANDLE hrgn)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  EngModeState::EngModeState((EngModeState *)&v3);
  if ( !(unsigned int)GreGetObjectOwner(hrgn, 4LL) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v2, (HRGN)hrgn, 1, 0);
    if ( v2[0] )
      RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v2);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v2);
  }
  if ( v3 )
    *(_DWORD *)(v3 + 328) &= ~0x10u;
}
