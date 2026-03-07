struct tagWND *__fastcall CoreWindowProp::GetNextComponentWindow(const struct tagWND *a1, const struct tagWND *a2)
{
  __int64 v3; // rbx
  const struct tagWND **v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  if ( !CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v6) )
    return 0LL;
  v4 = *(const struct tagWND ***)(v6 + 40);
  if ( a2 )
  {
    while ( v4 )
    {
      if ( a2 == v4[1] )
      {
        if ( *v4 )
          return (struct tagWND *)*((_QWORD *)*v4 + 1);
        return (struct tagWND *)v3;
      }
      v4 = (const struct tagWND **)*v4;
    }
    return 0LL;
  }
  if ( v4 )
    return v4[1];
  return (struct tagWND *)v3;
}
