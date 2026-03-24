/*
 * XREFs of EngCreateLockedBitmap @ 0x1C00CB540
 * Callers:
 *     <none>
 * Callees:
 *     EngLockSurface @ 0x1C002CB30 (EngLockSurface.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00306C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CB33C (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

SURFOBJ *__fastcall EngCreateLockedBitmap(__int64 a1, unsigned int a2, int a3, int a4, void *a5)
{
  int v5; // edx
  int v6; // r8d
  SURFOBJ *v7; // rbx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  CreateDriverSurfMem((__int64)v9, 0, 0LL, a1, a2, a3, a4, a5);
  v7 = 0LL;
  if ( v9[0] )
    v7 = EngLockSurface(*(HSURF *)(v9[0] + 32LL));
  SURFMEM::~SURFMEM((SURFMEM *)v9, v5, v6);
  return v7;
}
