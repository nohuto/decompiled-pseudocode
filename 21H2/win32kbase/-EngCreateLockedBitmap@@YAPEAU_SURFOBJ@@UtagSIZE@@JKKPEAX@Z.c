/*
 * XREFs of ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00DA790
 * Callers:
 *     <none>
 * Callees:
 *     EngLockSurface @ 0x1C0020170 (EngLockSurface.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00DA580 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

struct _SURFOBJ *__fastcall EngCreateLockedBitmap(struct tagSIZE a1, unsigned int a2, int a3, int a4, void *a5)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  SURFOBJ *v7; // rbx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  CreateDriverSurfMem((__int64)v9, 0, 0LL, *(_QWORD *)&a1, a2, a3, a4, a5);
  v7 = 0LL;
  if ( v9[0] )
    v7 = EngLockSurface(*(HSURF *)(v9[0] + 32LL));
  SURFMEM::~SURFMEM((SURFMEM *)v9, v5, v6);
  return v7;
}
