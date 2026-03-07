void __fastcall CVidSchSuspendResume::Resume(ADAPTER_RENDER **this)
{
  if ( *(_DWORD *)this )
  {
    ADAPTER_RENDER::ResumeSchedulerForVidPnSource(this[1], *(_DWORD *)this);
    *(_DWORD *)this = 0;
  }
}
