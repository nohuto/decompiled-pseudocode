/*
 * XREFs of ?bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z @ 0x1C009EE28
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C009E9B0 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall bInitGdiInfo(struct _devicemodeW *a1, struct _GDIINFO *a2)
{
  __int64 v4; // rcx
  __int16 *v5; // rdx
  ULONG v6; // eax
  ULONG v7; // eax
  ULONG dmLogPixels; // eax
  __int64 result; // rax

  memset(a2, 0, sizeof(struct _GDIINFO));
  if ( !*(_QWORD *)&a1->dmPelsWidth && !a1->dmBitsPerPel && !a1->dmDisplayFrequency )
  {
    v4 = 0LL;
LABEL_8:
    a2->ulNumColors = -1;
    v6 = *((__int16 *)&unk_1C028B460 + 2 * v4);
    a2->ulPanningHorzRes = v6;
    a2->ulHorzRes = v6;
    v7 = *((__int16 *)&unk_1C028B460 + 2 * v4 + 1);
    a2->ulPanningVertRes = v7;
    a2->ulVertRes = v7;
    dmLogPixels = a1->dmLogPixels;
    a2->ulLogPixelsX = dmLogPixels;
    a2->ulLogPixelsY = dmLogPixels;
    a2->ulDACRed = 8;
    a2->ulDACGreen = 8;
    a2->ulDACBlue = 8;
    a2->ulAspectX = 36;
    a2->ulAspectY = 36;
    a2->ulVersion = 0x4000;
    a2->ulTechnology = 1;
    a2->denStyleStep = 3;
    result = 1LL;
    a2->ulHTPatternSize = 3;
    a2->cBitsPixel = 32;
    a2->cPlanes = 1;
    a2->ulVRefresh = 60;
    a2->ulBltAlignment = 1;
    a2->flTextCaps = 0x2000;
    a2->ulAspectXY = 51;
    a2->xStyleStep = 1;
    a2->yStyleStep = 1;
    a2->ciDevice.Red.x = 6700;
    *(_QWORD *)&a2->ciDevice.Red.y = 3300LL;
    a2->ciDevice.Green.x = 2100;
    *(_QWORD *)&a2->ciDevice.Green.y = 7100LL;
    a2->ciDevice.Blue.x = 1400;
    *(_QWORD *)&a2->ciDevice.Blue.y = 800LL;
    a2->ciDevice.AlignmentWhite.x = 3127;
    *(_QWORD *)&a2->ciDevice.AlignmentWhite.y = 3290LL;
    a2->ciDevice.RedGamma = 20000;
    a2->ciDevice.GreenGamma = 20000;
    a2->ciDevice.BlueGamma = 20000;
    a2->ulPrimaryOrder = 4;
    a2->flHTFlags = 4;
    a2->ulHTOutputFormat = 7;
    return result;
  }
  v4 = 0LL;
  v5 = (__int16 *)&unk_1C028B462;
  do
  {
    if ( a1->dmPelsWidth == *(v5 - 1)
      && a1->dmPelsHeight == *v5
      && a1->dmBitsPerPel == 32
      && a1->dmDisplayFrequency == 60 )
    {
      break;
    }
    v4 = (unsigned int)(v4 + 1);
    v5 += 2;
  }
  while ( (unsigned int)v4 < 0x12 );
  if ( (_DWORD)v4 != 18 )
    goto LABEL_8;
  return 0LL;
}
