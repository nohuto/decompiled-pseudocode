__int64 __fastcall DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(
        DxgMonitor::MonitorColorState *this)
{
  int v2; // edx
  int v3; // eax
  int v5; // ecx
  float v6; // xmm2_4

  if ( !(80 * *((_DWORD *)this + 98)) )
    WdLogSingleEntry0(1LL);
  v2 = *((_DWORD *)this + 97);
  if ( !v2 )
  {
    v3 = *((_DWORD *)this + 80);
    *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
    *((_DWORD *)this + 83) = v3;
    return 0LL;
  }
  v5 = 80 * *((_DWORD *)this + 98);
  if ( v5 )
  {
    v6 = (float)v2 / (float)v5;
    *((_DWORD *)this + 82) = (int)(float)((float)((float)((float)*((int *)this + 79) / 10000.0) / v6) * 10000.0);
    *((_DWORD *)this + 83) = (int)(float)((float)((float)((float)*((int *)this + 80) / 10000.0) / v6) * 10000.0);
    *((_DWORD *)this + 81) = (int)(float)((float)((float)((float)*((int *)this + 78) / 10000.0) / v6) * 10000.0);
    return 0LL;
  }
  return 3221225473LL;
}
