void __fastcall CContentResourceState::CancelPendingUpdates(CContentResourceState *this)
{
  *((_BYTE *)this + 64) &= ~2u;
  *((_BYTE *)this + 32) &= 0xF3u;
}
