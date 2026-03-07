void *__fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::GetWaitableVSyncEvent(BLTQUEUE_EMULATED_VSYNC_SOURCE *this)
{
  return (void *)*((_QWORD *)this + 2);
}
