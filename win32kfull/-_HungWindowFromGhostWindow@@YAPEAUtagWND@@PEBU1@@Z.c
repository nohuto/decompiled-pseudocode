struct tagWND *__fastcall _HungWindowFromGhostWindow(const struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 Prop; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = 0LL;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
    if ( Prop || (Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u)) != 0 )
    {
      LOBYTE(v5) = 1;
      v6 = HMValidateHandleNoSecure(Prop, v5);
      v2 = v6;
      if ( v6 && (unsigned int)IsWindowBeingDestroyed(v6) )
        return 0LL;
    }
  }
  return (struct tagWND *)v2;
}
