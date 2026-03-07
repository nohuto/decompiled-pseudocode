__int64 __fastcall CEventResponse::SendResponse(HANDLE *this)
{
  if ( !*((_BYTE *)this + 48) )
  {
    SetEvent(this[5]);
    *((_BYTE *)this + 48) = 1;
  }
  *((_BYTE *)this + 33) = 1;
  return 0LL;
}
