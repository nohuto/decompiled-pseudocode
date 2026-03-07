__int64 __fastcall CTokenManager::AddTokenToQueueAndSignalTokenEvent(
        HANDLE *this,
        struct CompositionSurfaceObject **a2)
{
  int v3; // ebx
  LONG PreviousState; // [rsp+40h] [rbp+18h] BYREF

  v3 = CTokenManager::AddTokenToQueue((CTokenManager *)this, a2);
  if ( v3 >= 0 )
  {
    PreviousState = 0;
    ZwSetEvent(this[8], &PreviousState);
  }
  return (unsigned int)v3;
}
