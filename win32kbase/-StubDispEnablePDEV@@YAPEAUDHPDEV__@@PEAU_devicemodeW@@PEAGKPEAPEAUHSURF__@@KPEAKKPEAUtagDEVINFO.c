/*
 * XREFs of ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C009E9B0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C002AE00 (EngFreeMem.c)
 *     EngCreatePalette @ 0x1C009EAD0 (EngCreatePalette.c)
 *     EngAllocMem @ 0x1C009EBD0 (EngAllocMem.c)
 *     ?bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z @ 0x1C009EE28 (-bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

struct DHPDEV__ *__fastcall StubDispEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int Size,
        struct tagDEVINFO *a8)
{
  size_t v9; // rsi
  _DWORD *v10; // rdi
  size_t v11; // r8
  HPALETTE Palette; // rax
  struct _GDIINFO Src; // [rsp+30h] [rbp-148h] BYREF

  v9 = 320LL;
  memset(&Src, 0, sizeof(Src));
  v10 = 0LL;
  if ( bInitGdiInfo(a1, &Src) )
  {
    v10 = EngAllocMem(1u, 0x20u, 0x62664444u);
    if ( v10 )
    {
      v11 = 312LL;
      if ( Size <= 0x138 )
        v11 = Size;
      memmove(a8, &unk_1C0287D20, v11);
      if ( a5 < 0x140 )
        v9 = a5;
      memmove(a6, &Src, v9);
      v10[4] = Src.ulHorzRes;
      v10[5] = Src.ulVertRes;
      Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
      *((_QWORD *)a8 + 37) = Palette;
      *((_QWORD *)v10 + 3) = Palette;
      if ( !*((_QWORD *)a8 + 37) )
      {
        EngFreeMem(v10);
        return 0LL;
      }
    }
  }
  return (struct DHPDEV__ *)v10;
}
