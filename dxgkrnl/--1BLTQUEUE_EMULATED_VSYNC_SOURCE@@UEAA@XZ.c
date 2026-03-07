void __fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::~BLTQUEUE_EMULATED_VSYNC_SOURCE(BLTQUEUE_EMULATED_VSYNC_SOURCE *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &IBltQueueVSyncSource::`vftable';
}
