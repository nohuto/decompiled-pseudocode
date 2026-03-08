/*
 * XREFs of ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C018BCA8
 * Callers:
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C018B320 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     <none>
 */

void *__fastcall PDEVOBJ::pRenderAdapter(PDEVOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
  if ( (*(_DWORD *)(v1 + 160) & 0x4000000) != 0 )
    return *(void **)(v1 + 272);
  else
    return *(void **)(v1 + 232);
}
