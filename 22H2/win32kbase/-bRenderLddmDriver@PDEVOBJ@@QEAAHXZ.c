/*
 * XREFs of ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00124D0
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0012198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0141930 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C0017070 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 */

__int64 __fastcall PDEVOBJ::bRenderLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  int v3; // eax
  bool v4; // zf
  __int64 v6; // r8

  v1 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
  {
    LODWORD(v2) = 0;
    v3 = *(_DWORD *)(v1 + 160) & 0x800000;
    if ( (*(_DWORD *)(v1 + 160) & 0x4000000) == 0 )
    {
      v4 = v3 == 0;
LABEL_4:
      LOBYTE(v2) = !v4;
      return (unsigned int)v2;
    }
    v4 = v3 == 0;
    if ( v3 )
      goto LABEL_4;
    if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() )
    {
      v4 = *(_QWORD *)(v6 + 280) == v2;
      goto LABEL_4;
    }
  }
  return 0LL;
}
