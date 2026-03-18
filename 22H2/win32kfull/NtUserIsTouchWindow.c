/*
 * XREFs of NtUserIsTouchWindow @ 0x1C01D5D60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

_BOOL8 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rdx
  ULONG64 v7; // rcx
  _BOOL8 v8; // r8
  __int64 v9; // r9
  BOOL v10; // ebx
  int Prop; // eax

  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    Prop = GetProp(v5, (unsigned __int16)gatomTouchFlags, 1LL, v9);
    v8 = (Prop & 0x10000) != 0;
    v10 = (Prop & 0x10000) != 0;
    if ( (Prop & 0x10000) != 0 && a2 )
    {
      v7 = MmUserProbeAddress;
      v6 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      *v6 = *v6;
      *a2 = Prop & 0xFFFEFFFF;
    }
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
