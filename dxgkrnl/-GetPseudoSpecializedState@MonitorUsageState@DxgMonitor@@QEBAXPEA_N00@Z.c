void __fastcall DxgMonitor::MonitorUsageState::GetPseudoSpecializedState(
        DxgMonitor::MonitorUsageState *this,
        bool *a2,
        bool *a3,
        bool *a4)
{
  int v7; // eax
  int v8; // ecx
  bool v9; // al

  *a4 = *((_BYTE *)this + 21);
  *a2 = 0;
  v7 = MonitorAreSpecializedDisplaysSupported();
  v8 = *((_DWORD *)this + 4);
  v9 = v7 != 0;
  *a3 = v9;
  if ( !v8 || *((_BYTE *)this + 21) && v8 == 2 )
    *a2 = v9;
}
