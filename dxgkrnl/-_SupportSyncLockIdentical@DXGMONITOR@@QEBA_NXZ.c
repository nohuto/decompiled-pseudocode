bool __fastcall DXGMONITOR::_SupportSyncLockIdentical(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 177) & 4) != 0 && (*((_DWORD *)this + 90) & 0x100) != 0;
}
