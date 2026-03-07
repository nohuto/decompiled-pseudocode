__int64 __fastcall CTokenManager::SignalStartNowEvent(HANDLE *this)
{
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  PreviousState = 0;
  ZwSetEvent(this[9], &PreviousState);
  return (unsigned int)PreviousState;
}
