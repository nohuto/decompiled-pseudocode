__int64 __fastcall CoreWindowProp::RemoveComponentInternal(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // edi
  struct CoreWindowProp::Component *Component; // rax
  CoreWindowProp *v6; // rbx
  struct CoreWindowProp::Component *v8; // [rsp+40h] [rbp+18h] BYREF
  CoreWindowProp *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = -1073741275;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, (__int64 *)&v9) )
  {
    v8 = 0LL;
    Component = CoreWindowProp::FindComponent(a1, a2, &v8);
    if ( Component )
    {
      v6 = v9;
      CoreWindowProp::UnlinkAndDestroyComponent(v9, Component, v8);
      v4 = 0;
      if ( !*((_DWORD *)v6 + 12) )
        CoreWindowProp::ChangeRole((__int64)a1, 2, 0);
    }
  }
  return v4;
}
