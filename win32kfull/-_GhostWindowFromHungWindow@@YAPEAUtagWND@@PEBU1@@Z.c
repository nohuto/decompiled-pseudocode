struct tagWND *__fastcall _GhostWindowFromHungWindow(const struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 Prop; // rax
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v7; // rax

  v2 = 0LL;
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    if ( Prop )
    {
      v5 = Prop == -1;
    }
    else
    {
      Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
      v5 = Prop == 0;
    }
    if ( !v5 )
    {
      LOBYTE(v4) = 1;
      v7 = HMValidateHandleNoSecure(Prop, v4);
      v2 = v7;
      if ( v7 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v7) )
          return 0LL;
      }
    }
  }
  return (struct tagWND *)v2;
}
