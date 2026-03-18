/*
 * XREFs of EngDeleteRgn @ 0x1C008A130
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C008A354 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C008A450 (GreGetObjectOwner.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008AFB0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

void __stdcall EngDeleteRgn(HANDLE hrgn)
{
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+70h] [rbp+8h] BYREF

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
