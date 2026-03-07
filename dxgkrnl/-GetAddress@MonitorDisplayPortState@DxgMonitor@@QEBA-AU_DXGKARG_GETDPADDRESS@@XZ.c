__int64 __fastcall DxgMonitor::MonitorDisplayPortState::GetAddress(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_QWORD *)(a1 + 28);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 12);
  *(_QWORD *)(a2 + 16) = v3;
  *(_DWORD *)(a2 + 24) = v2;
  return a2;
}
