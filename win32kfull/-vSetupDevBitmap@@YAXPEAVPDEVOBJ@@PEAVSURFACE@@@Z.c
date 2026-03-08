/*
 * XREFs of ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02B5680
 * Callers:
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C014ED00 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C02B1430 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

void __fastcall vSetupDevBitmap(struct PDEVOBJ *a1, struct SURFACE *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a2 + 28) |= 0x4000u;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2140LL) & 0x100) == 0 )
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v3, **(HPALETTE **)(*(_QWORD *)a1 + 1776LL));
    *((_QWORD *)a2 + 16) = v3;
  }
}
