void __fastcall MonitorEventDeferral::~MonitorEventDeferral(MonitorEventDeferral *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &MonitorEventDeferral::`vftable';
  if ( !v1 )
  {
    if ( *((_DWORD *)this + 28) )
      MonitorEventDeferral::FlushEventsWithContext(this, 0LL);
  }
}
