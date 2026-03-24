/*
 * XREFs of EngCreateLockedDeviceBitmap @ 0x1C00CB5B0
 * Callers:
 *     <none>
 * Callees:
 *     EngLockSurface @ 0x1C002CB30 (EngLockSurface.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00306C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CB33C (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

SURFOBJ *__fastcall EngCreateLockedDeviceBitmap(__int64 a1, __int64 a2, int a3)
{
  SURFOBJ *v3; // rbx
  int v4; // edx
  int v5; // r8d
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0LL;
  CreateDriverSurfMem((__int64)v7, 3, a1, a2, 0, a3, 0, (void *)0xDEADBEEFLL);
  if ( v7[0] )
    v3 = EngLockSurface(*(HSURF *)(v7[0] + 32LL));
  SURFMEM::~SURFMEM((SURFMEM *)v7, v4, v5);
  return v3;
}
