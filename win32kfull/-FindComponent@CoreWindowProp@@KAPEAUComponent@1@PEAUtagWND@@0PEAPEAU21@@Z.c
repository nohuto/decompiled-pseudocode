struct CoreWindowProp::Component *__fastcall CoreWindowProp::FindComponent(
        struct tagWND *a1,
        struct tagWND *a2,
        struct CoreWindowProp::Component **a3)
{
  struct CoreWindowProp::Component *v5; // rcx
  struct CoreWindowProp::Component *result; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v7) )
  {
    v5 = 0LL;
    for ( result = *(struct CoreWindowProp::Component **)(v7 + 40);
          result;
          result = *(struct CoreWindowProp::Component **)result )
    {
      if ( a2 == *((struct tagWND **)result + 1) )
      {
        if ( a3 )
          *a3 = v5;
        return result;
      }
      v5 = result;
    }
  }
  return 0LL;
}
