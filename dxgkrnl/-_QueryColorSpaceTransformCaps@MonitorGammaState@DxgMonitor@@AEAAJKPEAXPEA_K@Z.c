__int64 __fastcall DxgMonitor::MonitorGammaState::_QueryColorSpaceTransformCaps(
        DxgMonitor::MonitorGammaState *this,
        unsigned int a2,
        _OWORD *a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  __int128 v9; // xmm0

  if ( !a4 )
    WdLogSingleEntry0(1LL);
  *a4 = 0LL;
  if ( !DxgMonitor::MonitorGammaState::_IsTargetMatrix_3x4Supported(this) )
    return 3221225659LL;
  if ( a2 < 0x40 )
    return 3221225507LL;
  v9 = *((_OWORD *)this + 1);
  *a4 = 64LL;
  result = 0LL;
  *a3 = v9;
  a3[1] = *((_OWORD *)this + 2);
  a3[2] = *((_OWORD *)this + 3);
  a3[3] = *((_OWORD *)this + 4);
  return result;
}
