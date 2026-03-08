/*
 * XREFs of EngCreatePalette @ 0x1C009EAD0
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C009E9B0 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0050600 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 */

HPALETTE __stdcall EngCreatePalette(
        ULONG iMode,
        ULONG cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  HPALETTE v6; // rbx
  ULONG v7; // r11d
  ULONG v8; // ecx
  unsigned int *v10; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp-10h]

  v6 = 0LL;
  v7 = iMode & 0x8000;
  v11 = 0;
  v10 = 0LL;
  v8 = iMode & 0xFFFF7FFF;
  if ( v8 == 2 && flGreen == 65280 && (flRed == 255 && flBlue == 16711680 || flRed == 16711680 && flBlue == 255) )
  {
    v8 = 4;
    if ( flRed != 255 )
      v8 = 8;
  }
  if ( (unsigned int)PALMEMOBJ::bCreatePalette(
                       (PALMEMOBJ *)&v10,
                       v8,
                       cColors,
                       pulColors,
                       flRed,
                       flGreen,
                       flBlue,
                       v7 != 0 ? 50332160 : 16777728,
                       v7 == 0) )
  {
    v11 = 1;
    v6 = *(HPALETTE *)v10;
  }
  PALMEMOBJ::~PALMEMOBJ(&v10);
  return v6;
}
