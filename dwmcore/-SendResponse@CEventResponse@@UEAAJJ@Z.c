/*
 * XREFs of ?SendResponse@CEventResponse@@UEAAJJ@Z @ 0x1801EF930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

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
