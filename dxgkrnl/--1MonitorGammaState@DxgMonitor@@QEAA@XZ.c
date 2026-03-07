void __fastcall DxgMonitor::MonitorGammaState::~MonitorGammaState(ReferenceCounted **this)
{
  auto_rc<DXGK_GAMMA_RAMP>::reset(this + 16, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 10));
}
