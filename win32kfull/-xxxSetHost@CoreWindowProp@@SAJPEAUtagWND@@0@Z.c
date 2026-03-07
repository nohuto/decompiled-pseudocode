__int64 __fastcall CoreWindowProp::xxxSetHost(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // rsi
  struct tagWND *v5; // rcx
  int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v8) && (v4 = v8, *(_DWORD *)(v8 + 28)) )
  {
    v5 = *(struct tagWND **)(v8 + 32);
    if ( !v5 || (v6 = CoreWindowProp::RemoveComponent(v5, a1), v6 >= 0) )
    {
      v6 = CoreWindowProp::ChangeRole((__int64)a2, 2, 1u);
      if ( v6 >= 0 )
      {
        v6 = CoreWindowProp::AddComponent(a2, a1);
        if ( v6 >= 0 )
        {
          *(_QWORD *)(v4 + 32) = a2;
          v6 = 0;
          if ( IsPwndComponentWebview(a1) )
            xxxEstablishWebviewHostComponentRelationship(a1, a2);
        }
      }
    }
  }
  else
  {
    UserSetLastError(5);
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
