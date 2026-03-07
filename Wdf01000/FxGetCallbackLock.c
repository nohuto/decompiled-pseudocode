FxCallbackLock *__fastcall FxGetCallbackLock(FxObject *Object)
{
  FxQueryInterfaceParams params; // [rsp+20h] [rbp-18h] BYREF
  IFxHasCallbacks *ihcb; // [rsp+40h] [rbp+8h] BYREF

  params.Object = (void **)&ihcb;
  params.Type = 5379;
  ihcb = 0LL;
  *(_DWORD *)&params.Offset = 0;
  *(&params.Offset + 2) = 0;
  if ( Object->QueryInterface(Object, &params) >= 0 )
    return ihcb->GetCallbackLockPtr(ihcb, 0LL);
  else
    return 0LL;
}
