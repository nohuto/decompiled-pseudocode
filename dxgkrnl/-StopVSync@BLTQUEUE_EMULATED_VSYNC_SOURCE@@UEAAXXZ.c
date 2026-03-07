void __fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::StopVSync(BLTQUEUE_EMULATED_VSYNC_SOURCE *this)
{
  ExCancelTimer(*((_QWORD *)this + 2), 0LL);
  KeFlushQueuedDpcs();
}
