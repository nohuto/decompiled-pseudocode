/*
 * XREFs of ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x180094994
 * Callers:
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x1800224AC (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x18002B310 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180033120 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(struct CWindowData *a1)
{
  int v1; // eax
  int v2; // edx
  float result; // xmm0_4

  v1 = *((_DWORD *)a1 + 80);
  v2 = *((_DWORD *)a1 + 81);
  result = FLOAT_1_0;
  if ( v1 != v2 )
    return (float)v1 / (float)v2;
  return result;
}
