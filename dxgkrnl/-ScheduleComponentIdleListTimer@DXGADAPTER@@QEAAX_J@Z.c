void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 3461) )
  {
    *((_BYTE *)this + 3461) = 1;
    KeSetTimer((PKTIMER)((char *)this + 3576), (LARGE_INTEGER)-a2, (PKDPC)((char *)this + 3640));
  }
}
