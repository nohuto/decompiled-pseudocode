void __fastcall MonitorEventDeferral::FlushEventsWithContext(
        MonitorEventDeferral *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 i; // rdi

  if ( *((_QWORD *)this + 1) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
      (***((void (__fastcall ****)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))this
         + 1))(
        *((_QWORD *)this + 1),
        *((unsigned int *)this + 6 * i + 4),
        *((unsigned int *)this + 6 * i + 5),
        *((_QWORD *)this + 3 * i + 3),
        *((_DWORD *)this + 6 * i + 8),
        a2);
    *((_DWORD *)this + 28) = 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
  }
}
