/*
 * XREFs of EngEqualRgn @ 0x1C0197710
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0019C74 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C0019E80 (GreGetObjectOwner.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005173C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C00AD744 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

BOOL __stdcall EngEqualRgn(HANDLE hrgn1, HANDLE hrgn2)
{
  int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  if ( (unsigned int)GreGetObjectOwner((__int64)hrgn1, 4) || (unsigned int)GreGetObjectOwner((__int64)hrgn2, 4) )
  {
    v4 = 0;
  }
  else
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, (HRGN)hrgn1, 1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, (HRGN)hrgn2, 1, 0);
    v4 = GreEqualRgn((struct RGNOBJAPI *)v7, (struct RGNOBJAPI *)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  }
  if ( v8 )
    *(_DWORD *)(v8 + 328) &= ~0x10u;
  return v4;
}
