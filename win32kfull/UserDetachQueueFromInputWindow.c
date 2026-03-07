void __fastcall UserDetachQueueFromInputWindow(int a1, struct IInputQueue *a2)
{
  __int64 v4; // rcx
  CInputQueueProp *v5; // rbx
  char v6; // [rsp+40h] [rbp+18h] BYREF
  CInputQueueProp *v7; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v4) )
    {
      v7 = 0LL;
      if ( CWindowProp::GetProp<CInputQueueProp>(v4, (__int64 *)&v7) )
      {
        v5 = v7;
        CInputQueueProp::DetachInputQueue(v7, a2);
        if ( !*((_DWORD *)v5 + 8) )
          CWindowProp::RemoveAndDeleteProp(v5);
      }
    }
  }
  if ( !v6 )
    UserSessionSwitchLeaveCrit(v4);
}
