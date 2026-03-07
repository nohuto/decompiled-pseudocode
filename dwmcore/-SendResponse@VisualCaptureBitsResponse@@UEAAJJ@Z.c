__int64 __fastcall VisualCaptureBitsResponse::SendResponse(HANDLE *this)
{
  if ( !*((_BYTE *)this + 1704) )
  {
    SetEvent(this[212]);
    *((_BYTE *)this + 1704) = 1;
  }
  *((_BYTE *)this + 33) = 1;
  return 0LL;
}
