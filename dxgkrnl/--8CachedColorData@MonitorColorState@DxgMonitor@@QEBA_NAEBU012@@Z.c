bool __fastcall DxgMonitor::MonitorColorState::CachedColorData::operator==(_BYTE *a1, _BYTE *a2)
{
  return RtlCompareMemory(a1, a2, 0x14uLL) == 20
      && RtlCompareMemory(a1 + 20, a2 + 20, 8uLL) == 8
      && RtlCompareMemory(a1 + 28, a2 + 28, 0x20uLL) == 32
      && a1[60] == a2[60];
}
