void __fastcall DXGMONITOR::_AddReference(DXGMONITOR *this, void *a2)
{
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)((char *)this + 280), a2, File, 1u, 0x20u) < 0 )
    WdLogSingleEntry0(1LL);
}
