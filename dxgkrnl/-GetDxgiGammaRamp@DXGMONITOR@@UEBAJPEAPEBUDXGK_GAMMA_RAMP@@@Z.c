int __fastcall DXGMONITOR::GetDxgiGammaRamp(DXGMONITOR *this, const struct DXGK_GAMMA_RAMP **a2)
{
  return ADAPTER_DISPLAY::GetDxgiGammaRamp(
           *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 19) + 24LL),
           *((_DWORD *)this + 41),
           a2);
}
