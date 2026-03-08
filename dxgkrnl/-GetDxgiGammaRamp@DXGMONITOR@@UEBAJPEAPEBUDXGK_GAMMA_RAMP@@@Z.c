/*
 * XREFs of ?GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01D48F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01D491C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

int __fastcall DXGMONITOR::GetDxgiGammaRamp(DXGMONITOR *this, const struct DXGK_GAMMA_RAMP **a2)
{
  return ADAPTER_DISPLAY::GetDxgiGammaRamp(
           *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 19) + 24LL),
           *((_DWORD *)this + 41),
           a2);
}
