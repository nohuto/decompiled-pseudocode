_BOOL8 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rax
  ULONG64 v6; // rcx
  BOOL v7; // ebx
  int Prop; // eax
  _DWORD *v9; // rdx

  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    Prop = GetProp(v5, (unsigned __int16)gatomTouchFlags, 1u);
    v7 = (Prop & 0x10000) != 0;
    if ( (Prop & 0x10000) != 0 && a2 )
    {
      v6 = MmUserProbeAddress;
      v9 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v9 = (_DWORD *)MmUserProbeAddress;
      *v9 = *v9;
      *a2 = Prop & 0xFFFEFFFF;
    }
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
