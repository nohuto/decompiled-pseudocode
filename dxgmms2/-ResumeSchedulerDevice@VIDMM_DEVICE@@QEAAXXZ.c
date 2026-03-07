void __fastcall VIDMM_DEVICE::ResumeSchedulerDevice(VIDMM_DEVICE *this)
{
  _KEVENT *v1; // rcx

  v1 = (_KEVENT *)*((_QWORD *)this + 4);
  if ( v1 )
    VidSchSuspendResumeDevice(v1, 0, 0, 0);
}
