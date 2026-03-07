void __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::~BLTQUEUE_REMOTE_VSYNC_SOURCE(BLTQUEUE_REMOTE_VSYNC_SOURCE *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 104) == 0;
  *(_QWORD *)this = &BLTQUEUE_REMOTE_VSYNC_SOURCE::`vftable';
  if ( !v1 )
    BLTQUEUE_REMOTE_VSYNC_SOURCE::StopVSync(this);
  *(_QWORD *)this = &IBltQueueVSyncSource::`vftable';
}
