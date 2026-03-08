/*
 * XREFs of ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C000A360
 * Callers:
 *     <none>
 * Callees:
 *     EngLockSurface @ 0x1C0044C20 (EngLockSurface.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005AD80 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

struct _SURFOBJ *__fastcall EngCreateLockedBitmap(struct tagSIZE a1, int a2, int a3, int a4, void *a5)
{
  SURFOBJ *v5; // rbx
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))CreateDriverSurfMem)(
    v7,
    0LL,
    0LL,
    a1,
    a2,
    a3,
    a4,
    a5);
  v5 = 0LL;
  if ( v7[0] )
    v5 = EngLockSurface(*(HSURF *)(v7[0] + 32LL));
  SURFMEM::~SURFMEM((SURFMEM *)v7);
  return v5;
}
