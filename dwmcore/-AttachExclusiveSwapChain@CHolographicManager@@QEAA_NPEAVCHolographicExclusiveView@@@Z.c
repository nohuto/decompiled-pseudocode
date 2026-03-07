bool __fastcall CHolographicManager::AttachExclusiveSwapChain(CHolographicInteropTaskQueue **this, struct IUnknown *a2)
{
  bool result; // al

  result = 0;
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 240) )
      return CHolographicInteropTaskQueue::PostMessageW(this[6], 0xEu, a2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
