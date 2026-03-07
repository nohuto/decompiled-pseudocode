bool __fastcall CRecalcState::IsPendingAndEquivalentMonitorSet(CRecalcState *this, const struct tagWND *a2, __int64 a3)
{
  return ((*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) == 0 || *((_DWORD *)this + 6) == 2)
      && (unsigned int)CMonitorTopology::CompareToCurrent(*((_QWORD *)this + 2), 1LL, a3) == 0;
}
