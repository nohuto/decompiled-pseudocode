/*
 * XREFs of NtUserIsTouchWindow @ 0x1C01F8A40
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rax
  ULONG64 v6; // rcx
  int v7; // ebx
  int Prop; // eax
  _DWORD *v9; // rdx

  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  if ( v5 && (v7 = 1, Prop = GetProp(v5, (unsigned __int16)gatomTouchFlags, 1u), (Prop & 0x10000) != 0) )
  {
    if ( a2 )
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
