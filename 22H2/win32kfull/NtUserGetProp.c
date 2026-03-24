/*
 * XREFs of NtUserGetProp @ 0x1C00D5830
 * Callers:
 *     <none>
 * Callees:
 *     GetSharedPropForFilteredProcesses @ 0x1C00D59A0 (GetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetProp(HWND a1, unsigned __int16 a2)
{
  __int64 v2; // r14
  __int64 v4; // rbx
  struct tagWND *v5; // rsi
  __int64 Prop; // rdi
  __int64 v7; // rcx
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  v2 = a2;
  v4 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v10, a1, 1, 0, 0, 0);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v10) )
  {
    v5 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v10);
    Prop = RealGetProp(*((_QWORD *)v5 + 18), (unsigned int)v2, 0LL);
    if ( !Prop && (*((_DWORD *)v5 + 82) & 0x40) != 0 )
    {
      if ( (_WORD)v2 == 0xA914 )
        goto LABEL_4;
      v9 = *((_QWORD *)v5 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v9 + 424), &ApcState);
      Prop = GetSharedPropForFilteredProcesses(v5, v2);
      KeUnstackDetachProcess(&ApcState);
    }
    v4 = Prop;
  }
LABEL_4:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v10);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
