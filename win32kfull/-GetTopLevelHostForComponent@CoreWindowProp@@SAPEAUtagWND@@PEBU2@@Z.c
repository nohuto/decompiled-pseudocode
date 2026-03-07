struct tagWND *__fastcall CoreWindowProp::GetTopLevelHostForComponent(const struct tagWND *a1)
{
  const struct tagWND *v1; // rbx
  const struct tagWND *Host; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 80) & 0x1000) != 0 )
    {
      v5 = 0LL;
      if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v5) )
      {
        if ( *(_DWORD *)(v5 + 28) )
        {
          v1 = a1;
          do
          {
            Host = CoreWindowProp::GetHost(v1);
            v1 = Host;
          }
          while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host) );
        }
      }
    }
  }
  return v1;
}
