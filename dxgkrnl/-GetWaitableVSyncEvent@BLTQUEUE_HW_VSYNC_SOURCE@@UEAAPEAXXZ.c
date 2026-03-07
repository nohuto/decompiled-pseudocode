void *__fastcall BLTQUEUE_HW_VSYNC_SOURCE::GetWaitableVSyncEvent(BLTQUEUE_HW_VSYNC_SOURCE *this)
{
  return (void *)*((_QWORD *)this + 10);
}
