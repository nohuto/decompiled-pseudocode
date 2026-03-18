/*
 * XREFs of ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005E88C
 * Callers:
 *     EngCreateDeviceBitmap @ 0x1C000F550 (EngCreateDeviceBitmap.c)
 *     EngCreateBitmap @ 0x1C005E810 (EngCreateBitmap.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x1C005E850 (EngCreateRedirectionDeviceBitmap.c)
 *     EngCreateDeviceSurface @ 0x1C0062240 (EngCreateDeviceSurface.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005E8F8 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

__int64 __fastcall hbmCreateDriverSurface(
        unsigned int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))CreateDriverSurfMem)(
    v9,
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
  v7 = 0LL;
  if ( v9[0] )
    v7 = *(_QWORD *)(v9[0] + 32LL);
  SURFMEM::~SURFMEM((SURFMEM *)v9);
  return v7;
}
